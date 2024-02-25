// Write a function that finds the minimum and the maximum value in an array of N
// integers. Inputs to the function are the array of integers, an integer variable containing
// the length of the array and pointers to integer variables that will contain the minimum
// and the maximum values. The function prototype is:

// void minmax( int array[], int length, int * min, int * max);

// Write a main function that uses this function to find and display the minimum and the
// maximum values of an array of integers.

#include <iostream>
#include <climits>

void minmax(int array[], int length, int* min, int* max) {
    *min = INT_MAX;
    *max = INT_MIN;
    for (int i = 0; i < length; ++i) {
        if (array[i] < *min) {
            *min = array[i];
        }
        if (array[i] > *max) {
            *max = array[i];
        }
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(array) / sizeof(array[0]);
    int min, max;
    minmax(array, length, &min, &max);
    std::cout << "The minimum value in the array is " << min << std::endl;
    std::cout << "The maximum value in the array is " << max << std::endl;
    return 0;
}
