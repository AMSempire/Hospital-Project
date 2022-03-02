//
// Created by Aaron Shabon on 2/9/22.
//
#include <iostream>
#include "Procedure.h"
#include <string>

using namespace std;

Procedure::Procedure(){ //constructor initialization
    charge = 0;
    dateDay = 0;
    dateMonth = 0;
    dateYear = 0;
};

Procedure::Procedure(string pName, float pCharge, float pdateDay, float pdateMonth, float pdateYear, string dName) {
    charge = 0;
    dateDay = 0; //initializing number values as 0
    dateMonth = 0;
    dateYear = 0;
    procedureName = pName;
    dateDay = pdateDay;
    dateMonth = pdateMonth;
    dateYear = pdateYear;
    charge = pCharge;
    docName = dName;
}

string Procedure::getprocedureName(){ //accessor functions
    return procedureName;
}
float Procedure::getCharge(){
    return charge;
}
float Procedure::getdateDay(){
    return dateDay;
}
float Procedure::getdateMonth(){
    return dateMonth;
}
float Procedure::getdateYear(){
    return dateYear;
}
string Procedure::getdocName(){
    return docName;
}
string Procedure::changeprocName(){  //mutator variables
    cout << "Please enter a new procedure name." << endl;
    cin >> procedureName;
    return procedureName;
}
float Procedure::changeCharge(){
    cout << "Please enter a new charge balance." << endl;
    cin >> charge;
    return charge;
}
float Procedure::changedateDay(){
    cout << "Please enter a new procedure date. (Day) " << endl;
    cin >> dateDay;
    return dateDay;
}
float Procedure::changedateMonth() {
    cout << "Please enter a new procedure date. (Month)" << endl;
    cin >> dateMonth;
    return dateMonth;
}
float Procedure::changedateYear(){
    cout << "Please enter a new procedure date. (Year) " << endl;
    cin >> dateYear;
    return dateYear;
}
string Procedure::changedocName(){
    cout << "Please enter what the new Doctor's name is." << endl;
    cin >> docName;
    return docName;
}