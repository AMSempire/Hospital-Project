#include <iostream>
#include "Procedure.h"
#include "Patient.h"
using namespace std;
void procedures(Procedure, Procedure, Procedure);

int main() {

    Patient Dumbo("Dumbo", "The", "Elephant", "Elephant", "Lane", "Elephantville",
                  "NJ", "Bumbo", "Baggins", 786, 19426, 1010101010,
                  2020202020);

    Procedure Num1("Physical Exam", 250.00, 11, 02, 22, "Irvine");
    Procedure Num2("X-Ray", 500.00, 11, 02, 22, "Jamison");
    Procedure Num3("Blood Test", 200.00, 11, 02, 22, "Smith");


    cout << "The Patient's information is as follows:\n";
    cout << "Name: " << Dumbo.getfName() << " " << Dumbo.getmName() << " " << Dumbo.getlName() << endl;
    cout << "Address: " << Dumbo.getaNum() << " " << Dumbo.getaName() << " " << Dumbo.getaStreet() << " "
    << Dumbo.getCity() << " " << Dumbo.getState() << " " << Dumbo.getZipcode() << endl;
    cout << "Phone Number: " << Dumbo.getphoneNum() << endl;
    cout << "Emergency Contact: " << Dumbo.getefName() << " " << Dumbo.getelName() << endl;
    cout << "Emergency Contact Phone Number: " << Dumbo.geteNumber() << endl;

procedures(Num1, Num2, Num3);

    double totalCharge;

    totalCharge = Num1.getCharge() + Num2.getCharge() + Num3.getCharge();

    cout << "The total charge will be $" << totalCharge << "."  << endl;

    return 0;
}

void procedures(Procedure Num1, Procedure Num2, Procedure Num3){

    cout << "The first procedure is a " << Num1.getprocedureName() << " on the day of " <<
         Num1.getdateDay() << "/" << Num1.getdateMonth() << "/" << Num1.getdateYear() << ", The name of the doctor is "
         << Num1.getdocName() << ", and the charge of this procedure will be $" << Num1.getCharge() << "." << endl;

    cout << "The second procedure is a " << Num2.getprocedureName() << " on the day of " <<
         Num2.getdateDay() << "/" << Num2.getdateMonth() << "/" << Num2.getdateYear() << ", The name of the doctor is "
         << Num2.getdocName() << ", and the charge of this procedure will be $" << Num2.getCharge() << "." << endl;

    cout << "The third procedure is a " << Num3.getprocedureName() << " on the day of " <<
         Num3.getdateDay() << "/" << Num3.getdateMonth() << "/" << Num3.getdateYear() << ", The name of the doctor is "
         << Num3.getdocName() << ", and the charge of this procedure will be $" << Num3.getCharge() << "." << endl;

}

/*TestRun
 *
 * "/Users/aaronshabon/Downloads/PSU/PSU Semester 2/Compsci 122/Projects/HW#4/cmake-build-debug/untitled"
The Patient's information is as follows:
Name: Dumbo The Elephant
Address: 786 Elephant Lane Elephantville NJ 19426
Phone Number: 1010101010
Emergency Contact: Bumbo Baggins
Emergency Contact Phone Number: 2020202020
The first procedure is a Physical Exam on the day of 11/2/22, The name of the doctor is Irvine, and the charge of this procedure will be $250.
The second procedure is a X-Ray on the day of 11/2/22, The name of the doctor is Jamison, and the charge of this procedure will be $500.
The third procedure is a Blood Test on the day of 11/2/22, The name of the doctor is Smith, and the charge of this procedure will be $200.
The total charge will be $950.

Process finished with exit code 0

 */