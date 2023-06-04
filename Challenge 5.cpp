#include <iostream>

using namespace std;

int main() {
    int smallestNumberDivisable = 0, number = 1, divisibleNumber = 0, size = 20;
    while(!smallestNumberDivisable) {
        for(int i = 1; i <= size;i++) {
            if(number % i == 0 && i == size) {
                smallestNumberDivisable = 1;
            } else if(number % i != 0){
                break;
            }
        }
    number++;
    }   
    cout << number-1 << endl;
    system("pause");
    return 0;
}