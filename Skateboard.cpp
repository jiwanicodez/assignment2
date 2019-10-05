//
// Created by Sarah Jiwani on 10/4/19.
//

#include "Skateboard.h"
#include <stdlib.h>   
#include <time.h>   
#include <cmath>   

Skateboard::Skateboard(){ 
	setBrand("unknown");
    	setModel("unknown");
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
	srand (time(NULL));
	double mileage = rand()% .5 + .1 * time;
	if (time > 25 && time < 250)
	mileage+= rand()% (time/3) + 1
    	return floor(mileage);
}

string Bicycle::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString()
}
