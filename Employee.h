#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * \file Employee.h
 * \brief Declaration of the Employee class and its members.
 */

/**
 * \class Employee
 * \brief Represents a general employee with basic attributes.
 */
class Employee
{
private:
  /// Employee ID.
  int ID;

  /// Number of years employed.
  int years;

protected:
  /// Hourly rate of the employee.
  double hourlyRate;

  /// Number of hours worked by the employee.
  float hoursWorked;

public:
  /**
   * \brief Default constructor for Employee.
   */
  Employee();

  /**
   * \brief Parameterized constructor for Employee.
   * \param ID Employee ID.
   * \param years Number of years employed.
   * \param hourlyRate Hourly rate of the employee.
   * \param hoursWorked Number of hours worked.
   */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);

  /**
   * \brief Prints the details of the employee.
   */
  virtual void print();

  /**
   * \brief Calculates the pay of the employee.
   * \return The calculated pay.
   */
  virtual double calculatePay();

  /**
   * \brief Increments years worked and updates hourly rate.
   */
  void anniversary();
};

#endif // EMPLOYEE_H
