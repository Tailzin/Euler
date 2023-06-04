#include <iostream>

using namespace std;

int findPrimeNums(int* primeArray) {
    int index = 0;
    for(int i = 2; i <= 10000; i++) {
        for(int j = 2; j <= i;j++) {
            if(i%j == 0 && j == i) {
                primeArray[index] = i;
                index++;
            } else if(i%j == 0 && j < i) {
                break;
            }
        }
    }
    return index;
}

int main() {
    long long int num = 600851475143, biggestFactor = 0;
    int primeNums[10000];
    int numOfPrimes = findPrimeNums(primeNums);
    int primeFactors[10000];
    int index = 0,secondIndex = 0;
    while(num > 0) {
        if(num%primeNums[index] == 0) {
            num = num / primeNums[index];
            biggestFactor = primeNums[index];
            primeFactors[secondIndex] = biggestFactor;
            secondIndex++;
        } else {
            index++;
            if(index == numOfPrimes) {
                break;
            }
        }
    }
    for(int i = 0;i < secondIndex;i++) { 
        cout << primeFactors[i] << ' ';
    }
    cout << '\n' << biggestFactor << endl;
    system("pause"); 
}