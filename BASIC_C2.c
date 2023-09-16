#include<stdio.h>
int main()
{ 
    //IF STATEMENT  : if is conditional structure it execute the statement if the condition is true
    int a = 10;
    if(a < 67) printf("a is less than 67\n"); // statement can  be single line or block of code enclosed by {}
    if(a > 5){  
      printf("a is greater than 5\n");
    }

    //RELATIONAL OPERATOR
    /*There are six relational operators that can be used to form a Boolean expression, which returns true or false:
        <    less than
        <=  less than or equal to
        >    greater than
        >=  greater than or equal to
        ==  equal to
        !=   not equal to   */
    a += 1;
    if(a == 11){
        printf("a IS 11\n");  
    }
    
    if(a){
        printf("SINCE a IS NON ZERO!\n");  //An expression that evaluates to a non-zero value is considered true.
    }

    //----------------------------------------------------------------------------------------------------------------------------// 
    //IF ELSE STATEMENT
    // if statement can be included with else clause and execute statement if it's false
    int b = 5;
    if (b==2){
        printf("true\n");
    }
    else{
        printf("false\n");
    }

    //CONDITIONAL EXPRESSION 
    // if else statement can be in one statement 

    int c = (a > b) ? 8 : 9;        //it will assign c =  8 if its true or 9
    (c==8)? printf("true\n") : printf("false\n"); // (condition) ? true statement : false statement;

    //====================================================================================================================//

    //  NESTED IF STATEMENT 
    // if statement can be nested by another if statement
    int x = 100 ;
    if(x > 50 ){
        if(x < 200){
            printf("x is greater than 50 and less than 200\n");
        }
    }
    else{
        printf("x is less than 50\n");
    }


    //if-else if statement : use for multiple if statement 
    /*Program flow branches to the statements associated with the first true expression
    and none of the remaining expressions will be tested  */
    if(x < 10){
        printf ("x is less than 10");
    }
    else if(x < 100){
        printf("x is less than 100");
    }
    else if (x < 1000){
        printf("x is less than 1000");
    }
    else{
        printf("x is less than 10000");
    }
    printf("\n");

    //=========================================================================================================================//

    //SWITCH STATEMENT
    /*The switch statement branches program control by matching the result of an expression with a constant case value
    The switch statement often provides a more elegant solution to if-else if and nested if statements 
    switch (expression) {
       case val1:
         statements
         break;
       case val2:
         statements
         break;
       default:
        statements } */  
        
    /*A break statement is needed in each case to branch to the end of the switch statement
    Without the break statement, program execution falls through to the next case statement */

    int y = 2;
    switch(y){
        case 1:
         printf("NUM1");
         break;
        case 2:
         printf("NUM2"); //  it will print NUM2 
         break;
        default:
         printf("NOTHING"); // if the non of the cases statisfy the default will execute
    }

    printf("\n");

    //==============================================================================================================================//
    //LOGIC OPERATOR 
    //&& operator return true if both the statement is true 
    // || operator return true if one of the statement is true 
    // ! operator return true if the statement if false viceversa


    if (a > 5 && b < 10){     //a = 10 , b = 5;
        printf("true\n");
    }

    //Parentheses are used for clarity even though && has higher precedence than || and will be evaluated first
    int n = 55;
    if (n == 999 || (n > 0 && n <= 100))
      printf("Input valid.\n");


    //==================================================================================================================//

    //WHILE LOOP
    //while statement is loop structure cause it execute the statement repeatedly till the condition is true
     
    int e = 0;
    while(e <= 10 ){
        if(e<10){
            printf("[%d],",e);
            e++;
        }
        else{
            printf("[%d].",e);
            e++;
        } 
    }
    printf("\n");

    //DO WHILE LOOP
    //The do-while loop executes the loop statements before evaluating the expression to determine if the loop should be repeated
    /*do {
           statements
        } while (expression);*/

    do {
        printf("[%d] ",e);
            e--;
    } while (e > 0);
    printf("\n");

    //BREAK AND CONTINUE STATEMENT
    // break statement is use to exit from the while loop 
    // continue statement is use the stay in the loop and skipping to next iterations
    
    int f = 5;
    while(f <= 15){
        if(f%1 == 0){
            printf("%d ",f);
            f++;
            if(f == 12){
                break;
            }
        }
    }

    printf("\n");



    int g = 5;
    while (g > 0) {
        g--;             // **** if num was decremented after the continue statement an infinite loop would be created
    if (g == 3)    
       continue;
    printf("%d\n", g);
    }

    //========================================================================================================================//
    //FOR LOOP 
    // loop structure that execute the statment for fixed value
    /* for (intial value, condition , increment or decrement){
    }*/

    for ( int h = 10 ; h > 0 ; h--){
        printf("%d ",h);
    }
    printf("\n");

    //we can have nested for loop 
     
     for(int i = 0 ; i < 5 ; i++){
        for (int j = 1 ; j <= 5 ; j++){
            printf("[%d],[%d]  ",i,j);
        }
        printf("\n");
     }

    return 0;
}