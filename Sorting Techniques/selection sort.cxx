#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of array\n";
    int n;
    cin>>n;

    cout<<"Enter the elements of array\n";
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
    {
        int p=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[p])
                p=j;
        }
        int t=a[p];
        a[p]=a[i];
        a[i]=t;
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
}
