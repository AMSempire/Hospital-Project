//
// Created by Aaron Shabon on 2/9/22.
//
#pragma once
#include <string>
using namespace std;

class Procedure {
private:
   string procedureName, docName;
   float dateDay, dateMonth, dateYear, charge;

public:
    Procedure();
    Procedure(string pName, float pCharge, float pdateDay, float pdateMonth, float pdateYear, string dName); //constructors

    string getprocedureName(); //accessor functions
    float getCharge();
    float getdateDay();
    float getdateMonth();
    float getdateYear();
    string getdocName();

    string changeprocName(); //mutator variables
    float changeCharge();
    float changedateDay();
    float changedateMonth();
    float changedateYear();
    string changedocName();
};



