#include "Bird.h"
#include <iostream>
#include <string>
using namespace std;


Bird::Bird() : Pet() {
    mimic = 0;
}
Bird::Bird(int mimicIn, string _name, int _boredom, int _sleep, int _hunger) : Pet(_name, _boredom, _sleep, _hunger)
{
  mimic = mimicIn;
}
void Bird::setMimic(int x)
{
  mimic = x;
  
}
int Bird::getMimic()
{
    return mimic;
}
void Bird::playMimic() {
	cout<<"Your bird mimic'd you!"<<endl;
  mimic+=1;
}