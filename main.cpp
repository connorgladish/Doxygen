#include <iostream>
#include "Employee.h"
#include "Supervisor.h"
#include "Officer.h"

/**
 * \file main.cpp
 * \brief Contains tests for the Employee, Supervisor, and Officer classes.
 */

using namespace std;

/**
 * \brief Runs a series of tests on an Employee or derived object.
 * \param e Reference to an Employee or derived object.
 */
void runEmployeeTests(Employee &e);

int main()
{
  Employee defaultE;
  cout << "Testing Employee default constructor:" << endl;
  runEmployeeTests(defaultE);

  Employee parameterizedE(1248, 2, 15.23, 3);
  cout << "Testing Employee parameterized constructor:" << endl;
  runEmployeeTests(parameterizedE);

  Supervisor defaultS;
  cout << "Testing Supervisor default constructor:" << endl;
  runEmployeeTests(defaultS);

  Supervisor parameterizedS(422, 9, 55.44, 20, 52);
  cout << "Testing Supervisor parameterized constructor:" << endl;
  runEmployeeTests(parameterizedS);

  Officer defaultO;
  cout << "Testing Officer default constructor:" << endl;
  runEmployeeTests(defaultO);

  Officer parameterizedO(2, 94, 10.859, 2, 9000.1);
  cout << "Testing Officer parameterized constructor:" << endl;
  runEmployeeTests(parameterizedO);

  return 0;
}

void runEmployeeTests(Employee &e)
{
  cout << "Initial print():" << endl;
  e.print();
  cout << "Calculated Pay: " << e.calculatePay() << endl;
  cout << "Anniversary Test: ";
  e.anniversary();
  cout << "Final print():" << endl;
  e.print();
}
