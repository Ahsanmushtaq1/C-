#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
    private:
    string name;
    public:
    void describe()
    {cout<<"your shape is "<<endl;
    cin>>name;}
    virtual void draw()=0;
};
class circle : public shape
{
    public:
    void draw() override
    {cout<<"drawing circle "<<endl;}
};
class rectangular: public shape
{
    public:
    void draw() override
    {cout<<"drawing a rectangular "<<endl;}
};
int main()
{
    circle cir;
    cir.describe();
    cir.draw();
    rectangular rec;
    rec.describe();
    rec.draw();
}