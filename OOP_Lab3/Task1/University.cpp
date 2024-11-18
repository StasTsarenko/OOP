#include "University.h"

University::University() 
{
    name = "CNTU";
}

University::University(string name)
{
    this->name = name;
}


void University::SetName(string name) {
    this->name = name;
}

string University::GetName() {
    return name;
}

