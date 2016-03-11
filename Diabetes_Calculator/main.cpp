//
//  main.cpp
//  Diabetes_Calculator
//
//  Created by Ryan Boddy on 3/11/16.
//  Copyright © 2016 Ryan Boddy. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    //declare variables
    double bloodGlucose;
    double carbs;
    double targetBG;
    double icRatio;
    double corrFactor;
    string name;
    
    
    //basic interface for inputs
    cout <<"Enter your name: ";
    cin >> name;
    cout <<"Hello " << name << "! This calculator will help you figure out insulin dosages."
    " Enter your target blood sugar: ";
    cin >> targetBG;
    cout <<"Enter your high blood glucose correction factor: ";
    cin >> corrFactor;
    cout <<"How many carbs require one unit of insulin? (Insulin to carb ratio): ";
    cin >> icRatio;
    cout <<"What is your current Blood Glucose level: ";
    cin >> bloodGlucose;
    cout <<"How many carbs are you eating? Enter 0 if you are not eating: ";
    cin >> carbs;
    
    /*I will be adding if statement to check if user is eating and create a function to call that will calculate dosage, this is just variable bs to get started conceptualizing */
    
}
