#include<iostream>
using namespace std ;
#include<iomanip>

  int funP(int a ){    // here we get passingf value    /// formal parameter  + call by valaye 
   cout<<a;

   int b = 20;
   int temp = b;
    a  = temp; 
    cout<<a;

   
}

int  main(){
      
 
          // \Function with  parameters   + call by value 

        //    function para,eter mean we want to pass data form our parent funtction to child function 

        // type or parameter  and function must be same 

        // in call by value pass only value mean only sen dcopy of data , no the chnage occur in child refelt the parent func 

          int a  =10;
    
      funP(a);     // function call  +  pass paramter from here    // actual paramter


      cout<<a;  // a remain same 
          return  0;
}