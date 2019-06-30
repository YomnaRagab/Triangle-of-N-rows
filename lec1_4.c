#include<stdio.h>
void main (void)
{
  int rows;
  int i,j;
  char star='*';
  printf("Enter number of rows\n");
  scanf("%d",&rows);
  for(i=1; i<=rows; i++)
  {
    printf("\n");
    for(j=1;j<=i;j++)
    printf("%c",star);
  }
}
