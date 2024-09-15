#include <iostream>
#include <vector>

std::vector<long long> memo;

long long fibonacci(int n) {
    if (n <= 1) return n;
    
    if (memo[n] != -1) return memo[n];
    
    memo[n] = fibonacci(n-1) + fibonacci(n-2);
    return memo[n];
}

int main() {
    int n;
    std::cout << "Nhập số n: ";
    std::cin >> n;
    
    memo.resize(n + 1, -1);
    
    long long result = fibonacci(n);
    std::cout << "Số Fibonacci thứ " << n << " là: " << result << std::endl;
    
    return 0;
}