#include<iostream>
using namespace std;

sort(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;

    int y[n1];
    int z[n2];

    for(int i=0;i<n1;i++)
        y[i]=a[l+i];

    for(int j=0;j<n2;j++)
        z[j]=a[m+j+1];

    int i=0;
    int j=0;
    int k=l;

    while(i<n1&&j<n2)
    {
        if(y[i]<=z[j])
        {
            a[k]=y[i];
            i++;
        }
        else
        {
            a[k]=z[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=y[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=z[j];
        k++;
        j++;
    }
}

merge(int a[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;

        merge(a,l,m);
        merge(a,m+1,r);

        sort(a,l,m,r);
    }
}

int main()
{
    cout<<"Enter the size of array\n";
    int n;
    cin>>n;

    cout<<"Enter the elements of array\n";
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    merge(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
}
