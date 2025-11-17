#pragma once
#include <string>
#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    protected:
        
        
   string name; 
    string plate;
       
        int id;
        int dailyRate;
        int rentDays;

    private:
         string type;



    public:
        Vehicle(); //default constructor
        Vehicle(string fileLine);
        virtual ~Vehicle();

        virtual double computeCharge() const = 0; //pure virtual
        virtual string info()  const;
        virtual void  setDailyRate(double dailyRate) = 0;


        //accessor
        const string& getplate() const;
        int getId() const;
};