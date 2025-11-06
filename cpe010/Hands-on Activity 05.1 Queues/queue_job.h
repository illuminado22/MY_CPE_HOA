#ifndef queue_job_h
#define queue_job_h
#include <iostream>

template <typename T>
class Job{
    public:

    T ID;
    T user;
    T pages;

    Job(T jobID, T userName, T num_pages){
        ID = jobID;
        user = userName;
        pages = num_pages;
    }

    void display_employee(){
        std::cout<< "Job ID: " << ID << "Name: " << user << "Number of pages needed: " << pages;
    }

};

template <typename T>
class Printer{
    public:
    T job;
    Printer* next; //the printer is the node

    Printer (T new_job){
        job = new_job;
        next = nullptr;
    }
};

template<typename T>
class Queue{
    private:

    Printer<T> *front;
    Printer<T> *rear;

    public: 
    Queue(){
        front = rear = nullptr;
        std::cout<<"A queue has been created.\n";
    }

    bool isEmpty(){
        return front == nullptr;
    }

    void enqueue(T new_data){
        Printer<T> *newNode = new Printer<T>(new_data);
        
        if(isEmpty()){
            front = rear = newNode;      
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
        std::cout<<"Job added to the queue: " << new_data <<std::endl;
    }

    void dequeue(){
        if(isEmpty()){
            std::cout<<"The queue is Empty.\n";
            return;
        } 
        Printer<T> *temp = front;
        std::cout << "Deleted: "<< temp->job;  

        front = front->next;     
        delete temp; 
        
        if(front == nullptr){
            rear = nullptr;
        }
    }

    void display(){
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }
        Printer<T> *current = front;
        std::cout<<"List inside of our queue: ";
        while (current != nullptr) {
            current->job;
            current = current->next;
        }
    }
};







#endif