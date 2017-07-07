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
    float boy, girl, total;
    float perboy, pergirl;
    
    cout<<"Enter amount of boys in your class"<<endl;
    cin>>boy;
    cout<<"Enter amount of girls in your class"<<endl;
    cin>>girl;
    
    total=boy+girl;
    perboy=boy/total*100;
    pergirl=girl/total*100;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Percentage of girls your class is "<<setprecision(2)<<pergirl<<"%"<<endl;
    cout<<"Percentage of boys your class is "<<setprecision(2)<<perboy<<"%"<<endl;

    //Exit stage right!
    return 0;
}

