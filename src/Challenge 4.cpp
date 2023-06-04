#include <iostream> 

using namespace std;

int getNumberDigits(int num) {
    int lengthNum = num, counter = 0;
    while(lengthNum > 0) {
        lengthNum = lengthNum/10;
        counter++;
    }    
    return counter;
}

void intToArray(int num, int size, int* arrayOfInts) {
    for(int i = 0; i < size;i++) {
        arrayOfInts[i] = num%10;
        num = num/10;
    }
}

int main() {
    int largestPalindrome = 0;
    for(int i = 100;i < 1000;i++) {
        for(int j = 101; j < 1000;j++) {
            int palindromeFlag = 1;
            int product = i*j;
            int size = getNumberDigits(product);
            int arrayOfInts[size];
            int reverseCounter = size-1;
            intToArray(product, size, arrayOfInts);
            if(size%2 == 0) {
                for(int l = 0;l < size/2;l++) {
                    if(arrayOfInts[l] != arrayOfInts[reverseCounter]) {
                        palindromeFlag = 0;
                    }
                    reverseCounter--;
                }
                if(palindromeFlag && product > largestPalindrome) {
                    largestPalindrome = product;
                    // cout << largestPalindrome << ' ';
                }
            }
        }
    }
    cout << largestPalindrome << '\n';
    system("pause");
}