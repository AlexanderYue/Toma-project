#ifndef CATH
#define CATH

#include <string>
#include "Pet.h"

class Cat : public Pet {
	private:
		int fish;

	public:
	   Cat();
    Cat(int fishIn, string _name, int _boredom, int _sleep, int _hunger);
    void setFish(int x);
	  int getFish();
		void playFish();
};

#endif