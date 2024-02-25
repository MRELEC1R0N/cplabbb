// Write a function to reverse an array of long double types. Call this function from main
// function. Use the concept of dynamic memory allocation for creating the array. Also,
// deallocate the memory suitably.

#include <iostream>

void reverseArray(long double* array, int length) {
    for (int i = 0; i < length / 2; ++i) {
        long double temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}

int main() {
    int length;
    std::cout << "Enter the length of the array: ";
    std::cin >> length;

    long double* array = new long double[length];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < length; ++i) {
        std::cin >> array[i];
    }

    reverseArray(array, length);

    std::cout << "The reversed array is: ";
    for (int i = 0; i < length; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array;

    return 0;
}
