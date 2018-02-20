//
//  main.cpp
//
//  Created by Prabhdeep Singh on 2/7/18.
//  Copyright © 2018 Prabhdeep Singh. All rights reserved.
//


#include <iostream>
using namespace std;

int Change(double x);
void triangle(int y);

int main() {
    double input;
    cout << "Enter the amount: ";
    cin >> input;
    //Function to output the least amount of coins needed to reach an amount.
    int x = Change(input);
    cout << x << endl;
    
    //function to make a pyramid 
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    triangle(rows);
    return 0;
};


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
               cout << "#";
           }

           cout << "  ";

           for(int j = 1; j <= i; j++)
           {
               cout << "#";
           }

           for(int s = y-i; s>0; s--)
           {
               cout << " ";
           }

           cout << "\n";
       }

}
