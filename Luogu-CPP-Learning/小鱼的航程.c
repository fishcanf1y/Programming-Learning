#include <stdio.h>
int main()
{
  long int a1,b1,c;
  int a2,b2;
  scanf("%d",&a2);
  scanf("%ld",&a1);
  b1=a1/7;
  b2=a1%7;
  c=b1*250*5;
  if((b2+a2)==6)
  {
  	c=c+(b2-1)*250;
  	printf("%ld",c+250);
  }
  else if((b2+a2)>6)
  {
  	c=c+(b2-2)*250;
  	printf("%ld",c+250);
  }
  else if(b1==0&&(((b2-1)+a2)>=6)&&((b2-1)+a2)<=7)
  {printf("%ld",c+250);}
  else{
  	c=c+(b2)*250;
  	printf("%ld",c);
  }
  return 0;
}

