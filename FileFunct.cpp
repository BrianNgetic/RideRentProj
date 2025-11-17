#include <iostream>
#include <fstream>
#include <string>
#include  <vector>

using namespace std; 




void startupMenu(){





    // ifstream inFS;
    
    vector<Vehicle*> dealership;
    while(true){

 
    string welcome = "Welcome to my Dealership\n"
                    " Select One of the following to view your options by category\n"
                    "1: Cars\n"
                    "2: Trucks\n"
                    "3: Bikes \n";



    int selection;
    cin >> selection;


    switch(selection){
        case(1):
                ifstream inFS("../files/CarRecords.txt");
                if (!inFS.is_open()) {
                     cout << "Could not open CarRecords file" << endl;
                     break;
                    }   
                Vehicle* v = selectVehicle(inFs, "car");
                if(v) dealership.push_back(v);
                break;




        case(2):
                ifstream inFS("../files/TruckRecords.txt");
                if (!inFS.is_open()) {
                     cout << "Could not open TrucRecords file" << endl;
                     break;
                    }   
                Vehicle* v = selectVehicle(inFs, "truck");
                if(v) dealership.push_back(v);
                break;


            


        case(3):
                    
                ifstream inFS("../files/bikeRecords.txt");
                if (!inFS.is_open()) {
                     cout << "Could not open bikeRecords file" << endl;
                     break;
                    }   
                Vehicle* v = selectVehicle(inFs, "bike");
                if(v) dealership.push_back(v);
                break;


        default:
                cout <<"Enter a valid option";
                break;


                
                 
    }
}





}