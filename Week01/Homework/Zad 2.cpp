#include <iostream>
using namespace std;

bool sumEqualsProduct(int number){
    int sum = 0, product = 1;
    while(number > 0){
        int currentNumber = number % 10;
        number /= 10;
        sum += currentNumber;
        product *= currentNumber;
    }
    return sum == product;
}

int main() {
    int a,b;

    cout << "Input a:" << endl;
    cin >> a;

    cout << "Input b:" << endl;
    cin >> b;

    int counter = 0;
    for(int i = a; i <= b; i++){
        if(sumEqualsProduct(i))
            counter++;
    }

    cout << "NUM of numbers having sum = product : " << counter << endl;

    return 0;
}




