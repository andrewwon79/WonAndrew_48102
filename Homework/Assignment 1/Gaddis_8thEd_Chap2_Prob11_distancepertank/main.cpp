/* 
   File:   main
   Author: Andrew Won
   Created on September 16, 2016, 8:32 PM 
   Purpose:  Calculate how many miles can a car go on one tank of gas
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
    float tank=20;      //how many gallons are in one tank
    float city=23.5;    //how many mpg car gets in city
    float high=28.9;    //how many mpg car gets in highway
    float dstCity;      //how many miles car can drive in city on one tank of gas
    float dstHigh;      //how many miles car can drive in highway on on tank of gas
          
    //Input values
    dstCity=tank*city;  //distance traveled in city
    dstHigh=tank*high;  //distnace traveled in highway
    
    //Display Output
    cout<<"The distance the car can travel on one tank of gas in the highway is "<<dstHigh<<"miles"<<endl;
    cout<<"The distance the car can travel on one tank of gas in the city is "<<dstCity<<"miles"<<endl;
    
    //Exit Program
    return 0;
}