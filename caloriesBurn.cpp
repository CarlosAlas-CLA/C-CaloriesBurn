#include<iostream>
#include<string>

using namespace std;

int main() {//Carlos Alas
	/*Ch5 Lab1
Calories Burned
Running on a particular treadmill you burn 3.4 calories per minute. Write a program
that uses a loop to display the number of calories burned after 10, 15, 20, 25, and 30
minutes.
 */
	double calor = 3.4;
	double cal = 0;
	double min = 0;




	do {

		cout << "Enter minutes you run " << endl;

		cin >> min;
		cal = min*calor;

		cout << "You burn " << cal << " calories " << endl;
		min--;

	} while (min <= 30 && min >= 0);



	system("pause");
	return 0;

}