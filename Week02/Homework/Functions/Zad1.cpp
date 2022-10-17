#include <iostream>
using namespace std;

int max(int n1, int n2){
    return n1 > n2 ? n1 : n2;
}

int main() {
    int num1, num2;

    cout << "Input num1: " << endl;
    cin >> num1;

    cout << "Input num1: " << endl;
    cin >> num2;

    cout << max(num1,num2) << endl;

    return 0;
}











