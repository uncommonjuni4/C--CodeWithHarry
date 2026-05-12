#include<iostream>
using namespace std;




class Juni{
   private: 
     int id ;
     static int count;
    
    public:
    	 static void display(){
    	 	   cout<<"Value   of countre  = "<<count<<endl;
		 };
    	 
    	void setData(){
    		  cout<<"plz enter the Id of Emmployye"<<endl;
    		  cin>>id;
    		  count++;
		}
		
		void  getData(){
			   cout<<"Id   of the emmolyye "<<id<<" and Number of Emloyyes is "<<count<<endl;
		}
		
		   
};

  int  Juni:: count ;


  
  int main(){
  	
  	
  	  Juni Zain , Ali;
  	  
  	  Zain.setData();
  	  Zain.getData();
  	  
  	     Juni:: display();
  	  Ali.setData();
  	  Ali.getData();
  	  return 0;
  }
  
