////   Arrays in c++   

 #include<iostream>
 using namespace std;
 int main (){
 	  
 	  
 	  // simple array example 
 	  
//     string boys[] ={"Talha ", "saad ", "zain","jutt Shab "};
//     
//      cout<<"First boy Name = "<<boys[0];
//   cout<<"First boy Name = "<<boys[1];
//     cout<<"First boy Name = "<<boys[2];
//       cout<<"First boy Name = "<<boys[3];

//
////  //  netested array  
//   
//      string fam[][2]={
//	   
//	   {
//	   	"Zain", 
//	   	 "Hassain"
//	   },
//	   {
//	   	"Juni"
//	   },
//	  
//	  };
//	  
//	  cout<<fam[0][0]<<endl;
//	  cout<<fam[0][1];


       // use of array with loops
       
//        using for loop
       
//         string boys[4] ={"Talha ", "saad ", "zain","jutt Shab "};
//         
//         
//         for(int i = 0 ;i<=3;i++){
//         	
//         	cout<<"Value of Boy "<<i << "="<<boys[i]<<endl;
//		 }
//       
       
//       usind do while loop
// string boys[4] ={"Talha ", "saad ", "zain","jutt Shab "};
// int i =0;
//     do{
//     	cout<<"Value of Boy "<<i << "="<<boys[i]<<endl;
//     	i++;
//	 }while(i<=3);

     //using while loop 
     
     
//     int i = 0 ;
//     string boys[4] ={"Talha ", "saad ", "zain","jutt Shab "};
//     while(i<=3){
//     	
//     	cout<<"Value of Boy "<<i << "="<<boys[i]<<endl;
//     	i++;
//     	
//	 };


//     pointers with array ?
//        string boys[4] ={"Talha ", "saad ", "zain","jutt Shab "}; 
//        
//         string*P=boys;
//         cout<<*P;
//          cout<<*(P+1);


//pointers with nestested arrrys ?

      string boys[][2] ={ 
      {
      	"talha",
      	 "saad"
	  },
	  {
	  	"Juni"
	  }
      };
//        string*p =boys[0];
//      cout<<boys[0][0]

      for(int i =0; i<=1;i++){
      	
      	 string*p =boys[i];
      	cout<<*p;
      	if(i==1){
      		 cout<<*(p+i);
		  };
     
	  }

 	return 0;
 	
 }
