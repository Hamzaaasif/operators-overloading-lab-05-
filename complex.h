#include<iostream>
using namespace std;
class ComplexNumber
{
  public:
  ComplexNumber() //Null constructor
  {

  };
  ComplexNumber(float Real , float Imaginary) //perimetrized constructor
  {
    this->real=Real;
    this->imaginary=Imaginary;
  };
  ComplexNumber(ComplexNumber& CloneComplex) //copy constructor
  {
    this->real=CloneComplex.real;
    this->imaginary=CloneComplex.imaginary;
  };
  void setreal(float Real)  //set real part of complex number
  {
    this->real=Real;
  };
  void setimaginary(float Imaginary)  //set imaginary part of complex number
  {
    this->imaginary=Imaginary;
  };
  float getreal() //return real part of complex number
  {
    return this->real;
  };
  float getimaginary() //return imaginary part of complex number
  {
    return this->imaginary;
  };

  void display()//display objects
  {
    cout<<"Real part :"<<this->real<<endl<<"Imaginary part :"<<this->imaginary<<endl;
  };

ComplexNumber operator +(ComplexNumber& z2)//operator overloading +
  {
    ComplexNumber z3;
    z3.real=this->real+z2.real;
    z3.imaginary=this->imaginary+z2.imaginary;
    return z3;
  };

  ComplexNumber operator -(ComplexNumber& z2)
  {
    ComplexNumber z3;
    z3.real=this->real-z2.real;
    z3.imaginary=this->imaginary-z2.imaginary;
    return z3;
  };

  ComplexNumber operator *(ComplexNumber& z2)
  {
    ComplexNumber z3;
    z3.real=(this->real*z2.real)-(this->imaginary*z2.imaginary);
    z3.imaginary=(this->real*z2.imaginary)+(this->imaginary*z2.real);
    return z3;
  };

  ComplexNumber operator /(ComplexNumber& z2)
  {
    ComplexNumber z3;
    z3.real=(((this->real*z2.real)-(this->imaginary*-z2.imaginary))/((z2.real*z2.real)+(z2.imaginary*z2.imaginary)));
    z3.imaginary= (((this->real*-z2.imaginary)+(this->imaginary*z2.real)) / ((z2.real*z2.real)+(z2.imaginary*z2.imaginary)));
    return z3;
  };

  bool operator >(ComplexNumber& z2)
  {
    if(this->real-z2.real > 0 && this->imaginary-z2.imaginary > 0 )
    {
      return true;
    }
    else
    {
      return false;
    }
  };

  bool operator <(ComplexNumber& z2)
  {
    if(this->real-z2.real < 0 && this->imaginary-z2.imaginary < 0 )
    {
      return true;
    }
    else
    {
      return false;
    }
  };

  ComplexNumber operator =(const ComplexNumber& z2)
  {
    this->real=z2.real;
    this->imaginary=z2.imaginary;
  };

  ComplexNumber(point& p ) 
  {
    this->real = p.getx();
    this->imaginary = p.gety();

  };


  private:
  float real;
  float imaginary;
};
ostream& operator <<(ostream& o,ComplexNumber z)
{
  return o<<"("<<z.getreal()<<","<<z.getimaginary()<<")";
}
