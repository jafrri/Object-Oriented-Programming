#include <iostream>

using namespace std;


class Restaurants{
  
  virtual void location()=0;
  
  virtual void famousfor()=0;
    
};


class BBQ_tonight : public Restaurants{
  
  void location(){
      cout<<"Bilawal Chowrangi";
  }
  
  void famousfor(){
      cout<<"Palak Paneer";
  }
    
};

class Farhanbiryani : public Restaurants
{
  
  void location(){
      cout<<"Gulistan e Johar";
  }
  
  void famousfor(){
      cout<<"Biryani";
  }
    
};


class Tapal : public Restaurants
{
  
  void location(){
      cout<<"Habib University";
  }
  
  void famousfor(){
      cout<<"Cockroach";
  }
    
};

class Dilpasand : public Restaurants
{
  
  void location(){
      cout<<"North Nazimabad";
  }
  
  void famousfor(){
      cout<<"Gulab Jamun";
  }
    
};



int main(){
    Restaurants** res = new Restaurants*[3];
    res[0] = new BBQ_tonight();
    res[1] = new Farhanbiryani();
    res[2] = new Tapal();
    res[3] = new Dilpasand();

}