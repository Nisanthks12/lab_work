//Program to perform array sorting using Selection Sort Algorithm
#include<stdio.h>

main()
{ int a[10],n,i,j,temp,min;
  printf("Enter the limit");
  scanf("%d",&n);                       //Inputing the array size limit
 
  printf("Enter the elements ");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);                   //Reading the elements to the array
  
 for(i=0;i<=n-1;i++)                   //Loop to iterate through all the elements  
  { min=i;                             //To initialize the position of minimum element
    for(j=i+1;j<=n-1;j++)              //To compare the 'min' element with rest of the element to its right
    { if(a[j]<a[min])                  //Checking if there is a smaller element 
       min=j;                          //If yes, assign the position of that element to 'min'
    }
    if(min!=i)                         //Checking if there is any change in 'min'
    { temp=a[min];                     //If yes, swap the element in position 'min' and 'i' 
      a[min]=a[i];
      a[i]=temp;
    }
  }
 
 printf("The sorted array is ");       //Print the sorted array
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
}
