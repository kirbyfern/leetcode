#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;


class DynamicArray {
private:
    int *arr;
    int length;
    int capacity;
public:
    // Constructor initializiation list
    DynamicArray(int capacity) : capacity(capacity), length(0) {
        arr = new int[capacity];
    }

    // return the value of index[i]
    int get(int i) {
        return arr[i];
    }

    // will set the element at index i to n
    void set(int i, int n) {
        arr[i] = n;
    }

    // will push the element n to the end of the array
    void pushback(int n) {
        if (length == capacity) {
            resize();
        }
        arr[length] = n;
        length++;
    }

    int popback() {
        if (length > 0) {
            length--;
        }
        return arr[length];
    }

    void resize() {
        capacity *= 2;
        int * newArr = new int[capacity ];
        for (int i = 0; i < length; i++)  {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }
};
