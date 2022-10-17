#include <iostream>
using namespace std;

int initializeVar(){
    int temp;
    do{
        cout << "Input number : " << endl;
        cin >> temp;
    } while (temp < 1);
}

bool canBeATriangle(int a, int b, int c){
    return a + b > c && a + c > b && b + c > a;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
         for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {
    int arr[3];
    for(int i = 0; i < 3; i++)
        arr[i] = initializeVar();

    if(canBeATriangle(arr[0], arr[1], arr[2])){
        bubbleSort(arr, 3);

        unsigned int temp1 = arr[2] * arr[2];
        unsigned int temp2 = arr[0] * arr[0] + arr[1] * arr[1];

        if(temp1 > temp2){
            cout << "Obtuse-angled triangle" << endl;
        } else if(temp1 < temp2){
            cout << "Acute-angled triangle" << endl;
        } else {
            cout << "Right-angled triangle" << endl;
        }
    } else {
        cout << "There is no such triangle!" << endl;
    }


    return 0;
}














