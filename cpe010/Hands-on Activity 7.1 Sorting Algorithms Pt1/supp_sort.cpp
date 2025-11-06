#include <iostream>
#include <cstdlib>
#include <ctime>
#include "supp_sorting.h"

const int size = 100;
int arr[size];

void distance(){
    std::cout<<"SORTING ALGORITHM----------------------------------------------------------------SORTING ALGORITHM\n";
}

int main() {
    distance();
    std::cout<< "\n";
    randomNum(arr, size);
    std::cout << "\n\n";

    distance();
    std::cout << "\n\n";

    std::cout << "Bubble sort\n";
    bubbleSort(arr, size);
    std::cout << "Sorted Array using Bubble sort: ";
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " - ";
    }
    std::cout << "End of the Array\n\n";

    countVotes(arr, size);

    distance();
    return 0;
}
