#include <iostream>
#include <vector>
#include <Vehicle.h>
#include <Bike.h>
#include <Car.h>
#include <Truck.h>


using namespace std;

int main() {
    Bike* b1 = new Bike("vnj-4150", 1, false,  40);
    Car* c1 = new Car("rxz-4545", 2,"sedan",  true, 100);
    Truck* t1 = new Truck("wxy-3100",3, 1, 3 );


    b1->setDailyRate(25.00);
    c1->setDailyRate(80.00);
    t1->setDailyRate(130.00);
    t1->setPayloadTons(1.2);


    vector<Vehicle*> dealership;
    dealership.push_back(b1);
    dealership.push_back(c1);
    dealership.push_back(t1);


    cout << "==== RideRent Summary ====\n";
    for(auto  emp: dealership){
        cout << emp->info() ;
       cout << "----------------------" << endl;
    }

    for(auto emp: dealership){
        delete emp;
    }

    dealership.clear();

    cout << "All records clear\n";
    return 0;
}













