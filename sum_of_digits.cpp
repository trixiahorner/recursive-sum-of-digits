#include <iostream>
#include <string>

int sum_of_digits(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int number = 12345;
    std::cout << "The sum of digits of " << number << " is " << sum_of_digits(number) << std::endl;
    return 0;
}
