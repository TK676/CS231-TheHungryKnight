/*
Name: Liam O'Kelley
Class Name: CS231-003 Computer Programming 1
What this does: Greets the knight, asks for their name, asks how many of each food they want, and then calculates total price for meal.
Due Date: 1-21-20
*/
#include <iostream>
#include "TheHungryKnight.h"
using namespace std;

int main() {
    
    string knight_title;
    string first_name;
    string determiner;
    string characteristic;
    double roastPheasant = 15.10;
    double beefStew = 3.49;
    double bread = 5.17;
    double fruit = 1.19;

    int pheasantNumber = 0;
    int stewNumber = 0;
    int breadNumber = 0;
    int fruitNumber = 0;

    //Prints a greeting
    cout << "Welcome to the Knight’s Inn and Tavern, Sir. We are honored to serve the King’s men during these trying days as our Kingdom readies itself for War. Your warhorses shall be looked after at our stable and your rooms prepared for you once you have broken your fast with us for the night. Please free to encourage your men to eat and drink as much as desired, Sir Knight. The Crown will pay for your meal and lodging for you and your horses, Sir.\n";

    //Asks the Knight to enter their name
    cout << "May I ask for your name for my records, Sir Knight?\n";
    cin >> knight_title;
    cin >> first_name;
    cin >> determiner;
    cin >> characteristic;

    //Asks the Knight how many of each food item he wants
    cout << "How many plates of Roast Pheasant will your party require us to prepare, Sir " << first_name << " the " << characteristic << "?\n";
    cin >> pheasantNumber;
    cout << "How many bowls of Beef Stew will your party require us to prepare, Sir " << first_name << " the " << characteristic << "?\n";
    cin >> stewNumber;
    cout << "How many loafs of fine bread will your party require us to prepare , Sir " << first_name << " the " << characteristic << "?\n";
    cin >> breadNumber;
    cout << "How many pieces of fresh fruit will your party require us to prepare, Sir " << first_name << " the " << characteristic << "?\n";
    cin >> fruitNumber;

    //Calculates Totals for each item
    double pheasantTotal = (pheasantNumber * roastPheasant);
    double stewTotal = (stewNumber * beefStew);
    double breadTotal = (breadNumber * bread);
    double fruitTotal = (fruitNumber * fruit);
    
    //Calculates total for entire meal
    double entireTotal = (((pheasantTotal + stewTotal + breadTotal + fruitTotal) * 0.05) + (pheasantTotal + stewTotal + breadTotal + fruitTotal));
    
    //Tells the Knight how much the entire feast will cost
    cout << "The final tally for the meal tonight is: " << entireTotal << " silver pieces.\n";
}
