#include "Officer.h"
#include <iostream>

/**
 * \file Officer.cpp
 * \brief Implementation of the Officer class.
 */

using namespace std;

Officer::Officer()
{
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness)
    : Employee(ID, years, hourlyRate, hoursWorked)
{
  this->evilness = evilness;
}

/**
 * \brief Prints the details of the officer.
 */
void Officer::print()
{
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

/**
 * \brief Calculates the pay of the officer.
 * \return The calculated pay.
 */
double Officer::calculatePay()
{
  return (hourlyRate + evilness) * hoursWorked;
}
