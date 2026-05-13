#include<iostream>
using namespace std ;


class Juni {
	
	 private :
	   string  name;
	 	  string  lname;
	 	    static string Nickname; 
	 	  int N ; 
	
	   string FullN;
	 	
	public :
		void setData(string Fname, string Lname , int n ){
			  name = Fname ;
			  lname = Lname;
			  FullN= name + lname;
			  N = n ;
			  
			  cout<<"static  = "<<Nickname;
		}
		
		void getDta(){
			
			 cout<<"Full Name  = "<<FullN<<endl;
			 cout<<"N  = "<<N;
		}
//		
		void getDataP(Juni Em1, Juni  Em2){
			        N = Em1.N ; 
			      name = Em1.name ;
			      lname  = Em2.lname;
			      FullN = name + lname ;
			 
			  cout<<"Full name = "<<FullN;
			  cout<<N;
		
		}
		  void  setDataP(Juni Em1){
		  	 name = Em1.name ;
		  	 cout<<"Name  = "<<name<<endl;
		  };
};

 
   string Juni ::Nickname  = "Saad";

int main(){
	
	 Juni Em1, Em2 ,Em3  , Em4 ;
	 
	 Em1.setData("Junaid",  "Hassan" , 1);
	 Em1.getDta();
	
//	
//		 Em2.setData("Zain ",  "Hassan",2);
//	Em2.getDta();
//	
//	
//	Em3.getDataP(Em2 , Em1);

 
	
	Em4.setDataP(Em1);
	
	
	
	return  0 ;
}
