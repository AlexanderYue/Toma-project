#include "Pet.h"
#include <iostream>
#include <string>
#include<cstdlib>
#include <fstream>
using namespace std;

Pet::Pet()
{
   name = "Joe";
   hunger = 100 - (1+ (rand() % 10));
   boredom = 100 -(1+ (rand() % 10));
   sleep = 100-(1+ (rand() % 10));
}

Pet::Pet(string _name, int _boredom, int _sleep, int _hunger)
{
   name = _name;
   boredom = _boredom;
  sleep = _sleep;
  hunger = _hunger;
}

void Pet::setName(string userName) {
	name = userName;
}

string Pet::getName() {
	return name;
}

void Pet::setPlay(int x) {
	boredom = x;
}

void Pet::setRest(int x)
{
  sleep = x;
}

void Pet::setEat(int x)
{
  hunger = x;
}

void Pet::play() {
	boredom += 1 + (rand() % 10);
  sleep -=1+ (rand() % 10);
  hunger -=1+ (rand() % 10);
  
}
void Pet::rest() {
	sleep += 1 + (rand() % 10);
  hunger -=1+ (rand() % 10);
  boredom -= 1 + (rand() % 10);
}

void Pet::eat() {
	hunger += 1+ (rand() % 10);
  boredom -= 1 + (rand() % 10);
  sleep -=1+ (rand() % 10);
}


void Pet::printInfo() {
	cout << name << endl;
	cout << "Hunger Level: " << hunger << endl;
	cout << "Boredom Level: " << boredom << endl;
  cout << "Sleepiness Level: " << sleep << endl;
}

void Pet::SaveInfo(int saveFile, int spec, int uniq)
{
  string files[3] = {"save1","save2","save3"};
  ofstream file(files[saveFile-1]);
  file<<name<<endl;
  file<<hunger<<endl;
  file<<boredom<<endl;
  file<<sleep<<endl;
  file<<spec<<endl;
  file<<uniq<<endl;
}