#include<iostream>
#include<conio.h>
using namespace std;
class sum{
	private:
		int n,m,s;
		public:
	  void input()
	{
		cout<<"Enter First Number"<<endl;
		cin>>n;
		cout<<"Enter Second Number"<<endl;
		cin>>m;
	
	}
	 void print()
	{
	s=n+m;
		cout<<"Sum = "<< s;
	}
	
};
int main()
{
	sum obj;
	obj.input();
	obj.print();
	
}
