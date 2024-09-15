//1.  Write a Program to show the use to input (Scanf)/output (Printf)
// statements and block structure of C-program by highlighting the
// features of &quot;stdio.h&quot;.----
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     printf("value of a is: %d\n",a);
//     printf("value of b is: %d\n",b);
//     return 0;
// }


//2. Write a program to add two numbers and display the sum.-------
// #include <stdio.h>
// int main(){
//     int a,b,sum;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     sum=a+b;
//     printf("sum is: %d",sum);
//     return 0;
// }

// Write a program to calculate the area and the circumference of a
// circle by using radius as the input provided by the user.----------
// #include <stdio.h>
// int main(){
//     int r;
//     float area, circumstance;
//     printf("enter r: ");
//     scanf("%d",r);
//     area=3.14*sqrt(r);
//     circumstance=2*3.14*r;
//     printf("area of circle: %f\n",area);
//     printf("circumstance of circle is: %f\n",circumstance);
//     return 0;
// }


// Write a Program to perform addition, subtraction, division and
// multiplication of two numbers given as input by the user.------------
// #include <stdio.h>
// int main(){
//     char ch;
//     int a,b;
//     printf("enter ch: ");
//     scanf("%c",&ch);
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     switch(ch){
//         case '+':{
//             printf("sum of two number is: %d",a+b);
//             break;
//         }
//         case '-':{
//             printf("sub of two number is: %d",a-b);
//             break;
//         }
//         case '*':{
//             printf("mul of two number is: %d",a*b);
//             break;
//         }
//         case '/':{
//             printf("div of two number is: %d",a/b);
//             break;
//         }
//     }
//     return 0;
// }


// Write a program to evaluate each of the following equations.
// (i) V = u + at. (ii) S = ut+1/2at 2 (iii) T=2*a+√b+9c (iv) H=√b 2 +p 2-----------
// #include <stdio.h>
// int main(){
//     float a,v,s,c,u,t,T,b;
//     printf("enter u: ");
//     scanf("%f",&u);
//     printf("enter t: ");
//     scanf("%f",&t);
//     printf("enter a: ");
//     scanf("%f",&a);
//     printf("enter b: ");
//     scanf("%f",&b);
//     printf("enter c: ");
//     scanf("%f",&c);
//     v=u+(a*t);
//     printf("v is : %f\n",v);
//     s=(u*t)+(.5*a*(t*t));
//     printf("s is : %f\n",s);
//     T=(2*a)+(pow(b,.5))+9*c;
//     printf("T is : %f\n",T);
//     return 0;
// }


// Write a program to swap two variable:
// a) By using temporary variable.
// b) Without using temporary variable----------
// #include <stdio.h>
// int main(){
//     int x,y;
//     printf("enter x: ");
//     scanf("%d",&x);
//     printf("enter y: ");
//     scanf("%d",&y);
//     int z=x;
//     x=y;
//     y=z;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     return 0;
// }


// Write a Program to find the greatest among three numbers using:
//  Conditional Operator
//  If-Else statement
// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter a:");
//     scanf("%d",&a);
//     printf("enter b:");
//     scanf("%d",&b);
//     printf("enter c:");
//     scanf("%d",&c);
//     if (a>b && a>c){
//         printf("a is greatest: %d",a);
//     }
//     else if(b>c && b>a){
//         printf("b is greatest: %d",b);
//     }
//     else{
//         printf("c is greatest: %d",c);
//     }
//     return 0;
// }


// To check input is vowel or consonant.-------------
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("enter ch: ");
//     scanf("%c",&ch);
//     switch (ch){
//         case 'a': case 'e': case 'i': case 'o': case 'u':{
//             printf("vowel: %c",ch);
//             break;
//         }
//         case 'A': case 'E': case 'I': case 'O': case 'U': {
//             printf("vowel: %c",ch);
//             break;
//         }
//         default:{
//             printf("consonent: %c",ch);
//             break;
//         }
//     }
//     return 0;
// }

// To check number is positive , negative or zero.--------------
// #include <stdio.h>
// int main(){
//     int num;
//     printf("enter num: ");
//     scanf("%d",&num);
//     switch(num){
//         case '1':{
//             printf("positive: %d",num);
//             break;
//         }
//         case '0':{
//             switch(num){
//                 case '1':{
//                     printf("negative: %d",num);
//                     break;
//                 }
//                 case '0':{
//                     printf("zero: %d",num);
//                     break;
//                 } 
//         }
//     }
//     return 0;
// }



// #include<stdio.h> 
// int main(){ 
// int a,b,c; 
// printf("enter a,b: "); 
// scanf("%d %d",&a,&b); 
// printf("%d%d\n\n",a,b); 
// c=a; 
// a=b; 
// b=c; 
// printf("a=%d,b=%d\n",a,b); 
// return 0; 
// }


// #include<stdio.h>
// int main(){
// int a,b;
// printf("enter a,b:");
// scanf("%d %d",&a,&b);
// printf("a=%d,b=%d\n",a,b);
// a=a+b;
// b=a-b;
// a=a-b;
// printf("a=%d,b=%d\n",a,b);
// return 0;
// }


// #include<stdio.h>
// int main(){ 
// int a,b,c,large;    
//    printf("Enter three number\n");
//    scanf("%d %d %d",&a,&b,&c);
//    large = a>b?a>c?a:c:b>c?b:c; 
// printf("Largest Number is : %d",large); 
// return 0;
// }

// #include<stdio.h>
// int main(){
//      int num;
//  printf("enter num:  ");
//      scanf("%d",&num);
// if (num==0){
//     printf("zero: %d",num);
// }
// else if(num>=0){
// printf("postive number: %d",num);
// }
// else{
//     printf("negative number: %d",num);
// }
// return 0; 
// }


// #include <stdio.h>
// int main(){
//     int a,b,c,d;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     printf("enter c: ");
//     scanf("%d",&c);
//     d=a+b;
//     if (d>c){
//         printf("it is a triangle");
//     }
//     else{
//         printf("it is not a triangle");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int arr[10], n, i, ind, new;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     // Input elements into the array
//     for (i = 0; i < n; i++) {
//         printf("Enter number: ");
//         scanf("%d", &arr[i]);
//     }

//     // Display the original array
//     printf("Original array: ");
//     for (i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");

//     // Input index and new element
//     printf("Enter index: ");
//     scanf("%d", &ind);
//     printf("Enter new element: ");
//     scanf("%d", &new);

//     // Shift elements to the right to make space for the new element
//     for (i = n - 1; i >= ind; i--) {
//         arr[i + 1] = arr[i];
//     }

//     // Insert the new element at the specified index
//     arr[ind] = new;
//     n++; // Increase the size of the array

//     // Display the modified array
//     printf("Modified array: ");
//     for (i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }



