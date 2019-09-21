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

    int flag=-1;

    for(int i=0;i<n;i++)
        {
            if(a[i]==num)
            {
                flag=i;
                break;
            }
        }
        if(flag!=-1)
            cout<<"Search Element found at "<<flag<<" index";
        else
            cout<<"Search element not found";

}
