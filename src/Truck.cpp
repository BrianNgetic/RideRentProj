#include <Truck.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


Truck::Truck() : Vehicle(),  payloadTons(0.0) {};
Truck::Truck( const string plate, int id,  double payloadTons, int rentDays){
    this->plate = plate;
    this->id = id;
    this->payloadTons = payloadTons;
    this->rentDays = rentDays;
}

double Truck::computeCharge()const {
    double cost;
    if(payloadTons >= 1){
      cost  = 1.1*(rentDays* dailyRate);
    }
    else cost= rentDays * dailyRate;

    return cost;
}


string Truck::info() const {
        
    stringstream  result ;
            result << 
            "[Truck Information]"
           <<  " \nID:" << id
            <<  "\nPlate: " << plate  
            <<  "\npayload " << payloadTons <<  " tons "
            << "\nDays Rented " << rentDays
            <<  "\nTotal Charge: " << computeCharge() <<endl;  
    
    return result.str();
}

void Truck::setDailyRate(double dailyRate){
    this->dailyRate = dailyRate;
}

void Truck::setPayloadTons(double payloadTons){
    this->payloadTons = payloadTons;
}


double Truck::getDailyRate() const{
    return dailyRate;
}

double Truck::getpayloadTons() const {
    return payloadTons;
}

