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
    string response;
    string name;
    
    //function prototype for dosage function
    double Dosage (double bloodGlucose, double carbs, double icRatio, double corrFactor, double targetBG);
    
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
    
    //if statement created to check if user is eating or correcting a high blood glucose
    
    cout <<"Are you eating? Type 'yes' or 'no': ";
    cin >> response;
    
    if (response == "yes" || response == "Yes") {
        cout <<"Carb Amount: ";
        cin >> carbs;
    }
    else {
        carbs = 0;
    }
}

//function find basic dosage
double Dosage (double bloodGlucose, double carbs, double icRatio, double corrFactor, double targetBg) {
    double correctionUnits = (bloodGlucose-targetBg)/corrFactor;
    double foodUnits = carbs/icRatio;
    double totalDose = correctionUnits + foodUnits;
    return totalDose;
}
