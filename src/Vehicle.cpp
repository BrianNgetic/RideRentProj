#include <Vehicle.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


Vehicle::Vehicle(){
    plate = "------";
    type = "Undefined";
    id = 0;
    rentDays = 0;
    dailyRate = 0;
    
}

Vehicle::Vehicle(const string& type, string&  plate, int id, int rentDays){
    this->type = type;
    
    this->plate = plate;
    this->id = id;
    this->rentDays = rentDays;
}

// double Vehicle::setdailyCharge(int dailyCharge){
    
//             this->dailyCharge = dailyCharge;
        
// }


string Vehicle::info() const{
    stringstream  result;
        result <<  "Plate: " << plate 
               <<"\n id" << id  
               << "\nDays Rented: " << rentDays <<endl;
    return result.str();
}
Vehicle::~Vehicle() {
    // nothing special needed
}

const string&  Vehicle::getplate() const{
    return plate;
}

int Vehicle::getId() const{
    return id;
}


