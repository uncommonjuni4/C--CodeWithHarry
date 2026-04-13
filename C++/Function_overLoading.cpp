#include<iostream>
using namespace std ;

//int sum(int a ,int b ,int c){
//	cout<<"Function call with 3 arguments "<<endl;
//	
//	 return  (a  + b + c);
//}
//int sum(int a ,int b){
//	cout<<"Function call with 2 arguments "<<endl;
//	
//	 return  (a  + b);
//}

  int square( int w , int h ){
  	  cout<<"Suqare of two sides"<<endl;
  	  return(w * h);

  };
int  main(){
	
	
	
	cout<<"Function overloading in C++"<<endl;
	
	int n1 ,  n2 , n3 ;
	
	cout<<"Plz enter 3 number "<<endl;
	
	cin>>n1>>n2>>n3;
	
	cout<<"Value of n1 = "<<n1<<endl;
	cout<<"Value of n2 = "<<n2<<endl;
	cout<<"Value of n3 = "<<n3<<endl;
//	
//	cout<<"Sum of n1 , n2  and n3 is  = "<<sum(n1,n2,n3)<<endl;
//	cout<<"Sum of n1 and n2    = "<<sum(n1,n2)<<endl;

	cout<<"square of triangle   = "<<square(n1 , n2);
	
	
	return 0;
}
