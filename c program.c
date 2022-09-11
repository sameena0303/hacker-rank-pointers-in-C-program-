#include <stdio.h>
void update(int *a,int *b) 
{}
int main() 
{ 
int a, b; 
int *pa = &a, *pb = &b;
scanf("%d %d", &a, &b);
update(pa, pb);
printf("%d\n", a+b);
if(a-b>0){
printf("%d",a-b);
}
else 
{
printf("%d",b-a);
}
return 0;
}
