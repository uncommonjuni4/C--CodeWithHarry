//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Please enter a 4-digit number: ";
//    cin >> n;
//
//    // Check if the number is actually 4 digits (1000 to 9999)
//    if (n >= 1000 && n <= 9999) {
//        cout << "Entered Number: " << n << endl;
//
//        int first, mid1, mid2, last,  rev;
//           
//           first =  (n / 1000);
//           	  cout<<"First   = "<<first<<endl;
//           
//          mid1 = ((n%1000)/ 100);
//            cout<<"mid1   = "<<mid1<<endl;
//          mid1= mid1*10;
//          
//          mid2 = ((n % 100)/ 10);
//          cout<<"mid2   = "<<mid2<<endl;
//          mid2= mid2*100;
//          
//           last  = ((n % 100)% 10);
//              cout<<"last   = "<<last<<endl;
//           last =last *1000;
//           
//           
//            rev= first + mid1 + mid2 + last;
//          
//	
//        
//          
//       
//          
//          cout<<endl<<endl<<"Revese Number is = "<<rev;
//          cout<<endl<<endl<<"given number  = "<<n;
//    }
//	 else {
//        cout << "Error: Please enter a number between 1000 and 9999." << endl;
//    }
//
//    return 0;
//}

#include <iostream>
using namespace std;

int main() {

    cout << "Please enter    number: ";
    
      for(int i = 1 ; i<=100 ; i++){
      	
      	if(i % 3== 0 && i % 5== 0){
		  cout<<"Number "<<i<<"  is divible both by 3 and 5 "<<endl;
		  };
	  }
    return 0;
}
