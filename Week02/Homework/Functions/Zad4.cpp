#include <iostream>
using namespace std;

bool isDigit(char c){
    return c >= '0' && c <= '9';
}

int main() {
    char input;

    cout << "Input: " << endl;
    cin >> input;

    if(isDigit(input)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }

    return 0;
}













