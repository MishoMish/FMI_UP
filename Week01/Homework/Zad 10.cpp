#include <iostream>
#include <math.h>
using namespace std;

bool checkIfInside(double x, double y){
    if(x >= 0 || x <= -2 || y >= 2 || y <= 0)
        return false;

    if((x / 3) + 1 <= y)
        return false;

    if(x + 1 >= y)
        return false;

    if(sqrt((x+1)*(x+1) + (y-1)*(y-1)) >= 1)
        return false;

    return true;
}

int main() {
    double x, y;

    cout << "Input x:" << endl;
    cin >> x;

    cout << "Input y:" << endl;
    cin >> y;

    if (checkIfInside(x, y)){
        cout << "Inside";
    } else {
        cout << "Outside";
    }

    return 0;
}

