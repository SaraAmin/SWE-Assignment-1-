#include <iostream>
using namespace std;

class Move
{
  private:
     double x;
     double y;
     double dx;
     double dy;

  public:
     Move(double a = 0,double b = 0)
    {
        x = a;
        y = b;
        dx = a;
        dy = b;
    }
 void addx(double v)
    {
        x += v;
    }
 void addy(double v)
    {
        y += v;
    }
 void Showmove(void) const
    {
        cout<<"X value : " << x << " Y value : " << y << " \n";
    }
 void Add( Move &m)
    {
        m.addx(x);
        m.addy(y);
    }
 void Reset(void)
    {
        x = dx;
        y = dy;
    }
};

  void main()
{
      Move x(10,10);
      Move y(10,10);
      x.Add(y);
      y.Showmove();
      y.Reset();
      y.Showmove();
};
