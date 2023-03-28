#include <stdlib.h>
#include <stdio.h>
int main(){  
  int n,i,*pr;    
    printf("Enter the limit of elements: ");    
    scanf("%d",&n);    
    pr=(int*) malloc(n*sizeof(int));   
    if(pr==NULL)                         
    {    
        printf("memory not created");    
        exit(0);    
    }        
    for(i=0;i<n;i++)    
    {    
    	printf("Enter the %d position elements of array: ",i);
        scanf("%d",pr+i);  
    } 
    for(i=0;i<n;i++)
    {
    	printf("%d position element of array is : %d\n",i,*(pr+i));
	}
    free(pr);     
return 0;  
}   
