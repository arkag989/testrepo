#include<iostream>
using namespace std;
int first_accurence(int arr[],int key,int i,int n)
{
    if(n==i)
    {
        return -1;
    }

    if(arr[i]==key)
    {
        return i;
    }
    first_accurence(arr,key,i+1 ,n);
}
int last_accurence(int arr[],int key,int i,int n)
{
    if(n==i)
    {
        return -1;
    }
    last_accurence(arr,key,i+1,n);
    if(arr[i]==key)
    {
        return i;
    }
}
int main()
{
    int arr[]={4,2,1,2,5,2,7};
   cout<< first_accurence(arr,2,0,7)<<endl;
   cout<< last_accurence(arr,2,0,7)<<endl;
   return 0;
}