#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include "Pet.h"
#include "Dog.h"
#include "Bird.h"
#include "Cat.h"
using namespace std;

int spec;
Dog dog;
Cat cat;
Bird bird;
string files[3] = {"save1","save2","save3"};
string species[3] = {"Dog","Bird","Cat"};
int menu()
{
  int temp = 0;
  while((temp<1) || (temp>3))
    {
    cout<<"What would you like to do?"<<endl;
    cout<<"To load save file, press 1!"<<endl;
    cout<<"To start new save, press 2!"<<endl;
    cout<<"To quit, press 3!"<<endl;
    cin>>temp;
      if ((temp<1) || (temp>3))
      {
        cout<<"Please select a valid choice!"<<endl;
      }
    }
    return temp;
}



void loadData(int saveFile, int newFile, Pet pet)
{
    int quit = 0;
        if (newFile!=0)
        {
          string temp;
          cout<<"What would you like to name your pet?"<<endl;
          cin>>temp;
          cout<<"What pet would you like?"<<endl;
          cout<<"(1) Dog"<<endl;
          cout<<"(2) Cat"<<endl;
          cout<<"(3) Bird"<<endl;
          pet.setName(temp);
          cin>>spec;
          if (spec == 1)
          {
            dog.setName(temp);
          }
          else if (spec==2)
          {
            bird.setName(temp);
          }
          else 
          {
            cat.setName(temp);
          }
          ofstream file(files[saveFile-1]);
          file.close();
        }
        else if (newFile==0)
        {
          string name;
          string temp;
          int hung;
          int bore;
          int sle;
          int uniq;
          ifstream save(files[saveFile-1]);
          getline(save, name);
          save>>hung;
          save>>bore;
          save>>sle;
          save>>spec;
          save>>uniq;
          if (spec == 1)
          {
          dog.setFetch(uniq);
          dog.setName(name);
          dog.setEat(hung);
          dog.setPlay(bore);
          dog.setRest(sle);
          }
          else if (spec==2)
          {
            bird.setMimic(uniq);
            bird.setName(name);
            bird.setEat(hung);
            bird.setPlay(bore);
            bird.setRest(sle);
          }
          else 
          {
            cat.setFish(uniq);
            cat.setName(name);
            cat.setEat(hung);
            cat.setPlay(bore);
            cat.setRest(sle);
          }
        }
      
}


int gameloop(int species, int savefile)
{
  int quit = 0;
  int option;
    while(quit!=1)
      {
        if (species == 1)
        {
          dog.printInfo();
          cout<<"Fetch count:" <<dog.getFetch()<<endl;
          cout<<"----------------------------------------"<<endl;
          cout<<"        /  \\"<<endl;
          cout<<"       / ..|\\"<<endl;
          cout<<"      (_\  |_)"<<endl;
          cout<<"     /     \\"<<endl;
          cout<<"_   /  `   |"<<endl;
          cout<<"\\/  \  | _\\"<<endl;
          cout<<" \   /_ || \\_"<<endl;
          cout<<"  \____)|_) \_)"<<endl;
          cout<<"----------------------------------------"<<endl;
          cout<<"What would you like to do?"<<endl;
          cout<<"(1) Play"<<endl;
          cout<<"(2) Rest"<<endl;
          cout<<"(3) Feed"<<endl;
          cout<<"(4) Fetch"<<endl;
          cout<<"(5) to save and quit!"<<endl;
          cin>>option;
          if (option==1)
          {
            dog.play();
            cout<<"You selected play!"<<endl;
          }
          else if (option==2)
          {
            dog.rest();
            cout<<"You selected rest!"<<endl;
          }
          else if (option==3)
          {
            dog.eat();
            cout<<"You selected eat!"<<endl;
          }
          else if(option==4)
          {
            dog.playFetch();
            cout<<"You selected fetch!"<<endl;
          }
          else if (option==5)
          {
            dog.SaveInfo(savefile, species, dog.getFetch());
            cout<<"Thank you for playing!"<<endl;
            return 0;
          }
          else
          {
            cout<<"Please select a valid option!"<<endl;
          }
          
        }
      else if (species == 3)
        {
          bird.printInfo();
          cout<<"Mimic count:" <<bird.getMimic()<<endl;
          cout<<"----------------------------------------"<<endl;
          cout<<"   \\"<<endl;
          cout<<"   (o>"<<endl;
          cout<<"\\_//)"<<endl;
          cout<<" \_/_)"<<endl;
          cout<<"  _|_"<<endl;
          cout<<"----------------------------------------"<<endl;
          cout<<"What would you like to do?"<<endl;
          cout<<"(1) Play"<<endl;
          cout<<"(2) Rest"<<endl;
          cout<<"(3) Feed"<<endl;
          cout<<"(4) Mimic"<<endl;
          cout<<"(5) to save and quit!"<<endl;
          cin>>option;
          if (option==1)
          {
            bird.play();
            cout<<"You selected play!"<<endl;
          }
          else if (option==2)
          {
            bird.rest();
            cout<<"You selected rest!"<<endl;
          }
          else if (option==3)
          {
            bird.eat();
            cout<<"You selected eat!"<<endl;
          }
          else if(option==4)
          {
            bird.playMimic();
            cout<<"You selected Mimic!"<<endl;
          }
          else if (option==5)
          {
            bird.SaveInfo(savefile, species, bird.getMimic());
            cout<<"Thank you for playing!"<<endl;
            return 0;
          }
          else
          {
            cout<<"Please select a valid option!"<<endl;
          }
          
        }
        else if (spec==2)
        {
          
          cat.printInfo();
          cout<<"Fish count:" <<cat.getFish()<<endl;
          cout<<"----------------------------------------"<<endl;
          cout<<"     /\\"<<endl;
          cout<<"       )  ( ')"<<endl;
          cout<<"      (  /  )"<<endl;
          cout<<"       \(__)|"<<endl;
          cout<<"----------------------------------------"<<endl;
          cout<<"What would you like to do?"<<endl;
          cout<<"(1) Play"<<endl;
          cout<<"(2) Rest"<<endl;
          cout<<"(3) Feed"<<endl;
          cout<<"(4) Fish"<<endl;
          cout<<"(5) to save and quit!"<<endl;
          cin>>option;
          if (option==1)
          {
            cat.play();
            cout<<"You selected play!"<<endl;
          }
          else if (option==2)
          {
            cat.rest();
            cout<<"You selected rest!"<<endl;
          }
          else if (option==3)
          {
            cat.eat();
            cout<<"You selected eat!"<<endl;
          }
          else if(option==4)
          {
            cat.playFish();
            cout<<"You selected Fish!"<<endl;
          }
          else if (option==5)
          {
            cat.SaveInfo(savefile, species, cat.getFish());
            cout<<"Thank you for playing!"<<endl;
            return 0;
          }
          else
          {
            cout<<"Please select a valid option!"<<endl;
          }
      }
      
      }

  return 0;
}



int main() {
    Pet pet;
    int option = 0;
    int savefile = 0;
    int newFile=0;
    option = menu();
    if (option==3)
    {
      cout<<"Thanks for playing!";
      return 0;
    }
    else if (option==1)
    {
      while((savefile<1) || (savefile>3))
    {
      cout<<"You've selected load save file!"<<endl;
      cout<<"Select save file from the list :"<<endl;
      cout<<"(1) Save 1"<<endl;
      cout<<"(2) Save 2"<<endl;
      cout<<"(3) Save 3"<<endl;
      cin>>savefile;
      if ((savefile<1) || (savefile>3))
      {
        cout<<"Please select a valid choice!"<<endl;
      }
    }
    }
    else if (option==2)
    {
      newFile = 1;
      while((savefile<1) || (savefile>3))
    {
      cout<<"You've selected create new save file! (This will override any saves!)"<<endl;
      cout<<"Select save file from the list :"<<endl;
      cout<<"(1) Save 1"<<endl;
      cout<<"(2) Save 2"<<endl;
      cout<<"(3) Save 3"<<endl;
      cin>>savefile;
      if ((savefile<1) || (savefile>3))
      {
        cout<<"Please select a valid choice!"<<endl;
      }
    }
    }
      loadData(savefile, newFile, pet);
      gameloop(spec, savefile);
    return 0;
}