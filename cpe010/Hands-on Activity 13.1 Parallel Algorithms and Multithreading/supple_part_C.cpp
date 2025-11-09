#include <iostream>
#include <vector>
#include <thread>
#include <algorithm>

void bubble_sort(std::vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]){
                std::swap(arr[j], arr[j + 1]);  
            }
        }
    }
}

void print_array(const std::vector<int> &arr) {
    for (const auto &val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};

    std::thread sort_thread(bubble_sort, std::ref(data));

    sort_thread.join();

    std::cout << "Sorted array: ";
    print_array(data);

    return 0;
}