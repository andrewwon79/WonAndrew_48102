/*
 * File:   main
 * Author: Andrew Won
 * Created on September 13, 2016, 12:28 PM
 * Purpose: Calculate Average/Mean and Standard Deviation
 */
//System Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

int main(int argc, char** argv) {
    //Declaration of Variables
    int x1,x2,x3,x4,x5;//Input Values
    float avg,stdev;
    
    //Input Values
    cout<<"This program calculates the mean and standard deviation"<<endl;
    cout<<"Input 5 values"<<endl;
    cin>>x1>>x2>>x3>>x4>>x5;
    
    //Process Values -> Map inputs to outputs
    avg=(x1+x2+x3+x4+x5)/5;
    stdev=pow(((x1-avg)*(x1-avg)+(x2-avg)*(x2-avg)+(x3-avg)*(x3-avg)+
            (x4-avg)*(x4-avg)+(x5-avg)*(x5-avg))/4,0.5);
    //Display outputs
    cout<<"The input values = "<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<" "<<endl;
    cout<<"The mean = "<<avg<<endl;
    cout<<"The Standard Deviation = "<<stdev<<endl;
    //Exit Program
    return 0;
}

