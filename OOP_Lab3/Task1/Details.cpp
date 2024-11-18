#include "Details.h"

Details::Details(Address address, University& university) : address(address), university(university) {}

void Details::SetAddress(Address address) {
    this->address = address;  
}

Address Details::GetAddress() {
    return address;  
}

University& Details::GetUniversity() {
    return university;  
}