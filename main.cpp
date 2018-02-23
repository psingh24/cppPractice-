//
//  main.cpp
//
//  Created by Prabhdeep Singh on 2/7/18.
//  Copyright © 2018 Prabhdeep Singh. All rights reserved.
//


#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <typeinfo>
#include <stdlib.h>
using namespace std;

int addNumbers(int *x);
int Change(double x);
void triangle(int y);
void validateCard(string, bool*);

int main() {
//    double input;
//    cout << "Enter the amount: ";
//    cin >> input;
//    //Function to output the least amount of coins needed to reach an amount.
//    int x = Change(input);
//    cout << x << endl;
//    
//    //Function to output a pryamid
//    int rows;
//    cout << "Enter number of rows: ";
//    cin >> rows;
//    triangle(rows);
    
    //Function to check if a credit card number is valid
    bool validated = false;
    
    while (validated == false){
        string creditCardNumber;
        cout << "enter a credit Card Number" << endl;
        cin>>creditCardNumber;
        
        validateCard(creditCardNumber, &validated);
    }

    
    return 0;
};

void validateCard(string x, bool *v){
    int sumOfOdd(0), total(0);
    
    for (int i=0; i < x.length(); i++) {
        if (i % 2 == 0){
            sumOfOdd+= x[i] - '0';
            
        } else {
            total += ((x[i] - '0')*2)%10 + ((x[i] - '0')*2)/10;
        }
    }
    
    if ((sumOfOdd + total) % 10 == 0) {
        
        if (x.length() == 15) {
            cout << "AMEX - valid" << endl;
        } else if (x.length() == 16){
            cout << "MasterCard - valid" << endl;
        }
        *v = true;
      
    } else {
        cout << "Card is not valid" << endl;
        *v = false;
    }
    
}


int Change(double x){
    int total = 0;
    x = x * 100;
    
    while (x > 0){
        if (x >= 25) {
            x-= 25;
            total++;
            //            cout << "twenties: "<< total<< " input: " << input << endl;
        }
        else if (x >= 10 && x < 25){
            x-= 10;
            total++;
            //            cout << "tens "<< total << " input: " << input << endl;
        }
        else if (x >= 5 && x < 10) {
            x-= 5;
            total++;
            //            cout << "fives "<< total << " input: " << input << endl;
        }
        else if (x >= 1 && x < 5) {
            x-= 1;
            total++;
            //            cout << "ones "<< total << " input: " << input << endl;
        }
    }
    
    return total;
    
}

void triangle(int y){
    for(int i = 1; i <= y; i++)
        
    {
        for(int s = y-i; s>0; s--)
        {
            cout << " ";
        }
        
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        
        cout << "  ";
        
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        
        for(int s = y-i; s>0; s--)
        {
            cout << " ";
        }
        
        cout << "\n";
    }
    
}
