#ifndef queue_array_h
#define queue_array_h
#define MAX 5
#include <iostream>

template<typename T>
class Queue_arr{
    private:
        T arr[MAX];
        T front;
        T rear;

    public:
        Queue_arr(){
            front = rear = -1;
            std::cout<<"A queue has been created.\n";
        }

        bool isEmpty(){
            return front == rear;
        }

        bool isFull(){
            return rear == MAX - 1;
        }

        void enqueue(T val){
            if(isFull()){
                std::cout<<"The queue is Full.\n";
                return;
            }
            else{
                if(front == -1){
                    front = 0;
                }
                rear++;
                arr[rear] = val;
                std::cout<<"The queue is inserted: "<< val <<std::endl;
            }
        }

        void dequeue(){
            if(isEmpty()){
                std::cout<<"The is empty.\n";
                return;
            }
            std::cout<<"Removed element: " << arr[front] << std::endl;

            if(front == rear){
                front = rear = -1;
                std::cout<<"We cannot dequeue.\n";
                return;
            }
            else{
                front++;
            }
            
        }

        void getFront(){
            if(isEmpty()){
                std::cout<<"The queue is empty.\n";
                return;
            }
            std::cout<<"Front element: " << arr[front] <<std::endl;    
        }

        void getRear(){
            if(isEmpty()){
                std::cout<<"The queue is Empty.\n";
                return;
            }
            std::cout<<"Rear element: " << arr[rear] <<std::endl;  
        }

        void display(){
            if(isEmpty()){
                std::cout<<"The queue is empty.\n";
                return;
            }
            std::cout<< "All the elemets: ";
            
            for(int i=front; i<=rear; i++){
            std::cout<< arr[i] << " ";
            
            }
        }
};


#endif
