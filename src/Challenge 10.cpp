#include <iostream>

using namespace std;

const long int limit = 2000000;

void findPrimeNums(long long int* primeArray) {
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
    //has to be allocated in the heap instead of the stack
    long long int* primeNums = new long long int[limit];
    for(int i = 0;i < limit;i++) {
        primeNums[i] = 1;
    }
    primeNums[0] = 0;
    primeNums[1] = 0;
    findPrimeNums(primeNums);
    long long int sum = 0;
    for(long int i = 1;i < limit;i++) {
        if(primeNums[i] == 1) {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    system("pause");
    return 0;
}