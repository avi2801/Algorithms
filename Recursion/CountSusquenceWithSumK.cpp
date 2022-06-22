#include<bits/stdc++.h>
using namespace std;
int countS(int ar[],int i, int j, int &ans,int target,int sum)
{
	if(i==j)
	{
		if(sum == target)
		{
			ans++;
			return ans;
		}
		return ans;
	}
	sum+=ar[i];
	countS(ar,i+1,j,ans,target,sum);

	sum-=ar[i];
	countS(ar,i+1,j,ans,target,sum);

	return ans;
}
int main()
{
	int n = 3;
	int ar[] = {1,2,1};
	int target = 2;
	int ans = 0;
	int sum = 0;
	cout<<countS(ar,0,n,ans,target,sum)<<endl;


}
