#include <stdio.h>

//When the parameter types and names are included in a declaration, the declaration is called a function prototype.
int square(int num);  //declaration of function

int sum (int a , int b);

void hello();

int factorial (int num);

int global = 0;

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

    // VARIABLE SCOPE 
    //Variable scope refers to the visibility of variables within a program
    //Variables declared in a function are local to that block of code and cannot be referred to outside the function : local1 and local2 
    int local1 = 5,local2 = 100;

    //Variables declared outside all functions are global to the entire program :global
    //For example, constants declared with a #define at the top of a program are visible to the entire program
    global = local1 + local2;
    printf("%d\n",global);

    //static variable the value in not destroyed when exited from the function is it stays where it was left when called again 
    for(int i = 0;i<5;i++){
        hello();
    }

    int fac = factorial(local1);
    printf("%d",fac);


}

//RECURSION FUNCTION
//A recursive function is one that calls itself and includes a base case, or exit condition, for ending the recursive calls

int factorial (int num){
    if(num == 1)
        return 1;
    else
    return num * (factorial(num-1));

}

    

//definition of function 
int square (int num){
    int ans = num * num;
    return ans;  // the return statement is to return the value 
}

//fuction parameter
    /*A function's parameters are used to receive values required by the function.
     Values are passed to these parameters as arguments through the function call. 
    By default, arguments are passed by value, which means that a copy of data is given to the parameters of the called function. 
    The actual variable isn't passed into the function, so it won't change.
    Arguments passed to a function are matched to parameters by position. 
    Therefore, the first argument is passed to the first parameter, the second to the second parameter, and so on.*/

int sum(int a, int b){
    return a +b;
}
//The values of x and y were passed to sum_up. 
//Note that even though the value of parameter x was changed in sum_up
//the value of argument x in main() was not changed because only its value was passed into the parameter x.



//STATIC VARIABLE
/*Static variables have a local scope but are not destroyed when a function is exited. 
Therefore, a static variable retains its value for the life of the program and can be accessed every time the function is re-entered.*/

void hello(){
    static int num = 1;
    printf("Hello World %d\n",num);
    num++;
}


