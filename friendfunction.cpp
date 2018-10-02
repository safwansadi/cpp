#include<iostream>
using namespace std;

class rectangle;

class cost{
            int costRate;
    public:
           int totalCost(rectangle A);
           void setValue(int a){costRate = a;}

};
class rectangle{
                int height;
                int width;
        public:
                void set(int h,int w){height = h; width = w;}
                friend int cost::totalCost(rectangle A);

};
int cost::totalCost(rectangle A){return costRate * A.height * A.width;}
int main(){


        rectangle r;
        r.set(5,8);

        cost  C;
        C.setValue(100);

        //cout<<"Area = "<<C.setValue(int a)<<endl;
        cout<< "total cost = "<<C.totalCost(r)<<endl;





}
