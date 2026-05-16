#include<iostream>
using namespace std ;
#include<iomanip>

  int funP(int a ){    // here we get passingf value    /// formal parameter
   cout<<a;
}

int  main(){
      
 
          // \Function with  parameters 

        //    function para,eter mean we want to pass data form our parent funtction to child function 

        // type or parameter  and function must be same 

          int a  =10;
    
      funP(a);     // function call  +  pass paramter from here    // actual paramter

    return  0;
}