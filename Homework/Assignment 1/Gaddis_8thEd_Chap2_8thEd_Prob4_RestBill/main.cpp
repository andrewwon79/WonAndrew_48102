/* 
   File:   main
   Author: Andrew Won
   Created on September 17, 2016, 4:43 PM
   Purpose: Find the price of a meal with tax and with tip
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float meal=88.67;       //Price of meal
    float tax=.0675;        //Tax percent
    float tip=.2;           //Tip percent
    float mealtax;          //price of meal with tax
    float totax;            //how much tax there is
    float totip;            //how much you should tip
    float TOTAL;            //Price of entire meal with everything
    
    //Input values
    
    totax=meal*tax;         //price of the tax
    mealtax=totax+meal;     //meal with the tax included
    totip=mealtax*tip;      //the tip you put in
    TOTAL=totip+meal+totax; //price of whole meal with everything
    
    //Display Output
    cout<<"The meal cost = $"<<meal<<endl;
    cout<<"The tax for the meal is = $"<<totax<<endl;
    cout<<"The tip for the meal is = $"<<totip<<endl;
    cout<<"The cost of the entire meal is = $"<<TOTAL<<endl;

    //Exit Program
    return 0;
}