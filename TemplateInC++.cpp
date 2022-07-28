#include<iostream>
using namespace std;

template <typename T>   //This is a Genaric Function which can be used for 
void Swap(T &a, T &b){  //All type of data types like-int, char, float, double
	T temp = a;
	a = b;
	b = temp;
}



int main()
{
	int a=1, b=2;
	cout<<a<<" "<<b<<endl;
	Swap(a, b);
	cout<<a<<" "<<b<<endl;
	cout<<endl;
	
	char x='A' , y='B';
	cout<<x<< " " <<y<<endl;
	Swap(x, y);
	cout<<x<< " " <<y<<endl;
	
	
	return 0;
	
	
}

