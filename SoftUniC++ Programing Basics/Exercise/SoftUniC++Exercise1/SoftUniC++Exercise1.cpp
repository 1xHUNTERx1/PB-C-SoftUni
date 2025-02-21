
#include <iostream>
#include <math.h>
using namespace std;

int main()
{	
    return 0;
}
 //Exercise9 "Fish Tank"
	/*int lenght;
	cin >> lenght;
	int width;
	cin >> width;
	int heigh;
	cin >> heigh;
	int percents;
	cin >> percents;
	double percentsP = percents / 100.000;

	double total = lenght * width * heigh * 0.001;
	double neededLitters = total * (1 - percentsP);
	
	
	cout << neededLitters << endl;*/
 //Exercise8 "Basketball Training"
	/*int yearlyFee;
	cin >> yearlyFee;

	double sneakersCost = yearlyFee - (yearlyFee * 0.4);
	double outfitCost = sneakersCost - (sneakersCost * 0.2);
	double ballCost = (1.0 / 4.0) * outfitCost;
	double basketballAccsesories = (1.0 / 5.0) * ballCost;

	double totalCost = yearlyFee + sneakersCost + outfitCost + ballCost + basketballAccsesories;

	cout << totalCost << endl;*/
//Exercise7 "FoodDeivery"
	/*int chickenMenu;
	cin >> chickenMenu;
		double chickenMenuPrice = chickenMenu * 10.35;

	int fishMenu;
	cin >> fishMenu;
		double fishMenuPrice = fishMenu * 12.40;

	int vegMenu;
	cin >> vegMenu;
		double vegMenuPrice = vegMenu * 8.15;

		double totalMenuPrice = chickenMenuPrice + fishMenuPrice + vegMenuPrice;

		double desertPrice = (totalMenuPrice * 0.2);

		double totalPrice = totalMenuPrice + desertPrice + 2.5;

		cout << totalPrice << endl;*/
//Exercise6 "Repainting"
	/*int plastic;
	cin >> plastic;

	plastic = plastic + 2;

	double  paint;
	cin >> paint;
	
	paint = paint + (paint * 0.1);

	int paintThinner;
	cin >> paintThinner;
	int workHours;
	cin >> workHours;
	
	
	
	double pricePlastic = plastic * 1.50;
	double pricePaint = paint * 14.50;
	double pricePaintThinner = paintThinner * 5.00;
	double bagsPrice = 0.40;

	double totalCost = pricePlastic + pricePaint + pricePaintThinner + bagsPrice;
	double hourSalary = totalCost * 0.3;
	double workerSalary = workHours * hourSalary;



	cout << totalCost + workerSalary << endl;*/
//Exercise 5 "School Suplies"
    /*int packPencils;
    int packMarkers;
    int cleanerLiters;
	int discountPercentage;
		
		cin >> packPencils >> packMarkers >> cleanerLiters >> discountPercentage;

	double priceForPens = packPencils * 5.80;
	double priceForMarkers = packMarkers * 7.20;
	double priceForCleaner = cleanerLiters * 1.20;

	double totalPrice = priceForPens + priceForMarkers + priceForCleaner;
	double discount = totalPrice * (discountPercentage /  100.0);
	double finalCost = totalPrice - discount;
	

    cout << finalCost << endl;*/

//Exercise 4 "Vacation Books List"
	/*double pages;
	cin >> pages;

	int pagesReadPerHour;
	cin >> pagesReadPerHour;

	double days;
	cin >> days;

	
	cout.setf(ios::fixed);
	cout.precision(0);
	
	cout << pages / pagesReadPerHour / days << endl;*/
//Exercise 3 "Deposite Calculator"
	/*double money;
	cin >> money;

	int months;
	cin >> months;

	double anualInterestRate;
	cin >> anualInterestRate;

	cout << money + months * (money * anualInterestRate / 100 / 12) << endl;*/

//Exercise 2 "Radins to Degrees"
	//Izchislqvane na radiani
	/*double pi = 3.14159265359;
	cout << round(pi) << endl;

	double radian;
	cin >> radian;

	double degree = radian * 180 / pi;
	cout << round(degree) << endl;*/

//Exersice 1 "USD to BGN"
	// Set the precision of the output to 2 decimal places
	//cout.setf(ios::fixed);
	//cout.precision(2);
	// Read the input

	//double usd;
	//cin >> usd;
	//double bgn = usd * 1.79549;
	//cout << bgn << endl;
