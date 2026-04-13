#include<iostream>
using namespace std ;

  int  callbyAddress(int* a , int* b){   ////  a= 5   , b=10  

      int* tem = a   ;   //   tem  =5 ,  a =5   b =10 

      *a = *b ;                //tem =5 , a= 10 , b 5

      *b = *tem ;           // tem   5  a = 10  ,  b =5

      return 0;
    
  }

//   int  &callbyAddress(int* a , int* b){   ////  a= 5   , b=10  

//       int* tem = a   ;   //   tem  =5 ,  a =5   b =10 

//       *a = *b ;                //tem =5 , a= 10 , b 5

//       *b = *tem ;           // tem   5  a = 10  ,  b =5

//       return *a;
    
//   }
  

//   void callbyvalue(inta , int b){   ////  a= 5   , b=10  

//       int tem = a   ;   //   tem  =5 ,  a =5   b =10 

//       a = b ;                //tem =5 , a= 10 , b 5

//       b = tem ;           // tem   5  a = 10  ,  b =5

//    
    
//   }

int main(){

    /////////////today i will disuss about call by referece and call by value

    ////////first of all call by value -----in call by value the only formal papertem chnnage but not chnage actual papermetr with are pass as arugument mean actual variable values

    // /////Expample of    call by value 

    // int a = 5;    // actual paparmeters 
    // int b  = 10;   // actual paparmeters
    // cout<<"Value of A is  "<<a<<" value of b "<<b<<endl;
    // cout<<callbyvalue(a,b)<<endl;
    // cout<<"Value of A is  "<<a<<" value of b "<<b<<endl;  



    //  in call by value we see  the the acutal parameter not change 

     ///Expample of    call by refeerece 

    int a = 5;    // actual paparmeters 
    int b  = 10;   // actual paparmeters

    // callbyAddress(&a, &b)=33;
    cout<<"Value of A is  "<<a<<" value of b "<<b<<endl;
    cout<<callbyAddress(&a,&b)<<endl;
    cout<<"Value of A is  "<<a<<" value of b "<<b<<endl;  
    
     


    return 0 ;
}