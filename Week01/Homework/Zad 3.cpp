#include <iostream>
using namespace std;

void printRightAngleTriangle(int n){
    cout << "Here is a right angle triangle with side = " << n << " : " << endl << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            cout << "#";
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Input n:" << endl;
    cin >> n;

    printRightAngleTriangle(n);

    return 0;
}




