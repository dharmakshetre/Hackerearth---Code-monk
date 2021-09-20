#include<stdio.h>

int main()
{
    int i,j,k,m,n,t,o,l,g;
    int a[1000000],b[500000],c[500000];
    scanf("%d",&t);
 if(t>=1 && t<=20)
 {
    
    for(o=0;o<t;o++)
    {
      j=0;
      m=0;
      scanf("%d%d",&n,&k);
   
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
          
      }
      g = k%n;
      l = n-g;
      for(i=0;i<l;i++)
      {
          b[i] = a[i];
      }

      for(i=l;i<n;i++)
      {
          c[j] = a[i];
          j++;
      }
      
      
      for(i=0;i<g;i++)
      {
          a[i]=c[i];
      }
      for(i=g;i<n;i++)
      {
          a[i]=b[m];
          m++;
      }
      for(i=0;i<n;i++)
      {
          printf("%d ",a[i]);
      } 
      printf("\n");
      
      
    }
  }
    
}