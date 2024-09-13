#include "PoliceDog.h"
#include <iostream>

using namespace std;

void PoliceDog::barks() {
    cout << _name << " barks loudly!" << endl;
}

void PoliceDog::patrol() {
    cout << _name << " is going on patrol!" << endl;
}