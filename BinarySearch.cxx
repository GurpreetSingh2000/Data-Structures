/*
* Data Structures
* Made by Gurpreet Singh
*/


#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of array\n";
    int n;
    cin>>n;

    int a[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"Enter the element to be searched\n";
    int num;
    cin>>num;


    int f=-1;
            int z=1;
            for(int i=0,j=n-1,k=0;k<=n;k++)
            {
                z=(int)(j+i)/2;
                if(a[z]==num)
                {
                    f=(z+1);
                }
                else if(a[z]<num)
                i=z+1;
                else
                j=z-1;
            }
            if(f!=-1)
                cout<<"element found at "<<f<<" index";
            else
                cout<<"element not found";
}
