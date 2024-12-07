## Doxygen Employee Assignment
# CJ Gladish
# Date: December 6, 2024
---
## Project Overview:
This project demonstrates the use of Doxygen to document and generate HTML-based reference materials for a C++ Employee Management System. The system includes a base Employee class and derived classes Officer and Supervisor.
---
Doxygen automatically extracts comments and generates detailed documentation for:

- Classes
- Methods
- Member variables
- File structure
---
## Features Documented:
# Employee Class:

- Constructor (default and parameterized)
- print - Displays employee details.
- calculatePay - Computes employee pay.
- anniversary - Updates years worked and adjusts hourly rate.
---
# Officer Class:

- Extends Employee with an evilness attribute.
- Overrides print and calculatePay.
---
# Supervisor Class:

- Extends Employee with numSupervised attribute.
- Overrides print and calculatePay.
---