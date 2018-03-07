#include<iostream>
using namespace std;
class point
{
  public:
  point ()
  {

  };
  point (float a,float b)
  {
    this->x = a;
    this->y = b;
  };
  point(point& clone)
  {
    this->x=clone.x;
    this->y=clone.y;
  };
  void setx(float a)
  {
     this->x = a;
  };
  void sety(float b)
  {
    this->y= b;
  };
  float getx()
  {
    return this->x;
  };
  float gety()
  {
    return this->y;
  };

  point operator+ (point& A)
  {
    point a;
    a.x = this->x + A.x;
    a.y = this->y + A.y;
    return a;
  };

  point operator -(point& A)
  {
    point a;
    a.x=this->x-A.x;
    a.y=this->y-A.y;
    return a;
  };

  void operator = (const point& A)
  {
    this->x = A.x;
    this->y = A.y;
  };

  bool operator >(point& A)
  {
    if( this->x > A.x &&  this->y > A.y)
    {
      return true;
    }
     else
    {
      return false;
    }
  };

  bool operator <(point A)
  {
    if(A.x < this->x && A.y < this->y )
    {
      return true;
    }
     else
    {
      return false;
    }
    /*if(x==y)
    {
      return 0;
    }*/
   
  };
  void display()
  {
    cout<<"Point x :" << this->x << endl << "Point y :" <<this->y <<endl;

  };
  point operator+ (float A)
  {
    point a;
    a.x = this->x + A;
    a.y = this->y + A;
    return a;
  };



private:
float x;
float y;
};
ostream& operator<<(ostream& o,point x)
{
  return o<<"("<<x.getx()<<","<<x.gety()<<")"<<endl;

};