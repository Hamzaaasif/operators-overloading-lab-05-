#include<iostream>
#include "Point.h"
using namespace std;
int main()
{
  point a(1.5 , 3.7);
  point b(4.5 , 5.5);
  point *c;
  point d;
  b = point(3.0 , 4.0);
  c = new point(5.0 , 6.0);
  cout<<"C out :"<<*c<<endl;
  d = b + a;
  d.display();
  cout<<"D out :"<<d<<endl;
  if(b > a )
  {
    cout<<"b > a"<<endl;
  }
  else
  {
    cout<<"b < a"<<endl;
  }
  d = a + 10.4;
  d.display();
  cout<<d<<endl;
  system("pause");
}
