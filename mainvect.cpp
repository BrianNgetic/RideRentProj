#include <iostream>
#include <fstream>
#include <string>
#include  <vector>


Vehicle* selectVehicle(ifsteam& inFS , const string& type){


    int id = 0, rentDays = 0;

    cout <<"Enter the ID associated with your desired autmobile";
    cin >> id;
    
    cout <<"How many Days do you wish to rent it? ";
    cin >> rentDays;


    //reset the file to keep reading from the start

    inFs.clear();
    inFs.seekg(0);


    string line;

    while(getline(inFs, line)){
        vector<string> data = split(line, ',');

        if(stoi(data[0]) == id){ //id matches with what the user wants
            switch(type){
                 case "car":
                    return new Car(line, rentDays);
                    break;
                case "bike":
                    return new Bike(line, rentDays);
                case "truck":
                    return new Truck(line, rentDays);
            }

        }
    }


    cout << "No " << type << "found with ID " <<id << endl;

    return nullptr;
}