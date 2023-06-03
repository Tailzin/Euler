#include <iostream>

using namespace std;

int main() {
    int first = 0, second = 1, fibonacci = 0;
    long int sum = 0;
    while(fibonacci < 4000000) {
        fibonacci = first + second;
        first = second;
        second = fibonacci;
        if(fibonacci % 2 == 0) {
            sum = sum + fibonacci;
            // cout << sum << endl;
        }
    }
    cout << sum << endl;
    system("pause"); 
}