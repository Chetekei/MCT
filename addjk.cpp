#include <stdio.h>
int add(int x,int y)
{
	int ans;
	ans=x+y;
	return ans;
	
}
int main()
{int a,b,result;
printf("Enter number");
scanf("%d",&a);
printf("Enter number");
scanf("%d",&b);
result=add(a,b);//Function call
printf("Answer is %d",result);	
}