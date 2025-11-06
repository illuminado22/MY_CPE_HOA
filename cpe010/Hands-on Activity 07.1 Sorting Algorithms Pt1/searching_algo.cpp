#include <iostream>
#include <cstdlib>
#include <ctime>
#include "searchingalgo.h"
const int size = 100;
int arr[size];

int main(){
    

    std::srand(std::time(0));
    for(int i=0; i < size; i++){
        arr[i] = rand() % 200 + 1;
    }

    std::cout<<"Random Unsorted Array: " << std::endl;

    for(int i = 0; i < size; i++){
        std::cout << arr[i] << "->";
    }

    std::cout <<"End of the Unsorted Array" << std::endl;  

    bubbleSort(arr, size);
    std::cout<<"Sorted Array using Bubble Sort: " << std::endl;
    for(int i = 0; i<size; i++){
        std::cout<<arr[i] << "->";
    }
    std::cout << "End of the Sorted Array";

    selectionSort(arr, size);
    std::cout<<"Sorted Array using Selection Sort: " << std::endl;
    for(int i = 0; i<size; i++){
        std::cout<<arr[i] << "->";
    }
    std::cout << "End of the Sorted Array";
    //Insertaion Sort
    insertionSort(arr, size);
    std::cout<< "Sorted Array using Inseration Sort: " << std::endl;
    for(int i = 0; i<size; i++){
        std::cout<<arr[i] << "->";
    }
    std::cout << "End of the Sorted Array";


    return 0;
}

