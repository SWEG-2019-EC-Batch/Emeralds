1. Problem description
​Write a C++ program that reads the electricity units (kWh, a whole number) used in a month. The first 50 units cost 1.50 birr each, and every unit above 50 costs 2.00 birr. A fixed service charge of 10 birr is added. Print the energy charge, the service charge, and the total bill (two decimals) using the conditional operator (?:) 
​2. Problem analysis
​ Input
  ​Electricity units used (whole number, kWh)  
​ Output
  ​Energy charge (birr)  
  ​Service charge (birr)  
  ​Total bill (birr)  
​3. Process (operations)
 1.​Declare variables to hold the input and the results.
 2.​Define the fixed values as constants.
 3.​Print a prompt and read the units used.
 4.​Use the conditional operator (?:) 
 5.​Calculate totalBill
 6.​Print the energy charge, service charge, and total bill with two decimal places.  
4. Design
  1.int units;
    double energyCharge, totalBill;
  2.const int TIER_LIMIT = 50;
    const double RATE_1 = 1.50;
    const double RATE_2 = 2.00;
    const double SERVICE_CHARGE = 10.00;
  3.cout << "Enter electricity units used (kWh): ";
    cin >> units;
  4.energyCharge = (units <= TIER_LIMIT) 
               ? (units * RATE_1) 
               : (TIER_LIMIT * RATE_1 + (units - TIER_LIMIT) * RATE_2);
  5.totalBill = energyCharge + SERVICE_CHARGE;
  6.cout << fixed << setprecision(2);
    cout << "Energy charge  : " << energyCharge << " birr" << endl;
    cout << "Service charge : " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill     : " << totalBill << " birr" << endl;
 
Write the code

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
     
    const int TIER_LIMIT = 50;
    const double RATE_1 = 1.50;
    const double RATE_2 = 2.00;
    const double SERVICE_CHARGE = 10.00;

    int units;
  double energyCharge,totalBill;

    cout << "Enter electricity units used (kWh): ";
    cin >> units;

    energyCharge = (units <= TIER_LIMIT) 
                   ? (units * RATE_1) 
                   : (TIER_LIMIT * RATE_1 + (units - TIER_LIMIT) * RATE_2);
    totalBill = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "Energy charge  : " << energyCharge << " birr" << endl;
    cout << "Service charge : " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill     : " << totalBill << " birr" << endl;

    return 0;
}