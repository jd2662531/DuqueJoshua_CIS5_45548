/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-17-17
 * Purpose:  Coin toss simulation
 */

//System Libraries Here
#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime>   //for the time function
using namespace std;

//Function Prototypes
int ct(int);

//Program execution begins here
int main(int argc, char** argv) {
    //set the seed
    unsigned seed = time(0);    //set the seed
    srand(seed);                //generate new random number   
    
    //Declare Variables
    int toss, heads, tails, total, number;
    
    //Input values
    cout << "How many times do you want to flip the coin: ";
    cin >> toss;
    
    //Output values
    for(int i=1; i >= toss; i++){
        cout<<ct(number);
         
    }
    
     
    
    //Exit stage right!
    return 0;
}

int ct(int number)
{
            
          int result = rand()%2+1;
          if (result==1)
           cout<<"heads"<<endl;
          else
           cout<<"tails"<<endl;   
          return result;
}

     
  
  