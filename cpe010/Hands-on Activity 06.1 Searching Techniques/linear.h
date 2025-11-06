#ifndef linear_h
#define linear_h
#include <iostream>

template<typename T>
class Node{
public:
    T data;
    Node<T> *next;
    Node(T value){
        data = value;
        next = nullptr;
    }
};

template<typename T>
class linkedlist{
private:
    Node<T>* head;
public:
    linkedlist(){
        head = nullptr;
    }
    void insert_at_the_back(T value){
        Node<T>* newNode = new Node<T>(value);
        if (head == nullptr){
            head = newNode;
        } else {
            Node<T>* temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    int sequential_search(T key){
        Node<T>* temp = head;
        int comparisons = 0;
        while(temp != nullptr){
            comparisons++;
            if(temp->data == key){
                break;
            }
            temp = temp->next;
        }
        return comparisons;
    }
};


#endif