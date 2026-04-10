#include<iostream>
using namespace std ;
int main(){
	 
	 cout<<"Operator in C++\nThere are Four of Operator in C++\n1:Arithmetic Opertator \n2:Assignmnet Operator \n3:Logical Operator\n4:Campasion Operator\n";
	 cout<<"Arithmethic Operator in C++:\n\n Here Arithmetatic opertator\n";
	  
	  
 int x = 10;
int y = 3;

cout << (x + y) << "\n"; // 13
cout << (x - y) << "\n"; // 7
cout << (x * y) << "\n"; // 30
cout << (x / y) << "\n"; // 3 (integer division)
cout << (x % y) << "\n"; // 1

int z = 5;
++z;
cout << z << "\n"; // 6
--z;
cout << z << "\n"; // 5

   cout<<"Logical operator"<<endl;

    cout<<"And Opertator(Both must be true(&&)\n OR opertator(One true may or may be false(||)\nNot operator(Covert true to false ,fasle to true(!)"<<endl;
    cout<<"Camparsion Operator"<<endl;
    cout<<"1:< (Less than)\n2:> (Grater than)\n3:== (Equal to)\n4:<= (Less  than and Eqaul)\n5: >= (Greater than and Eqaul)";
  
	return 0;
}
