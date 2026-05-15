#include<iostream>

using namespace std;

class Juni2 ;

class Juni {
	  private :
	  	int n1 ;
	  		friend void choice(Juni &  , Juni2 &);
	  	friend void swap(Juni &, Juni2 &);
	  	
	 public:
	 	 
	 	 
	 	 void setData(int  n1P){
	 	 	   n1 = n1P;
	 	 	   
		  }
		  
		  
		  void display(){
		  	
		  	 cout<<"N1  before Swap  =  "<<n1<<endl ;
		  }
};


   
class Juni2 {
	  private :
	  	int n2 ;
	  		friend void choice(Juni &  , Juni2 &);
	  	friend void swap(Juni &, Juni2 &);
	  
	 public:
	 	 
	 	 
	 	 void setData(int  n2P){
	 	 	   n2 = n2P;
	 	 	   
		  }
		  
		  
		  void display(){
		  	
		  	 cout<<"N2 before Swap =  "<<n2<<endl ;
		  }
};


 void choice(Juni & O1  , Juni2 & O2 ){
 	
 	   
 	     swap( O1 , O2) ;
 }

void swap(Juni   & O1 , Juni2  & O2){
   	     int temp ;
   	     
   	     temp = O1.n1;
//   	      cout<<"temp  = "<<temp<<endl;
   	      O1.n1 =  O2.n2 ;
   	        cout<<"N1  After Swap   = "<<O1.n1<<endl;
          O2.n2  =temp  ;
          cout<<"N2  After swap   = "<<O2.n2<<endl;
         
          
   }
 




int main(){
	
	
	Juni O1 ;
	
	Juni2 O2 ;
	
	O1.setData(12 );

	
	
		O2.setData(10);

	
	
  	O1.display();
  		O2.display();
//  swap(O1 , O2 );
  choice(O1 , O2);
	
	
	return 0;
}
