#include <iostream>
using namespace std;

void printNumSequence(int n){
    for(int i = 0; i < 2*n - 1; i++){
        for (int j = 1; j <= n; j++){
            if((i < n && j > i) || (i >= n && j > 2*n - i - 2)){
                cout << j;
            } else {
                // ima chisla s duljina > 1 space
                for(int temp = j; temp > 0; temp /= 10)
                    cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;

    do{
        cout << "Input n [1-100]:" << endl;
        cin >> n;
    } while (n < 1 || n > 100);

    printNumSequence(n);

    return 0;
}



