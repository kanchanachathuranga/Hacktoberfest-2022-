//binary search in rotated sorted array
// given a array in sorted but it rotated 
// you to find a x
#include<bits/stdc++.h>
using namespace std;
int sorted(vector<int>v,int x){
    int n=v.size();
    int l=0,h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(v[mid]==x)return mid;
        else if(v[mid]>v[l]){
            if(v[l]<=x && x<v[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else{
            if (v[l] <= x && x < v[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int>v={100,200,300,400,10,30,50};
cout<<sorted(v,50);
return 0;
}
