#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,count1=0,count2=0;
    cin>>n;
    for (i = 0; i < n; i++)
    {
    	int num;
    	cin>>num;
    	if (num==1)
    		count1++;
    	else if (num==2)
    		count2++;
    }
    int ans1=count1;
    int ans2=count2+((count1-count2)/3);
    if (count1<=count2)
    	cout<<ans1<<endl;
    else if (count1>count2)
    	cout<<ans2<<endl;
    return 0;
}