#include <stdio.h>

int main(void){
    int n = 50 ;
    int *p = &n; //variable p which is pointer get the address of the n 

    printf("%d\n",n); //it print the value assigned to n 
    printf("%p\n",&n); //it print the address of the n 
    printf("%i\n",&n);
    printf("%p\n",p);
}