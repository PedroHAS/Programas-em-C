#include<stdio.h>
#include<conio.h>

     int fat(int n) 
     {
     int cont=1,i;
     for (i=1;i<=n;i++)
     cont*=i;
     return cont;
     }
     
main() 
{
  float soma=0.0,num=100.0;
  int n,s,denom=0;
  
  printf("Insira um numero:\n");
  scanf("%d",&n);
  for(s=1;s<=n;s++)
  {                   
     soma=(num/fat(denom))+soma;
     denom++;
     num--;  
  }  
  printf("\nSoma=%f",soma);
  getch();
}
