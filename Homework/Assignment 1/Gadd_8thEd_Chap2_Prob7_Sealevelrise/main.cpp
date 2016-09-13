/* 
 * File:   main
 * Author: Andrew Won
 * Created on September 13, 2016, 11:56 AM
 * Purpose:  To calculate when owners in Riverside will have beach front properties
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVMMFT=304.8; //Conversion from millimeters to feet from Google
const float CNVMMM=1000;//Conversion from millimeters
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here with initialization
    float rate=1.5;// Sea level rise rate in mm per year
    int nYear1=5, nYear2=7, nYear3=10;//Years to calculate rise
    float rise1,rise2,rise3;//Solutions for the 3 years from above
    int nYrBch;//Number of years before your home is beach front property
    float elevRiv=860;// Elevation of Riverside in feet according to wikipedia
    
    
    //Process/Calculations Here
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CNVMMFT;
    //Output Located Here
    
    cout<<"The rate of sea level rise = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<nYear1<<" years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"After "<<nYear2<<" years the sea will rise "<<rise2<<" mm"<<endl;
    cout<<"After "<<nYear3<<" years the sea will rise "<<rise3<<" mm"<<endl;
    cout<<" At this rate Riverside won't have beach front property for ";
    cout<<nYrBch<<" years"<<endl;
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<" meters"<<endl;
    //Exit
    return 0;
}

