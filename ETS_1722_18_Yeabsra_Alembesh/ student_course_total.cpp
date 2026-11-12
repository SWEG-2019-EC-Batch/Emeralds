#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double assignment, mid, finalmark, total;
    const double passmark = 50;

    cout << "Enter assignment mark (out of 100): ";
    cin >> assignment;
    cout << "Enter midterm mark (out of 100): ";
    cin >> mid;
    cout << "Enter final exam mark (out of 100): ";
    cin >> finalmark;

    total = assignment * 0.20 + mid * 0.30 + finalmark * 0.50;

    cout << fixed << setprecision(1);
    cout << "Course total: " << total << '\n';
    cout << "Result: " << (total >= passmark ? "Pass" : "Fail") << '\n';

    return 0;
}
