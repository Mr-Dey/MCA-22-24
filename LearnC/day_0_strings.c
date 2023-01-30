#include <stdio.h>
int main(){
  char inp0;
  int y[5],i,x=5;
  
  printf("This is a Game Where You have to enter a Character form a-Z and i'll tell you its lower case or higher case\n\nPlease Enter a Character\n\t--");
  scanf("%ch",&inp0);
  //This is how you can use ascii values.
  if(inp0>=65 && inp0<=90){
    printf("You have entered a capital case character");
  }
  else if(inp0>=97 && inp0<=102){
    printf("You have entered a Small case Character");
  }
  printf("\nNow ill take 5 ramdom input from you\n");
  
  for(i=0;i<x;i++){    
    printf("Please Enter the value %d\n",i);
    scanf("%d",&y[i]);
  }
  for(int i=0;i<x;i++){
    printf("\nYour string %d value is %d\n",i,y[i]);
  }
}