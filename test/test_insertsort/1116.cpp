#include<iostream>
using namespace std;
void insertSort(int R[],int length)
{
	int i,j,temp;
	for(i=2;i<=length;++i)
	{
		temp=R[i];
		j=i-1;
		while(j>=1&&temp<R[j])
		{
			R[j+1]=R[j];
			--j;
		}
		R[j+1]=temp;
	}
}
void bubbleSort(int R[],int length)
{
	int i,j,flag,temp;
	for(i=length;i>=2;--i)
	{
		flag=0;
		for(j=1;j<=i-1;++j)
		{
			if(R[j]>R[j+1])
			{
				temp=R[j];
				R[j]=R[j+1];
				R[j+1]=temp;
				flag=1;
			}
			if(flag==0)
				return;
		}
	}
}
void quickSort(int R[],int l,int r)
{
	int i=l,j=r,temp;
	if(l<r)
	{
		temp=R[l];
		while(i!=j)
		{
			while(j>i&&R[j]>temp)
				--j;
			if(j>i)
			{
				R[i]=R[j];
				i++;
			}
			while(j>i&&R[i]<temp)
				++i;
			if(j>i)
			{
				R[j]=R[i];
				--j;
			}
		}
		R[i]=temp;
		quickSort(R,l,i-1);
		quickSort(R,i+1,r);
	}
}
void showdata(int R[],int n)
{
	for(int i=1;i<=n;++i)
	{
		cout<<R[i]<<endl;
	}
}
int main(void)
{
	int R[6];
	for(int i=1;i<6;++i)
	{
		cin>>R[i];
	}
	/*insertSort(R,5);*/
	//bubbleSort(R,5);
	quickSort(R,1,5);
	showdata(R,5);
	return 0;
}