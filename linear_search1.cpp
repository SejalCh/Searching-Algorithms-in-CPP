#include<iostream>
using namespace std;
int main()
{
    int arr[100], x, i, num, arrTemp[50], j=0, k=0;
    cout<<"Enter the Size for Array Size: ";
    cin>>x;
    cout<<"Enter "<<x<<" Array Elements: ";
    for(i=0; i<x; i++)
        cin>>arr[i];
    cout<<"\nEnter the Number to Search: ";
    cin>>num;
    for(i=0; i<x; i++)
    {
        if(arr[i]==num)
        {
            arrTemp[j] = i;
            j++;
            k++;
        }
    }
    if(k>0)
    {
        cout<<"\nNumber Found at Index No. ";
        x = k;
        for(i=0; i<x; i++)
            cout<<arrTemp[i]<<" ";
    }
    else
        cout<<"\nNumber not Found!";
    cout<<endl;
    return 0;
}
/*output
Enter the Size for Array Size: 5
Enter 5 Array Elements: 1
9
6
8
0

Enter the Number to Search: 2

Number not Found!*/