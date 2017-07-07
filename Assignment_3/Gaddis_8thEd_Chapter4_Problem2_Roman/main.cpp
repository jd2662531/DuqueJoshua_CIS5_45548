/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-05-2017
 * Purpose: Convert numbers to Roman Numeral using switch 
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
    int num;
    cout<<"Enter a number between 1 and 10 and it will be converted to Roman "
            "Numerals"<<endl; 
    cin>>num;
    
    switch (num)
    {
        case 1 : cout<<"1 is I";
                   break; 
        case 2 : cout<<"2 is II";
                   break;        
        case 3 : cout<<"3 is III";
                   break; 
        case 4 : cout<<"4 is IV";
                   break;      
        case 5 : cout<<"5 is V";
                   break;      
        case 6 : cout<<"6 is VI";
                   break;    
        case 7 : cout<<"7 is VII";
                   break;     
        case 8 : cout<<"8 is VIII";
                   break;      
        case 9 : cout<<"9 is IX";
                   break;     
        case 10: cout<<"10 is X";
                   break; 
        default: cout<<"Enter a number between 1 and 10";           
    }        
    
            
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   
  
    //Exit stage right!
    return 0;
}

