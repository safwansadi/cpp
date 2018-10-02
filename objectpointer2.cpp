#include<iostream>
using namespace std;

class rectangle{
            int height;
            int width;
    public:
            int area();
            void set(int h,int w);

};
int rectangle::area(){

                    return height* width;
}
void rectangle::set(int h,int w){

            height = h;
            width = w;

}
int main()
{
   rectangle obj;
   rectangle *p;

   obj.set(2,6);
   cout << "area = "<<obj.area()<<endl;

   p = &obj;

   p -> set(3,8);
   cout << "area = "<<obj.area()<<endl;

   return 0;







}
