#include<iostream>

using namespace std;

class abc{
        public:
                static int a; ///a static variable is that variable what's previous value remain saved in the mamory untill the program's end//
                static int b;

       static void fun() /// in a static function every variable must be static//
       {cout<<++a<<" "<<++b<< endl;} /// if a++ & b++ is written output will start from (0 0) whereas ++a & ++b let the output start from(1 1)//


};
int abc::a;/// defination of static variable which should be placed always after the class//
int abc::b;
int main()
{
    abc ob,ob1;
    ob.fun();
    ob.fun();                                                                                                                                                                                                                                                                                                                                                                  ob.fun();
    ob.fun();
    ob1.fun();


}
