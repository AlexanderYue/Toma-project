#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;


Dog::Dog() : Pet() {
    fetch = 0;
}

Dog::Dog(int fetchIn, string _name, int _boredom, int _sleep, int _hunger) : Pet(_name, _boredom, _sleep, _hunger)
{
  fetch = fetchIn;
}

void Dog::setFetch(int x)
{
  fetch = x;
  
}

int Dog::getFetch()
{
    return fetch;
}
void Dog::playFetch() {
	cout<<"You played fetch!"<<endl;
  fetch+=1;
}