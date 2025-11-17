#include <Bike.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


Bike::Bike() : Vehicle(),  electric(false){};

Bike::Bike( string fileLine, int rentDays){
    // this->plate = plate;
    // this->id = id;
    // this->rentDays = rentDays;
    // this->electric = electric;

    stringstream ss(fileLine);
    string temp;

    vector<string> data = split(fileLine, ",");

    this->id = stoi(data[0]);
   this->name = data[1];
   this->plate = data[2];
   this->electric = (data[3] == "true"  || data[3] = "1");
   this->dailyRate = stod(data[4]);

     this->rentDays = rentDays;
    

 

}

// bool Bike::isElectric() const{
//     if(electric == true){
//         return true;
//     }
//     else{
//         return false;
//     }

   
// }


double Bike::computeCharge() const{
    
    double charge = rentDays * dailyRate;

    if(electric){
        charge = rentDays * dailyRate + (5 * rentDays);//flat 5 a 
                                                //day battery
                                                //fee if electric
        
                                    
    }

    return charge;



}

void Bike::setDailyRate(double dailyRate){
    this->dailyRate = dailyRate;
}

string Bike::info() const{
    stringstream  result;
    if(electric){
        result <<
            "[Bike Information]"
           <<" \nID: " << id
           << "\nPlate:" << plate 
           <<  "\nType: Electric"
           << " \nDays Rented:  " <<rentDays 
           <<  "\nTotal Charge:  " << computeCharge()<<endl;
    }
    else{
         result <<
            "[Bike Information]"
           <<" \nID: " << id
           << "\nPlate:" << plate 
           <<  "\nType: non-Electric"
           << " \nDays Rented: " << rentDays 
           <<"\nTotal Charge:  " <<   computeCharge()<<endl;

   
}

 return result.str();
}




void Bike::setElectric(bool electric){ //if he wants to change might not need fr
    this->electric = electric; 
}


double Bike::getDailyrate() const{
    return dailyRate;

}

// bool Bike::isElectric() const{
//    return electric;
// }

