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
    float t1,t2,t3,t4,t5, average; //test scores of five different test and 
                                   //average
    cout<<"Enter test scores of five different test seperated by a space"<<endl;
    cin>>t1>>t2>>t3>>t4>>t5; //cin test scores
    average=(t1+t2+t3+t4+t5)/5; // calculate average 
            
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Your test score average is "<<setprecision(1)<<fixed<<average<<endl;
    //Exit stage right!
    return 0;
}

