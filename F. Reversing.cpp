#include <iostream>
 
using namespace std;
int main() {
    int a;
    cin>>a;
    int arr[a];
    
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = a-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    
    return 0;
}