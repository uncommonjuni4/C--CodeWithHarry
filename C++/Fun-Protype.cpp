#include<iostream>
using namespace std;

  
//   protoype meam we want to cntrol the flow mean we want to acces the funtion at last  of main function excuattation 

 //// use of protype   --------syxtan  functiondatatype -functionname(arguments)

   int show();
   int sum(int a, int b);

int main(){

    /////    funtion means we   want to divde our program  into parts .simple mean use the part again and again

     cout<<show()<<endl;

     int  n1  =12;
     int n2 = 1;

    // int n1 , n2  = 12;
     cout<<sum(n1 , n2)<<endl;


    return 0;
}




    int show(){
  cout<<"Welcome to C++ Function"<<endl;
    return 0 ;
    }


int sum(int a , int b){
  
     int c= a + b;

     return c;

}