#include "xFactor.h"
#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    double tol;
    char again;
    do{

    cout << "What are the coefficients of your quadratic? ";
    cin >> a >> b >> c;


    cout << "What is the tolerance you would like?";
    cin >> tol;

    cout << "x = (" << positiveX(a, b, c, tol) << ", " << negative(a, b, c, tol) << ") ";
    cout << endl;
    cout << "Again? (y/n) ";
    cin >> again;

    }while(again != 'n');
    

    return 0;

}

