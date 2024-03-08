public class Operator {
    
    public static void main(String[] args) {
        /*type of operators
        1. arithmetic operatrs 
        2. logical operator 
        3. assignment opreator 
        7. bitwise operator 
        5. relational operator
        6. shift operator
        8. tarnary operator 
        9. unary operator 
        */ 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 //1       Arithmatic operators    (+ - * / %)
        int a = 23 , b = 34;
        
    System.out.println(a+b);   // addition
    System.out.println(a-b);   // subtraction
    System.out.println(a*b);   // multiplication
    System.out.println(a/b);   // division
    System.out.println(a%b);   // modulus
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//2          logical operators         (&& || !)

// The code snippet you provided is demonstrating the use of logical operators in Java.
boolean and = a == 23 && b == 34;   // true
boolean or  = a == 23 || b == 3;     // true
boolean not  = !(a == 2) ;  // true
System.out.println(and);
System.out.println(or);
System.out.println(not);

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// 3            assignment  operators      (= += -= *= /= %=)

// This code snippet is demonstrating the use of assignment operators in Java. Here's a breakdown of
// what each line is doing:
a = 23; 
a +=a;  // 23  + 23 =  46
a-=10;   // 46 - 10 = 36
a *= 3;  // 36 *  3 = 108
a /= 6;  //  108 / 6 = 18
a%=8;   //  18 % 8 = 2
System.out.println("Value of a after adding a to itself : "+a);

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// 4                bitwise oprator    ( & | ^ ~)   

                            // (\)    OR

/*                      Count binary =   256 128 64 32 16 8 4 2 1
 a = 5 = 0101 (In Binary)
b = 4 = 0100 (In Binary)

Bitwise OR Operation of 5 and 4
  0101
| 0100
 ________
  0101  = 5 (In decimal) 
 */

int val1 = 5 , val2 = 4;

int sum = val1 | val2;

System.out.println(sum);


                                // (&)  AND
/* Count binary =   256 128 64 32 16 8 4 2 1
 a = 5 = 0101 (In Binary)
b = 4 = 0100 (In Binary)

Bitwise OR Operation of 5 and 4
  0101
& 0100
 ________
  0100  = 4 (In decimal) 
 */


int sum2 = val1 & val2;
System.out.println(sum2);

//                                (^)   XOR


/*
a = 5 = 0101 (In Binary)
b = 4 = 0100 (In Binary)

Bitwise XOR Operation of 5 and 7
0101
^ 0100
________
0001  = 1 (In decimal) 
*/

int sum3 = val1 ^ val2;
System.out.println(sum3);

                                //  (~) NOT

/*
  a = 5 = 0101 (In Binary)

Bitwise Complement Operation of 5

~ 0101
 ________
  1010  = 10 (In decimal) 
 */

a = 5;
a = ~a;       // 5 = 10, so the complement is 0101 which equals to -6 in Decimal
 

System.out.println(a);


//                  relational operator   < , > , == , <= , >= !=

// int val1 = 5 , val2 = 4;


boolean ans = val1 == val2;    //false  5 == 4
 ans = val1 > val2;         // true    5 > 4
 ans = val1 < val2;            // false 5 < 4
ans = val1 != val2; //          // true     5 != 4

System.out.println(ans);




//                 shift operator       >>  <<

//   left Shift  Operator :   >>

val1 = 8 ;        // 1000            8
val2 = 2 ;        //  0010             2    
int result = val1>>val2;

System.out.println("Result : "+result );           // Result : 2

//  right shift          : <<

 int result2 = val1<<val2;        //  1000  << 0010000

 System.out.println(result2);


//                                              tarnary operator  ( ? : )  unary operator     ( ? :)     


int aee = (val1 == val2) ? (val1) : (val2);

System.out.println(aee);                // if val1 is equal to val2 then print the value of val1 otherwise print the value of value

  



    }
}
