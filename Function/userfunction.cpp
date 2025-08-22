#include <bits/stdc++.h>
using namespace std;

bool a(int a)
{

  if(a%2==0)
  {
     return true;
  }
  else
  {
    return false;
  }
}

void g()
{
    cout<<"Hi";
}

void add(int a,int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}
int max(int a,int b)
{
    if(a<b){
        return b;
    }
    return a;
}
float  pi = acos(-1.0);
float area(int r)
{
    float areaofcricle= pi*r*r;
    return areaofcricle;
}

void increment(int  a)
{
    a++;
    cout<<a<<endl;
}
void incrementa(int  *a)
{
   (*a)++;
    cout<<*a<<endl;
}

int power(int a,int b)
{
    int res=1;
    for(int i=0;i<b;i++)
    {
        res*=a;
    }
    return res;
}


int main() {
    int n;
    cin>>n;
    if(a(n))
    {
        cout<<n<<"is Even "<<endl;
    }
    else
    {
        cout<<n<<"Is Odd"<<endl;
    }
  
    g();

    int x,w;
    cin>>x>>w;
    add(x,w);
   int a,b;
   cin>>a>>b;
    int s= max(a,b);
    cout<<s<<endl;


int r;
cin>>r;
cout<<area(r)<<endl;

int ra;
cin>>ra;
increment(ra);
int ra1;
cin>>ra1;
incrementa(&ra1);
cout<<ra1<<endl;


int xa,xb;
cin>>xa>>xb;
cout<<power(xa,xb)<<endl;
}