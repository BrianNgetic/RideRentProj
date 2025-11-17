#include <Car.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


Car::Car() : Vehicle(),   luxury(false){}

Car::Car(const  string plate, int id,  string type, bool luxury, int rentDays){
 
    this->plate = plate;
    this->id = id;
    this->type = type;
    this->luxury = luxury;
    this->rentDays = rentDays;

}

double Car::computeCharge() const{
  

    double charge = rentDays * dailyRate;

    if(luxury){
        charge = 1.2 * (rentDays* dailyRate);
        
    }

    return charge;

}

string Car::info() const{
    stringstream  result;
    if(luxury){
         result <<
            "[Car Information]"
           << "\nID: " << id 
           <<  "\nPlate: " << plate 
           <<  "\n Type: (Luxury)"
          << " \nCharge for " << rentDays 
           << "\n days: " << computeCharge()<<endl;  
    }
    else{
        result <<
             "[Car Information]"
           << " \nID: " << id 
           << "\nPlate: " << plate 
          <<  "\nCharge for " << rentDays
           <<  "\n days: " <<  computeCharge()<<endl;  

    }
    return result.str();
}

void Car::setDailyRate(double dailyRate){
    this->dailyRate = dailyRate;
}

void Car::setLuxury(bool luxury){
    this->luxury = luxury;
}

double Car::getDailyRate() const{
    return dailyRate;
}

// bool  Car::isluxury() const(
//     return luxury;
// )
