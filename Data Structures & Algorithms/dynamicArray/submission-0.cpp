#include <memory>
#include <stdexcept>

class DynamicArray {
private:
    int *arr;
    int size;
    int capacity;

public:
    DynamicArray(int capacity) {
        arr = new int[capacity];
        this->capacity = capacity;
        size = 0;
    }

    ~DynamicArray() {
        delete[] arr;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size >= capacity) resize();

        arr[size] = n;
        size++;
    }

    int popback() {
        if (size <= 0) throw std::out_of_range("The array is empty");

        int poppedInt = arr[size - 1];
        arr[size - 1] = 0;
        size--;
        return poppedInt;
    }

    void resize() {
        int newSize = size * 2;
        std::unique_ptr<int[]> newData(new int[capacity * 2]);
        for (int i = 0; i < size; ++i) {
            newData[i] = arr[i];
        }

        delete[] arr;
        arr = newData.release();

        capacity *= 2;
    }

    //number of elements in the array
    int getSize() {
        return size;
    }

    //return capacity
    int getCapacity() {
        return capacity;
    }
};
