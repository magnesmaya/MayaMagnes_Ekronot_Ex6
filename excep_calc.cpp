#include <iostream>
#include <stdexcept>

int add(int a, int b) {
    int res = a + b;
    if(res == 8200 || a == 8200 || b == 8200)
    {
        throw (8200);
    }
    return res;
}

int  multiply(int a, int b) {
    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum = add(sum, a);
        if (sum == 8200)
        {
            throw (8200);
        }
    };
    return sum;
}

int  pow(int a, int b) {
    int exponent = 1;
    for (int i = 0; i < b; i++) {
        exponent = multiply(exponent, a);
        if (exponent == 8200)
        {
            throw  (8200);
        }
    };
    return exponent;
}

int main(void)
{
    std::cout << pow(5, 5) << std::endl;
    int num1, num2 = 0;
    std::cout << "Enter num1 for pow function: ";
    std::cin >> num1;
    std::cout << "Enter num2 for pow function: ";
    std::cin >> num2;

    int result = 0;
    try
    {
        result = pow(num1, num2);
        std::cout << "Result: " << pow(num1, num2) << std::endl;
    }
    catch (int error) 
    {
        std::cerr << "This user is not authorized to access " << error << " please enter different numbers, or try to get clearance in 1 year" << std::endl;
    }
    

    std::cout << "Enter num1 for multiply function: ";
    std::cin >> num1;
    std::cout << "Enter num2 for multiply function: ";
    std::cin >> num2;
    try
    {
        result = multiply(num1, num2);
        std::cout << "Result: " << multiply(num1, num2) << std::endl;
    }
    catch (int error)
    {
        std::cerr << "This user is not authorized to access " << error << " please enter different numbers, or try to get clearance in 1 year" << std::endl;
    }

    

    std::cout << "Enter num1 for add function: ";
    std::cin >> num1;
    std::cout << "Enter num2 for add function: ";
    std::cin >> num2;
    try
    {
        result = add(num1, num2);
        std::cout << "Result: " << add(num1, num2) << std::endl;
    }
    catch (int error)
    {
        std::cerr << "This user is not authorized to access "<<error <<", please enter different numbers, or try to get clearance in 1 year" << std::endl;
    }

    

    return 0;
}