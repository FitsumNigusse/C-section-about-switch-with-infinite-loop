#include <iostream>

using namespace std;

int main()
{
 cout<<" 1. write width and height and i will tell you the area \n";
 cout<<" 2. write two number and i will tell you the sum of the number \n";
 cout<<" 3. writ two number and i will tell you the product of the number\n";
 cout<<"-1. to exit\n";
 int c;
 cout<<" writ your choose\n";
 cin>>c;
 while(1){
        if(c==-1)
        break;
 switch(c){
 case 1:
     int w,h,area;
     cout<<"write a width\n";
     cin>>w;
     cout<<"write a hight \n";
     cin>>h;
     area=w*h;
     cout<<"the area of the rectangle is\t" <<area<<endl;
     break;
 case 2:
{
    int x,y,sum;
    cout<<"write two number\n";
    cin>>x>>y;
    sum=x+y;
    cout<<"the sum of those two number is\t"<<sum<<endl;
 }
    break;
 case 3:
    {int x,y,pro;
    cout<<"write two number \n";
    cin>>x>>y;
    pro=x*y;
    cout<<"the product of those number is \t"<<pro<<endl;
    }
    break;
    default:
    cout<<"wrong choose\n";
 }
 cout<<"write your choose again \n";
 cin>>c;
 }

    return 0;
}
