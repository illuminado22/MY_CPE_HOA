#include <iostream>
#include <thread>

int global_var = 0;

void add_func(const int &val){
    global_var += val;
}

int main() {
    std::thread t1(add_func, 10);
    std::thread t2(add_func, 20);
    std::thread t3(add_func, 30);

    std::cout<< "Joining t1: " << global_var << std::endl;
    t1.join();

    std::cout<< "Joining t2: " << global_var << std::endl;
    t2.join();
    
    std::cout << "Joining t3: " << global_var << std::endl;
    t3.join();
    return 0;
}