#include<iostream>
#include<vector>

using namespace std;

# include "TypeOfCars.h"


int main()
{
	vector <Car> Cars;

	Cars.push_back(Hybrid(1, "Bmw", "X5", "White", 2020, 75000, 3.5));

	Cars.push_back(Manual(2, "Toyota", "Prado", "Black", 2021, 88500, 4));

	Cars.push_back(Automatic(3, "Range Rover", "Vogue", "Green", 2022, 150000, 5.5));

	for (size_t i = 0; i < Cars.size(); i++)
	{
		display(Cars[i]);
	}
}

//int main() 
//{
//
//	vector<Car>Cars;
//
//	Cars.push_back(Hybrid (1,"BMW", "X5 ", "white", 2020 ,75000,  3.5));
//
//	Cars.push_back(Manual(2, "TOYOTA", "PRADO", "black",2021, 88500,4));
//
//	Cars.push_back(Automatic(3, "RANGE ROVER ", "VOGUE", "green",2022,150000, 5.5));
//
//
//	for (size_t i = 0; i < Cars.size(); i++)
//	{
//		display(Cars[i]);
//	}
//
//}



