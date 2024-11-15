// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	double CGPA = 0;
	double Number_of_Course_Taken;
	double Credit_hours = 0;
	cout << "Enter the Number of the Courses Taken: " << endl;
	cin >> Number_of_Course_Taken;
	double Grade_Point = 0;
	double Semester_Grade_Point = 0;
	double  Course_Credit_Hours=0;
	for (int i = 1; i <= Number_of_Course_Taken; i++) {


		string Course_Name;
		cout << "Enter the Name of the Course: " << i << endl;
		cin >> Course_Name;
		cout << "Enter the Credit Hours of the Course: " << endl;
		cin >> Course_Credit_Hours;
		string Course_Grade;
		cout << "Enter the Grade of the Course (A,B,C,D or F):  " << endl;
		cin >> Course_Grade;
		if (Course_Grade == "A") {
			Grade_Point = 4;
		}
		else if (Course_Grade == "A-") {
			Grade_Point = 3.67;

		}
		else if (Course_Grade == "B+") {
			Grade_Point = 3.33;

		}
		else if (Course_Grade == "B") {
			Grade_Point = 3.0;

		}
		else if (Course_Grade == "B-") {
			Grade_Point = 2.67;

		}
		else if (Course_Grade == "C+") {
			Grade_Point = 2.33;

		}
		else if (Course_Grade == "C") {
			Grade_Point = 2;

		}
		else if (Course_Grade == "C-") {
			Grade_Point = 1.67;

		}
		else if (Course_Grade == "D") {
			Grade_Point = 1;

		}
		else if (Course_Grade == "F") {
			Grade_Point = 0;
		}
		
		Credit_hours += Course_Credit_Hours;
		Semester_Grade_Point += Grade_Point * Course_Credit_Hours;

		CGPA = Semester_Grade_Point / Credit_hours;


	}
	cout << "The Total Credit Hours are: " << Credit_hours << endl;
	/*cout << "The Total Grade Points are: " << Grade_Point << endl;*/
	cout << "Your CGPA (Cumulative Grade Point) is " << CGPA;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
