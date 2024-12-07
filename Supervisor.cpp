#include "Supervisor.h"
#include <iostream>

/**
 * \file Supervisor.cpp
 * \brief Implementation of the Supervisor class.
 */

using namespace std;

Supervisor::Supervisor()
{
  numSupervised = -1;
}

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised)
    : Employee(ID, years, hourlyRate, hoursWorked)
{
  this->numSupervised = numSupervised;
}

/**
 * \brief Prints the details of the supervisor.
 */
void Supervisor::print()
{
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

/**
 * \brief Calculates the pay of the supervisor.
 * \return The calculated pay.
 */
double Supervisor::calculatePay()
{
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
