#include<bits/stdc++.h>
using namespace std;

void solve(int ind,vector<int>&ar,int sum,int target,int nums[],int n)
{
    //cout<<sum<<" ";
    if(ind == n)
    {
        if(sum == target)
        {
            //cout<<2<<endl;
            for(auto it:ar)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return ;
    }
    ar.push_back(nums[ind]);
    sum+=nums[ind];

    solve(ind+1,ar,sum,target,nums,n);

    sum-=nums[ind];
    ar.pop_back();

    solve(ind+1,ar,sum,target,nums,n);
}

int main()
{
    int nums[] = {2,3,6,7};
    int target = 7;
    int n = 4;
    vector<int>ar;
    int sum = 0;
    solve(0,ar,0,target,nums,n);
}
