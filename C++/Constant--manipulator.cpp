#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
     const  string name = "Juni";
     
//     name ="Sadd";?
     
     cout<<name;
    
	int a = 12;
	cout<<"The value of a  without setw is= "<<a<<endl;
	cout<<"The value of a  with setw is= "<<setw(5)<<a;     // it is used to give space mean for the help ofmainting our display
	return 0;
	
}
