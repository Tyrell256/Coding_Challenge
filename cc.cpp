#include <iostream>

int adding( ){

    int var1;
    int var2;

    std::cout << "Enter a number \n";
    std::cin >> var1;

    std::cout << "Enter another number \n";
    std::cin >> var2;

    int anwser = var1 + var2;

   
    

    std::cout << "The answer is " << anwser << "\n";

    return anwser;
}

int main() {

    adding();
}