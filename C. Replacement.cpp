#include <iostream>

using namespace std;
int main() {
    int a,flag=0;
    
    cin>>a;
    int arr[a];
    
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < a; i++)
    {
            if (arr[i]>0)
    {
        cout<<"1"<<" ";
    }
    else if (arr[i]<0)
    {
        cout<<"2"<<" ";
    }
    else{
        cout<<arr[i]<<" ";
    }
    }

    
    
    
    return 0;
}