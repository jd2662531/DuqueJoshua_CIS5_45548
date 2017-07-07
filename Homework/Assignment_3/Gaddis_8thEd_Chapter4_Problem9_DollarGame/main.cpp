/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-05-2017
 * Purpose: User must try to obtain a dollar by adding up coins
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
    float p=.01, n=.05, d=.10, q=.25, dollar=1.00;//Pennies,
                                                //nickles, dimes, quarters 
    float ap,an,ad,aq, total; // amount of all the different type of coins 
    
    cout<<"Enter an amount of pennies, nickels, dimes, and quarters to add up to a dollar"
            " and I will tell you if the amount equals a dollar, "
            "is over, or below a dollar."<<endl;
    
    cout<<"amount of pennies = ";
    cin>>ap;
    cout<<"amount of nickels = ";
    cin>>an;
    cout<<"amount of dimes = ";
    cin>>ad;
    cout<<"amount of quarters= ";
    cin>>aq;
            
    total=(p*ap)+(n*an)+(d*ad)+(q*aq);
    cout<<"Your total is $"<<total<<endl;
    
    if(total<dollar)
        cout<<"The amount entered is less than $"<<dollar<<endl;
    else if(total>dollar)
        cout<<"The amount entered is more than $"<<dollar<<endl;
    else
        cout<<"CONGRATULATIONS! The amount entered is = $"<<dollar<<endl;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   
  
    //Exit stage right!
    return 0;
}

