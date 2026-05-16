#include<iostream>
using namespace std ;
#include<iomanip>


// void  fun(){     ///  function decalartion 
//     cout<<"Juni";  
// }


int  fun(){     ///  function decalartion   + protype (int )
    
    cout<<"Juni";  

    return 1; // return  1 
}
int  main(){
      
    // --------Functions :
                //    function mena wee write the code in one place and ue it again and again 

//   fun();   /// function calling 

                // function protype :
                //    function protype mean which type of data function witll retunr , it may be void , int , float ,bool

        int value ;
                value = fun();   //  calling + get return value 

                cout<<value ;


    return  0;
}