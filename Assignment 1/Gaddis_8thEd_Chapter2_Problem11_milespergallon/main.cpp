/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 6/26/17
 * Purpose: calculate the distance on 1 tank of gas 
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
    float   max=20, //total gas 
            high=28.9, //average miles per gallon on highway
            town= 23.5,//average when driven in down 
            maxtown,
            maxhigh;//max distance when driven in town and highway
            
            maxhigh=max*high;
            maxtown=max*town;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
            cout<<"on 20 gallons of gas, car can go "<<maxhigh<< 
                    " miles when driven only on the highway and "<<maxtown<<
                    " when driven only in town."<<endl;
                    
    //Exit stage right!
    return 0;
}

