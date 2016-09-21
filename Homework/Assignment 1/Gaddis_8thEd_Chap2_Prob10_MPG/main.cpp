 /*
 * File:   main.cpp
 * Author: Andrew Won
 * Created on September 20, 2016, 6:41 PM
 * Purpose: Find the MPG of a car
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
    float miles=375;    //Amount of miles car can drive on 15 gallons
    float gallons=15;   //Amount that car can hold
    float mpg;
    
    //Process the input by mapping to the output
    mpg=miles/gallons;
     
    //Display information
    cout<<"The number of miles the car can drive on one gallon of gas = "<<mpg<<endl;
     
     //Return from the function
    return 0;
}

