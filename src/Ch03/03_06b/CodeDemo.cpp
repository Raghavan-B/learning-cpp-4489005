// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 31;
    int *ptr;

    ptr = &a;

    std::cout <<" The content of a is  " << a << std::endl;
    std::cout <<" The pointer is pointing to address " << ptr << std::endl;
    std::cout <<" The address of a is " << &a << std::endl;
    std::cout <<" Where the pointer is pointing: " << *ptr << std::endl;
    std::cout <<" The address of ptr is " << &ptr << std::endl; 
    std::cout << std::endl << std::endl;
    return (0);
}
