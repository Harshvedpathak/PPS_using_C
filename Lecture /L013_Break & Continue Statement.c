//24-04-2025
//Lecture_Example of Break statement and continue statement 

#include <stdio.h>
int main()
{
  int i;
  printf("Example of break statement :-\n");
  for(i=0;i<=10;i++)
    {
      if(i==3)
      {
        break; //it will break the loop when i is 3
      }
      printf("%d\n",i);
    }
  printf("END\n");
  printf("\nExample of continue statement :-\n");
  for(i=0;i<=10;i++)
    {
      if(i==3)
      {
        continue; //it will skip when i is 3
      }
      printf("%d\n",i);
    }
  printf("END");
  return 0;
}
