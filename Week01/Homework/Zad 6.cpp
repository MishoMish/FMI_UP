#include <iostream>
using namespace std;

int numSameDigits(int a, int b){
    int counter = 0;

    /*
    Znam che imat obshta duljina "p" znaka
    no pravq dvoina proverka v sluchai che nqmat
    */

    while(a > 0 || b > 0){
        if(a % 10 == b % 10)
            counter ++;
        a /= 10;
        b /= 10;
    }
    return counter;
}

int main() {
    int a, b;

    cout << "Input a:" << endl;
    cin >> a;

    cout << "Input b:" << endl;
    cin >> b;

    cout << "Number of same digits on same position BETWEEN " << a << " AND " << b << " :" << endl;
    cout << numSameDigits(a,b);

    return 0;
}




