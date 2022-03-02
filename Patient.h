//
// Created by Aaron Shabon on 2/9/22.
//
#pragma once
#include <string>
using namespace std;

class Patient{
private:
    string fName, mName, lName; // contact info
    double phoneNumber;
    string addressName, addressStreet, city, state;
    float zipcode;
    double addressNum;
    string emfName, emlName; // emergency contact info
    double emNumber;

public:
    Patient();
    Patient(string f, string m, string l, string aName, string street, string aCity, string aState, string emfN, string emlN,
            double aNum, float zippycode, double phoneNum, double eNum); //constructors

    string getfName(); //accessor functions
    string getmName();
    string getlName();
    string getaName();
    string getCity();
    string getState();
    double getaNum();
    string getaStreet();
    float getZipcode();
    double getphoneNum();
    string getefName();
    string getelName();
    double geteNumber();
    string changefName(); //mutator functions
    string changemName();
    string changeStreet();
    string changelName();
    float changeNum();
    string changeefName();
    string changeelName();
    float changeeNumber();
};

