#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int units;
    double bill, total;
    const double service = 10;

    cout << "Enter electricity units used (kWh): ";
    cin >> units;

    bill = (units <= 50) ? units * 1.50 : 50 * 1.50 + (units - 50) * 2.00;
    total = bill + service;

    cout << fixed << setprecision(2);
    cout << "Energy charge: " << bill << " birr\n";
    cout << "Service charge: " << service << " birr\n";
    cout << "Total bill: " << total << " birr\n";

    return 0;
}
