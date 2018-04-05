#include <bits/stdc++.h>
using namespace std;

int func (int arr4[], int n)
{
	if (n=3)
	{
		int cnt=1;
		int a=123;
		int b=(arr4[0]*100)+(arr4[1]*10)+(arr4[2]*1);
		if ((b-a)==0)
		return 1;
		if ((b-a)>100)
		{
			
			a=213;
			if ((b-a)>100)
			{
				cnt=cnt+2;
				a=312;
				if ((b-a)<100)
				{
					
				}
				else if ((b-a)==100)
				return cnt+1;
			}
		}
		else if ((b-a)<100)
		{
			
		}
		
	}
}
int main()
{
	int n;
	cin>>n;
	char arr1[n];
	char temp;
	char arr2[n];
	int arr3[n];
	int arr4[n];
	for (int i=0; i<n; i++)
	{
		cin>>arr1[i];
	}
	for (int i=0; i<n; i++)
	{
		cin>>arr2[i];
		arr3[i]=i+1;
	}
	for (int i=0; i<n; i++)
	{
		if (i==n-1)
		break;
		for (int j=i+1; j<n; j++)
		{
			if (arr1[i]>arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		}
	}
	for (int i=0; i<n; i++)
	{
		for (int j=i; j<n; j++)
		{
			if (arr2[i]==arr1[j])
			{
				arr4[i]=arr3[j];
			}
		}
	}
	int res;
	res = func (arr4, n);
	cout << res;
}
