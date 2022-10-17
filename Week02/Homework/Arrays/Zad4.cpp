#include <iostream>
using namespace std;

double avrgElement(int arr[], int sizeArr){
    double sum = 0;
    for(int i = 0; i < sizeArr; i++){
        sum += arr[i];
    }
    return sum / sizeArr;
}

int closestElementToNumber(int arr[], int sizeArr, double number){
    int currentClosest = arr[0];
    for(int i = 1; i < sizeArr; i++){
        double betweenNAndElement = (number - arr[i]);
        double betweenNAndCurrent =  (number - currentClosest);
        cout << i << "  " << betweenNAndElement << "   " << betweenNAndCurrent << endl;
        if( (betweenNAndElement * betweenNAndElement < betweenNAndCurrent * betweenNAndCurrent) ||
           (betweenNAndElement * betweenNAndElement == betweenNAndCurrent * betweenNAndCurrent && currentClosest > arr[i]))
            currentClosest = arr[i];

    }
    return currentClosest;
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

    cout << "Average number is: " << avrgElement(arr, sizeArr) << endl;
    cout << "Closest element to average number is: " <<  closestElementToNumber(arr, sizeArr, avrgElement(arr, sizeArr)) << endl;

    return 0;
}







