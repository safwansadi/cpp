
#include<iostream>
using namespace std;

class rectangle{
        int height;
        int width;
        public:
            int area();
            rectangle(int h,int w);
};
int rectangle::area()
{
    return height*width;

}
rectangle::rectangle(int h,int w)
{

        height = h;
        width = w;
}
int main()
{
    rectangle obj[3] = {rectangle(2,3),rectangle(3,4),rectangle(5,5)};//rectangle(8,10)};

 for(int i=1;i<3;i++)
            cout<<i<<" = "<<obj[i].area()<<endl;

return 0;


}
