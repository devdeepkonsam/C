#include <stdio.h>

int main(void){
    int n = 50 ;
    int *p = &n; //variable p which is pointer get the address of the n 

    printf("%d\n",n); //it print the value assigned to n 
    printf("%p\n",&n); //it print the address of the n 
    printf("%p\n",p); //here it will print the address of the n as the p is pointer which is assigned with the address of n using &n
    printf("%i\n",*p); //here it will print the value save in the address *p 
    
    printf("%i\n",*&n); //it will print the value of n
    

}