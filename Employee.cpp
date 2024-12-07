#include "Employee.h"
#include <iostream>

/**
 * \file Employee.cpp
 * \brief Implementation of the Employee class.
 */

using namespace std;

Employee::Employee()
{
  ID = years = hoursWorked = hourlyRate = -1;
}

Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked)
{
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

/**
 * \brief Prints the details of the employee.
 */
void Employee::print()
{
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

/**
 * \brief Increments years worked and updates hourly rate.
 */
void Employee::anniversary()
{
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

/**
 * \brief Calculates the pay of the employee.
 * \return The calculated pay.
 */
double Employee::calculatePay()
{
  return hourlyRate * hoursWorked;
}
