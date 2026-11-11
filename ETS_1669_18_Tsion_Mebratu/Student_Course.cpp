/*
      Student course total

 INPUT:
   - assignment mark (out of 100)
   - midterm mark (out of 100)
   - final mark (out of 100)

 PROCESS:
   1. Read the three marks.
   2. total = 20% of assignment + 30% of midterm + 50% of final
   3. Use the conditional operator to compare total with the
      pass mark (50): Pass if total >= 50, otherwise Fail.

 OUTPUT:
   - course total (one decimal place)
   - the word Pass or Fail

 TEST DATA:
   80 60 70 -> 69.0 Pass
   40 30 45 -> 39.5 Fail
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    int assignment, midterm, finalExam;

    cout << "Enter assignment, midterm and final marks (each out of 100): ";
    cin >> assignment >> midterm >> finalExam;

    double total = static_cast<double>(assignment) * ASSIGNMENT_WEIGHT
                 + static_cast<double>(midterm) * MIDTERM_WEIGHT
                 + static_cast<double>(finalExam) * FINAL_WEIGHT;

    cout << fixed << setprecision(1);
    cout << "Total: " << total << endl;
    cout << "Result: " << (total >= PASS_MARK ? "Pass" : "Fail") << endl;

    return 0;
}