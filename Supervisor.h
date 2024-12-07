#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * \file Supervisor.h
 * \brief Declaration of the Supervisor class, derived from Employee.
 */

/**
 * \class Supervisor
 * \brief Represents a supervisor with additional attributes.
 */
class Supervisor : public Employee
{
private:
  /// Number of employees supervised by the supervisor.
  int numSupervised;

public:
  /**
   * \brief Default constructor for Supervisor.
   */
  Supervisor();

  /**
   * \brief Parameterized constructor for Supervisor.
   * \param ID Employee ID.
   * \param years Number of years employed.
   * \param hourlyRate Hourly rate of the supervisor.
   * \param hoursWorked Number of hours worked.
   * \param numSupervised Number of employees supervised.
   */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);

  /**
   * \brief Prints the details of the supervisor.
   */
  void print();

  /**
   * \brief Calculates the pay of the supervisor.
   * \return The calculated pay.
   */
  double calculatePay();
};

#endif // SUPERVISOR_H
