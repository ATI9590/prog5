#ifndef IPETCLASS
#define IPETCLASS

using namespace std;

class IPet {
   virtual void gotPetted() = 0;
   virtual string getName() = 0;
};

#endif