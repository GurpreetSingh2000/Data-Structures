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

    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;

        while(a[j]>key&&j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
}
