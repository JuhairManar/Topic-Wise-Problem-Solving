#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

class Student{
    public:

    string name;
    int roll;
    int marks;
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    int n,i,j;
    cin>>n;

    Student a[n];
    for(i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }

    // for(i=0;i<n;i++){
    //     cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    // }


    i=0;
    j=n-1;
    
    while(i<j){
        swap(a[i],a[j]);
        i++;j--;
    }

    for(i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }



  return 0;
}


