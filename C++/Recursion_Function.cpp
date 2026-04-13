#include<iostream>
using namespace std ;
  
//  int fact(int n ){
//  	
//  	if(n<=1){
//  		return 1;
//	  }else{
//	  	
//	  	return n*factorial(n-1);     ////  work of it is  ----------- for expale   user intr 4 =-----------n *(n-1) =4 *(4-1) 
//	  }
//  	
//  }

int  fib(int n ){
	
	if(n<=2){
		
		return 1;
	}else{
		return (n-1) + (n-2);
	}
}

int main(){
	
	
	cout<<"Recursion Function In C++"<<endl;
	
	int n ; 
	cout<<"Plz Enter Value of a "<<endl;
	cin>>n;
	
//	cout<<"Factorial of "<<n<<"  is"<<fact(n)<<endl;
	cout<<"Fib   of "<<n<<"  is"<<fib(n)<<endl;
	
	return 0 ;
}
