#pragma once
#include <Vehicle.h>
using namespace std;


class Car: public Vehicle{
    protected:
        bool luxury;
        string type;

        

    public:
        Car(); //default constructor
        Car( const string plate, int id, string type,  bool luxury, int rentDays);

        double computeCharge() const override;
        string info() const override;


        void setDailyRate(double dailyRate);
        void setLuxury(bool luxury);

        double getDailyRate() const;
        // bool isluxury() const;
};