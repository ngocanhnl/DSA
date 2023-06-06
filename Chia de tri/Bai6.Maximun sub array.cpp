#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
using ll = long long;

ll crossingSum(int a[],int l, int r, int mid){
    ll rightSum = 0, maxRight = 0;
    ll leftSum = 0, maxLeft = 0;
    for(int i=mid; i>=l; i--){
        leftSum += a[i];
        maxLeft = max(maxLeft,leftSum);
    }
    for(int i = mid + 1; i<= r; i++){
        rightSum += a[i];
        maxRight = max(maxRight,rightSum);
    }
    return maxRight + maxLeft;
}

ll maxSum(int a[], int l, int r){
    if(l==r){
        return a[l];
    }
    int mid = (l+r)/2;
    return max({
        maxSum(a, l, mid),
        maxSum(a,mid+1,r),
        crossingSum(a,l,r,mid)
    
    });
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    cout<<maxSum(a,0,n-1);
}
