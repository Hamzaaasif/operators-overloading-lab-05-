#include<iostream>
#include "Point.h"
#include "complex.h"
using namespace std;
int main()
{
  point a(1.5 , 3.7);
  point b(4.5 , 5.5);
  point *c;
  point d;
  b = point(3.0 , 4.0);
  c = new point(5.0 , 6.0);
  c->display();
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
  b=(point)2.0;
  b.display();
  d=a+b+*c;
  d.display();
  point p(3.4,8.9);
  ComplexNumber z1(3.5,7.9);
  z1=(ComplexNumber)p;
  z1.display();
  if(a()==true)
  {
    cout<<"It is a point number"<<endl;
  }
  else
  {
    cout<<"It is a real number"<<endl;
  }
   a [1] ;   //https://github.com/Hamzaaasif/operators-overloading-lab-05-.git
  a.display();

  system("pause");
}
