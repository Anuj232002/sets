#include <stdio.h>

int main() {
  int a[100],b[100],num1,num2,j,c[100],q,z[100];
  printf("Enter number of  element of set A\n");
   scanf("%d",&num1);
   printf("Enter the element of set A \n");
   for(int i=0;i<num1;i++)
      scanf("%d",&a[i]);
      printf("Set A=");
      printf("{");
      for(int i=0;i<num1;i++)
      printf("%d\t",a[i]);
      printf("}");
   
   printf("\nEnter number of element of set B\n");
   scanf("%d",&num2);
   printf("Enter the element of set B \n");
   for(int i=0;i<num2;i++)
     scanf("%d",&b[i]);
     printf("Set B=");
     printf("{");
      for(int i=0;i<num2;i++)
      printf("%d\t",b[i]);
      printf("}");

  int choice;
  while(choice!=6)
  {int k=0;
  printf("\n1.Union\n2.Intersection\n3.Difference(A-B)\n4.Difference(B-A)\n5.Symmetric difference\n6.Exit\n");
  printf("\nWhich operation do you want to perform:");
  scanf("%d",&choice);
  switch(choice)
  {case 1:
  for(int i=0;i<num1+num2;i++)
  {
    c[i]=0;
  }
  for(int i=0;i<num1;i++)
  {
    c[k]=a[i];
    k++;
  }
  for(int i=0;i<num2;i++)
  {
    q=0;
    for(int j=0;j<num1;j++)
    {if(c[j]==b[i])
    {
    q=1;
    break;
    }
    }
    if(q==0)
    {
      c[k]=b[i];
      k++;
    }
  }
  printf("Union of sets A and B=");
  printf("{");
  for(int i=0;i<k;i++)
  {printf("%d\t",c[i]);
  }
  printf("}");
  break;
  
   case 2:
  for(int i=0;i<num1;i++)
  {
    q=0;
    for(int j=0;j<num2;j++)
    {if(a[i]==b[j])
    {
    q=1;
    break;
    }
    }
    if(q==1)
    {
      c[k]=a[i];
      k++;
    }
  }
  printf("Intersection of sets A and B=");
  printf("{");
  for(int i=0;i<k;i++)
  {printf("%d\t",c[i]);
  }
  printf("}");
  break;
   
   case 3:
   for(int i=0;i<num1;i++)
  {
    q=0;
    for(int j=0;j<num2;j++)
    {if(a[i]==b[j])
    {
    q=1;
    break;
    }
    }
    if(q==0)
    {
      c[k]=b[i];
      k++;
    }
  }
  printf("Difference of sets A and B(A-B)=");
  printf("{");
  for(int i=0;i<k;i++)
  {printf("%d\t",c[i]);
  }
  printf("}");
   
   break;
   case 4:
   for(int i=0;i<num1;i++)
  {
    q=0;
    for(int j=0;j<num2;j++)
    {if(a[i]==b[j])
    {
    q=1;
    break;
    }
    }
    if(q==0)
    {
      c[k]=a[i];
      k++;
    }
  }
  printf("Difference of sets A and B(B-A)=");
  printf("{");
  for(int i=0;i<k;i++)
  {printf("%d\t",c[i]);
  }
  printf("}");
  
  break;
  case 5:
  
  for(int i=0;i<num1;i++)
  {
    q=0;
    for(int j=0;j<num2;j++)
    {if(a[i]==b[j])
    {
    q=1;
    break;
    }
    }
    if(q==0)
    { c[k]=b[i];
      
      k++;
    }
  }
  for(int i=0;i<num1;i++)
  {
    q=0;
    for(int j=0;j<num2;j++)
    {if(a[i]==b[j])
    {
    q=1;
    break;
    }
    }
    if(q==0)
    { c[k]=a[i];
      
      k++;
    }
  }
  printf("Symmetric Difference of sets A and B=");
  printf("{");
  for(int i=0;i<k;i++)
  {
  
    printf("%d\t",c[i]);
  
  }
  printf("}");

  break;
   case 6:
   printf("\nTa-ta bye bye,khatam");
   break;
   default:
   printf("You have enter wrong choice");
   }}
   return 0;
  }

  

