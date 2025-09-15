/**
 * @file   Chatbot.cpp
 * @author Alex Ludwick
 * @brief  This program ask you questions about yourself.
 * @date   9/12/2025
 * 
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string userName, userLocation, dreamCar;
    int birthYear, chatbotAge = 20;
    float carCost, interestRate;
    int loanYears;


    cout << "Hi there! What's your name? ";
    getline(cin, userName);
    cout << "It's so nice to meet you " << userName << "! My name is Chatster.\n";

    cout << "Where are you from, " << userName << "? ";
    getline(cin, userLocation);
    cout << userLocation << " it sounds so familier from the interwebs!\n";

    cout << "What year were you born in? ";
    cin >> birthYear;
    int currentYear = 2025;
    int userAge = currentYear - birthYear;
    float ageRatio = static_cast<float>(userAge) / chatbotAge;

    cout << "You are " << userAge << " years old, that makes you ";
    if (ageRatio > 1.0)
        cout << ageRatio << " times as old as I am! I'm only " << chatbotAge << " years old!\n";
    else
        cout << "younger than me! I'm " << chatbotAge << " years old!\n";

    cin.ignore();

 
    cout << "What's your dream car? ";
    getline(cin, dreamCar);
    cout << "That is a nice car, I like to see " << dreamCar << " in person but i am a machine.\n";
    cout << "That means I am looking at one right now.\n";
    cout << "I know how much that car is, but I don't know what trim or options you are looking at so;\n";

    cout << "how much does a " << dreamCar << " cost (in dollars No dollar sign, No coma)? ";
    cin >> carCost;
    cout << "That expencive.\n";

    cout << "How many years would you take out a loan for? ";
    cin >> loanYears;
    cout << "What annual interest rate do you expect (in %)? ";
    cin >> interestRate;

    float monthlyRate = interestRate / 100 / 12;
    int totalMonths = loanYears * 12;
    float monthlyPayment = (carCost * monthlyRate) / (1 - pow(1 + monthlyRate, -totalMonths));
    float totalPayment = monthlyPayment * totalMonths;

    cout << "Your monthly payment for the " << dreamCar << " is $" << monthlyPayment;
    cout << ", that is a total of $" << totalPayment << " !\n";


    cout << "Thanks for chatting, " << userName << "! Goodbye see you next time!\n";

    return 0;
}

// g++ -Wall -std=c++17 Chatbot.cpp -o Chatbot
// ./Chatbot
