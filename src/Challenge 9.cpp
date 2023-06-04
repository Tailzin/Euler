#include <iostream> 

using namespace std;

int sqr(int number) {
    for(int i = 1; i < 2;i++) {
        number = number*number;
    }
    return number;
}


int main() {
    int answer;
    for(int c = 1;c <= 998;c++) {
        for(int b = 1;b <= 499;b++) {
            int a = 1000 - (b+c);
            if(b < c && a < b) {
                if((sqr(a)) + (sqr(b)) == sqr(c)) {
                    cout << "A: " << a << " B: " << b << " C: " << c << " A + B= " << (sqr(a)) + (sqr(b)) << " C= " << sqr(c) << ' ';
                    answer = a*b*c;
                }
            }
        }
    }
    cout << '\n';
    cout << "Product of abc: " << answer << endl;
    system("pause");
    return 0;
}