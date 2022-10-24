#include<bits/stdc++.h>
using namespace std;
int main(){

// Doing linear search operation here...

vector<int> v1;
int n;

int b;
cin>>b;



cout<<"Enter the count of the elements to be entered..."
cin>>n;

for (int i = 0; i < n; i++)
{
   int a;
   cin>>a;
   v1.push_back(a); 
}

for(int i=0;i<n;i++){
    if(v1[i] == b) {
        cout<<"Element found!!!"<<endl;
    return 1;
    }
}



    return 0;
}