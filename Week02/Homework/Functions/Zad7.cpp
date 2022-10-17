#include <iostream>
using namespace std;

int digitsSum(unsigned long long num){
    if(num > 0){
        int temp = num % 10;
        num /= 10;
        return temp + digitsSum(num);
    }
    return 0;
}

int main() {
    unsigned long long num;

    cout << "Number: " << endl;
    cin >> num;

    cout << digitsSum(num) << endl;

    return 0;
}















