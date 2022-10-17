#include <iostream>
using namespace std;

int pow(int num, int power){
    if(power > 0)
        return num * pow(num, --power);
    return 1;
}

int main() {
    int num, power;

    cout << "Number: " << endl;
    cin >> num;

    cout << "Power: " << endl;
    cin >> power;

    cout << num << " to the power of " << power << " is " << pow(num, power);

    return 0;
}














