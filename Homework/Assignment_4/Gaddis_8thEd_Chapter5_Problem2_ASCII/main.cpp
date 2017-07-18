/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-10-17
 * Purpose: Display the ASCII code for values 0-127 
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    char a;
    for(int a=0; a<=127; a++)
    {
        if(a % 16==0 )
        cout<<(char)a<<endl;
        
    }
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}

  