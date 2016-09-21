 /*
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on August 30, 2016, 11:50 AM
 * Purpose: First Program Hello World
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
     short a,b,c;
     
    //Initialize or input values
     a=2;
     b=3;
     
    //Process the input by mapping to the output
     c=a+b;
     
    //Display information
     cout<<"Hello World -> First Program"<< endl;
     cout<<a<<" + "<<b<<" = "<<c<<endl;
     
     //Return from the function
    return 0;
}

