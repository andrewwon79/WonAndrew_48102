/* 
   File:   main
   Author: Andrew Won
   Created on September 20, 2016, 8:43 PM
   Purpose:  To calculate amount of acres in a land
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
    float acre=43560;    //how much square feet is in an acre
    float land=391876;   //how much land there is
    float totacre;  //total acres in the tract of land
    //Input values
    totacre=land/acre;  //The amount of acres in the tract of land
    
    //Display Output
    cout<<"The amount of acres in the tract of land is "<<totacre<<endl;
    //Exit Program
    return 0;
}