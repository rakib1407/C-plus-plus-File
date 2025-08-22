#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int arr[3][4];
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
        cin>>arr[i][j];
    }
  }
  int trg;
cin>>trg;
int trg1;
cin>>trg1;

    for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
        cout<<arr[i][j] <<" ";
    }
    cout<<endl;
  }
  int sum=0;
    for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
       sum=sum+arr[i][j];
    }
   
  }
cout<<"Totalsum ="<<sum<<endl;

int rowsum=0;

for(int j=0;j<4;j++)
{
    rowsum +=arr[trg][j];
}
cout<<"rowsum ="<<rowsum<<endl;

int coulsum=0;
for(int i=0;i<3;i++)
{
    coulsum+=arr[i][trg1];
}
cout<<"coulsum ="<<coulsum<<endl;

int target;
cin>>target;
bool found=0;
int count=0;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
        if(arr[i][j]==target)
        {
          found=1;
          count +=1;
        }
       
    }
  }
  if(found==1)
  {
    cout<<"Found!!"<<"\n";
  }
  else
  {
    cout<<"No Found!!"<<"\n";
  }
  cout<<"Count ="<<" "<<count<<"\n";


  int max=0;
  int maxrow=0;
  int maxcol=0;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
        if(max<arr[i][j])
        {
          max=arr[i][j];  
         maxrow=i;
         maxcol=j;
        }
    }
  }
  cout<<"Max Value ="<<" " <<max<<"\n";
  cout<<"Max Location :"<<"Row = "<<" "<<maxrow<<" Col ="<<" "<<maxcol<<"\n";

  
   for(int j=0;j<4;j++)
  {
    for(int i=0;i<3;i++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}