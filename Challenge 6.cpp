#include <iostream>

using namespace std;

int sqr(int num) {
    for(int i = 0;i < 1;i++) {
        num = num * num;
    }
    return num;
}

int main() {
    int sumOfSquares = 0, squareOfSums = 0;
    for(int i = 1;i <= 100;i++) {
        sumOfSquares = sumOfSquares + sqr(i);
        squareOfSums = squareOfSums + i;
    }
    squareOfSums = sqr(squareOfSums);
    cout << sumOfSquares << endl;
    cout << squareOfSums << endl;
    cout << "Difference is: " << squareOfSums - sumOfSquares << endl;
    system("pause");
    return 0;
}