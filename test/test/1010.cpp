//#include<iostream>
//using namespace std;
//1010
//class A{
//	int x,y,sum;
//public: int getSum(int a,int b)
//		{return a+b;}
//		void ptintf(){
//			cout<<"hello";
//		}
//};
//int main(){
//	int x,y;
//	A a;
//	/*cout<<"please input two integers:"<<'\n';*/
//	cin>>x;
//	cin>>y;
//	cout<<"x+y="<<a.getSum(x,y);
//	return 0;
//}

//1011
//inline int doub(int x=1);
//int main(){
//	for(int i=1;i<=3;i++)
//		cout<<i<<"doubled is"<<doub(i)<<endl;
//	cout<<"1+2doubled is"<<doub();
//}
//inline int doub(int x){
//	return x*2;}

//10111
//int main(){
//int i;
//int &j=i;
//i=30;
//cout<<i<<"\t"<<j<<endl;
//j=40;
//cout<<i<<"\t"<<j<<endl;
//return 0;
//}

//10112
//void swap(int &a,int &b){
//	int temp;
//	temp=a;
//	a=b;
//	b=temp;
//}
//void swap1(int *m,int *n){
//	int temp;
//	temp=*m;
//	*m=*n;
//	*n=temp;
//}
//int main(){
//	int x=10,y=20;
//	cout<<x<<'\t'<<y<<endl;
//	/*swap(x,y);*/
//	swap1(&x,&y);
//	cout<<x<<'\t'<<y<<endl;
//	return 0;
//}

//10121
//int &index(int);
//int a[]={1,2,3,4,5};
//int main(){
//index(1)=20;
//cout<<index(1)<<":"<<a[1];
//}
//int &index(int i){
//	return a[i];
//}
//#include<iostream>
//#include<vector>  
//using namespace std; 
//const int Maxsize=1000;
//void solve(vector<int> a,int n)
//{
//	int supa[Maxsize];
//	for(int i=0;i<2*n;++i)
//	{
//		supa[i]=a[i];
//	}
//	for(int i=0;i<2*n;++i)
//	{
//		if(i%2==0)
//		{
//			a[i]=supa[i/2];
//
//		}else
//		{
//			a[i]=supa[n+i/2];
//		}
//	}
//
//}
//int main()
//{
/*int a[6]={1,2,3,4,5,6};
int b[6];
solve(a,b,3);
for(int i=0;i<6;i++)
{
cout<<b[i]<<"";
}*/
//	int zushu;
//	cin>>zushu;
//	//int test[maxsize][maxsize];
//	vector<vector<int>> test;
//		for(int i=0;i<zushu;++i)
//		{
//			int n,k;
//			cin>>n>>k;
//			vector<int> a;
//			for(int j=0;j<2*n;++j)
//			{
//				cin>>a[j];
//			}
//			for(int i=0;i<k;++i)
//			{
//				solve(test[i],n);
//			}
//			test.push_back(a);
//		}
//		for(int i=0;i<zushu;++i)
//		{
//			for(int j=0;j<test.size;++j)
//			{
//				for(int i=0;i<test[j].size;++i)
//				{
//					cout<<test
//				}
//			}
//
//		}
//		return 0;
//}
#include<iostream>
using namespace std;
const int Maxsize=50;
int sum_max(int a[],int n)
{
	int sum=0;
	for(int i=1;i<n;++i)
	{
		int temp=a[i]-a[i-1];
		if(temp<0)
			temp=-temp;
		sum=sum+temp;
	}
	return sum;
}
void solve(int a[],int n)
{
	int supa[Maxsize];
	for(int i=0;i<n;++i)
	{
		supa[i]=a[i];
	}
	if(n%2==0)
	{
		for(int i=0;i<n;++i)
		{
			if(i<n/2)
			{
				a[i]=supa[n-2-2*i-1];
			}
			else if((i==n/2))
				a[i]=supa[n/2];
			else if(i==n/2-1)
				a[i]=supa[n/2-1];
			else
				a[i]=supa[2*(i-n/2-1)];

		}
	}
	else
	{
		for(int i=0;i<n;++i)
		{
			if(i<(n/2))
				a[i]=supa[n-2-2*i];
			else if(i==n/2)
				a[i]=supa[n-1];
			else
				a[i]=supa[2*(i-n/2-1)];
		}
	}
}
void sort(int a[],int n)
{
	int i,j,flag;
	int temp;
	for(i=n-1;i>=1;--i)
	{
		flag=0;
		for(j=1;j<=i;++j)
			if(a[j-1]>a[j])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				flag=1;
			}
			if(flag==0)
				return;

	}
}
int main()
{
	int n;
	int a[Maxsize];
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	sort(a,n);
	solve(a,n);
	/*for(int i=0;i<n;++i)
	{
		cout<<a[i]<<endl;
	}*/
	cout<<sum_max(a,n)<<endl;
	return 0;
}