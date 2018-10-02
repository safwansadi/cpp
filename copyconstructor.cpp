#include<iostream>
#include<string>

using namespace std;

class person{

        public:
              string *name;
              int age;
            person(string name,int age)
                                    {
                                      this -> name = new  string(name);
                                      this -> age = age;
                                      }
            person(const person &p){
                                      name = new string(*p.name);
                                      age=p.age;


                                    }
            void changeNameandAge(string name,int age){*(this -> name) = name; this -> age = age;  }

            void intro(){cout << "my name is "<<*name<<"my age is "<<age<< endl;}

};
int main(){

         person anil("anil",24);
         anil.intro();

         person duplicateanil = anil;
        duplicateanil.intro();

        anil.changeNameandAge("sadi",20);
        anil.intro();

        duplicateanil.intro();







}

