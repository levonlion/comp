#include <iostream>
#include <vector>
#include "Header.h"

void sort(std::vector<ComplexNum>& arr){
    for (int i = 0; i < arr.size() - 1; ++i){
        for (int j = 0; j < arr.size() - i - 1; ++j){
            if (arr[j].mod() > arr[j + 1].mod())
                std::swap(arr[j], arr[j + 1]);
        }
    }
}

int main(){
    int n;
    std::cin >> n;
    std::vector<ComplexNum> arr(n);

    for (int i = 0; i < n; ++i){
        std::cin >> arr[i].a >> arr[i].b;
    }

    sort(arr);

    for (int i = 0; i < n; ++i){
        std::cout << arr[i].a << ' ' << arr[i].b << "\n";
    }

    return 0;
}
