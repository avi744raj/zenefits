#include <bits/stdc++.h>
using namespace std;

long long int fact(int n)
{
	long long int arr[16];
	arr[0]=1;
	for (int i=1; i<16; i++)
	{
		arr[i]= arr[i-1]*i;
	}
	return arr[n];
}
int main()
{
	int n;
	cin>>n;
	long long int res = fact (n);
	cout <<res;
	return 0;
}
