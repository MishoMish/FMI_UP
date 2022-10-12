#include <iostream>
using namespace std;

void printEquilateralTriangle(int n){
    for(int i = 1; i <= n; i++){
        for (int j = n - i; j > 0; j--){
            cout << " ";
        }
        for (int j = i; j > 0; j--){
            cout << "# ";
        }
        cout << endl;
    }

}

int main() {
    int n;

    do{
        cout << "Input n (odd number):" << endl;
        cin >> n;
    } while (n % 2 == 0);


    printEquilateralTriangle(n);

    return 0;
}



