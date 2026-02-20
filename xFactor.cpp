#include "xFactor.h"
#include <iostream>

using namespace std;


double sqrt(double N, double tol){

    double guess = N;
    bool isClose = false;

    do{

        guess = (guess + N/guess)/2;
        
        if ((guess - N/guess) < tol && -1*tol < (guess - N/guess)){
            isClose = true;
        }

    }while(!(isClose));
    
    return guess;
};

double getDiscriminant(int a, int b, int c){
	return (b*b - 4*a*c);

}

double positiveX(int a, int b, int c, double tol){
    return (-1*b + sqrt(getDiscriminant(a, b, c), tol))/(2*a);

}


double negative(int a, int b, int c, double tol){

    return (-1*b-sqrt(b*b-4*a*c, tol))/(2*a);

}
/*
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

}*/
