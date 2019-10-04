//
// Created by Sarah Jiwani on 10/4/19.
//

#include "Jet.h"
#include <stdlib.h>
#include <time.h>

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

string Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int numEngines) {
        numberOfEngines = numEngines;
}

double Jet::mileageEstimate(double time) {
	srand(time(NULL));
    	double mileage = rand() % 60 + 40 * time;
    	if (numberOfEngineSize > 2 && fuelType == "Rocket") {
        	mileage += mileage * 0.055;
    	}
    	return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           numberOfEngines();
}
