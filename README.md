# Sum of Digits using Recursion
A simple C++ function to find the sum of digits of a number using recursion

## Function Overview
The `sum_of_digits` function takes an integer `n` as input and returns the sum of its digits. It uses a recursive approach to achieve this.

### Function Prototype
```cpp
int sum_of_digits(int n);
```

### Function Definition
```cpp
int sum_of_digits(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + sum_of_digits(n / 10);
}
```

### How It Works
- Base Case: If n is 0, the function returns 0.
- Recursive Case: The function adds the last digit of n (i.e., n % 10) to the result of the sum of digits of the integer formed by removing the last digit (i.e., n / 10).
- *To obtain the last number of any digit, use the modulus operator: n % 10*
  - Ex. 1234 % 4 = 4
  - Ex. 62 % 10 = 2

## Sum_of_Digits.cpp
```cpp
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
```
