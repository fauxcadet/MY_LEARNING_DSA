#include <iostream>
#include <cmath>

int countCommasUpTo(int N) {
    if (N < 0) {
        throw std::invalid_argument("N must be a non-negative integer");
    }

    int commaCount = 0;
    int digits = 1;
    int start = 1;
    int factor = 9;

    while (N >= start * 10) {
        commaCount += (digits - 1) / 3 * factor;
        start *= 10;
        digits++;
        factor *= 10;
    }
    
    commaCount += (N - start + 1) * (digits - 1) / 3;

    return commaCount;
}

int main() {
    int N;
    std::cin >> N;

    int result = countCommasUpTo(N);
    std::cout << result << std::endl;

    return 0;
}
