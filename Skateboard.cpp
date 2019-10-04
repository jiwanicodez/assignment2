//
// Created by Sarah Jiwani on 10/4/19.
//

#include "Skateboard.h"

Skateboard::Skateboard() {
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    double mileage = 3 * time;
    mileage += mileage * (myGearCount * 0.1);
    return mileage;
}

string Bicycle::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString() + "\n\tGears: " +
           to_string(myGearCount);
}
