#include <stdio.h>
void printTable(int);
int main()
{
  int number;
  printf("Enter an integer number: ");
  scanf("%d",&number);
  printf("Table Of %d is \n", number);
  printTable(number);
  return 0;
}

void printTable(int num)
{
  int i;

  for(i=0;i<=10;i++)
     printf("%5d\n",(num*i));
}
