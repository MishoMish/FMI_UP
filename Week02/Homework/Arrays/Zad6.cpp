#include <iostream>
using namespace std;

void printReversed(int arr[], int sizeArr){
    for(int i = sizeArr - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int sizeArr;
    do{
        cout << "Input sizeArr [sizeArr >= 1]:" << endl;
        cin >> sizeArr;
    } while (sizeArr < 1);


    int arr[sizeArr];
    for(int i = 0; i < sizeArr; i++){
        cout << "Input arr[" << i << "]:" << endl;
        cin >> arr[i];
    }

    printReversed(arr, sizeArr);

    return 0;
}









