
//***CodeBy_Beyourwild7***//

#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vlld vector<lld>
#define pb push_back
#define ff first
#define ss second
#define ln '\n'
#define pii pair<int,int>
#define mii map<int, int>
#define vii vector<pii>
#define forf(var,frm,cntt) for(int var=frm;var<cntt;++var)
#define forr(var,cntt,frm) for(int var=cnt-1;var>=cntt;--var)
#include<string>
using namespace std;


void run_case()
{

    int n;
    cin>>n;

    int arr[n];
    for(auto &x : arr)cin>>x;
 
    int a = arr[1]-arr[0];

    int b = arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]-b > a)
        {
            a= arr[i]-b;
        }

        if(arr[i]<b)
        {
            b= arr[i];
        }
    }

    cout<<a;



    cout<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    #endif


    int testcases=1;
    //cin>>testcases;
    
    while(testcases--)
    {
        run_case();
    }
    return 0;
}