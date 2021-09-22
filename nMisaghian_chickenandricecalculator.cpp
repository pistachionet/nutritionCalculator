
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main() {
	
	//*CHICKEN BREAST DECLARITIVES

	double totalBoz;
	
	const double B_CALORIES = 46.78;
	// total chicken breast * calories per oz

	const double B_PROTEIN = 8.8;
	// total chicken breast * 8.8G/Protein/OZ

	const double B_CARBS =  0;
	// total chicken breast * 0 carbs per oz

	const double B_FATS =  1.021;
	// total chicken breast * 1.021 fat per oz

	const double B_FIBER =  0;
	// total chicken breast * 0 fiber per oz

	const double B_SODIUM =  21;
	// total chicken breast * 21mg of salt per oz

	const double B_SUGAR =  0;
	// total chicken breast * 0mg of sugar per oz
	
	
	
	//*CHICKEN TENDERLOIN DECLARITIVES 
	
	double totalToz;

	const double T_CALORIES = 38.6;
	// total chicken breast * calories per oz

	const double T_PROTEIN = 7.1;
	// total chicken breast * 8.8G/Protein/OZ

	const double T_CARBS = 0;
	// total chicken breast * 0 carbs per oz

	const double T_FATS = .8501;
	// total chicken breast * 1.021 fat per oz

	const double T_FIBER = 0;
	// total chicken breast * 0 fiber per oz

	const double T_SODIUM = 14.742;
	// total chicken breast * 21mg of salt per oz

	const double T_SUGAR = 0;
	// total chicken breast * 0mg of sugar per oz


	//*DECLARITIVES

	int choice;
	//selection for either chicken breast or chicken tenderloins
	

	cout << "Good Day Sir.\n" << "Will we be calculating the macros for 'Chicken Breast' Or 'Chicken Tenderloins' this evening? \nFor my convenience please let me know by either pressing 1 for 'Chicken Breast' or 2 for 'Tenderloin' " << endl;
	cout << "Or press '3' to void this section and procceed to macro and micro calculations for 'Cooked White Rice'" << endl;

	cin >> choice;

	switch (choice)
	{



	case 1:

		cout << "Chicken Breast\n" << "Oz(s): " << '\n';

		cin >> totalBoz;
		
		cin.ignore();

		cout << fixed << setprecision(2) << endl;

		cout << "Splendid! Hope you enjoyed yourself sir. " << endl;

		cout << "\nCalories: " << B_CALORIES * totalBoz << endl;

		cout << "Protein: " << B_PROTEIN * totalBoz << endl;

		cout << "Carbohydrates: " << B_CARBS * totalBoz << endl;

		cout << "Fats: " << B_FATS * totalBoz << endl;

		cout << "Fiber: " << B_FIBER * totalBoz << endl;

		cout << "Sodium: " << B_SODIUM * totalBoz << endl;

		cout << "Sugar: " << B_SUGAR * totalBoz << endl;



	break;





	case 2:


		cout << "Chicken Tenderloin\n" << "Oz(s): ";

		cin >> totalToz;

		cout << fixed << setprecision(2);

		cout << "Splendid! Hope you enjoyed yourself sir. " << endl;

		cout << "\nCalories: " << T_CALORIES * totalToz << endl;

		cout << "Protein: " << T_PROTEIN * totalToz << endl;

		cout << "Carbohydrates: " << T_CARBS * totalToz << endl;

		cout << "Fats: " << T_FATS * totalToz << endl;

		cout << "Fiber: " << T_FIBER * totalToz << endl;

		cout << "Sodium: " << T_SODIUM * totalToz << endl;

		cout << "Sugar: " << T_SUGAR * totalToz << endl;


	break;


	case 3:
		
		cout << "Im transferring you over to rice calcuations." << endl;

		break;


	default:

		cout << "I'm terribly sorry, though I am only able to currently process data inputs for values in correspondence to '1' and '2' for chicken calculations. Please launch me again if I am of use to you!" << endl;


		break;

		
	}


	//White Rice Calculator

//RICE Measurments are all in 1oz figures
	const double RICE_CALORIES = 37;
	const double RICE_PROTEIN = .67;
	const double RICE_CARBOHYDRATES = 8.14;
	const double RICE_FAT = .05;
	const double RICE_SODIUM = .3;
	const double RICE_FIBER = .11;
	const double RICE_SUGAR = .014;

	//Rice Declaritives
	int riceSelect;
	double riceOz;

		//Intro to Rice Calculator
		
	cout << '\n' <<"White Rice Calculator? " << "I would be more than happy to give you an estimate." << endl;

	cout << '\n' << "1. Yes" << '\n' << "2. No" << endl;

	cin >> riceSelect;

	switch (riceSelect)

	{

	case 1:

		cout << "\nAwesome! Hope it was yummy :) " << '\n' << "How much cooked white rice did you have sir?\n";

		cout << "White Rice\n" << "Oz(s): ";

		cin >> riceOz;

		cout << "\nWonderful!" << endl;

		cout << fixed << setprecision(2);

		//All rice calculations 

		cout << "\nCalories: " << RICE_CALORIES * riceOz << endl;

		cout << "Protein: " << RICE_PROTEIN * riceOz << endl;

		cout << "Carbohydrates: " << RICE_CARBOHYDRATES * riceOz << endl;

		cout << "Fats: " << RICE_FAT * riceOz << endl;

		cout << "Fiber: " << RICE_FIBER * riceOz << endl;

		cout << "Sodium: " << RICE_SODIUM * riceOz << endl;

		cout << "Sugar: " << RICE_SUGAR * riceOz << endl;

		cout << "\nRemember to have a marvelous day!\n" << endl;

		break;


	case 2:

		cout << "\nRemember to have a marvelous day!\n" << endl;

		break;



	default:

		cout << "Please input data that is within my current parameters please." << endl;

		break;
	}
	
	

	//Hold the console window open till exited out
	system("pause");

	return 0;

}




