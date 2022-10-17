#include <iostream>
#include <string>
using namespace std;

// misleh che mi trqbva za X i Y no qvno e samo za ednoto ;(
// vse pak ostavih funkciqta
int initializeSizeVar(string inputName){
    int temp;
    do{
        cout << "Input " << inputName << " :" << endl;
        cin >> temp;
    } while (temp < 1);
}

int sumMainDiag(int **arr, int sizeArr){
    int sum = 0;
    for(int i = 0; i < sizeArr; i++){
        for(int j = 0; j < sizeArr; j++){
            if (i == j)
                sum += arr[i][j];
        }
    }
    return sum;
}

int sumSecondDiag(int **arr, int sizeArr){
    int sum = 0;
    for(int i = 0; i < sizeArr; i++){
        for(int j = 0; j < sizeArr; j++){
            if (sizeArr - i == j + 1)
                sum += arr[i][j];
        }
    }
    return sum;
}


int main() {
    int sizeArr = initializeSizeVar("sizeArr");

    int **arr = new int *[sizeArr];
    for(int i = 0; i < sizeArr; i++){
        arr[i] = new int[sizeArr];
        for(int j = 0; j < sizeArr; j++){
            cout << "Input arr[" << i << "][" << j << "]:" << endl;
            cin >> arr[i][j];
        }
    }

    cout << "Main diagonal is " << sumMainDiag(arr, sizeArr) <<
    ", second is " << sumSecondDiag(arr, sizeArr) << "." << endl;

    return 0;
}











