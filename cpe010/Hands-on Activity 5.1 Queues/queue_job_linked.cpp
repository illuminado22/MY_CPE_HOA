#include <iostream>
#include "queue_job.h"

int main(){
    Queue<int>Q;

    Q.isEmpty();
    Q.enqueue(9);
    Q.enqueue(8);

    Q.dequeue();    
    
    
    return 0;
}