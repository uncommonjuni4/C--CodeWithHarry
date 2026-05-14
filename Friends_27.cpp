#include<iostream>
using namespace std;

  class complex ;


   class   Cal{
       private :
          int a , b;

          public :
            
       int sumReal(complex , complex);
           
   };


   class  complex{
         private : 
         int a  , b ;

         public :

     friend class Cal;
           void setData(int aP , int bP){
                  a = aP ;
                  b = bP;

           };

           void display(){
             cout<<"sum  of  complex class argumnests  is "<<a + b ;
           };
   };
       


    int Cal::sumReal(complex  O1 , complex  O2 ){
        
           return (O1.a + O2.a);
          
    };




int main(){

     complex O1, O2;

     O1.setData(12, 12);
     O1.display();

     O2.setData(10, 10);
     O2.display();


      Cal vlue ;
      int value  = vlue.sumReal(O1 , O2);
       cout<<" value ="<<value;
    return 0;
}