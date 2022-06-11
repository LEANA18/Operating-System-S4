/*Program to create two processes.
One parent process adds odd numbers upto limit n at the same time child process must add even numbers upto limit n and print process id */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
  int i,n;
  printf("Enter the number of integers: ");
  scanf("%d",&n);
  if(fork()==0)
  {
    int sum1=0;
    printf("Sum of even numbers are: ");
    for(i=1;i<=n;i++)
    {
      if(i%2==0)
      {
        sum1+=i;
      }
    }
    printf("%d\n",sum1);
    printf("Child process id: ");
    printf("%d\n"getpid());
  }
  else
  {
    int sum2=0;
    printf("Sum of odd numbers are: ");
    for(i=1;i<=n;i++)
    {
      if(i%2!=0)
      {
        sum2+=i;
      }
    }
    printf("%d\n",sum2);
    printf("Parent process id: ");
    printf("%d\n"getpid());
  }
  return 0;
}
    
    
