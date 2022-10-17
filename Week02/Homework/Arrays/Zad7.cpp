#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++)
         for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

void print(int arr[], int sizeArr){
    for(int i = 0; i < sizeArr; i++)
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

    bubbleSort(arr, sizeArr);

    print(arr, sizeArr);

    return 0;
}










