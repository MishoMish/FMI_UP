#include <iostream>
using namespace std;

int consecutiveOnesBinary(int number){
    int maxCounter = 0;
    for(int counter = 0; number > 0;){
        if(number % 2 == 1){
            counter++;
        } else {
            counter = 0;
        }
        number /= 2;

        if(counter > maxCounter)
                maxCounter = counter;
    }
    return maxCounter;
}

int main() {
    int input;
    cout << "Input a number:" << endl;
    cin >> input;
    cout << "Number of consecutive 1s in binary form:" << endl;
    cout << input << " -> " << consecutiveOnesBinary(input) << endl;
    return 0;
}



