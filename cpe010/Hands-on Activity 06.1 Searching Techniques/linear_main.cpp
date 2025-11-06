#include <iostream>
#include "linear.h"

int main(){

    
    int arr[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 18;

    int array_comparisons = 0;
    for(int i = 0; i < size; i++){
        array_comparisons++;
        if(arr[i] == key){
            break;
        }
    }

    linkedlist<int> l;
    for(int i = 0; i < size; i++){
        l.insert_at_the_back(arr[i]);
    }
    int list_comparisons = l.sequential_search(key);

    std::cout << "Array comparisons: " << array_comparisons << std::endl;
    std::cout << "Linked list comparisons: " << list_comparisons << std::endl;

    return 0;
}