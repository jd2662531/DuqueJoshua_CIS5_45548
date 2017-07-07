/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 6/26/17
 * Purpose: total sales tax on 95$ purchase with state tax of 6% and country
 *          sales tax of 2%
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
    float spent=95.0,total ; //dollars 
    float tax1=.06, tax2=.02; // tax percentages in state and country 
    
    total=(tax1*spent)+(tax2*spent);
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
            cout<<"total tax =$ "<<total<<endl;
    //Exit stage right!
    return 0;
}

