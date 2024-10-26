// Chapter4_ShippingCharges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main() {
	double weight, distance, rate, charges;

	// Prompt for package weight
	std::cout << "Enter the weight of the package in kg:";
	std::cin >> weight;

	// Input validation for weight
	if (weight <= 0 || weight > 20) {
		std::cout << "Invalid weight. The package weight must be greater than 0 and less than or equal to 20 kg.\n";
		return 1;
	}

	// Prompt for shipping distance
	std::cout << "Enter the distance to ship in miles:";
	std::cin >> distance;

	// Input validation for distance
	if (distance < 10 || distance > 3000) {
		std::cout << "Invalid distance. The shipping distance must be between 10 and 3000 miles.\n";
		return 1;

	}

	// Determine rate based on weight
	if (weight <= 2) {
		rate = 1.10;
	}
	else if (weight <= 6) {
		rate = 2.20;
	}
	else if (weight <= 10) {
		rate = 3.70;
	}
	else {
		rate = 4.80;
	}

	// Calculate charges based on rate and distance 
	int units = static_cast<int>(distance / 500.0);
	if (distance - (units * 500) > 0) {
		units++; // Round up to cover additional partial unit

	}
	charges = rate * units;

	// Display the charges 
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The shipping charges are $" << charges << "\n";

	return 0;

}

