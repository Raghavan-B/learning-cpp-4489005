// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto str = "C++ Sucks";
    std::cout << "Type of variable str " << typeid(str).name() << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
