#include <iostream>

void weird_algorithm(long long n){
    if (n == 1){
        std::cout << n << "\n";
        return;
    }

    std::cout << n << " ";
    if (n & 1){
        weird_algorithm(3 * n + 1);
    }
    else{
        weird_algorithm(n / 2);
    }
}

int main(){
    int n;
    std::cin >> n;
    weird_algorithm(n);
    return 0;
}
