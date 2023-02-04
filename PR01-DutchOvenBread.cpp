/*
  Programmer  : Kevin Camacho
  Date        : 9/21/2022
  Description : This program prompts the user for their name and number Of Dutch Oven Breads they wish to make. The program calculates and outputs the ingredients list.
*/

#include <iostream>
#include <iomanip>

int main() {

  // Declare Constants
  const int water = 2.00, yeast = 1.00, flour = 4.00, oil = 1.00,
            fColumn = 15, sColumn = 1, tColumn = 7, lColumn = 8;
  // Declare Variables
  double salt = 0.50, tWater, tYeast, tFlour, tOil, tSalt, bread;
  std::string name;

  // Input
  std::cout << "Enter your full name chef: ";
  getline(std::cin, name, '\n');

  std::cout << "\nHow many breads do you wish to make: ";
  std::cin >> bread;
  std::cin.ignore(100, '\n');
  
  // Processing
  tWater = bread * water;
  tYeast = bread * yeast;
  tFlour = bread * flour;
  tSalt = bread * salt;
  tOil = bread * oil;
  
  // Output
  std::cout << "\nChef " << name << ", for your Dutch Oven Bread recipe for " << bread << " bread(s) you will need:\n";

  std::cout << std::fixed << std::setprecision(2);
  
  std::cout << std::setw(fColumn) << std::left << "Water" 
            << std::setw(sColumn) << std::right << ":" 
            << std::setw(tColumn) << tWater 
            << std::setw(lColumn) << "(cups)\n";
  
  std::cout << std::setw(fColumn) << std::left << "Dry Yeast" 
            << std::setw(sColumn) << std::right << ":"
            << std::setw(tColumn) << tYeast 
            << std::setw(lColumn) << "(pcks)\n";

  std::cout << std::setw(fColumn) << std::left << "Flour" 
            << std::setw(sColumn) << std::right << ":" 
            << std::setw(tColumn) << tFlour 
            << std::setw(lColumn) << "(cups)\n";
  
  std::cout << std::setw(fColumn) << std::left << "Kosher Salt" 
            << std::setw(sColumn) << std::right << ":" 
            << std::setw(tColumn) << tSalt 
            << std::setw(lColumn) << "(tspn)\n";
  
  std::cout << std::setw(fColumn) << std::left << "Olive Oil" 
            << std::setw(sColumn) << std::right << ":" 
            << std::setw(tColumn) << tOil 
            << std::setw(lColumn) << "(tspn)\n" 
            << std::endl;

  return 0;
}