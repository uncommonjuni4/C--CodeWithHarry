#include<iostream>
using namespace std ;


int  main(){


      //pointers -----
                    //  --it is an user bulid data type, which is bulit by other  variable address 
                    int a = 10;

                    int *b  = &a ;  /// make pointer here 


                    cout<<"a ="<<a<<endl;
                    cout<<"B = "<<*b<<endl;

                     int **c= &b ;
                     cout<<"c ="<<**c;

                     
                     int ***d= &c ;
                     cout<<"d ="<<***d;


                  
    return  0;
}