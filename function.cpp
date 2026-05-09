//#include<iostream>
//using  namespace std;
//
//  class JuniLife{
//  	private : 
//  	  string Ano; 
//  	  string Boby ;
//  
//  	  public:
//  	  	string Name ;
//  	  	int a ; 
//  	    void setData(   string AnoP ,string BobyP );
//  	    void getData(){
//  	    	cout<<"Ano   = "<<Ano<<endl;
//  	    	cout<<"boby  =  "<<Boby<<endl;
//  	              
//  	  
//		  }
//  };
//   void JuniLife :: setData(string AnoP ,string BobyP ){
//   	          Ano = AnoP;
//   	        Boby  = BobyP;
//   }
//
//int main(){
//	
//	
//	JuniLife CallLife; 
//     	
//	  CallLife.setData("Amna", "Baber");
//	CallLife.getData();
//	
//  return 0;
//}











#include<iostream>
using namespace  std ; 


 ////  here i make an classs on  my life 
      
      class JuniLife 
	  {
      	
      	private:
      		 long    Cinic;
      		 string Bdate  = "20-07-2006";
      		 string Ano ;
//      		 
//      		 
//      		 
      		
      		  
      		
      	public:
      		
      	   string Name  = "Muhammad Junaid Hassan";
      	   string FName  = "Ahmad Hassan";
      	   string City  = "Sahiwal";
			void SetAno( string AnoP , long   CinicP );
			void getdata(){
				cout<<"Date of Brith  = "<<Bdate<<endl;
			}
//	      void 	Name();
      	   
      	   
	  };


    void   JuniLife ::  SetAno(string AnoP, long  CinicP){
    	    Ano =  AnoP;
    	    cout<<"Ano = "<<Ano<<endl;
            Cinic   = CinicP  ;
            cout<<Cinic;
	}





int main (){
	
	   JuniLife life;
	    
	    life.SetAno("Amna", 3650215556377);
	    life.getdata();
	
	
	
	for(int i = 1 ; i<=77 ; i++){
		cout<<"Amna "<<endl;
	}
	
	
	return 0 ; 
}
