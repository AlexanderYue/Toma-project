#ifndef BIRDH
#define BIRDH

#include <string>
#include "Pet.h"

class Bird : public Pet {
	private:
		int mimic;

	public:
	   Bird();
    Bird(int mimicIn, string _name, int _boredom, int _sleep, int _hunger);
    void setMimic(int x);
	  int getMimic();
		void playMimic();
};

#endif