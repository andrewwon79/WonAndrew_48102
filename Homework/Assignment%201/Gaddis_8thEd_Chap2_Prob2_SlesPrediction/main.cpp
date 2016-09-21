 /*
 * File:   main.cpp
 * Author: Andrew Won
 * Created on September 20, 2016, 6:41 PM
 * Purpose: Find the sales tax on a 95$ purchase
 */
 //System libraries
 #include <iostream> //Standard Input-Output Library
using namespace std; //Most system libraries under the standard name-space
     
//User Libraries
     
//Global Constants

//Function Prototypes
     
//Execution Begin Here
int main(int argc, char** argv) {
    //Declare variables
    float stock=750;    //the amount of stock bought
    float stockpr=35;   //the price of one stock
    float percom=.02;    //The percent of commission
    float comish;       //the commission
    float PrNoCom;      //price without commission
    float PrWCom;       //Price with commission
    
    //Process the input by mapping to the output
    PrNoCom=stock*stockpr;  //The amount without commission
    
    comish=PrNoCom*percom;  //The amount of commission
    
    PrWCom=PrNoCom+comish;  //The total amount with commission
    
     
    //Display information
    cout<<"The total price of the stock without commission = "<<"$"<<PrNoCom<<endl;
    cout<<"The amount of commission = "<<"$"<<comish<<endl;
    cout<<"The total price of the stock with commission = "<<"$"<<PrWCom<<endl;
     
     //Return from the function
    return 0;
}

