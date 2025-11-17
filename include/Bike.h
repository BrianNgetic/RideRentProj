#pragma once
#include <Vehicle.h>
using namespace std;


class Bike: public Vehicle{
    protected:
    
        bool electric;
        
       


    public:

        Bike();
        Bike(string fileLine, int rentdays);


        //override
        double computeCharge() const override;
        string info() const override;


        //mutators
        void setDailyRate(double dailyRate);
        void setElectric(bool electric);


        //accessors
        double getDailyrate() const;
        // bool isElectric() const;

};