/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 6/29/17
 * Purpose: Use cin to calculate mpg  
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float tmiles, tgal, mpg; //max miles car can drive on full gas,
                        //max gallons, and miles per gallon 
    cout<<"Enter max distance your car can drive on a full tank of gas"<<endl;
    cin>>tmiles;
    cout<<"Enter total gallons your car can hold"<<endl;
    cin>>tgal;
    mpg=tmiles/tgal;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"your car's miles per gallon is "<<mpg<<endl;
  
    //Exit stage right!
    return 0;
}

