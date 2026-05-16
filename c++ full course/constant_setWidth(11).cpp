#include<iostream>
using namespace std ;
#include<iomanip>

int  main(){
   
    //   -----constant
        // constant mean its never chanage , its value remanin constant 

        const   int ali = 12;
        // ali=10;    /// error never chnager 
        // cout<<ali;



        // -----setw :
                    //   it is use  to add some same in our output , it is bulti in finbction , to use it we need to include iomaip

             cout<<setw(4)<<ali;       

    return  0;
}