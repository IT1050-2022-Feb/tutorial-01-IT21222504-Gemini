#include<stdio.h>
int main(){
  int distance,extra;
  float price;//variable declaration

  printf("Input the distance the van has travelled");
  scanf("%d",&distance);

  if(distance<=30)
  {
    price= distance*50.00;
  }
  else
  {
    price=1500.00+(distance-30)*40.00;
  }
  printf("The final rent fee is:LKR %.2f",price);

  return 0;
  }
  

