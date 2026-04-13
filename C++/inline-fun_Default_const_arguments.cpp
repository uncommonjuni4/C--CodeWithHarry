// #include<iostream>
// using namespace std;

// // inline  int  sum(int a , int b){

// //   cout<<"inline";
// //   return a + b;
// // }


// // does not make inline function with stattic variable 
 

//    //  deafult   arguments 
// // int  sum(int a , int b = 12){

// //   cout<<"inline";
// //   return a + b;
// // }

// // constant arguments 

// int  sum(const  int = 13 ,const  int b = 12){

//   cout<<"inline";
//   return a + b;
// }





// int main(){


//     cout<<"work on inline function "<<endl;
//       int a = 12;

//       int b = 13;


//       cout<<sum();

//     return 0;

// }



#include <iostream>
using namespace std;

// 'inline' keyword compiler ko request karta hai function call ko code se replace karne ke liye
// inline int sum(const int a = 13, const int b = 12) {
//     // const ka matlab hai ki 'a' aur 'b' ki value function ke andar change nahi ho sakti

    
//     return a + b;
// }
inline int sum( int a = 13,  int b = 12) {
    // const ka matlab hai ki 'a' aur 'b' ki value function ke andar change nahi ho sakti
     a =12;
    
    return a + b;
}

int main() {
    // Default values use hongi (13 + 12)
    cout << "Sum (Default): " << sum() << endl;

    // Apni values bhi bhej sakte hain
    cout << "Sum (Custom): " << sum(10, 20) << endl;

    return 0;
}