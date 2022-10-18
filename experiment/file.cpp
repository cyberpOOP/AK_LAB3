#include<iostream>
#include "sum.h"
#include "sum.cpp"

int main()
{
    int a, b;
    std::cout<<"a=";
    std::cin>>a;
    std::cout<<"b=";
    std::cin>>b;

    std::cout<<"Sum is:"<<sumOfTwoNumbers(a, b)<<"\n";
}
