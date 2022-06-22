
#include<bits/stdc++.h>
using namespace std;

bool solve(int ind,vector<int>&ar,int sum,int target,int nums[],int n)
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
			return true;
        }
        return false;
    }
    ar.push_back(nums[ind]);
    sum+=nums[ind];

    if(solve(ind+1,ar,sum,target,nums,n) == true) return true;

    sum-=nums[ind];
    ar.pop_back();

    if(solve(ind+1,ar,sum,target,nums,n) == true) return true;

	return false;
}

int main()
{
    int nums[] = {1,2,1};
    int target = 2;
    int n = 3;
    vector<int>ar;
    int sum = 0;
    solve(0,ar,0,target,nums,n);
}


