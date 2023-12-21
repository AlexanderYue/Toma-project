#ifndef DOGH
#define DOGH

#include <string>
#include "Pet.h"

class Dog : public Pet {
	private:
		int fetch;

	public:
	   Dog();
    Dog(int fetchIn, string _name, int _boredom, int _sleep, int _hunger);
    void setFetch(int x);
	  int getFetch();
		void playFetch();
};

#endif