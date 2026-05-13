#include<iostream>

using namespace std ;



class Juni {
	
	private :
		 int a  , b, sum  , aF , bF;
		 
	public :
		
		  friend Juni  FriendFun(Juni O1 , Juni O2);
		 void setData(int n1 , int  n2 ){
		 	
		 	a = n1 ;
		 	b = n2;
		 
		 }
		 
		 void setData(){
		 	  	sum = a + b ;
		 	  	
		 	  	cout<<"Sum = "<<a <<"  + "<<b<<"i";
		 	  	
		 }
		 
		 void displayData(){
//		 	cout<<"sum  = "<<sum<<endl;
		 }
		 
		 
};


  Juni   FriendFun(Juni O1 , Juni O2  ){
  	    Juni  O3 ;
  	    
  	    int  A  , B  , Sum;
  	    
  	    A  =  O1.a+ O2.a;
  	    B  = O1.b+ O2.b;
  	    
  	    
  	    Sum = A + B ;
  	    
  	     O3.setData(A  ,  B);
//  	     O3.displayData(A , B );
	O3.setData();
	cout<<"jju";
  	     return O3; 
  	   
  }



int main(){
	
	Juni O1 , O2  , Ofun; 
	
	O1.setData(2 ,  4);
	O1.setData();
	O1.displayData();
	
	
	O2.setData(6 ,  4);
	O2.setData();
	O2.displayData();
	 
	 
	 Ofun = FriendFun(O1 , O2);

	return 0 ;
}
