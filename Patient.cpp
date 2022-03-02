//
// Created by Aaron Shabon on 2/9/22.
//
#include "Patient.h"
#include <iostream>
#include <string>
using namespace std;

Patient::Patient(){
    phoneNumber = 0; //initialized  as 0' default constructor
    emNumber = 0;
}
Patient:: Patient(string f, string m, string l, string aName, string street, string aCity, string aState, string emfN, string emlN,
                  double aNum, float zippycode, double phoneNum, double eNum){ //constructors
    fName = f;
    mName = m;   //Constructor for all variables
    lName = l;
    addressName = aName;
    addressStreet = street;
    addressNum = aNum;
    zipcode = zippycode;
    city = aCity;
    state = aState;
    phoneNumber = phoneNum;
    emfName = emfN;
    emlName = emlN;
    emNumber = eNum;
    phoneNum = 0;
    eNum = 0;
}

string Patient::getfName() { //Accessor functiosn
    return fName;
}
string Patient::getmName(){
    return mName;
}
string Patient::getlName(){
    return lName;
}
string Patient::getaName(){
    return addressName;
};
string Patient::getCity(){
    return city;
}
string Patient::getState(){
    return state;
}
double Patient::getaNum(){
    return addressNum;
}
string Patient::getaStreet(){
    return addressStreet;
}
float Patient::getZipcode(){
    return zipcode;
}
double Patient::getphoneNum(){
    return phoneNumber;
}
string Patient::getefName(){
    return emfName;
}
string Patient::getelName(){
    return emlName;
} double Patient::geteNumber(){
    return emNumber;
}
string Patient::changefName(){
    cout << "Please enter a new first name for the patient." << endl;
    cin >> fName;
    return fName;
} //mutator functions
string Patient::changemName(){
    cout << "Please enter a new middle name for the patient." << endl;
    cin >> mName;
    return mName;
}
string Patient::changeStreet(){
    cout << "Please enter a new street for the patient." << endl;
    cin >> addressStreet;
    return addressStreet;
}
string Patient::changelName(){
    cout << "Please enter a new last name for the patient." << endl;
    cin >> lName;
    return lName;
}
float Patient::changeNum(){
    cout << "Please enter a new phone number for the patient." << endl;
    cin >> phoneNumber;
    return phoneNumber;
}
string Patient::changeefName(){
    cout << "Please enter a new first name for the emergency contact." << endl;
    cin >> emfName;
    return emfName;
}
string Patient::changeelName(){
    cout << "Please enter a new last name for the emergency contact." << endl;
    cin >> emlName;
    return emlName;
}
float Patient::changeeNumber(){
    cout << "Please enter a new emergency contact phone number." << endl;
    cin >> emNumber;
    return emNumber;
}