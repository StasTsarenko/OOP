#pragma once
#include "Student.h"
#include "Address.h"
#include "University.h"
using namespace std;


class Details : public Student {
private:
    Address address; 
    University& university; 

public:
    Details();
    Details(Address address, University& university);

    void SetAddress(Address address);
    
    Address GetAddress();
    University& GetUniversity();


};
