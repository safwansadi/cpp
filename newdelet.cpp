#include<iostream>
using namespace std;

int main()
{
    int *p;

    p = new int(3);

    cout << *p<< endl;
    delete(p);

}
