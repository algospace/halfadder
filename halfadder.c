#include <stdio.h>

int main( )
{
  int x,y;
  printf("Enter Two Numbers:");
  scanf("%d%d",&x,&y);

  if (y<0)
  {
    while (y!=0)
    {
      x++;
      y--;
    }
  }
  else
  {
  while (y!=0)
  {
    x--;
    y++;
  }
  }
  printf("Sum of two numbers is%d",x);
  return 0;
}
