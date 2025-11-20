#include <iostream>
#include "queue.h"
int main(){
	Queue <int> P1;
	
	for(int i=1; i<=10; i++){
		P1.line();
		P1.enqueue(i);
	}
	
	P1.line();
	P1.getFront();
	P1.getRear();
	
	P1.line();
	P1.display();
	for(int j=1; j<=10; j--){
		P1.dequeue();
	}
	
	P1.line();
	std::cout<<P1.isEmpty();
	
	return 0;
}
