#include <iostream>

using namespace std;

int main() {
    int counter = 0, num = 1, divisor = 0;   
    while(counter < 10001) {
        for(int i = 2;i <= num; i++) {
            if(num % i == 0 && i == num) {
                counter++;
            } else if (num % i == 0 && i < num) {
                break;
            }
        }
        num++;
    }
    cout << num-1 << '\n';
    system("pause");
    return 0;
}