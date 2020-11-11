/* WAP to input an array and find the element whose left and right subarray sum is equal*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>0)
    {
        int arr[n],sr,sl;
        sr = sl = 0;
        for(int i=0 ; i<n ; ++i)
        {
            cin>>arr[i];
            sr += arr[i];
        }
        
        for(int i=0 ; i<n-1 ; ++i)
        {
            sr -= arr[i];
            if(sl == sr)
            {
                cout<<"Index : "<<i<<endl;
                cout<<"Position : "<<i+1<<endl;
                cout<<"Value : "<<arr[i]<<endl;
                return 0;
            }
            sl += arr[i];
        }
        cout<<"No such index found"<<endl;
    }
    return 0;
}
