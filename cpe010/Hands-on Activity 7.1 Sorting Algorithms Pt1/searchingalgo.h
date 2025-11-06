#ifndef searchingalgo_h
#define searchingalgo_h
#include <algorithm>

//Bubble 
template<typename T>
void bubbleSort(T arr[], size_t arrSize){
    for(size_t i = 0; i < arrSize; i++){
    
        for(size_t j = i+1; j < arrSize; j++){
            
            if(arr[j] < arr[i]){
                std::swap(arr[j], arr[i]);
            }
            
        }
    }
}

//Selection
template <typename T> 
int Routine_Smallest(T A[], int K, const int arrSize){
    int position, j;
    T smallestElem = A[K];
    position = K;
    for(int J=K+1; J < arrSize; J++){
        if(A[J] < smallestElem){
        smallestElem = A[J];
        position = J;
        }
        
    }
        return position;

}

//Selection
template <typename T>
void selectionSort(T arr[], const int N){
    int POS, temp, pass=0;

    for(int i = 0; i < N; i++){
    POS = Routine_Smallest(arr, i, N);
    temp = arr[i];
    arr[i] = arr[POS];
    arr[POS] = temp;
    pass++;
    }

}

//Insertion
template <typename T>
void insertionSort(T arr[], const int N){
    int K = 0, J, temp;

    while(K < N){
        temp = arr[K];
        J = K-1;
        while(temp <= arr[J]){
            arr[J+1] = arr[J];
            J--;
        }          
    arr[J+1] = temp;
    K++;
    }
}

#endif