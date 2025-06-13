#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

class Student{
    public:

    string name;
    int cls;
    char section;
    int id;
    int mm;
    int em;
};

bool cmp(Student a,Student b){
    if(a.mm+a.em<b.mm+b.em) return 0;
    if(a.mm+a.em==b.mm+b.em){
        return a.id<b.id;
    }

    return 1;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */

    int n,i;
    cin>>n;

    Student a[n];

    for(i=0;i<n;i++){
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id>>a[i].mm>>a[i].em;
    }

    sort(a,a+n,cmp);
                                        
    for(i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<" "<<a[i].mm<<" "<<a[i].em<<endl;
    }

    return 0;
}
