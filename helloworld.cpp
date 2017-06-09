#include <iostream>
using namespace std;

int getMax(int a, int b);
int getMin(int a, int b);
int getSum(int a, int b);

int main()
{  
  cout<<"hello world, welcome to github."<<endl;  
  return 0;
}

int getMax(int a, int b)
{
  return a>b?a:b;
}

int getMin(int a, int b)
{
  return a<b?a:b;
}

int getSum(int a, int b)
{
  return a+b;
}
