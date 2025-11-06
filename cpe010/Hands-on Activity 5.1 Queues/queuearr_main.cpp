#include <iostream>
#include "queue_array.h"

int main(){
    Queue_arr<int>Q;

    std::cout<<"The queue is empty 1(True) or 0(False): " << Q.isEmpty() << std::endl;

    for(int i=1; i<=5; i++){
        Q.enqueue(i);
    }

    Q.dequeue();
    Q.dequeue();

    Q.getFront();

    Q.getRear();

    Q.display();
    return 0;
}