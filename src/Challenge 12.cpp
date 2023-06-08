#include <iostream>

using namespace std;

const int limit = 65500;

void findPrimeNums(unsigned int* primeArray) {
    long long int i = 2;
    while(i*i <= limit) {
        if(primeArray[i] == 0) {
            i++;
            continue;
        }
        long long int j = 2*i;
        while(j < limit) {
            primeArray[j] = 0;
            j+=i; 
        }
        i++;
    }
}

int main() {
    unsigned int primeArray[limit];
    for(int i = 0; i < limit;i++) {
        primeArray[i] = 1;
    }
    primeArray[1] = 1;
    findPrimeNums(primeArray);
    unsigned int index = 0;
    for(int i = 2; i < limit;i++) {
        if(primeArray[i] == 1) {
            primeArray[index] = i;
            index++;
        }
    }
    unsigned int triangularNum = 0, numOfDivisors = 1, i = 1, counter = 1;
    while(1) {
        triangularNum = i * (i+1) / 2;
        unsigned int tmp = triangularNum;
        numOfDivisors = 1;
            for(int j = 0;j <= limit;j++) {
                counter = 1;
                while(tmp % primeArray[j] == 0) {
                    tmp = tmp/primeArray[j];
                    counter++;
                }
                if(counter > 1) {
                    numOfDivisors = numOfDivisors * counter;
                }
                if(tmp == 1) {
                    break;
                }
        }
        if(numOfDivisors > 500) {
            break;
        }
        i++;
    }
    cout << "Triangular Number: " << triangularNum << " Number of Divisors: " << numOfDivisors << endl;
    system("pause");
    return 0;
}