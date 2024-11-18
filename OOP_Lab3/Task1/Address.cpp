#include "Address.h"

Address::Address()
{
    street = "Yanovskoho";
    city = "Kropyvnytskyi";
}

Address::Address(string street, string city)
{
    this->street = street;
    this->city = city;
}

void Address::SetCity(string city) {
    this->city = city;
}

void Address::SetStreet(string street) {
    this->street = street;
}

string Address::GetCity() {
    return city;
}

string Address::GetStreet() {
    return street;
}
