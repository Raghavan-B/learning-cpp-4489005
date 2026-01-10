// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

using namespace std;
int main(){
    vector<cow> cattle;

    cattle.push_back(cow("Betty", 6, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));

    cout << "The first cow is " << cattle.at(0).get_name() << endl;
    cout << endl << endl;
    return (0);
}
