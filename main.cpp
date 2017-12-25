//
//  main.cpp
//  findFile
//
//  Created by Xiaohong Chen on 12/25/17.
//  Copyright © 2017 Xiaohong Chen. All rights reserved.
//
/*what I learned:
 know how to use:
 1.switch, void function, int function, readfile, if condition, while condition,
 2.#include <string> when you need to use string
 3.#include <fstream> when you need to read data from a file
 4.#using namespace std (save time to repeat write the "std::")
 5.there should be a return value to the int function
 6.there is no return value back to the void function, but there is just for printing.
 7.whie loop, while (true statement=the variable accesse the information from the int function)
 8. here is the place where i confuse. whatTheyWant = set_whatTheyWant(); let a variable equal a int function. it means that this variable acesses all the information from the int function. As we can see, whatTheyWant acesses all the output informations.
 
 9.There is a parameter at the void function. the it means that you need to make this int x be some numbers. and here we uses the if nested loop.
 if (x==1){
 while (theFile >> name >> power){
 if (){}
 }
 }
 
 
 
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// int set_whatTheyWan
int set_whatTheyWant(){
    int choice;
    cout << "1-just the plain items" << endl;
    cout << "2-helpful items" << endl;
    cout << "3-harmful items" << endl;
    cout << "4-just quit" << endl;
    cin >> choice;
    return choice;
}

void displayItem(int x);

int main() {
    int whatTheyWant;
    whatTheyWant = set_whatTheyWant();
    
    while(whatTheyWant!=4){
        switch (whatTheyWant) {
            case 1:
                displayItem(1);
                break;
            case 2:
                displayItem(2);
                break;
            case 3:
                displayItem(3);
                break;
                
            
        }
        whatTheyWant = set_whatTheyWant();
        
    }
    
}

void displayItem(int x){
    if (x==1){
        ifstream theFile ("object.txt");
        string name;
        int power;
        
        while (theFile >> name >> power){
            if (power ==0){
                cout << name << ' ' << power << endl;
            }
            
        }
        
    }
    if (x==2){
        ifstream theFile ("object.txt");
        string name;
        int power;
        
        while (theFile >> name >> power){
            if (power >0){
                cout << name << ' ' << power << endl;
            }
            
        }
        
    }
    if (x==3){
        ifstream theFile ("object.txt");
        string name;
        int power;
        
        while (theFile >> name >> power){
            if (power <0){
                cout << name << ' ' << power << endl;
            }
            
        }
        
    }
    
    
    
}







