#include <iostream>
#include <iomanip>
using namespace std;
// variable declaration
double assignment,midterm,final, Total_result=0.0;

int main() 
{
    //recieve input 
    cout << "Enter your assignment result out of 100:";
    
    cin>> assignment ;
    
     cout << "Enter your midterm result out of 100:";
     
     cin >> midterm;
     
       cout << "Enter your final result out of 100:"; 
       
       cin>> final;
  //calculate the inputs accordingly using arthimatic operation     
assignment= assignment *0.2;
midterm= midterm*0.3;
final=final*0.5;
Total_result= assignment + midterm+ final ;
// set precision since it is asked for one decimal place
cout << fixed << setprecision(1);
// print the calcuated results
cout<< "Assignment (20%) :  "<< assignment <<endl;

cout<< "Midterm (30%):  "<< midterm <<endl;

cout<<"Final (50%):  " << final<<endl;

cout<<"Total_result:  "<<Total_result<<endl;
// confirm if has passed or failed using conditional operator

cout << "Status:" << (Total_result >=50 ? "Pass": "Fail")<<endl;
//finish program
 return 0 ;
 
}
