#include <iostream>
using namespace std;

bool elementsAppearOnce(int arr[], int n){
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j])
                return false;
        }
    return true;
}

int main() {
    int n;

    do{
        cout << "Input n [n >= 1]:" << endl;
        cin >> n;
    } while (n < 1);


    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Input arr[" << i << "]:" << endl;
        cin >> arr[i];
    }

    if(elementsAppearOnce(arr, n))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}





