#include<stdio.h>
void main()
{
int a[100],n,i,pos,val;
printf("enter the no.of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("display the elements\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\nenter the position to be inserted\n");
scanf("%d",&pos);
if(pos>n)
{
  printf("\nsorry cannot enter element,,, a proper position\n");
}else
printf("enter the value to be inserted\n");
scanf("%d",&val);
for(i=n-1;i>=pos;i--)
{
 a[i+1]=a[i];
}
 a[pos]=val;
 n=n+1;
printf("\ndisplay the elements after inserting new element\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}