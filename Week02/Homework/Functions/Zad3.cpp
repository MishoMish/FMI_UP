#include <iostream>
using namespace std;

bool isLetter(char c){
    return (c > 64 && c < 91) || (c > 96 && c < 123);
}

int main() {
    char input;

    cout << "Input: " << endl;
    cin >> input;

    if(isLetter(input)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }

    return 0;
}












