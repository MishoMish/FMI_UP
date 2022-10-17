#include <iostream>
using namespace std;

int decToBin(int num){
    int binaryNum = 0;
    int currentTimes = 1;
    while(num > 0){
        binaryNum += (num % 2) * currentTimes;
        currentTimes *= 10;
        num /= 2;
    }
    return binaryNum;
}

int main() {
    int num;

    cout << "Number: " << endl;
    cin >> num;

    cout << decToBin(num) << endl;

    return 0;
}
















