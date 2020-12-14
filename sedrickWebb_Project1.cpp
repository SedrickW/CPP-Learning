//sedrickWebb_Project1
//Version 1
//Takes in prices for 3 items the how much the person has and prices out the cost and how much change he/she gets back.
//Sedrick Webb
//Compsci-1
//March 3rd,2020

#include <iostream>
#include <iomanip>
#include <string>
#include <istream>
using namespace std;



int main()
{ 
    //initializations 
    string name1; 
    double price1 = 100;
    int quanity1 = 100;
    double cost1;

    string name2; 
    double price2 = 200;
    int quanity2 = 200; 
    double cost2;

    string name3; 
    double price3 = 300;
    int quanity3 = 300;
    double cost3;

    double taxRate = 8008;
    double costPreTax;
    double totalTax;
    double costPostTax;

    double moneyInHand;
    double change;

    //denominations
    int hunreds = 1;
    int twenties = 1;
    int tens = 1;
    int fives = 1;
    int ones = 1;
    int quarters = 1;
    int dimes = 1;
    int nickels = 1;
    int pennies = 1;

    cout << "----- Panther Express cashier's program -----\n";
    cout << "Unit name: ";
    getline(cin , name1);//only works for the first one i think it is an overload issue.
    cout  << "Unit price for " << name1 <<" : ";
    cin >> price1;
    cout << "Unit quanity for " << name1 << " : ";
    cin >> quanity1;
    cout << endl;

    cout <<endl << "Unit name: ";
    cin >> name2;
    //getline(cin, name2);//not taking in spaces
    cout << "Unit price for " << name2 << " : ";
    cin >> price2;
    cout << "Unit quanity for " << name2 << " : ";
    cin >> quanity2;

    cout <<endl << "Unit name: ";
    cin >> name3;
    //getline(cin, name3); // still not taking in spaces
    cout << "Unit price for " << name3 << " : ";
    cin >> price3;
    cout << "Unit quanity for " << name3 << " : ";
    cin >> quanity3;
          
    cout << "\nTax Rate (in whole numbers): ";
    cin >> taxRate;

    cost1 = quanity1 * price1;
    cost2 = quanity2 * price2;
    cost3 = quanity3 * price3;
    
    costPreTax = cost1 + cost2 + cost3;
    totalTax = costPreTax * taxRate/100;
    costPostTax = totalTax + costPreTax;



    cout << "\n$-----  Cost Summary -----$" << endl;
    cout << "Item" << setw(10) << "price" << setw(10) << "Quanity" << setw(10) << "Cost" << endl;
   // cout <<setfill ('-')<< endl;
    cout << "----------------------------------" << endl;
    cout << name1 << right << setw(3) <<"$" << price1 << setw(6) << quanity1 << setw(13) << "$" << cost1 << endl;
    cout << name2 << right << setw(5) << "$" << price2 << setw(7) << quanity2 << setw(13) << "$" << cost2 << endl;
    cout << name3 << right << setw(5) << "$" << price3 << setw(7) << quanity3 << setw(14) << "$" << cost3 << endl <<endl;

    cout << "$-----  cost pretax  -----$" << endl;
    cout << costPreTax << endl << endl;
    
    cout << "$-----  cost w/ tax  -----$" << endl;
    cout << costPostTax << endl << endl;
    //cout << setfill('-') << endl;
    cout << "----------------------------------" << endl;
    cout << "How much money do they have?" << endl;
    cin >> moneyInHand;

    cout << "\n$----- change -----$" << endl;
    change = moneyInHand - costPostTax;
    cout << change;
    //cout << setfill('-') << endl << endl;
    cout << "\n----------------------------------" << endl;
    
   cout << "\nDenominations ..." << endl;
   hunreds = change / 100;
   change = change - (hunreds * 100.00);//less var without using %
   cout << "$100 bills:" << right << setw(7) << hunreds << endl;

   twenties = change / 20;
   change = change - (twenties * 20.00);
   cout << "$20 bills:"<< right << setw(8) << twenties << endl;

   tens = change / 10;
   change = change - (tens * 10.00);
   cout << "$10 bills:" << right << setw(8) << tens << endl;

   fives = change / 5;
   change = change - (fives * 5.0);
   cout << "$5 bills:" << right << setw(9) << fives << endl;

   ones = change / 1;
   change = change - (ones * 1.00);
   cout << "$1 bills:" << right << setw(9) << ones << endl;

   quarters = change / 0.25;
   change = change - (quarters * 0.25);
   cout << "Quarters:" << right << setw(9) << quarters << endl;

   dimes = change / 0.10;
   change = change - (dimes * 0.10);
   cout << "Dimes:" << right << setw(12) << dimes << endl;

   nickels = change / 0.05;
   change = change - (nickels * 0.05);
   cout << "Nickles:" << right << setw(10) << nickels << endl;

   pennies = change / 0.01;
   change = change - (pennies * 0.01);
   cout << "Pennies:" << right << setw(10) << pennies << endl;

    return 0;
}