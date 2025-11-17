#pragma once
#include <string>
#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    protected:
        
        string plate;
       
        int id;
        int dailyRate;
        int rentDays;

    private:
         string type;



    public:
        Vehicle(); //default constructor
        Vehicle(const string& type, string&  plate, int id, int rentDays);
        virtual ~Vehicle();

        virtual double computeCharge() const = 0; //pure virtual
        virtual string info()  const;
        virtual void  setDailyRate(double dailyRate) = 0;


        //accessor
        const string& getplate() const;
        int getId() const;
};