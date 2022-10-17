#include <iostream>
#include <string>
using namespace std;

int initializeSizeVar(string inputName){
    int temp;
    do{
        cout << "Input " << inputName << " :" << endl;
        cin >> temp;
    } while (temp < 1);
}

int maxColumnAvrgIndex(int **arr, int sizeArrI, int sizeArrJ){
    int indexOfMax = 0;
    int maxAvrgColumn = 0;
    for(int j = 0; j < sizeArrJ; j++){
        int avrg = 0;
        for(int i = 0; i < sizeArrI; i++){
            avrg += arr[i][j];
        }
        avrg /= sizeArrI;
        if(avrg > maxAvrgColumn || j == 0){
            maxAvrgColumn = avrg;
            indexOfMax = j;
        }

    }
    return indexOfMax;
}

int main() {
    int sizeArrI = initializeSizeVar("I");
    int sizeArrJ = initializeSizeVar("J");

    int **arr = new int *[sizeArrI];
    for(int i = 0; i < sizeArrI; i++){
        arr[i] = new int[sizeArrJ];
        for(int j = 0; j < sizeArrJ; j++){
            cout << "Input arr[" << i << "][" << j << "]:" << endl;
            cin >> arr[i][j];
        }
    }

    cout << "index = " << maxColumnAvrgIndex(arr, sizeArrI, sizeArrJ) << endl;

    return 0;
}












