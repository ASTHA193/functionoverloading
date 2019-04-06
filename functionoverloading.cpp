#include<iostream>
using namespace std;
class test
{
    public:
    void  disp()
    {
    cout<<"\n my name is astha";
    }
};
class test1:public test
{
    public:
    void disp()
    {
    cout<<"astha is my name";
    }
};
int main()
{
test1 ob;
ob.disp();
ob.test::disp();
return 0;
}

