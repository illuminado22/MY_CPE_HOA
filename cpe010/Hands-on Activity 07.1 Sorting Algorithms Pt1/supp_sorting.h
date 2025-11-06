#ifndef supp_sorting_h
#define supp_sorting_h
#include <algorithm>

template<typename T>
void randomNum(T arr[], size_t arrSize){
    for(int i = 0; i < arrSize; i++){
        arr[i] = (rand() % 5) + 1;
    }
    std::cout<<"Random Numbers generated: ";
    for(int i = 0; i <arrSize; i++){
        std::cout<< arr[i] << " - ";
    }
}

template<typename T>
void bubbleSort(T arr[], size_t arrSize){
    int swap = 0;
    int comparison = 0;

    //will iterate the elements of the array
    for(size_t i = 0; i < arrSize; i++){
        //will compare and swap the value
        for(size_t j = 0; j < arrSize; j++){
            comparison ++;
            if(arr[i] < arr[j]){
                std::swap(arr[i], arr[j]);
                swap++;
            }
        }
    }
    std::cout<<"Swap: " << swap << std::endl;
    std::cout<<"Comparison: " << comparison<<std::endl;
}

template<typename T>
void countVotes(T arr[], size_t arrSize) {
    int count[5] = {0}; 

    for (size_t i = 0; i < arrSize; i++) {
        if (arr[i] >= 1 && arr[i] <= 5)
            count[arr[i] - 1]++;
    }

    std::cout << "Manual Count:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Candidate " << (i + 1) << ": " << count[i] << " votes\n";
    }


    int maxVotes = count[0];
    int winner = 1;
    for (int i = 1; i < 5; i++) {
        if (count[i] > maxVotes) {
            maxVotes = count[i];
            winner = i + 1;
        }
    }

    std::cout << "Winning Candidate: " << winner << " with " << maxVotes << " votes\n";
}

#endif