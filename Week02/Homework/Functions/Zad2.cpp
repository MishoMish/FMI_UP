#include <iostream>
using namespace std;

double discountedPrice(double price, double discount){
    return price * (100-discount) / 100;
}

int main() {
    double price, discount;

    cout << "Input price: " << endl;
    cin >> price;

    cout << "Input discount: " << endl;
    cin >> discount;

    cout << discountedPrice(price, discount) << endl;

    return 0;
}












