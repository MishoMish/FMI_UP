#include <iostream>
using namespace std;

void printNumberPiramid(int n){
    int k = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i && k <= n; j++, k++){
            cout << k << " ";
        }
        if(k > n)
            break;
        cout << endl;
    }

}

int main() {
    int n;

    cout << "Input n:" << endl;
    cin >> n;

    printNumberPiramid(n);

    return 0;
}
