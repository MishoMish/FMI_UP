#include <iostream>
using namespace std;

bool equalSumAndProductEvenAndOdd(int a){
    int sumEven = 0, sumOdd = 0, prodEven = 1, prodOdd = 1;

    bool lookingAtEven = true;
    while(a > 0){
        if(lookingAtEven){
            sumEven += a % 10;
            prodEven *= a % 10;
        } else {
            sumOdd += a % 10;
            prodOdd *= a % 10;
        }
        a /= 10;
        lookingAtEven ^= true;
    }

    return sumEven == sumOdd && prodEven == prodOdd;
}

int main() {
    int a,b;

    cout << "Input a :" << endl;
    cin >> a;

    do{
        cout << "Input b (BIGGER THAN a):" << endl;
        cin >> b;
    } while (b <= a);

    while(++a < b){
        if(equalSumAndProductEvenAndOdd(a))
            cout << a << " ";
    }

    return 0;
}




