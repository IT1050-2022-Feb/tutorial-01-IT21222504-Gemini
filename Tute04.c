#include <stdio.h>
using namespace std;

int minimum(int n1,int n2);
int maximum(int n1,int n2);
int multiply(int n1,int n2);

int main()
{

  int no1,no2;

  cout<<"Enter a value for no 1:";
  cin>>no1;
  cout<<"Enter a value for no 2:";
  cin>>no2;
  cout<< minimum(no1,no2)<<endl;
  cout<<maximum)no1,no2)<<endl;
  cout<<multiply(no1,no2)<<endl;

  return 0;
  
}
int minimum(int n1,int n2){
     if(n1<n2){
           return n1;
       }
  else{
       return n2;
  }
}
int maximum(int n1,int n2){
     if(n1<n2){
           return n2;
       }
  else{
       return n1;
  }
}
int multiply(int 1,int n2);
         return n1*n2;
}
