//Important programmming Questions.........................
//1.Sum of the two numbers............
/*
#include<Stdio.h>
#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter the numbers\n";
	cin>>a>>b;
	int sum=a+b;
	cout<<"Sum of the numbers is:"<<sum<<endl;
}
*/
//2.Prime number check Program....................
/*
#include<Stdio.h>
#include<iostream>
using namespace std;
main()
{
	int n,i,count=0;
	cout<<"enter the number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"Prime number\n";
	}
	else
	{
		cout<<"Not a Prime number";
	}
}
*/
//3.fibonacci series...................
/*
#include<Stdio.h>
#include<iostream>
using namespace std;
main()
{
	int n,i,a=0,b=1,c;
	cout<<"Enter the elements\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		cout<<a<<endl;
		a=b;
		b=c;
		
	}
}
*/

//4.Table of the number...........
/*
#include<Stdio.h>
#include<iostream>
using namespace std;
main()
{
	int n,i;
	cout<<"enter the number\n";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		
	}
}
*/
//5.Swapping two numbers without using the third variable..............
/*
#include<Stdio.h>
#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter the numbers\n";
	cin>>a>>b;
	cout<<"Before swapping:-\n";
	cout<<"a"<<"="<<a<<"\n"<<"b"<<"="<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swapping:-\n";
	cout<<"a"<<"="<<a<<"\n"<<"b"<<"="<<b<<endl;
	
	
	
}
*/
//6.Reverse of the number.................
/*
#include<Stdio.h>
#include<iostream>
using namespace std;
main()
{
	int n,r,rev=0;
	cout<<"Enter the number\n";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
		
	}
	cout<<"Reverse of the number is:"<<rev<<endl;
	
}
*/
//7.Palindrome number..................
/*
	#include<Stdio.h>
#include<iostream>
using namespace std;
main()
{
	int n,r,rev=0,t=0;
	cout<<"Enter the number\n";
	cin>>n;
	t=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
		
	}
if(rev==t)
{
	cout<<"Palindrome number";
}
else
{
	cout<<"not a Palindrome number\n";
	
}
	
}
*/
//8.Armstrong number..................
/*
#include<Stdio.h>
#include<iostream>
using namespace std;
main()
{
	int n,r,rev=0,t=0;
	cout<<"Enter the number\n";
	cin>>n;
	t=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev+r*r*1r;
		
	}
if(rev==t)
{
	cout<<"Armstrong number";
}
else
{
	cout<<"not a Armstrong number\n";
	
}
	
}
*/
//9.Sum of the digits of the numbers ....................
/*

#include<Stdio.h>
#include<iostream>
using namespace std;
main()
{
	int n,r,sum=0;
	cout<<"Enter the number\n";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
	}
	cout<<"sum of the digits of the number is:"<<sum<<endl;	
}
*/
//10.Print hello world without using the cout print statement........................
/*
#include<iostream>
using namespace std;
int main(void)
{
	puts("hello world");
}
*/
//11.Factorial of the number using recursion......................
/*
#include<iostream>
using namespace std;
int fact(int n )
{


	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
	main()
	{
	   int a;
	   cout<<"enter the number\n";
	   cin>>a;
	   cout<<"Factorial of the number is:"<<fact(a);
		
	}
	*/
	//12.Maximum of the number using conditional operator...................
	/*
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the number\n";
	cin>>a>>b;
	int max=a>b?a:b;
	cout<<"Maximum of the numbers is:"<<max<<endl;
	
	
}
*/
//13.Printing all the elements of the 2-D array..........................
/*
#include<iostream>
using namespace std;
int main()
{
	int i,j,arr[5][5]={
		{1,2,3},
		{4,5,6}
		};
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<arr[i][j]<<endl;
			}
		}
		
	}
	*/
//14.Use of the goto keyword...................
/*
#include<iostream>
using namespace std;
int main()
{
	Zero:
	int n;
	cout<<"enter the number\n";
	cin>>n;
	if(n==0)
	{
		goto Zero;
	}
	else
	{
		cout<<"Entered number is:"<<n<<endl;
	}
	
}
*/
//15.Maximum of the array elements...................
/*
#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,i,max=0;
	cout<<"Enter the numbers\n";
	for(i=1;i<=5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Maximum of the number is:"<<endl;
	for(i=1;i<=5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<max<<endl;
}
*/
//16.Minimum of the array elements...................
/*
#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,i,min;
	cout<<"Enter the numbers\n";
	for(i=1;i<=5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Minimum of the number is:"<<endl;
	for(i=1;i<=5;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<min<<endl;
}
*/
//17.Pattern Printing Right angled triangle.................
/*
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
*/
//18.Pattern Printing number Pyramid.................
/*
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<"\n";
	}
}
*/
//19.Functions in c++.....
/*
#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
double add(double a,double b)
{
	return a-b;
}
string add(string a,string b)
{
	return a+b;
}

int main()
{
	cout<<"sum of the numbers is:"<<add(4,5)<<endl;
	cout<<"substraction of the numbers is:"<<add(4.56,3.25)<<endl;
	cout<<"sum of the string values is:"<<add("hello","world");
}
*/
//20.Exception handling by using try ,catch and throw keyword..................
/*
#include<iostream>
using namespace std;
int main()
{
	int c_age,f_age;
	cout<<"Enter the child age and the father age\n";
	cin>>c_age>>f_age;
	try
	{
		if(c_age>f_age)
		
		{
			throw 404;
		}else
		{
			cout<<"Father age is older than his son age:"<<f_age<<endl;
		}
	}
		catch(int a)
		{
			cout<<"Not possible Error no:"<<a<<endl;
		}
	}
	*/
	
