#pragma once
#include <Vehicle.h>
using namespace std;


class Truck: public Vehicle{
    protected:

        double payloadTons;
        

    public:
        Truck();
        Truck(const string plate, int id,  double payloadTons, int rentDays);

        double computeCharge() const override;
        string info() const override;


        void setDailyRate(double dailyRate);
        void setPayloadTons(double payloadTons);


        double getDailyRate() const;
        double getpayloadTons() const;
};