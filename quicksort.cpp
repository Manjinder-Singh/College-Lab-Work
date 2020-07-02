#include<iostream>
#include<conio.h>
#include<time.h>
#include<dos.h>
using namespace std;
int a[40];
int partition(int a[40],int m,int p);
void interchange(int a[40],int i,int j);
void quicksort(int p,int q);
int main()
{
//clrscr();
int n,q,p,i;
clock_t start,end;
cout<<"enter the no. of elements:-"<<endl;
cin>>n;
cout<<"enter the elements:-"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
start=clock();
p=0;
q=n-1;
quicksort(p,q);
//delay(200);
end=clock();
cout<<"the sorted elements are:-"<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
cout<<"time complexity is:-"<<((end-start)/CLK_TCK);
getch();
}
void quicksort(int p,int q)
{
int j;
if(p<q)
{
j=partition(a,p,q+1);
quicksort(p,j-1);
quicksort(j+1,q);
}
}
int partition(int a[40],int m,int p)
{
int v,i,j;
v=a[m];
i=m;
j=p;
do
{
do
{
i++;
}while(a[i]<=v);
do
{
j--;
}while(a[j]>=v);
if(i<j)
{
interchange(a,i,j);
}
}while(i<=j);
a[m]=a[j];
a[j]=v;
return(j);
}
void interchange(int a[40],int i,int j)
{
int p;
p=a[i];
a[i]=a[j];
a[j]=p;
}







