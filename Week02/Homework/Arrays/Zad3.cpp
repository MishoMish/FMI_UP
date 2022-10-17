#include <iostream>
using namespace std;

void infoElement(int arr[], int n, int k){
    int times = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == k)
            times++;
    }
    cout << k << " is present " << times << " times in the array at positions ";

    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            cout << i;
            if(times > 1)
                cout << ",";
            else
                break;
            times --;
        }

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

    int k;
    cout << "Input k:" << endl;
    cin >> k;

    infoElement(arr, n, k);

    return 0;
}






