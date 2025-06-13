#include <climits>

template <typename T>

class StackUsingArray {
    T *data;
    int nextIndex;
    int capacity;

    public :

    StackUsingArray() {
         data = new T[4];
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
    void push(T element) {
        if(nextIndex == capacity) {
            T *newData = new T[2 * capacity];
            for(int i = 0 ; i < capacity ; i++){
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;
            data = newData;
            /*cout << "Stack is full" << endl;
            return;*/
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    // delete element;

    T pop() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }
};