#ifndef queue_h
#define queue_h
#include <iostream>

template<typename T>
class Node{
	public:
		T data;
		Node *next;
		
		Node(T new_data){
			data = new_data;
			next = nullptr;
		}
};


template <typename T>
class Queue{
	private:
		Node<T> *front;
		Node<T> *rear;
		
	public:
	Queue(){
		front = rear = nullptr;
		std::cout<<"A queue has been created.\n";
	} 
	//isEmpty
	bool isEmpty(){
		return front == nullptr;
	}
	//enqueue
	void enqueue(T new_data){
		Node<T> *new_node = new Node<T> (new_data);
	
		if(isEmpty()){
			front = rear = new_node;
			std::cout<<"The queue is Empty.\n";
			return;
		}
		rear->next = new_node;
		rear = new_node;
		std::cout<<"May queue.\n";
	}
	//dequeue
	void dequeue(){
		if(isEmpty()){
			return;
		}
		//storing the front to a temporary pointer
		Node<T> *temp = front;
		
		//check if the after dequeue. the queue is empty
		if(front == nullptr){
			rear = nullptr;	
		}

		else{
			front = front->next;
		}
		delete temp;
		std::cout<<"Dequeue.\n";
	}
	
	//getFront
	void getFront(){
		if(isEmpty()){
			std::cout<<"The queue is empty.\n";
			return;
		}
		std::cout<<"Front: "<< front->data<<std::endl;
	}
	//getRear
	void getRear(){
		if(isEmpty()){
			std::cout<<"The queue is empty.\n";
			return;
		}
		std::cout<<"Rear: " << rear->data<<std::endl;
	}
	
	//display
	void display(){
		if(isEmpty()){
			std::cout<<"The queue is empty.\n";
			return;
		}
		Node<T> *temp = front;
		while(temp != nullptr){
			std::cout<< temp->data <<std::endl;
			//update the loop
			temp = temp->next;
		}
	}
	
	void line(){
		std::cout<<"----------------\n";
	}	
	
	~Queue(){
		while(!isEmpty()){
			dequeue();
		}
	}
};


#endif
