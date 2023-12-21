#ifndef PET_H
#define PET_H
#include <string>
using namespace std;

class Pet{
public:
    Pet();
    void setName(string UserName);
    string getName();
    void printInfo();
    void setPlay(int x); 
    void setRest(int x);
    void setEat(int x);
    void play();
    void rest();
    void eat();
    void SaveInfo(int saveFile, int species, int uniq);
    Pet(string _name, int _boredom, int _sleep, int _hunger);

protected:
    string name;
    int hunger;
    int boredom;
    int sleep;
};

#endif