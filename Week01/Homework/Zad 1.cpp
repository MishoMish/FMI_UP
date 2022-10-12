#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int k,n;

    cout << "Input n:" << endl;
    cin >> n;

    cout << "Input k:" << endl;
    cin >> k;

    cout << "floor(log k(n)) = " << floor(log(n)/log(k)) << endl;
    return 0;
}



