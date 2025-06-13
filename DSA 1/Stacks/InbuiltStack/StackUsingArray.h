#include <climits>

class StackUsingArray {
    int *data;
    int nextIndex;
    int capacity;

    public :

    StackUsingArray() {
         data = new int[4];
         nextIndex = 0;
         capacity = 4;
     }

    // StackUsingArray(int totalSize) {
    //     data = new int[totalSize];
    //     nextIndex = 0;
    //     capacity = totalSize;
    // }

    //return the number of element present in my stack;

    int size() {
        return nextIndex;
    }

    bool isEmpty() {
        /*
        if(nextIndex == 0) {
            return true;
        }
        else{
            return false;
        }
        */

       return nextIndex == 0;
    }

    // insert element
    void push(int element) {
        if(nextIndex == capacity) {
            int *neData = new int[2 * capacity];
            for(int i = 0 ; i < capacity ; i++){
                neData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;
            data = neData;
            /*cout << "Stack is full" << endl;
            return;*/
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    // delete element;

    int pop() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};