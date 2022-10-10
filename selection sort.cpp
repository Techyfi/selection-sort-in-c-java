#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, i, arr[10], j;
    cout<<"Enter the Size (max. 10): ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nSorting the Array using Selection Sort Technique..\n";
    int min,l,temp;
    for(i=0;i<n-1;i++)
    {
        min=arr[i];
        l=i;
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                l=j;
            }
        }
 
        temp=arr[i];
        arr[i]=arr[l];
        arr[l]=temp;
    }
cout<<"\nArray Sorted Successfully!\n";
    cout<<"\nThe New Array is: \n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
