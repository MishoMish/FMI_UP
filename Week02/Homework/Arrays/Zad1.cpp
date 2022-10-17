#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++)
         for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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

    bubbleSort(arr, n);

    cout << "max: " << arr[n-1] << endl;

    cout << "min: " << arr[0] << endl;

    if(n >= 2){
        cout << "second max: " << arr[n-2] << endl;
        cout << "second min: " << arr[1] << endl;
    } else {
        cout << "Not enough elements for second min/max!" << endl;
    }

    return 0;
}




