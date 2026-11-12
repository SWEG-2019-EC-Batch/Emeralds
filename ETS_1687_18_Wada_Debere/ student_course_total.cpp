1.problem description
Taking midterm, assignment and final mark to calculate the total mark as 20%of assignment mark, 30%of midterm mark and 50% of final mark then using it to decide the status and print.

2.Problem analysis
Input
 Assignment, midterm,and final marks each out of 100.
Output
 The total mark with one desimal  place and weather the student pass or fail.

3.Process
 1.Declaring the data type jolds the values.
 2.Defining constants.
 3.Print the prompt and read inputs.
 4.Calculate the weighted total.
 5.Use the conditional operator (?:) to decide the status.
 6.Print the total with one decimal place followed by pass or fail. 

4. Design the program 
1. For the assignment , midterm, final,and total marks we can use double datatype since can have a decimal while for the statu s we use string because it contains text.
double  assignment, midterm, final, total mark;
 string  status;
2. const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_SCORE = 50.0;
3. cout << "Enter assignment, midterm, and final marks: ";
     cin >> assignment >> midterm >> finalMark;
4. total = (assignment * ASSIGNMENT_WEIGHT) + (midterm * MIDTERM_WEIGHT) + (finalMark * FINAL_WEIGHT);
 5. status = (total mark>= PASS_SCORE) ? "Pass" : "Fail";
 6. cout << fixed << setprecision(1);
     cout << "Total  : " << total << endl;
     cout << "Status : " << status << endl;

5. Write the code

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_SCORE = 50.0;

    double assignment, midterm, final, total;
    string condition;

    cout << "Enter assignment, midterm, and final marks: ";
    cin >> assignment >> midterm >> final; 

    total mark= (assignment * ASSIGNMENT_WEIGHT) + (midterm * MIDTERM_WEIGHT) + (final* FINAL_WEIGHT);
    condition = (total mark >= PASS_SCORE) ? "Pass" : "Fail";

    cout << fixed << setprecision(1);
    cout << "Total mark  : " << total << endl;
    cout << "Condition : " << status << endl;

    return 0;
}
 
