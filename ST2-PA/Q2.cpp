#include <bits/stdc++.h>

using namespace std;


void findFreq(int* a, int n){
    //Declare the map
    unordered_map<int,int> hash;
    // frequency for the repeated numbers using unordered map
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    
    cout<<"repeated Number    frequency\n";
    //iterator->first == key(element value)
    //iterator->second == value(frequency)
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second>1)
    cout<<it->first<<"                  "<<it->second<<endl;
    
}

int main()
{
    //Taking input for length of the array in an array
    int n;
    cout<<"enter array length\n";
    cin>>n;
    int* arr=(int*)(malloc(sizeof(int)*n));
    
    cout<<"input array elements...\n";
    // Taking input for array items in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Calling Find Freq function by passing the Inputed Array
    findFreq(arr,n);

    return 0;
}
