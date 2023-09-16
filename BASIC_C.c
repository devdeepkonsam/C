#include <stdio.h>

#define PI 3.14

int main() {

  printf("HELLO WORLD!\n");
  // DATA TYPE

  int _a ; //The name of the variable should start with a letter or underscore and composed with letter,number,underscore
  _a = 34; //we can initialize the variable and assigned in the next line 
  float b = 12.2;
  double c = 15.44;
  char d = 'A',e,f;
  const double PI1 = 3.14; // const variable naming should be in uppercase letter to indentify
  //define directive use to make the PI value const refer to line:3

  // to print we need different format specifier for every data type for int : %d , float : %f , double : %lf , char :%c .....and so on 
  // : /n NEWLINE escape sequence output newline character  
  // for other escape sequence refer to this link : https://www.javatpoint.com/escape-sequence-in-c
  printf("%d\n",_a);
  printf("%f\n",b);
  printf("%lf\n",c);
  printf("%c\n",d);

  //-------------------------------------------------------------------------------------------------------------------------------------//
  //INPUT  AND OUTPUT
  // for input we can use scanf .  get(),getchar()...will understand in different module
  //scanf() scans input that matches format specifiers.
  scanf("%c %c",&e,&f);  // & is used to as address operator to give address , locate to the memory
                          /* scanf() stops reading as soon as it encounters a space
                           *so text such as "Hello World" is two separate inputs for scanf(). 
                           */
  printf("%c \b %c \n",e,f);
  

  ///--------------------------------------------------------------------------------------------------------------------------------///
  // OPERATOR
  // Arithmetic
  int num1 = 10 , num2 = 5;
  float num3 = 2.3;
  //ADDITION : ADD TWO NUMBER    
  int sum = num1 + num2;      // sum = 15
  //SUBSTRACT : SUBSTRACT THE NUBMBER 
  int sub = num1 - num2;   // sub = 5     
  //MULITPLICATION : MULTIPLY
   int mul = num1 = num1 * num2;    // mul = 50;
  //DIVISION : DIVIDE THE NUMBER IF THE BOTH THE OPERAND IS INT THEN IS OUTPUT INT 
   int div = num1/num2 ;         //div = 2
  //BUT IF BOTH OR ONE IS REAL NUMBER (FLOAT OR DOUBLE) IS OUTPUT REAL NUMBER
  int div2 = num1/num3 ;         // div2 = 4.3478..
  // MODULUS : OUTPUT THE REMAINDER OF INTEGER DIVIDE (IT DOESN'T WORK WITH FLOAT AND DOUBLE)     
  int mod = num1 % num2;      // mod = 0   (Since no remainder when 10 is divided by 5)

  //----------------------------------------------------------------------------------------------------------------------------------------//
  /* C evaluate on operator precedence  +,- is equal as precedence as *,/,%
  *  [ * , / , % ]is performed first from left to right and then [ + , - ] is also performed from left to right 
  * the order of operation can be changed by using parenthesis e.g  : 5 + 3 * 2 = 11 whereas (5 + 3) * 2 = 16
  * refer to this link https://en.cppreference.com/w/c/language/operator_precedence
  */

  /*TYPE CONVERSION
     Numeric expression contains operands of different data types
     They are automatically converted as necessary in a process called type conversion.
     e.g ( operation involving both floats and ints, the compiler will convert the int values to float values )
     let a = 6.5  and b = 4  :  sum = a + b = 10.5
     
     printf("New price is %4.2f", sum );
     format specifier includes 4.2 to indicate the float is to be printed in a space at least 4 characters wide with 2 decimal places
  */
  
  //   [TYPE CASTING]
  //  when we want to force the result of an expression to a different type you can perform explicit type conversion by type casting
    int  total = 12 ,  count = 5;
    float average = (float) total / count ;  // average = 2.40
    printf("%4.2f", average);


  //---------------------------------------------------------------------------------------------------------------------------------------------//   
  //ASSIGNMENT OPERATOR     //refer to https://www.javatpoint.com/assignment-operator-in-c
  /*An assignment statement evaluates the expression on the right side of the equal sign first and
    then assigns that value to the variable on the left side of the =  */

  int x = 3;
  x = x + 1; // now x = 4

  //we can shorten the above line of code to this :
  int y = 2;
  y += 1;  // 3
  y -= 1;  // 2
  y *= 3;  // 6
  y /= 2;  // 3
  y %= 2;  // 1
  y += 3 * 2;  // 7

 // INCREMENT AND DECREMENT OPERATOR 
 int z = 10
 z++; // add 1 to z variable   z = 11
 z--; // substract 1 from z variable  z = 10
 //BOTH THE OPERATOR HAS PREFIX AND POSTFIX 
 int v = 10 
 x = ++v ; // increment to v and then assign to x    :  x = 11
 x = v--; // assign v to x and decrement to v    :  x = 11 and v = 10 



  return 0;
}