#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
   int age;
   cout<<"Plz Enter Age!"<<endl;
   cin>>age;
   
   
//   if   simple 
   
//   if(age== 18){
//   	
//   	cout<<"You can do vote"<<endl;
//   }


// else if 
//if(age== 18){
//   	
//   	cout<<"You can do vote"<<endl;
//   }else{
//   	
//   	cout<<"Not vote";
//   }
////    if else if 
//if(age== 18){
//   	
//   	cout<<"You can do vote"<<endl;
//   }
//   else if(age <18){
//   	
//   	cout<<"Under 18";
//   }
//   else{
//   	
//   	cout<<"Not vote";
//   }
//   
   switch(age){
   	
   	case 18: 
   	 cout<<"Age 18"<<endl;
   	break;
   	case  12:
   		cout<<"less 18";
   		break;
   		
   	defalut:
   		cout<<"Child";
   		break;
   }
	return 0;
	
}
