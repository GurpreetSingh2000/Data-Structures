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
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
}
