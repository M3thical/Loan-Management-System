# Loan Management System

This is a simple C++ program that simulates a loan management system. It uses two main classes: `Loan` and `ID`. The program allows users to create loan objects with unique IDs, set loan details, and display loan information. This project was developed as part of a learning exercise to practice object-oriented programming (OOP) concepts, including class composition, constructors, and method implementation.

## Table of Contents
1. [Project Description](#project-description)
2. [Purpose of Learning](#purpose-of-learning)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Features](#features)

## Project Description

The **Loan Management System** program creates loan objects that contain:
- A unique `ID` composed of three integer parts.
- The loan amount.
- The interest rate.
- The loan term (in months).

This program demonstrates object-oriented programming (OOP) principles like encapsulation and class composition. The `Loan` class contains an `ID` object, showing how one class can be composed within another. The user can initialize loans with default values, set values manually, and display the details of loans.

## Purpose of Learning

This project was designed to help solidify my understanding of:
- **Object-Oriented Programming**: Creating and interacting with classes and objects.
- **Class Composition**: Using one class (`ID`) as a member of another class (`Loan`).
- **Constructors and Methods**: Implementing and utilizing constructors to initialize objects and creating methods to interact with object data.
- **Encapsulation**: Using private data members and public methods to manage data access and modification.
- **User Input/Output**: Practicing input handling and displaying results in a structured format.

By working on this project, I gained a deeper understanding of how to structure programs using OOP principles and how to design systems that mimic real-world processes like loan management.

## Installation

To run this program on your computer, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/M3thical/loan-management-system.git
    ```

2. Navigate to the project directory:
    ```bash
    cd loan-management-system
    ```

3. Compile the program using a C++ compiler like `g++`:
    ```bash
    g++ main_prog.cpp Loan.cpp ID.cpp -o loan_management
    ```

4. Run the program:
    ```bash
    ./loan_management
    ```

## Usage:

Once the program is running, it will automatically create a default loan object and display its details. The user will then be prompted to set the values for a second loan manually, which will also be displayed after input.


### Example Output:

Display loan1 111-22-4444 2300 5.5 48

Enter the left part of the loan ID 222 Enter the middle part of the loan ID 33 Enter the right part of the loan ID 5555 Enter the amount of this loan 1500 Enter the annual interest rate of this loan (in %) 4.5 Enter the term (number of months, length of the loan) 36

Display loan2 222-33-5555 1500 4.5 36


## Features:

- **Loan Creation**: Automatically creates a loan with predefined values and allows users to input their own loan data.
- **Unique ID System**: Each loan has a unique ID composed of three integer parts (e.g., `111-22-4444`).
- **Loan Information Display**: Displays all loan information including ID, amount, interest rate, and loan term.


