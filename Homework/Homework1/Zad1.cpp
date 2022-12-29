#include <iostream>
#include <cmath>    /* abs (for doubles); trunc*/

const double EPSILON = 0.009;

/*
// Giving largest possible back with integers
void printChange(double deposit, double price)
{
    //We can work with integers because otherwise we need to use
    //epsilon for proximity between two doubles

    const int moneyTypesValues[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    const int MONEY_TYPES_NUMBER = sizeof(moneyTypesValues) / sizeof(moneyTypesValues[0]);;
    int quantityOfType[MONEY_TYPES_NUMBER] = {0};

    int moneyToReturn = (deposit - price) * 100;
    for(int i = 0; i < MONEY_TYPES_NUMBER && moneyToReturn > 0; i++){
        // We don't need epsilon here because we are using integer values
        while(moneyToReturn >= moneyTypesValues[i]){
            moneyToReturn -= moneyTypesValues[i];
            ++quantityOfType[i];
        }
    }

    for(int i = MONEY_TYPES_NUMBER - 1; i >= 0; i--){
        if(quantityOfType[i] > 0){
            if(moneyTypesValues[i] >= 100){
                std::cout << quantityOfType[i] << " - " << moneyTypesValues[i]/100 << " lv" << std::endl;
            } else {
                std::cout << quantityOfType[i] << " - " << moneyTypesValues[i] << " st" << std::endl;
            }
        }
    }
}
*/

// Giving largest possible back with epsilon
void printChange(double deposit, double price)
{
    // defined epsilon = 0.009
    // We need it because doubles can't be safely compared using
    // comparative operations containing "=" (">=", "<=" and "==")

    const double moneyTypesValues[] = {100, 50, 20, 10, 5, 2, 1, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01};
    const int MONEY_TYPES_NUMBER = sizeof(moneyTypesValues) / sizeof(moneyTypesValues[0]);;
    int quantityOfType[MONEY_TYPES_NUMBER] = {0};

    double moneyToReturn = deposit - price;
    for(int i = 0; i < MONEY_TYPES_NUMBER && moneyToReturn > 0; i++){
        // We compare the same way we did in the function using integers but now
        // additionally we have to check the case where they are equal with a small enough epsilon

        while(moneyToReturn > moneyTypesValues[i] || std::abs(moneyToReturn - moneyTypesValues[i]) < EPSILON){
            moneyToReturn -= moneyTypesValues[i];
            ++quantityOfType[i];
        }
    }

    for(int i = MONEY_TYPES_NUMBER - 1; i >= 0; i--){
        if(quantityOfType[i] > 0){
            if(moneyTypesValues[i] > 1){
                std::cout << quantityOfType[i] << " - " << moneyTypesValues[i] << " lv" << std::endl;
            } else {
                std::cout << quantityOfType[i] << " - " << moneyTypesValues[i] * 100 << " st" << std::endl;
            }
        }
    }
}

// Makes it much easier to compare the numbers when we have only two digits
// There aren't any coins < 0.01
void cutToSecondDigit(double *var){
    // Needed to use trunc because parsing to int in some cases loses data behind decimal point
    // a case where that happened was input "100.99" which cutToSecondDigit was "100.98"
    *var = (double)(trunc(*var * 100)) / 100;
}

int main()
{
    // We use double because of inputs like 9.99999999999 which round to 10 when using float
    double price, deposit;

    std::cout << "Price = ";
    std::cin >> price;
    cutToSecondDigit(&price);

    std::cout << "Deposit = ";
    std::cin >> deposit;
    cutToSecondDigit(&deposit);

    if(price > deposit) {
        std::cout << "Money is not enough" << std::endl;
    } else if(std::abs(deposit - price) < EPSILON){
        std::cout << "Alright" << std::endl;
    } else {
        printChange(deposit, price);
    }

    return 0;
}
