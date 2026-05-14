#include <iostream>
using namespace std;


class CalBody;

class Cal; 

class Cal
{

public:
    int  option(CalBody , CalBody );
   
};



  



class CalBody
{
private:
    int n1, n2;
    string choiceP;

public:

   friend int  Cal::option(CalBody    ,  CalBody );
   
     
    void setDataChoice(string getPoint )
    {

         string get = getPoint;
        string choice;
        cout << "Plz enter the option  which type of functionalty to you Do!  for object "<<get<< endl;
        cin >> choice;
        cout << "Enter Choice   is  = " << choice << endl<<endl;
        choiceP = choice;
    };

    void setDataValue(){
          cout<<"Plz Enter 1st number -"<<endl;
          int N1;
          cin>>N1;
          n1 = N1;
          cout<<"First Number  = "<<n1<<endl<<endl;
          cout<<"Plz Enter 2st number -"<<endl<<endl;
          int N2;
          cin>>N2;
          n2 = N2;
          cout<<"Second  Number  = "<<n1<<endl<<endl;
    }

   
};

 

int Cal ::option(CalBody O1 , CalBody O2){
    int n1P = O1.n1 + O2.n1;
         int n2P  = O2.n2 + O2.n2;
          if(O1.choiceP =="Add"  && O2.choiceP =="Add"){
             
             int sum  = n1P + n2P ;
        cout<<"You Perfoming Sum  of Two Objects Number "<<endl;
          cout<<"Sum   = "<<sum<<endl<<endl;

          }else if(O1.choiceP =="sub"  && O2.choiceP =="sub"){
int sub = n1P - n2P ;
        cout<<"You Perfoming subtrctiuon  of Two Objects Number "<<endl;
          cout<<"sub   = "<<sub<<endl<<endl;
          }
        
        
  };
   
 
int main()
{

    CalBody O1, O2;

    Cal Co1;

   
    O1.setDataChoice("O1");
    O1.setDataValue();
     
     O2.setDataChoice("O2");
    O2.setDataValue();

    
    //  int Add = Co1.add();


    //  cout<<Add<<endl;
     Co1.option(O1, O2);
     

     
    return 0;
}