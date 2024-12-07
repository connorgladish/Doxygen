#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * \file Officer.h
 * \brief Declaration of the Officer class, derived from Employee.
 */

/**
 * \class Officer
 * \brief Represents an officer with additional attributes.
 */
class Officer : public Employee
{
private:
  /// Evilness level of the officer.
  double evilness;

public:
  /**
   * \brief Default constructor for Officer.
   */
  Officer();

  /**
   * \brief Parameterized constructor for Officer.
   * \param ID Employee ID.
   * \param years Number of years employed.
   * \param hourlyRate Hourly rate of the officer.
   * \param hoursWorked Number of hours worked.
   * \param evilness Evilness level of the officer.
   */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);

  /**
   * \brief Prints the details of the officer.
   */
  void print();

  /**
   * \brief Calculates the pay of the officer.
   * \return The calculated pay.
   */
  double calculatePay();
};

#endif // OFFICER_H
