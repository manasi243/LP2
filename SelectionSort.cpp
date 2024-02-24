#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\nEnter the size of array : ";
	cin>>n;
	int *num;
	num=new int[n];
	cout<<"\nEnter numbers : ";
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				int temp;
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	cout<<"\nAfter sorting : ";
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<endl;
	}
}
