
#include<iostream>
using namespace std;

int main()
{
   int frnd = 0;int i,j;

  char fr[4][4] = {{'0','*','2','3'},
                {'1','4','6','*'},
                {'2','*','4','4'},
                {'3','*','5','*'}};

  for(i = 0; i < 4; i++) {
    for(j = 0;j < 4;j++) {
        cout<<fr[i][j]<<" ";
        }
   cout<<endl;


}
for(int a=0; a<4;a++) {
    for(int b = 0; b < 4;b++) {
        if(fr[a][b] == '*'){
   //frnd =frnd+1;
        frnd = frnd + 1;
        }
//else{frnd=0;cout<<frnd;}
   }

}
cout<<"friend = "<<frnd<<endl;
}
