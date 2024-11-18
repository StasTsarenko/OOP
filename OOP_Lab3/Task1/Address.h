#pragma once
#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;

public:
    Address();
    Address(string street, string city);


    void SetStreet(string street);
    void SetCity(string city);
    
    string GetStreet();
    string GetCity();
    


};