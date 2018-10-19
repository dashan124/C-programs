//
// Created by dashan on 19/10/18.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define re1(x) scanf("%lld",&x)
#define re2(x,y) scanf("%lld%lld",&x,&y)
#define re3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define pb push_back
#define mp make_pair
bool comp(pair<ll,ll> a,pair<ll,ll> b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first<b.first;
}
int main(){
    ll n;
    re1(n);
    ll arr[n];
    for(ll i=0;i<n;i+=1){
        re1(arr[i]);
    }
    sort(arr,arr+n);
    ll q;
    re1(q);
    while(q--){
        ll key;
        re1(key);
        ll start=0;
        ll end=n-1;
        ll f=-1;
        while(start<=end){
            ll mid=(start+end)/2;
            if(arr[mid]==key){
                f=max(f,mid);
                break;
            }
            else if(arr[mid]>key){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(f<0){
            cout<<"-1"<<endl;
        }
        else{
            cout<<f<<endl;
        }
    }
    return 0;
}
