#include<iostream>
using namespace std ;

int main(){
	
	/////pointers in C++ ----------- Pointrs in C++ is used to store date  adgress of othr   data types .it is also data type.
////	
//	int  a =1;
//	   cout<<"Adress of a  "<<&a<<endl;
//	   cout<<"Value of a "<<a<<endl;
//	    int*b ;// here we make an pointer
//	    
//	    cout<<"Adrress of Pointer b  "<<&b<<endl;
//	  
//	    b=&a;  /// here address of a is store in b 
//	    cout<<"Value of b"<<*b<<endl; //here i wnat to show value store in b form a address 
//	    cout<<"Address of b is "<<b<<endl;
//	    
//	    cout<<"You see the value and address pf a and  b is same ---------"<<endl;
//	
	///now i want to beome an nested pointer mean form one pinter to another pointer 
	    
        // first of all i make varibale which data i wat to store in  pointer
//		
		 int a = 12;
		cout<<"Value of  a = "<<a<<endl;
		cout<<"Address of  a = "<<&a<<endl; 
		 ///now i make an  pointer
		 
		int*bP;
		
		//Now heere i store the address of a on b 
		
		bP = &a;
		
	    cout<<"Value of Pointer bP = "<<*bP<<endl;
		cout<<"Address of Pointer b = "<<&bP<<endl;	
		
		//Now here i make an  new pointer which store the address of pervious pointer bP
		
		int**cP; //pointer create 
		
		 cP= &bP;  // adresss of pointer  bP is stroe here
		 cout<<"value of poniter cP =  "<<**cP<<endl;
		 cout<<"Address of pointer  cP  = "<<&cP<<endl;
	return 0;
}

