// MyFirstCppProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

#include <iostream>
#include <format>
using namespace std;

int main()
{
    //cout << "Hello World!\n";
    //cout << "this is printing\n";

    float grossAnnualSalary;
    float netAnnualSalary;
    float grossMonthlySalary;
    float netMonthlySalary;
    float years;
    float tax;
    int choice;
    bool stop = false;


    cout << "First give your Tax percentage in decimals (eg. 0.29) > ";
    cin >> tax;

    do {
        cout << "Count new annual salary:           1\n";
        cout << "Count new monthly salary:          2\n";
        cout << "Count net salary in n Years:       3\n";
        cout << "change tax percentage:             4\n";
        cout << "Exit application :                 5\n";

        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nGive gross monthly salary > ";
            cin >> grossMonthlySalary;

            grossAnnualSalary = grossMonthlySalary * 12;
            netAnnualSalary = grossAnnualSalary - grossAnnualSalary * tax;

            cout << "\nGross annual salary is " << grossAnnualSalary << endl;
            cout << "\nNet annual salary is " << netAnnualSalary << endl;
            break;

        case 2:
            cout << "\nGive gross annual salary > ";
            cin >> grossAnnualSalary;

            grossMonthlySalary = grossAnnualSalary / 12;
            netMonthlySalary = grossMonthlySalary - grossMonthlySalary * tax;

            cout << "\nGross Monthly salary is " << grossMonthlySalary << endl;
            cout << "\nNet Monthly salary is " << netMonthlySalary << endl;
            break;

        case 3: // net salary in n years
            cout << "\nGive amount of years you want to count the salary for > ";
            cin >> years;
            cout << "\nYou'll earn " << netAnnualSalary * years << " in " << years << " years.\n\n";
            break;

        case 4:
            cout << "give new Tax percentage in decimals (eg. 0.29) > ";
            cin >> tax;
        case 5:
            stop = true;
            break;

        default:
            break;
        }

    } while (stop == false);

    return 0;

    //system("pause>0"); // remove extra text from console


}
