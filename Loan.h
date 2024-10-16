//Daniel A Sanchez
//S01368279
//3/17/22
#ifndef Loan_H
#define Loan_H
#include "ID.h"
class Loan  // Loan class definition
{
public:
    Loan();
    Loan(ID id, float amount, float rate, int term);
    void set();
    float payment();
    void display();
private:
    ID id;          // assume an unique integer in three integer parts
    float amount;   // $ amount of the loan
    float rate;     // annual interest rate
    int term;       // number of months, length of the loan
};

#endif 


