#include <iostream>
using namespace std;

bool checkIfMirrored(int arr[], int n){
    for(int i = 0; i < n / 2; i ++)
        if(arr[i] != arr[n-i-1])
            return false;
    return true;
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

    if(checkIfMirrored(arr, sizeArr))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}








