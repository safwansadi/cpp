#include<cstdio>
#include<cstdlib>
#include<iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
//enterthe tempereture in celsius
int celsius;
cout <<"enter the tempereture in celsius :";
cin >> celsius;

//calculate conversion fector for celsius
// to farenheit
int factor;
factor = 212 - 32;
//use conversion factor to convert celsius
//into farenheit values
int fahrenheit;
fahrenheit = factor * celsius/100 + 32;
//output result (followed by a newline)
cout<<"Fahrenheit value is :";
cout<< fahrenheit<<endl;
//wait untill user ready is ready before terminating program
//to allow the user to see the program result
cout << "press enter to continue..."<<endl;
cin.ignore(10,'\n');
cin.get();
return 0;
}
