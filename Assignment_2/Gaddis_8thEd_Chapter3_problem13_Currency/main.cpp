/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 6/29/17
 * Purpose:   
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>
 
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float D2Y=98.93, D2E=0.74, yen, euros; // 1dollar= 98.93 yen, 1dollar=0.74 euros 
    float dollars; 
    
    cout<<"enter amount of dollars to convert to yen and euros"<<endl;
    cin>>dollars;
    
    
    yen=dollars*D2Y;
    euros=dollars*D2E;
    
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<dollars<<"$ = "<<setprecision(2)<<fixed<<yen<<" yen = "<<
            setprecision(2)<<fixed<<euros<<" euros"<<endl;

    //Exit stage right!
    return 0;
}

