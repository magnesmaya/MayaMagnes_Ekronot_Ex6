#include <iostream>
int add(int a, int b, bool& error)
{
    if (a == 8200 || b == 8200 || a + b == 8200)
    {
        error = true;
    }
    return a + b;
}

int  multiply(int a, int b, bool& error) {
    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum = add(sum, a, error);
        if (sum == 8200)
        {
            error = true;
        }
    };
    return sum;
}

int pow(int a, int b, bool& error) {
    int exponent = 1;
    for (int i = 0; i < b; i++) {
        exponent = multiply(exponent, a, error);
        if (exponent == 8200)
        {
            error = true;
        }
    };
    return exponent;
}

int main(void)
{
    bool error = false;
    int num1, num2 = 0;
    std::cout << "Enter num1 for pow function: ";
    std::cin >> num1;
    std::cout << "Enter num2 for pow function: ";
    std::cin >> num2;
    int result = pow(num1, num2, error);

    if (error)
    {
        std::cerr << "This user is not authorized to access 8200, please enter different numbers, or try to get clearance in 1 year\n\n";
    }
    else
    {
        std::cout << "Result: " << pow(num1, num2, error) << std::endl;
    }

    std::cout << "Enter num1 for multiply function: ";
    std::cin >> num1;
    std::cout << "Enter num2 for multiply function: ";
    std::cin >> num2;
    error = false;
    result = multiply(num1, num2, error);

    if (error)
    {
        std::cerr << "This user is not authorized to access 8200, please enter different numbers, or try to get clearance in 1 year\n\n";
    }
    else
    {
        std::cout << "Result: " << multiply(num1, num2, error) << std::endl;
    }

    std::cout << "Enter num1 for add function: ";
    std::cin >> num1;
    std::cout << "Enter num2 for add function: ";
    std::cin >> num2;
    error = false;
    result = add(num1, num2, error);

    if (error)
    {
        std::cerr << "This user is not authorized to access 8200, please enter different numbers, or try to get clearance in 1 year\n\n";
    }
    else
    {
        std::cout << "Result: " << add(num1, num2, error) << std::endl;
    }

    return 0;
}