#pragma once
#include <Vehicle.h>
using namespace std;


class Truck: public Vehicle{
    protected:

        double payloadTons;
        

    public:
        Truck();
        Truck(string fileLine, int rentdays);

       

        double computeCharge() const override;
        string info() const override;


        void setDailyRate(double dailyRate);
        void setPayloadTons(double payloadTons);


        double getDailyRate() const;
        double getpayloadTons() const;
};