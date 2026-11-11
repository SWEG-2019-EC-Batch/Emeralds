/*
      Electricity bill

 INPUT:
   - units of electricity used in a month (kWh, whole number)

 PROCESS:
   1. Read the units.
   2. firstUnits = smaller of (units, 50)     -> charged at 1.50 birr
   3. extraUnits = units above 50, else 0     -> charged at 2.00 birr
      (steps 2 and 3 use the conditional operator)
   4. energy charge = firstUnits * 1.50 + extraUnits * 2.00
   5. total bill = energy charge + 10 birr service charge

 OUTPUT:
   - energy charge (two decimals)
   - service charge (two decimals)
   - total bill (two decimals)

 TEST DATA:
   80 units -> energy 135.00, total 145.00
   30 units -> energy 45.00, total 55.00
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int FIRST_BLOCK = 50;
    const double FIRST_RATE = 1.50;
    const double NEXT_RATE = 2.00;
    const double SERVICE_CHARGE = 10.0;

    int units;

    cout << "Enter units used (kWh): ";
    cin >> units;

    int firstUnits = (units < FIRST_BLOCK ? units : FIRST_BLOCK);
    int extraUnits = (units > FIRST_BLOCK ? units - FIRST_BLOCK : 0);

    double energyCharge = static_cast<double>(firstUnits) * FIRST_RATE
                        + static_cast<double>(extraUnits) * NEXT_RATE;
    double total = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "Energy charge: " << energyCharge << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill: " << total << " birr" << endl;

    return 0;
}