#include <iostream>
#include <cmath>

int main(){
    std::cout << "enter radius: ";
    double radiusFromUser;
    double pi = 3.14159;
    std::cin >> radiusFromUser;
    std::cout << pi * (pow(radiusFromUser,2));
    return 0;
 }    
