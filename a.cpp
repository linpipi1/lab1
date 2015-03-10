#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"請輸入n:";
	std::cin>>n;
	std::cout<<n ;
	if(n==1)
	{
		cout<<" "  <<n<<endl;
		return 0;
	}
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
			cout<< " " << n ;
		}	
		else if(n%2!=0)
		{
			n=3*n+1;
			cout<<" "<<n ;
		}
	}
 	cout<<endl;	
	return 0;
	
}
