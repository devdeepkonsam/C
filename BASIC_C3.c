#include <stdio.h>

//When the parameter types and names are included in a declaration, the declaration is called a function prototype.
int square(int num);  //declaration of function

int sum (int a , int b){
    return a +b;
}

int main()
{
    // FUNCTION IN C 
    //Functions are central to C programming and are used to accomplish a program solution as a series of subtasks
    // for example int main() fucntion and printf
    /*You can also create your own functions. 
    A function:
    • is a block of code that performs a specific task
    • is reusable
    • makes a program easier to test
    • can be modified without changing the calling program*/

    //return_type function_name(parameters);

    int x = 15 ;
    int y = 5;
    
    int sqr = square(x);
    printf("%d\n",sqr);

    int ans = sum(x,y);
    printf("%d\n",ans);


    //fuction parameter
    /*A function's parameters are used to receive values required by the function.
     Values are passed to these parameters as arguments through the function call. 
    By default, arguments are passed by value, which means that a copy of data is given to the parameters of the called function. 
    The actual variable isn't passed into the function, so it won't change.
    Arguments passed to a function are matched to parameters by position. 
    Therefore, the first argument is passed to the first parameter, the second to the second parameter, and so on.*/


}

//definition of function 
int square (int num){
    int ans = num * num;
    return ans;  // the return statement is to return the value 
}