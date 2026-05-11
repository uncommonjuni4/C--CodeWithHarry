#include<iostream>
using namespace std ;

   class bainry {
   	  private:
   	  	string c;
   	  		void check_B();
   	  	public :
   	  		void read();
//   	  		void check_B();
   	  		void  one_C();
   	  		void display();
   };
   
   
   void bainry :: read(){
   	   cout<<"Plz enter  an number "<<endl;
   	   cin>>c;
   }

 void bainry :: check_B(){
 	   for(int i = 0 ; i<c.length(); i++){
 	   	     if(c.at(i) != '0' && c.at(i) != '1'){
 	   	      	      cout<<"incorrect binary Format"<<endl;
 	   	      	      exit(0);
		  }
		}
 }
 
  void bainry :: one_C(){
  	     check_B();
  	    for(int i = 0 ; i<c.length(); i++){
 	   	      if(c.at(i) == '0'){
 	   	      	   c.at(i)= '1';
				  }else{
				  	 c.at(i)= '0';
				  }
				
		}
		
  }
   void bainry :: display(){
   	    for(int i = 0 ; i<c.length(); i++){
 	   	      
				  cout<<c.at(i);
		}
   }
int main (){
	
	bainry Member;
	Member.read();
//	Member.check_B();
	Member.one_C();
	Member.display();
	return  0;
}
