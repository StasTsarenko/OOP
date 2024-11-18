#pragma once
#include <string>
using namespace std;

class University {
private:
    string name;

public:
    University();
    University(string name);

    string GetName();

    void SetName(string name);


};
