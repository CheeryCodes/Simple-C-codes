#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif
bool my_is_sort(integer_array* param_1)
{


    int size = param_1->size;
    int* array = param_1->array;
    
    if (size <= 1) {
        return true; // An array with 0 or 1 element is always considered sorted
    }
    
    bool ascending = true;
    bool descending = true;
    
    // Check if array is sorted in ascending order
    for (int i = 1; i < size; i++) {
        if (array[i] < array[i - 1]) {
            ascending = false;
            break;
        }
    }
    
    // Check if array is sorted in descending order
    for (int i = 1; i < size; i++) {
        if (array[i] > array[i - 1]) {
            descending = false;
            break;
        }
    }
    
    // Return true if either ascending or descending order is detected
    return ascending || descending;
}
