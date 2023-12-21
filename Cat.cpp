#include "Cat.h"
#include <iostream>
#include <string>
using namespace std;


Cat::Cat() : Pet() {
    fish = 0;
}
Cat::Cat(int fishIn, string _name, int _boredom, int _sleep, int _hunger) : Pet(_name, _boredom, _sleep, _hunger)
{
  fish = fishIn;
}

void Cat::setFish(int x)
{
  fish = x;
  
}

int Cat::getFish()
{
    return fish;
}
void Cat::playFish() {
	cout<<"Your cat went fishing and caught a fish!"<<endl;
  fish+=1;
}