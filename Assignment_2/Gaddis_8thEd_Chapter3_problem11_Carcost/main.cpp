/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 6/29/17
 * Purpose:   
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float mtotal, atotal, loan, insur, gas, oil, tires, maint; //cost 
    
    cout<<"Enter the monthly cost of the following in regards to car expenses"
            <<endl;
    cout<<"monthly loan payment = $";
    cin>>loan;
    cout<<"monthly insurance = $";
    cin>>insur;
    cout<<"monthly gas cost = $";
    cin>>gas;
    cout<<"monthly oil cost =$";
    cin>>oil;
    cout<<"monthly tire cost =$";
    cin>>tires;
    cout<<"monthly maintence cost =$";
    cin>>maint;
    
    mtotal=loan+insur+gas+oil+tires+maint;
    atotal=12*mtotal;
    //Initialize variables
    
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Your total monthly expenses for your vehicle is $"<<mtotal<<endl;
    cout<<"Your total annual expenses for your vehicle is $"<<atotal<<endl;
    
    //Exit stage right!
    return 0;
}

