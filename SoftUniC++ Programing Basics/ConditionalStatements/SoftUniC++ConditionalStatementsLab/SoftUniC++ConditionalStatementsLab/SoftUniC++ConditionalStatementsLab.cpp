#include <iostream>
#include <math.h>
using namespace std;

int main()
{ 

	int number;
	cin >> number;
	double bonusPoints = 0.0;

	if (number <=100)
	{
		bonusPoints = 5;
	}
	else if ( number > 1000)
	{
		bonusPoints = 0.1 * number;
	}
	else
	{
		bonusPoints = 0.2 * number;
	}

	if (number %2 ==0)
	{
		bonusPoints += 1;
	}
	else if (number %10 == 5)
	{
		bonusPoints += 2;
	}
	cout << bonusPoints << endl;
	cout << number + bonusPoints << endl;





	return 0;
}
//Exercise8
	/*int timeFirst, timeSecond, timeThird;
	cin >> timeFirst >> timeSecond >> timeThird;
	int totalTime = timeFirst + timeSecond + timeThird;

	int minutes = totalTime / 60;
	int seconds = totalTime % 60;

	if (seconds < 10)
	{
		cout << minutes << ":0" << seconds << endl;
	}
	else
	{
		cout << minutes << ":" << seconds << endl;
	}*/
//Exercise7
	/*string figureType;
	cin >> figureType;
	double area = 0.0;
	double pi = 3.14159265359;

	if (figureType == "square")
	{
		double a;
		cin >> a;
		area = a * a;
	}
	else if (figureType == "rectangle")
	{
		double a, b;
		cin >> a >> b;
		area = a * b;

	}else if (figureType == "circle")
	{
		double r;
		cin >> r;
		area = r * r * pi;
	}
	else if (figureType == "triangle")
	{
		double a, h;
		cin >> a >> h;
		area = (a * h) / 2;
	}
	cout.setf(ios::fixed);
	cout.precision(3);
	cout << area << endl;*/
	//Exercise6
	/*double num;
	cin >> num;

	

	if (num <= 10.0)
	{
		cout << "slow" << endl;
	}
	else if (num <= 50.0)
	{
		cout << "average" << endl;
	}
	else if (num <= 150.0)
	{
		cout << "fast" << endl;
	}
	else if (num <= 1000.0)
	{
		cout << "ultra fast" << endl;
	}
	else
	{
		cout << "extremely fast" << endl;
	}*/
//Exercise5
	/*int num;
	cin >> num;
	if (num < 100)
	{
		cout << "Less than 100" << endl;
	}
	else if ( num <= 200)
	{
		cout << "Between 100 and 200" << endl;
	}
	else
	{
		cout << "Greater than 200" << endl;
	}*/
	//Exercise4
	/*string password;
	cin >> password;

	if (password == "s3cr3t!P@ssw0rd")

	{
		cout << "Welcome" << endl;

	}
	else
	{
		cout << "Wrong password!" << endl;
	}*/

  //Exercise3
	/*int num;
	cin >> num;

	if (num % 2 == 0)
	{
		cout << "even" << endl;
	}
	else
	{
		cout << "odd" << endl;
	}*/
//Exercise2
	/*int num1, num2;
	cin >> num1 >> num2;

	if (num1 > num2)
	{
		cout << num1 << endl;
	}
	else
	{
		cout << num2 << endl;
	}*/

//Exercise1
	/*double grade;
	cin >> grade;
	if ( grade >= 5.50)
	{
		cout << "Excellent!" << endl;
	}*/
