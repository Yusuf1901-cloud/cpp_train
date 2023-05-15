#include <iostream>
using namespace std;

const double one_unit_dollor = 1146.00; // in uzs
const double one_unit_euro = 12540.99; // in uzs
const double one_unit_euro_in_dollar = 1.09;

/*
    This is a simple converter for currency
    uzs, dollar, and euro

*/

double uzs_to_dollar(double uzs){
    return uzs / one_unit_dollor;
}

double uzs_to_euro(double uzs){
    return uzs / one_unit_euro;
}

double dollar_to_uzs(double dollar){
    return dollar * one_unit_dollor;
}

double euro_to_uzs(double euro){
    return euro * one_unit_euro;
}

double dollar_to_euro(double dollar){
    return dollar * one_unit_euro_in_dollar;
}

double euro_to_dollar(double euro){
    return euro / one_unit_euro_in_dollar;
}

int main(){
    cout << "Welcome to my converter !!\n\n";
    cout << "First you have to fill this query, YOUR CHOICES ARE [1, 2, 3, 4, 5, 6]\n";
    cout << "So, choice 1 ===> uzs to dollar\n";
    cout << "So, choice 2 ===> uzs to euro\n";
    cout << "So, choice 3 ===> dollar to euro\n";
    cout << "So, choice 4 ===> dollar to uzs\n";
    cout << "So, choice 5 ===> euro to uzs\n";
    cout << "So, choice 6 ===> euro to dollar\n";
    cout << "\n\n\n";
    cout << "Please, enter your choise: \t";

    int choice;
    cin >> choice;

    switch (choice)
    {

    case 1: 
        cout << "Enter amount of uzs you are going to convert to Dollar?\n";
        double uzs;
        cin >> uzs;
        cout << uzs_to_dollar(uzs) << " dollar\n";
        break;

    case 2: 
        cout << "Enter amount of uzs you are going to convert to Euro?\n";
        double uzs_to_euro_cin;
        cin >> uzs_to_euro_cin;
        cout << uzs_to_euro(uzs_to_euro_cin) << " euro\n";
        break;
    case 3: 
        cout << "Enter amount of dollar you are going to convert to Euro?\n";
        double dollar;
        cin >> dollar;
        cout << dollar_to_euro(dollar) << " euro\n";
        break;
    case 4: 
        cout << "Enter amount of dollar you are going to convert to Uzs?\n";
        double dollar_to_uzs_cin;
        cin >> dollar_to_uzs_cin;
        cout << dollar_to_uzs(dollar_to_uzs_cin) << " uzs\n";
        break;
    case 5: 
        cout << "Enter amount of euro you are going to convert to Uzs?\n";
        double euro;
        cin >> euro;
        cout << euro_to_uzs(euro) << " uzs\n";
        break;
    case 6: 
        cout << "Enter amount of euro you are going to convert to Dollar?\n";
        double euro_to_dollar_cin;
        cin >> euro_to_dollar_cin;
        cout << euro_to_dollar(euro_to_dollar_cin) << " dollar\n";
        break;
    default:
        cout << "You have entered the wrong choice, Sorry!";
        break;
    }
}