// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    vector<int> primes;
    
    primes.push_back(5);
    primes.push_back(3);

    cout << "The vector has " << primes.size() << " elements\n";
    cout << "The index 1 has " << primes.at(1) << endl;

    return (0);
}
