#include <iostream>
using namespace std;

void printRoof(int n){
    for(int i = 1; i <= n; i++){
        for (int j = n - i; j > 0; j--){
            cout << " ";
        }
        cout << "\/";
        for (int j = 2*(i - 1); j > 0; j--){
            cout << " ";
        }
        cout << "\\";
        cout << endl;
    }
}

void printLineVertical(int n){
    for (int i = 0; i < 2 * n; i++){
        cout << "-";
    }
    cout << endl;
}

void printWalls(int n){
    for (int j = 0; j < n; j++){
        cout << "\|";
        for (int k = 0; k < 2 * (n - 1); k++){
            cout << " ";
            }
        cout << "\|" << endl;
    }
}

void printLineVerticalBold(int n){
    for (int i = 0; i < 2 * n; i++){
        cout << "=";
    }
    cout << endl;
}

void printHouse(int n){
    // pokriv
    printRoof(n);

    // mejdu pokriv i etaj
    printLineVertical(n);

    // steni
    printWalls(n);

    // pod
    printLineVerticalBold(n);

}


int main() {
    int n;

    cout << "Input n :" << endl;
    cin >> n;

    printHouse(n);

    return 0;
}
