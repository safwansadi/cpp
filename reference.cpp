# include<iostream>
using namespace std;
int main(){
            int i = 5;
            int *p;

            p = &i;

            cout<< *p<<endl;

            int& f =i;

            f= 8;

            cout<<i<<endl;



}
