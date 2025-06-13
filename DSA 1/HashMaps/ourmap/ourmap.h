#include <bits/stdc++.h>
#include <string>
using namespace std;

template <typename V>
class MapNode {
    public:
        string key;
        V value;
        MapNode* next;

        MapNode(string key , V value) {
            this -> key = key;
            this -> value = value;
            next = NULL;
        }

        ~MapNode() {
            delete next;
        }
};


template <typename V> 
class ourmap {
    MapNode<V>** buckets;
    // int size ;
    int numBuckets;
    int count;

    public:
    ourmap() {
        int count = 0;
        numBuckets = 5 ;
        buckets = new MapNode<V>*[numBuckets];
        for(int i = 0 ; i < numBuckets ;i++) {
            buckets[i] = NULL;
        }
    }

    ~ourmap() {
        for(int i = 0 ; i < numBuckets ;i++) {
            int deletebuckets[i];
        }
        delete [] buckets;
    }

    int size() {
        return count;
    }

    // to search for the key

    V getValue(string key) {
        int bucketIndex = getBucketIndex(key); // find the index
        MapNode<V>* head = buckets[bucketIndex]; // head of linked list
        while (head != NULL) {
            if (head->key == key) { // if found, returned the value
                return head->value;
            }
            head = head->next;
        }
        return 0; // if not found, returning 0 as default value.
    }
   

    private:
    int getBucketIndex(string key) { // to provide the index using hash function
        int hashCode = 0;
        int currentCoeff = 1;

        // using “abcd” = (‘a’ * p3) + (‘b’ * p2) + (‘c’ * p1) + (‘d’ * p0) as our hash code

        for (int i = key.length() - 1; i >= 0; i--) {
            hashCode += key[i] * currentCoeff;
            hashCode = hashCode % numBuckets;
            currentCoeff *= 37;     // taking p = 37
            currentCoeff = currentCoeff % numBuckets;
        }
        return hashCode % numBuckets;
    } 
    
      

    public:

    double getLoadFactor() {
        return (1.0 * count) / numBuckets;
    }

    void insert(string key , V value) {

        // To get the bucket index, i.e., passing it through the hash function

        int bucketIndex = getBucketIndex(key);

            // to insert the key-value pair in the linked list corresponding to index obtained

        MapNode<V>* head = buckets[bucketIndex];
        while (head != NULL) {
            if (head->key == key) { // If key already present, then we are
                head->value = value; // just updating the value against it
                return;
            }
            head = head->next;
        }
        // otherwise creating a new node and inserting that node before head so making it
        // as the head and marking the bucket index to this node as the new head

        head = buckets[bucketIndex];
        MapNode<V>* node = new MapNode<V>(key, value);
        node->next = head;
        buckets[bucketIndex] = node;
        count++;
    } 

    // to delete the key-value pair
    V remove(string key) {
        int bucketIndex = getBucketIndex(key); // find the index
        MapNode<V>* head = buckets[bucketIndex]; // head node
        MapNode<V>* prev = NULL; // previous pointer
        while (head != NULL) {
            if (head->key == key) {
                if (prev == NULL) {
                    buckets[bucketIndex] = head->next;
                } else {
                    prev->next = head->next; // connecting previous
                    // to the head’s next pointer
                }
                V value = head->value;
                head->next = NULL; // before calling delete over it, in
                // order to avoid complete linked list deletion, we have to assign it’s next to NULL
                delete head;
                count--; // reducing the size
                return value;// return the value stored at deleted node
            }
            prev = head;
            head = head->next;
        }
        return 0; // means that value not found
    }

    void rehash() {
        MapNode<V>** temp = buckets; // To store the old bucket
        buckets = new MapNode<V>*[2 * numBuckets]; // doubling the size
        for (int i = 0; i < 2*numBuckets; i++) {
            buckets[i] = NULL; // initialising each head pointer to NULL
        }
        int oldBucketCount = numBuckets;
        numBuckets *= 2; // updating new size
        count = 0;
        for (int i = 0; i < oldBucketCount; i++) {
            MapNode<V>* head = temp[i];
            while (head != NULL) {
                string key = head->key;
                V value = head->value;
                insert(key, value); // inserting each value of old bucket
                // into the new one
                head = head->next;
            }
        }
        // deleting the old bucket
        for (int i = 0; i < oldBucketCount; i++) {
            MapNode<V>* head = temp[i];
            delete head;
        }
        delete [] temp;
    }

    
};