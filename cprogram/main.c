// # include <stdio.h>  
// int main()            
// {
//    printf("Hello world \n");
//    printf("Hello world \n");
//    printf("Hello world \n");
//    printf("Hello world \n");
//    printf("Hello world \n");
//    return 0;
// }
// Multiple between two numbers--------------------  documentation section
// #include <stdio.h>                                 pre defined section
// void main(){                                         funtion
//    int a=546;                                        declaration section
//    float b=5.9;                                      executation section 
//    int c;
//    c=a*b;
//    printf("%d",c);                                  
//    return 0;
// }
// Add two number-----------------------------------
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int a=56;
//    int b=89;
//    int c;
//    c=a+b;
//    printf("%d",c);
//    return 0;
// }


//multiply two float number-------------------------
// #include <stdio.h>
// int main()
// {
//    float a=5.89;
//    float b=8.9;
//    float c;
//    c=a*b;
//    printf("%f",c);
//    return 0;
//}


// #include <stdio.h>
// int main()
// {
//    char hashtag="#";
//    printf("%c",c);
//    return 0;
// }


// # include <stdio.h>
// int main(){
//    int age;
//    printf("enter age");
//    scanf("%d",& age);
//    printf("age is :%d",age);
//    return 0;
// }


// print sum of two numbers (input by user)-------------------
// #include <stdio.h>
// int main()
// {
//    int a,b;
//    printf("enter a");
//    scanf("%d",&a);

//    printf("enter b");
//    scanf("%d",&b);
//    // int sum=a+b;
//    printf("sum is:%d",a+b);
//    return 0;
// }


// find the area of a square (side is entered by input)------------------------------------ 

// #include <stdio.h>
// int main(){
//    int side;
//    printf("enter side");
//    scanf("%d", &side);
//    int area=side*side;
//    printf("area is: %d",area);
//    return 0;
// }          
 

//  find the area of circle----------------------------

// #include <stdio.h>
// int main(){
//    int radius;
//    printf("enter radius");
//    scanf("%d", &radius);
//    printf("area is: %d", 3.14*radius*radius);
//    return 0;
// }

// find the perimeter of a ractagle----------

// #include <stdio.h>
// int main()
// {
//    int length,width;
//    printf("enter length:");
//    scanf("%d", &length);
//    printf("enter width:");
//    scanf("%d", &width);
//    printf("perimeter: %d",2*(length+width));
//    return 0;
// }

//find cube of a number--------------

// #include <stdio.h>
// int main(){
//    int a;
//    printf("enter a:");
//    scanf("%d",&a);
//    printf("cube of: %d", a*a*a);
//    return 0;
// }

// #include <stdio.h>
// int main(){
//    float n,p,r;
//    printf("enter n:");
//    scanf("%f",&n);
//    printf("enter p:");
//    scanf("%f",&p);
//    printf("enter r:");
//    scanf("%f",&r);
//    printf("pr: %f", n*p*r/100);
//    return 0;
// }
 
//remainder operator----------
// #include <stdio.h>
// int main(){
//    printf("%d",6%5);
//    return 0;
// }

//float*float=float, int*float=float------------
// #include <stdio.h>
// int main(){
//    printf("%f",6.2*5.3);
//    return 0;
// }


// #include <stdio.h>
// int main(){
//    int a=(int) 1.99999;
//    printf("%d",a);
//    return 0;
// }

// #include <stdio.h>
// int main(){
//    char s[20];
//    puts("enter a string: ");
//    gets(s);
//    puts("here is your string");
//    puts(s);
//    return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int p,r,t,c;
//     printf("enter principle p: ");
//     scanf("%d", &p);
//     printf("enter rate of change r: ");
//     scanf("%d", &r);
//     printf("enter time t: ");
//     scanf("%d", &t);
//     c=(p*r*t)/100;
//     printf("SI is: %d",c);
//     return 0; 
// }


// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("enter a: ");
//     scanf("%d", &a);
//     printf("enter b: ");
//     scanf("%d", &b);
//     int c=a;
//     a=b;
//     b=c;  
//     printf("%d,%d",a,b);
//     return 0;
// }



// #include <stdio.h>
// int main(){
//    char c[]="cu";
//    for (int i=0 ; i<10 ; i=i+1){
//       printf("%s\n",c);
//    }
//    return 0;
// }


// #include <stdio.h>
// int main(){
//    int i=0;
//    while(i<10){
//       char c[]="krishna";
//       printf("%s\n",c);
//       i=i+1;
//    }
//    return 0;
// }


//convert days into years, weeks, days-----------------
// #include <stdio.h>
// int main(){
//    int year,week,day;
//    printf("enter day: ");
//    scanf("%d",&day);
//    year=day/365;
//    week=(day%365)/7;
//    day=((day%365)%7);
//    printf("years: %d\n",year);
//    printf("weeks: %d\n",week);
//    printf("days: %d\n",day);
//    return 0;
// }


// add two integers-----------------
// #include <stdio.h>
// int main(){
//    int a,b;
//    printf("enter a: ");
//    scanf("%d",&a);
//    printf("enter b: ");
//    scanf("%d",&b);
//    printf("sum of two integer is: %d",a+b);
//    return 0;
// }

//product a two integers-----------------
// #include <stdio.h>
// int main(){
//    int a,b;
//    printf("enter a: ");
//    scanf("%d",&a);
//    printf("enter b: ");
//    scanf("%d",&b);
//    printf("product of two integer is: %d",a*b);
//    return 0;
// }


// if a number is positive, negative, zero----------------------
// #include <stdio.h>
// int main(){
//    int a;
//    printf("enter a: ");
//    scanf("%d",&a);
//    if(a>0){
//       printf("positive int",a);
//    }
//    else if(a<0){
//       printf("negative int",a);
//    }
//    else{
//       printf("zero",a);
//    }
//    return 0;
// }


//leap year-----------------
// #include <stdio.h>
// int main(){
//    int year;
//    printf("enter year: ");
//    scanf("%d",&year);
//    if (year%400==0, year%4==0){
//       printf("leap year: %d",year);
//    }
//    else{
//       printf("not leap year: %d",year);
//    }
// }


// check the char is vowel or consonent 
// #include <stdio.h>
// int main(){
//    char s;
//    printf("enter s: ");
//    scanf("%d",&s);
//    if (s=="a" || "e" || "i" || "o" || "u"){
//       printf("s is a vowel: %s", s);
//    }
//    else{
//       printf("s is a consonent: %s", s);
//    }
//    return 0;
// }



// Unit	Charge/unit
// upto 199	@1.20
// 200 and above but less than 400	@1.50
// 400 and above but less than 600	@1.80
// 600 and above	@2.00

// #include <stdio.h>
// int main(){
//    int charge,unit,total;
//    printf("enter unit: ");
//    scanf("%d",&unit);
//    if (unit<=199){
//       total=unit*1.20;
//       printf("%d",total);
//    };
//    else if(unit>200 && unit<=400){
//       total=unit*1.50;
//       printf("%d",total);
//    };
//    else if(unit>400 && unit<=600){
//       total=unit*1.80;
//       printf("%d",total);
//    }

// }


// #include <stdio.h>
// int main(){
//    int l,b,c;
//    printf("enter l: ");
//    scanf("%d",&l);
//    printf("enter b: ");
//    scanf("%d",&b);
//    c=2*(l*b);
//    printf("perimeter: %d", c);
//    return 0;
// }


// #include <stdio.h>
// int main(){
//    int a;
//    printf("enter number: ");
//    scanf("%d",&a);
//    if (a%5==0 || a%11==0){
//       printf("the number is divisble by 5 or 11: %d",a);
//    }
//    else{
//       printf("the number is not divisble by 5 or 11: %d",a);
//    }
//    return 0;
// }


// Write a C program to print day of week name using switch case.------------
// #include <stdio.h>
// int main(){
//    int day;
//    printf("name of the day: ");
//    scanf("%d",&day);
//    switch(day){
//       case 1:
//       printf("Monday");
//       break;
//       case 2:
//       printf("Tuesday");
//       break;
//       case 3:
//       printf("Wednesday");
//       break;
//       case 4:
//       printf("Thursday");
//       break;
//       case 5:
//       printf("Friday");
//       break;
//       case 6:
//       printf("Saturnday");
//       break;
//       case 7:
//       printf("Sunday");
//       break;
//    }
//    return 0;
// }

// large number between 3 numbers---------------
// #include <stdio.h>
// int main(){
//    int a,b,c;
//    printf("enter a:");
//    scanf("%d",&a);
//    printf("enter b:");
//    scanf("%d",&b);
//    printf("enter c:");
//    scanf("%d",&c);
//    if (a>b && a>c){
//       printf("a is large: %d",a);
//    }
//    else if(b>c && b>a){
//       printf("b is large: %d",b);
//    }
//    else{
//       printf("c is large: %d",c);
//    }
//    return 0;
//  }

// Write a C program print total number of days in a month using switch case.----------
// #include <stdio.h>
// int main(){
//     int days;
//     printf("enter month: ");
//     scanf("%d",&days);
//     switch (days){
//         case 1:
//         {
//             printf("January: 31");
//             break;
//         }
//         case 2:
//         {
//             printf("February: 28/29");
//             break;
//         }
//         case 3:
//         {
//             printf("Merch: 31");
//             break;
//         }
//         case 4:
//         {
//             printf("April: 30");
//             break;
//         }
//         case 5:
//         {
//             printf("May: 31");
//             break;
//         }
//         case 6:
//         {
//             printf("June: 30");
//             break;
//         }
//         case 7:
//         {
//             printf("July: 31");
//             break;
//         }
//         case 8:
//         {
//             printf("August: 31");
//             break;
//         }
//         case 9:
//         {
//             printf("Septmber: 30");
//             break;
//         }
//         case 10:
//         {
//             printf("October: 31");
//             break;
//         }case 11:
//         {
//             printf("November: 30");
//             break;
//         }
//         case 12:
//         {
//             printf("December: 31");
//             break;
//         }
//     }
//     return 0;
// }


// Write a C program to check whether an alphabet is vowel or consonant using switch case.-------------
// #include <stdio.h>
// int main(){
//     char alphabet;
//     printf("enter alphabet: ");
//     scanf("%s",&alphabet);
//     switch (alphabet){
//         case 'a':{
//             printf("vowel: ",alphabet);
//             break;
//         }
//         case 'e':{
//             printf("vowel: ",alphabet);
//             break;
//         }
//         case 'i':{
//             printf("vowel: ",alphabet);
//             break;
//         }
//         case 'o':{
//             printf("vowel: ",alphabet);
//             break;
//         }
//         case 'u':{
//             printf("vowel: ",alphabet);
//             break;
//         }
//         default:{
//             printf("consonent: ",alphabet);
//             break;
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int num;
//     printf("enter number: ");
//     scanf("%d",&num);
//     if(num>0){
//         printf("number is positive\n");
//         if (num%2==0){
//             printf("number is even: %d",num);
//         }
//         else{
//             printf("number is odd: %d",num);
//         }
//     }
//     else if(num<0){
//         printf("number is negative: %d",num);
//     }
//     else{
//         printf("number is zero: %d",num);
//     }
//     return 0;
// }

//character is lower or upper case--------------------------
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("enter ch: ");
//     scanf("%s",&ch);
//     if (ch>='a' && ch<='z'){
//         printf("lower case: \n",ch);
//     }
//     else if (ch>='A' && ch<='Z'){
//         printf("upper case: \n",ch);
//     }
//     else{
//         printf("not a letter: ",ch);
//     }
//     return 0;
// }


//for loop-----------------
// #include <stdio.h>
// int main(){
//     int data=100;
//     int i;
//     data = data+10;
//     for(i=0; i<3; i++){
//         data=data+20;
//     }
//     printf("%d",data);
//     data=data+30;
//     return 0;
// }


//while loop-------------------------
// #include <stdio.h>
// int main(){
//     int i=1,n=5,f=1;
//     while(i<=n){
//         f=f*i;
//         i++;
//     }
//     printf("%d",f);
//     return 0;

// }


//pattern--------------------
// #include <stdio.h>
// int main(){
//     int i,j,n=6;
//     for (i=1;i<=n;i++){
//         for (j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (i=5;i>=1;i=i-1){
//         for (j=i;j>=1;j=j-1){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int i,sum=0;
//     for(i=1;i<=10;i++){
//         sum=sum+i;
//         printf("%d\n",i);
//     }
//     printf("%d",sum);
// return 0;
// }


// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int i=0;
//     while(i<=n){
//         printf("%d",i);
//         i++;
//     }
//     return 0;
// }


// make a calculator----------------
// #include <stdio.h>
// int main(){
//     char opr;
//     int a,b;
//     printf("enter opr: ");
//     scanf("%c",&opr);
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     switch(opr){
//         case '+':{
//             printf("sum of two num is: %d",a+b);
//             break;
//         }
//         case '-':{
//             printf("sub of two num is: %d",a-b);
//             break;
//         }
//         case '*':{
//             printf("mul of two mun is: %d",a*b);
//             break;
//         }
//         case '/':{
//             printf("div of two num is: %d",a/b);
//             break;
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for(i=0;i<=10;i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i=0;
//     while(i<=10){
//         printf("%d\n",i);
//         i+=1;
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()

// {

// int x = 80, y = 3;

// int z;

// z = x / 2 * y;

// printf("\n output = %d", z);

// return 0;

// }


// #include<stdio.h>
// int main(){
//     int l,b,r,choice;
//     float area;
//     printf("Enter the choice:");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:{
//     printf("Enter the length and wibth:");
//     scanf("%d%d",&l ,&b);
//     area=l*b;
//         break;}
//     case 2:{
//     printf("Enter the height and base1:");
//     scanf("%d %d",&l,&b);
//     area=0.5*l*b;
//     break;}
//     case 3:{
//     printf("Enter the radius: ");
//     scanf("%d",&r);
//     area=3.14*r*r;}    
//     default:{
//     printf("your input id invaild");
//         break;}
//     }
//     printf("this is area: %d",&area);
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("a is: %d\n",a);
//     printf("b is: %d\n",b);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("enter a: ");
//     scanf("%d",&a);
//     b=count(a);
//     switch(b){
//         case 1:{
//             printf("one digit is here");
//             break;
//         }
//         case 2:{
//             printf("two digit is here");
//             break;
//         }
//         case 3:{
//             printf("three digit is here");
//             break;
//         }
//         case 4:{
//             printf("fore digit is here");
//             break;
//         }
//         case 5:{
//             printf("five digit is here");
//             break;
//         }
//         default:{
//             printf("incorrect input");
//             break;
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     double a=5.231;
//     printf("%lf",a);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a=5,b=6;
//     printf("%d",a^b);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     char grade;
//     printf("enter grade: (A,B,C,D,F)");
//     scanf("%c",&grade);
//     switch(grade){
//         case 'A':{
//             printf("Excellent: %c",grade);
//             break;
//         }
//         case 'B':{
//             printf("Very good: %c",grade);
//             break;
//         }
//         case 'C':{
//             printf("Good: %c",grade);
//             break;
//         }
//         case 'D':{
//             printf("Medium: %c",grade);
//             break;
//         }
//         case 'F':{
//             printf("Fail: %c",grade);
//             break;
//         }
//     }   
//     return 0; 
// }



// #include <stdio.h>

// int main() {
//     int x = 5, y = 3, z = 2;
//     int result = ++x * y-- / z++;
//     printf("%d\n", result);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int x = 5, y = 2, z = 3;
//     int result = x - y * z / x % y;
//     printf("%d\n", result);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("a is: %d\n",a);
//     printf("b is : %d\n",b);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i,mul=1;
//     for(i=1;i<=5;i++){
//         mul=mul*i;
//     }
//     printf("%d",mul);
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for (i=1;i<=10;i++){
//         printf("7*i is: %d\n",7*i);
//     }   
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i;
//     printf("enter i: ");
//     scanf("%d",&i);
    
//     switch(i%2){
//         case 1:{
//             printf("i is odd: %d\n",i);
//             break;
//         }
//         case 0:{
//             printf("i is even: %d\n",i);
//             break;
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int year;
//     printf("enter year: ");
//     scanf("%d",&year);
//     if (year%4==0 && year%100!=0){
//         printf("leap year: %d",year);
//     }
//     else if(year%400==0){
//         printf("leap year: %d",year);
//     }
//     else{
//         printf("not a leap year: %d",year);
//     }
// }


// #include <stdio.h>
// int main(){
//     int no;
//     printf("enter no: ");
//     scanf("%d",&no);
//     switch(no){
//         case 1:{
//             printf("Monday");
//             break;
//         }
//         case 2:{
//             printf("Tuesday");
//             break;
//         }
//         case 3:{
//             printf("Wednesday");
//             break;
//         }
//         case 4:{
//             printf("Thrusday");
//             break;
//         }
        
//         case 5:{
//             printf("Friday");
//             break;
//         }
//         case 6:{
//             printf("Saturnday");
//             break;
//         }
//         case 7:{
//             printf("Sunday");
//             break;
//         }
//     }
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for (i=1;i<=10;i++){
//         printf("Partha Dey\n");
//     }
// }

// #include <stdio.h>
// int main(){
//     int n;
//     for (n=1;n<=50;n++){
//         if (n%2==0){
//             printf("%d\n",n);
//         }
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,sum=0;
//     for (i=1;i<=20;i++){
//         sum=sum+i;
//     }
//     printf("sum is: %d\n",sum);
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for (i=10;i>=1;i--){
//         printf("%d\n",i);
//     }
// }


// #include <stdio.h>
// #include <math.h>
// int main(){
//     int i,p,q,r;
//     printf("enter r:");
//     scanf("%d",&r);
//     for (i=0;i<=5;i++){
//         p=pow(r,i);
//         q=r*p;
//         printf("%d\n",q);
//     } 
// }

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int i,val,n,p;
//     printf("enter num n:");
//     scanf("%d",&n);
//     for (i=1;i<=5;i++){
//         val = pow(n,i);
//         p=val+2;
//         printf("%d\n",p);
//     } 
// }


// #include <stdio.h>
// int main(){
//     int p,q,i;
//     printf("enter i: ");
//     scanf("%d",&i);
//     while (i!=0){
//         p=i%10;
//         q=q*10+p;
//         i/=10;
//     }
//     printf("%d\n",q);
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>
// #define Base 2
// int main(){
//     long long binary,decimal=0, tbinary;
//     int N=0;
//     printf("enter binary: ");
//     scanf("%lld",&binary);
//     tbinary=binary;
//     while (tbinary!=0){
//         if(tbinary%10==1){
//             decimal+=pow(Base,N);
//         }
//         N++;
//         tbinary /= 10;
//     }
//     printf("%lld",decimal);
// }



// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     printf("enter c: ");
//     scanf("%d",&c);
//     switch(a>b && a>c){
//         case 1:{
//             printf("a is greater");
//             break;
//         }
//         case 0:{
//             switch (b>c)
//             {
//             case 1:{
//                 printf("b is greater");
//                 break;
//             }
//             case 0:{
//                 printf("c is greater");
//                 break;
//             }
//             }
//         }
//     }
// }


// #include <stdio.h>
// int main(){
//     int p,q;
//     printf("enter p: ");
//     scanf("%d",&p);
//     printf("enter pq: ");
//     scanf("%d",&q);
//     p=p+q;
//     q=p-q;
//     p=p-q;
//     printf("p is : %d\n",p);
//     printf("q is : %d\n",q);
    
// }


// #include <stdio.h>
// #include <math.h>
// int main(){
//     int p,a=1,q=0,i=1001;
//     while (i!=0){
//         p=i%10;
//         q=q+(p*a);
//         i=i/10;
//         a=a*2;
//     }
//     printf("%d",q);
// }


// #include <stdio.h>
// int main(){
//     int i=1110;
//     int a=1,b=0;
//     while(i!=0){
//         b=b+(i%10)*a;
//         i=i/10;
//         a=a*2;
//     }
//     printf("%d",b);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int year;
//     printf("enter year: ");
//     scanf("%d",&year);
//     if (year%4==0){
//         printf("leap year");
//     }
//     else if (year%400==0){
//         printf("leap year");
//     }
//     else if(year%100==0){
//         printf("not leap year");
//     }
//     else {
//         printf("not");
//     }
// }


// #include <stdio.h>
// int main(){
//     int a,mul=1;
//     for (a=1;a<=13;a++){
//         mul=mul*a;
//     }
//     printf("%d",mul);
// }


// #include <stdio.h>
// int main(){
//     int day;
//     printf("enter day: ");
//     scanf("%d",&day);
//     switch(day){
//         case 1:{
//             printf("Sunday");
//             break;
//         }
//         case 2:{
//             printf("Monday");
//             break;
//         }
//         case 3:{
//             printf("Tuesday");
//             break;
//         }
//         case 4:{
//             printf("Wednesday");
//             break;
//         }
//         case 5:{
//             printf("Thursday");
//             break;
//         }
//         case 6:{
//             printf("Friday");
//             break;
//         }
//         case 7:{
//             printf("Saturnday");
//             break;
//         }
//         default:{
//             printf("incorrect input");
//         }
//     }
// }



// #include <stdio.h>
// #include <math.h>
// int main(){
//     int side;
//     float area;
//     printf("enter side: ");
//     scanf("%d",&side);
//     area=(pow(3,.5))/4;
//     area=area*pow(side,2);
//     printf("area is: %f",area);
// }


// #include <stdio.h>
// int main(){
//     int s1,s2,s3,sum=0;
//     printf("enter s1: ");
//     scanf("%d",&s1);
//     printf("enter s2: ");
//     scanf("%d",&s2);
//     sum=s1+s2;
//     s3=180-sum;
//     if (sum<180){
//         printf("s3 is : %d",s3);
//     }
//     else{
//         printf("incorrect input");
//     }
// }


// #include <stdio.h>
// int main(){
//     int temp,fer;
//     printf("enter temp: ");
//     scanf("%d",&temp);
//     fer=(9*temp)/5;
//     fer=fer+32;
//     printf("temp inb fer: %d",fer);
// }


// #include <stdio.h>
// int main(){
//     int i=1;
//     int sum=0;
//     while(i<=10){
//         sum=sum+i;
//         i++;
//     }
//     printf("sum is : %d",sum);
//   }



// #include <stdio.h>
// int main (){
//     int i,j,n=5;
//     for (i=0;i<=n;i++){
//         for (j=0;j<i;j++){
//             if (i==0 || i==n-1){
//                 printf("*");
//             }
//             // printf("*");
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     for (i=5;i>=0;i--){
//         for (j=i;j>=0;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int i=1,j=1;
//     while (i<=5){
//         while (j<=i){
//             printf("*");
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
// }


// #include <stdio.h>
// int main (){
//     int i,j,n=5,k;
//    for (i=1;i<=n;i++){
//     for (j=1;j<=i;j++){
//         if (j==1 || j==i || j==n){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
//     }
//     printf("\n");
//    }
// }

// //Print the pattern of 'Z'
// #include <stdio.h>
// int main(){
//     int i,j,s,k,n=5;
//     for (i=0;i<n;i++){
//         for (j=0;j<n;j++){
//             if (i==0 || i==(n-1)){
//                 printf("*");
//             }
//         }
//         for (k=n-1;k>0;k--){
//             if (i+k==4 && i>0){
//                 for (s=0;s<k;s++){
//                     printf(" ");
//                 }
//                 printf("*");
//             }
            
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()

// {

// int x = 5, y = 10;

// int z;

// z = x * 2 + y;

// printf("\n output = %d", z);

// return 0;

// }



// #include <stdio.h>
// int main(){
//     float a=13.2;
//     double b=14.5;
//     printf("%f\n",a);
//     printf("%lf",b);
// }


// #include <stdio.h>
// int main(){
//     int year;
//     printf("enter year: ");
//     scanf("%d",&year);
//     if(year<18){
//         printf("you can not vote");
//     }
//     else{
//         printf("you can vote");
//     }
// }


// #include <stdio.h>
// int main(){
//     int age;
//     printf("enter age: ");
//     scanf("%d",&age);
//     switch (age<18)
//     {
//     case 1:{
//         printf("you can not vote");
//         break;
//     }
//     case 0:{
//         printf("you can vote");
//         break;
//     }
// }
// }


// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter 1st no: ");
//     scanf("%d",&a);
//     printf("enter 2nd no: ");
//     scanf("%d",&b);
//     printf("enter 3rd no: ");
//     scanf("%d",&c);
//     if(a>b && a>c){
//         printf("The 1st number is greatest among three.");
//     }
//     else if(b>c && b>a){
//         printf("The 2nd number is greatest among three.");
//     }
//     else{
//         printf("The 3rd number is greatest among three.");
//     }
// }


// #include <stdio.h>
// int main(){
//     int a;
//     printf("enter a: ");
//     scanf("%d",&a);
//     if (a%5==0){
//         printf("divisible by 5");
//     }
//     else if (a%11==0){
//         printf("divisible by 11");
//     }
//     else{
//         printf("incorrect input");
//     }

// }


// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter 1st angle: ");
//     scanf("%d",&a);
//     printf("enter 2nd angle: ");
//     scanf("%d",&b);
//     printf("enter 3rd angle: ");
//     scanf("%d",&c);
//     if (a==b && b==c){
//         printf("equilateral triangle");
//     }
//     else if (a==b || b==c || a==c){
//         printf("isoleteral triangle");
//     }
//     else if (a!=b && b!=c){
//         printf("scalene triangle");
//     }
// }


// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     printf("enter c: ");
//     scanf("%d",&c);
//     if(a==b && a==c){
//         printf("equilateral triangle");
//     }
//     else if (a==b && a!=c){
//         printf("isoscalen triangle");
//     }
// }


// #include <stdio.h>
// int main(){
//     int total_charge, charge,surcharge, unit;
//     printf("enter unit: ");
//     scanf("%d",&unit);
//     if (unit<=50){
//         charge=unit*.5;
//     }
//     else if (unit>50 && unit<=150){
//         charge=25+((unit-50)*.75);
//     }
//     else if (unit>150 && unit<=250){
//         charge=100+((unit-150)*1.2);
//     }
//     else if (unit>250){
//         charge=220+((unit-250)*1.5);
//     }
//     surcharge=charge*.2;
//     total_charge=charge+surcharge;
//     printf("%d",total_charge);
//     }


// #include <stdio.h>

// int main() 

// { 
//   printf(5+"greekforce"); 
//   return 0; 

// }


// #include <stdio.h>
// #if X == 3
//     #define Y 3
// #else
//     #define Y 5
// #endif
 
// int main()
// {
//     printf("%d", Y);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int m1,m2,m3,total=0,p;
//     printf("enter m1: ");
//     scanf("%d",&m1);
//     printf("enter m2: ");
//     scanf("%d",&m2);
//     printf("enter m3: ");
//     scanf("%d",&m3);
//     total=m1+m2+m3;
//     p=total/3;
//     if (p>=80){
//         printf("1st division: %d\n",p);
//     }
//     else if(p>=60 && p<80){
//         printf("2nd division: %d\n",p);
//     }
//     else if (p>40 && p<60){
//         printf("3rd division: %d\n",p);
//     }
// }



// #include <stdio.h>
// int main(){
//     int buy,sell,p;
//     printf("enter buying price: ");
//     scanf("%d",&buy);
//     printf("enter selling price: ");
//     scanf("%d",&sell);
//     p=sell-buy;
//     if (sell>buy){
//         printf("profit: %d",p);
//     }
//     else if(sell<buy){
//         printf("loss: %d",p);
//     }
//     else{
//         printf("nothing profit nor loss");
//     }
// }


// #include <stdio.h>
// int main(){
//     int i, n;
//     printf("enter n: ");
//     scanf("%d",&n);
//     for (i=1;i<=10;i++){
        
//         printf("%d\n",n*i);
//     }
// }


// #include <stdio.h>
// #include <math.h>
// int main(){
//     int side,s;
//     printf("enter side: ");
//     scanf("%d",&side);
//     s=pow(side,3);
//     printf("%d",s);
// }




// Unit	Charge/unit
// upto 199	@1.20
// 200 and above but less than 400	@1.50
// 400 and above but less than 600	@1.80
// 600 and above	@2.00
// If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

// #include <stdio.h>
// int main(){
//     int unit,ch;
//     printf("enter unit: ");
//     scanf("%d",&unit);
//     if(unit<=199){
//         ch=unit*1.2;
//     }
//     else if (unit>=200 && unit<400){
//         ch=238+((unit-199)*1.5);
//     }
//     else if (unit>=400 && unit<600){
//         ch=238+300+((unit-(199+200))*1.8);
//     }
//     else if(unit>600){
//         ch=238+300+360+((unit-(199+199+199))*2);
//     }
//     printf("%d",ch);
// }


// #include <stdio.h>
// int main(){
//     int i;
//     printf("enter i: ");
//     scanf("%d",&i);
//     if(i==0){
//         printf("Zero");
//     }
//     else if (i%2==0){
//         printf("even: %d\n",i);
//     }
//     else if(i%2==1){
//         printf("odd: %d\n",i);
//     }
    
// }


// #include <stdio.h>
//     int main()
//     {
//         printf("C programming %s", "Class by\n%s Sanfoundry", "WOW");
//     }
// a)

//    C programming Class by
//    WOW Sanfoundry
// b) C programming Class by\n%s Sanfoundry
// c)

//    C programming Class by
//    %s Sanfoundry
// d) Compilation error



// #include <stdio.h>
// int main(){
//     int year;
//     printf("enter year: ");
//     scanf("%d",&year);
//     if (year%4==0){
//         printf("leap year: %d",year);
//     }
//     else if(year%400==0){
//         printf("leap year");
//     }
//     else if(year%100==0){
//         printf("not leap year: %d",year);
//     }
//     else{
//         printf("not leap year");
//     }
// }


// #include <stdio.h>
// int main(){
//     int k;
//     for(k=0;k<4;k++);
//     printf("%d",k);
// }


// #include <stdio.h>
// int main(){
//     int i,j,k;
//     printf("enter i: ");
//     scanf("%d",&i);
//     printf("enter j: ");
//     scanf("%d",&j);
//     printf("enter k: ");
//     scanf("%d",&k);
//     switch(i>j){
//         case 1:{
//             printf("i is greater");
//             break;
//         }
//         case 0:{
//             switch(j>k){
//                 case 1:{
//                     printf("j is greater");
//                     break;
//                 }
//                 case 0:{
//                     printf("k is greater");
//                     break;
//                 }
//             }
//         }
//     }
// }


// #include<stdio.h>
// int main(){
//     int num;
//     do
//     {
//         printf("Enter the a positve number\n");
//         scanf("%d",&num);
//         if(num<=0){
//             printf("Invalid input! please enter a positive ");
//         }
//     } while (num<=0);
//     printf("you entered :%d\n",num);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int choice;
//     do{
//         printf("selected option 1\n");
//         printf("selected option 2\n");
//         printf("selected option 3\n");
//         printf("selected option 4\n");
//         printf("selected choice \n");
//         scanf("%d",&choice);
// switch (choice)
// {
// case 1:
//     printf("you select option 1\n");
//     break;
// case 2:
//     printf("you select option 2\n");
//     break;
// case 3:
//     printf("you select option 3\n");
//     break;
// case 4:
//     printf("you select option 4\n");
//     break;
// default:
//    printf("Invalid choice! please try angain");
//     break;
// }
//     }
//     while (choice!=4);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int pin,count;
//     do
//     {
//     printf("Enter your ATM pin=");
//     scanf("%d",&pin);
//      count=count+1;
//      if(pin==1234){ 
//     // if(pin>=0 && pin<=9){
//         printf("Right pin");
//         break;    }
//     else{
//         printf("Incorrect pin");    }    
//     } while (count<3);    
//     return 0;
//     }


// //when condition is ansertain using do while loop 
// #include<stdio.h>
// int main(){
//     double num,sum=0;
//     do{
//         printf("Enter a number");
//         scanf("%lf",&num);
//         sum=sum+num;

//     }
//     while (num!=0.0);
//    printf("sum=%.2lf",sum) ;
//    return 0;
//    }


// ternary opr
// #include <stdio.h>
// int main(){
//     int age;
//     printf("enter age: ");
//     scanf("%d",&age);
//     age>=18?printf("vote"):printf("not vote");
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i=1;
//     do{
//     printf("%d\n",i);
//     i++;
//     }
//     while(i<=5);
// }


// #include <stdio.h>
// int main(){
//     int i=5;
//     do{
//         printf("%d\n",i);
//         i--;
//     }
//     while(i>=1);
// }


// #include <stdio.h>
// int main(){
//     int i=1,sum=0;
//     do{
//       sum=sum+i;
//       i++;  
//     }
//     while(i<=10);
//     printf("%d\n",sum);
// }


// #include <stdio.h>
// int main(){
//     int i=1,num;
//     printf("enter num: ");
//     scanf("%d",&num);
//     do{
//         printf("%d\n",i*num);
//         i++;  
//     }
//     while (i<=10);
// }


// #include <stdio.h>
// int main(){
//     int i=1,mul=1;
//     do{
//         mul=mul*i;
//         i++;
//     }
//     while(i<=5);
//     printf("%d\n",mul);
// }



// #include <stdio.h>
// int main(){
//     int i,j;
//     do{
//         printf("%d\n",i);
//         printf(" ");
//         i++;
//         j++;
//     }
//     while(i<=5);
//     while(j<=i);
// }



// #include<stdio.h>
// int main(){
//     int num;
//     do
//         {
//         printf("Enter the a positve number\n");
//         scanf("%d",&num);
//         if(num<=0){
//             printf("Invalid input! please enter a positive ");
//         }
//     } while (num<=0);
//     printf("you entered :%d\n",num);  
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int pin,count;
//     do{
//         printf("enter pin: ");
//         scanf("%d",&pin);
//         count=count+1;
//         if (pin==1234){
//             printf("right pin");
//         }
//         else{
//             printf("incorrect pin");
//         }
//     }
//     while(count<2);
// }



// #include<stdio.h>
// int main(){
//     int choice;
//     do{
//         printf("selected option 1\n");
//         printf("selected option 2\n");
//         printf("selected option 3\n");
//         printf("selected option 4\n");
//         printf("selected choice \n");
//         scanf("%d",&choice);
// switch (choice)
// {
// case 1:
//     printf("you select option 1\n");
//     break;
// case 2:
//     printf("you select option 2\n");
//     break;
// case 3:
//     printf("you select option 3\n");
//     break;
// case 4:
//     printf("you select option 4\n");
//     break;
// default:
//    printf("Invalid choice! please try angain");
//     break;
// }
//     }
//     while (choice!=4);
//     return 0;
// }



// Online C compiler to run C program online
// #include <stdio.h>
// int main() {
//     // Write C code here
//     int num,rev=0,count=0,rem;
//     printf("Enter the number ");
//     scanf("%d",&num);
//      while(num!=0){
//         rem=num%10;
//         rev=rev*10+rem;
//         num/=10;
//         ++count;
//     }
//     printf("count %d",count);
//     printf("reverse%d",rev);
//     // while(num!=0){
//     //     num/=10;
//     // }
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int i=10,n;
//     printf("enter n: ");
//     scanf("%d",&n);
//     do{
//     printf("%d\n",i*n);    
//     i--;
//     }
//     while(i>=1);       
// }


// #include <stdio.h>
// int main(){
//     int i=5,n=50,sum=0;
//     do{
//         sum=sum+i;
//         i++;
//     }
//     while(i<=n);
//     printf("sum is: %d\n",sum);
// }



// #include <stdio.h>
// int main(){
//     int i,j;
//     for (i=1;i<=4;i++){
//         for (j=1;j<=5;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     for (i=5;i>=1;i--){
//         for(j=i;j>=1;j--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// function-----------------------------------------------------


// #include<stdio.h>
// void printhello();
// int main(){
//     printhello();
//     }
// void printhello(){
//     printf("hello world");
// }



// #include <stdio.h>
// void mes(int a,int b){
//     int c=a;
//     a=b;
//     b=c;
//     printf("%d%d",a,b);
// }
// int main(){
//     int a,b,c;
//     scanf("%d%d",&a,&b);
//     printf("a,b: %d%d\n",a,b);
//     mes(a,b);
// }


// #include <stdio.h>
// void hello(){
//     printf("hello");
// }
// int main(){
//     printf("hello world\n");
//     hello();
//     hello();
//     hello();
// }


// #include <stdio.h>
// void i(){
//     printf("namaste\n");
// }
// void f(){
//     printf("bonjour\n");
// }
// int main(){
//     char ch;
//     scanf("%c",&ch);
//     if (ch=='i'){
//         i();
//     }
//     else if(ch=='f'){
//         f();
//     }
// }



// #include <stdio.h>
// void sum(int a, int b){
//     printf("sum is : %d\n",a+b);
// }
// int main(){
//     int a,b;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     printf("%d\n",a+b);
//     sum(a,b);
// }



// #include <stdio.h>
// void loop(int i){
//     printf("%d\n",i);
// }
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
//         loop(i);
//     }
// }



// #include <stdio.h>
// void myFunction(){
//     printf("hello world");
// }
// int main(){
//     myFunction();
// }



// #include <stdio.h>
// int main(){
//     int i=1,n,sum=0;
//     printf("enter n: ");
//     scanf("%d",&n);
//     do{
//         sum=sum+i;
//         i++;
//     }
//     while(i<=n);
//     printf("sum is: %d\n",sum);
// }



// #include <stdio.h>
// int main(){
//     int i,n,mul=1;
//     printf("enter n: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         mul=mul*i;
//     }
//     printf("fact is: %d",mul);
// }


// #include <stdio.h>
// int main(){
//     int temp,fer,cen,i;
//     scanf("%d",&fer);
//     i=(fer-32)/9;
//     cen=i*5;
//     printf("%d\n",cen);
// }



// #include <stdio.h>
// int main(){
//     int i=1,n;
//     scanf("%d",&n);
//     do{
//         printf("%d\n",i*n);
//         i++;
//     }
//     while(i<=10);
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for (j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main(){
//     int i=1;
//     do{
//         printf("%d\n",i);
//         i++;
//     }
//     while(i<=5);
// }



// #include<stdio.h>
// int main(){
//     register int i;
//     for(i=1;i<=10;i++){
//     printf("\n%d",i);
//     }
// }


// #include <stdio.h>
// int add1(int,int);
// main(int a,int b){
//     printf("%d",add1(10,20));
// }
// int add1(int a,int b){
// return (a+b);
// }


// #include <stdio.h>
// int add1(int a,int b){
//     return (a+b);
// }
// main(){
//     printf("%d",add1(10,20));
// }


// type casting------------------
// #include <stdio.h>
// int main(){
//     int a=(int)1.999999;
//     printf("%d\n",a);
//     return 0;
// }


// functions-----------------------------------
// #include <stdio.h>
// void partha();
// int main(){
//     partha();
//     partha();
//     }
// void partha(){
//     int i;
//     for (i=1;i<=5;i++){
//         printf("hello world\n");
//     }
// }



// #include <stdio.h>
// void pp();
// void ppp();
// int main(){
//     pp();
//     ppp();
//     pp();
//     ppp();
// }
// void pp(){
//     printf("hello\n");
// }
// void ppp(){
//     printf("goodbye\n");
// }


// #include <stdio.h>
// void religion();
// int main(){
//     religion();
// }
// void religion(){
//     char rel;
//     printf("enter");
//     scanf("%c",&rel);
//     switch(rel){
//         case 'i':
//         {printf("Namastey");
//         break;}
//         case 'f':
//         {printf("Bonjour");
//         break;}
//     }
// }


// #include <stdio.h>
// void namastey();
// void bonjour();
// int main(){
//     char ch;
//     scanf("%c",&ch);
//     if (ch=='i'){
//         namastey();
//     }
//     else{
//         bonjour();
//     }
// }
// void namastey(){
//     printf("Namastey");
// }
// void bonjour(){
//     printf("Bonjour");
// }


// #include <stdio.h>
// void sum();
// int main(){
//     sum();
// }
// void sum(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("%d\n",a+b);
// }


// #include <stdio.h>
// void sqrtvalue();
// int main(){
//     sqrtvalue();
//     return 0;
// }
// void sqrtvalue(){
//     double a,b;
//     scanf("%lf",&a);
//     b=sqrt(a);
//     printf("%lf",b);
// }


// #include <stdio.h>
// int main(){
//     int a=5;
//     printf("%d%d%d",a++,a++,a++);
// }


// #include <stdio.h>
// void swap();
// int main(){
//     swap();
//     return 0;
// }
// void swap(){
//     int a,b,c;
//     scanf("%d%d",&a,&b);
//     c=a;
//     a=b;
//     b=c;
//     printf("%d\n",a);
//     printf("%d\n",b);
// }


// #include <stdio.h>
// void swap();
// int main(){
//     swap();
// }
// void swap(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d\n",a);
//     printf("%d\n",b);
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("9 ");
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int marks[10];
//     int i,sum=0,avr;
//     for (i=0;i<10;i++){
//         printf("enter values: ");
//         scanf("%d",&marks[i]);
//     }
//     for (i=0;i<10;i++){
//         sum=sum+marks[i];
//     }
//     printf("%d\n",sum);
//     avr=sum/10;
//     printf("%d\n",avr);
// }


// combination of two numbers--------------------(using function)----------
// #include <stdio.h>
// void fact();
// int main(){
//     fact();
//     return 0;
// }
// void fact(){
//     int i,j,n,k,r,m1=1,m2=1,m3=1,com;
//     printf("enter n: ");
//     scanf("%d",&n);
//     printf("enter r:");
//     scanf("%d",&r);
//     for (k=(n-r);k>=1;k--){
//         m3=m3*k;
//     }
//     for (i=n;i>=1;i--){
//         m1=m1*i;
//     }
//     for(j=r;j>=1;j--){
//         m2=m2*j;
//     }
//     com=(m1/(m2*m3));
//     printf("%d\n",com);
// }


//permutation of two number--------------------(using function)-----------
// #include <stdio.h>
// void fact();
// int main(){
//     fact();
// }
// void fact(){
//     int n,r,i,j,m1=1,m2=1,per;
//     printf("enter n:");
//     scanf("%d",&n);
//     printf("enter r:");
//     scanf("%d",&r);
//     for (i=n;i>=1;i--){
//         m1=m1*i;
//     }
//     for (j=(n-r);j>=1;j--){
//         m2=m2*j;
//     }
//     per=m1/m2;
//     printf("%d",per);
// }



// #include <stdio.h>
// int sum(int a,int b);
// int main(){
//     sum("a","b");
// }
// int sum(int a,int b){
//     int sum=0;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     sum=a+b;
//     printf("sum is: %d",sum);
// }


// #include <stdio.h>
// void printtable(int a);
// int main(){
//     printtable("a");
// }
// void printtable(int a){
//     int i;
//     printf("enter num: ");
//     scanf("%d",&a);
//     for (i=1;i<=10;i++){
//         printf("%d\n",a*i);
//     }
// }


// #include <stdio.h>
// void reverseword();
// int main(){
//     printf("enter word: ");
//     reverseword();
// }
// void reverseword(){
//     char ch;
//     scanf("%c",&ch);
//     if (ch!='\n'){
//         reverseword();
//         printf("%c",ch);
//     }
// }


// #include <stdio.h>
// void calvalue(float value);
// int main(){
//     float value=100.0;
//     calvalue(value);
// }
// void calvalue(float value){
//     value=value+(0.18*value);
//     printf("%f",value);
// }


// #include <stdio.h>
// #include <math.h>
// void square(int a);
// int main(){
//     square("a");
// }
// void square(int a){
//     int p;
//     scanf("%d",&a);
//     p=pow(a,2);
//     printf("%d",p);
// }


// doubt???????????????????????????????????????????????

// #include <stdio.h>
// #include <math.h>
// void square();
// int main(){
//     square();
// }
// void square(){
//     int i,p,sum=0;
//     for (i=1;i<=10;i++){
//         // printf("%d\n",i);
//         p=i*i;
//         printf("%d\n",p);
//     }
// }



// #include <stdio.h>
// #include <math.h>
// void areaofrect(int p,int q);
// void areaofsq(float a);
// void areaofcir(float r);
// int main(){
//     areaofrect("p","q");
//     areaofsq('a');
//     areaofcir('r');
// }
// void areaofrect(int p,int q){
//     int area=1;
//     printf("enter p: ");
//     scanf("%d",&p);
//     printf("enter q: ");
//     scanf("%d",&q);
//     area=p*q;
//     printf("%d\n",area);
// }
// void areaofsq(float a){
//     float area;
//     printf("enter a:");
//     scanf("%f",&a);
//     area=pow(a,2);
//     printf("%f\n",area);
// }
// void areaofcir(float r){
//     float area;
//     printf("enter r: ");
//     scanf("%f",&r);
//     area=3.14*(pow(r,2));
//     printf("%f\n",area);
// }


// Recursion-------------------------------------

// #include <stdio.h>
// void hello(int count);
// int main(){
//     hello(5);
// }
// void hello(int count){
//     if (count==0){
//         return;
//     }
//     printf("hello world\n");
//     hello(count-1);
// }


// Sum of numbers by given range by recursion-----------------------
// #include <stdio.h>
// int sum(int n);
// int main(){
//     printf("sum is : %d\n",sum(10));
// }
// int sum(int n){
//     if (n==1){
//         return 1;
//     }
//     int sonm1=sum(n-1);
//     int son=sonm1+n;
// }

// factorial of number by using recursion---------------------------------------
// #include <stdio.h>
// int fact(int n);
// int main(){
//     printf("fact is: %d\n",fact(5));
// }
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     int factof5=fact(n-1);
//     int facto=factof5*n;
// }

// doubt??????????????????????????????????????????????????

// #include <stdio.h>
// int marks(int math, int sci, int sans);
// int main(){
//     printf("marks are: :");
//     marks("math","sci","sans");
// }
// int marks(int math, int sci, int sans){
//     scanf("%d%d%d",&math,&sci,&sans);
//     printf("%d\n",((math+sci+sans)/3)) ;
// }


// #include <stdio.h>
// int main(){
//     int i,marks[5],sum=0;
//     for(i=0;i<5;i++){
//         printf("enter marks: ");
//         scanf("%d",&marks[i]);
//         sum=sum+marks[i];
//     }
//     printf("%d\n",sum);
//     printf("m1: %d, m2: %d,m3: %d,m4: %d,m5: %d",marks[0],marks[1],marks[2],marks[3],marks[4]);
// }


//insertion------------------------
// #include <stdio.h>
// int main(){
//     int i,arr[5];
//     for(i=0;i<5;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
// }


// /for traversing ---------------------------
// #include <stdio.h>
// int main(){
//     int i;
//     int arr[]={10,20,30,40,50};
//     // for (i=0;i<5;i++){
//     //     printf("%d\n",arr[i]);
//     // }
// }


//for update-----------------doubt??????????????????????????
// #include <stdio.h>
// int main(){
//     int i,arr[5];
//     for (i=0;i<5;i++){
//         if (i==2){          
//             arr[i]=35;
//         }
//         printf("enter num: ");
//         scanf("%d",&arr[i]);        
//     }
//     for(i = 0; i < 5; i++)
//     {
//      printf("%d\n",arr[i]);   /* code */
//     }
// }


//for appending------------------doubt????????????????????????
// #include <stdio.h>
// int main(){
//     int i,n,size=5;
//     int arr[size];
//     for(i=0;i<size;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     printf("enter num: ");
//     scanf("%d",&n);
//     arr[size]=n;
//     size++;
    
//     for(i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
// }


// WAP to print a number in reverse form------------------------ 
// #include <stdio.h>
// int main(){
//     int i;
//     printf("enter a num: ");
//     scanf("%d",&i);
//     int rev=0;
//     while (i!=0){
//         int rm=i%10;
//         rev=rev*10+rm;
//         i/=10;
//     }
//     printf("rev is: %d\n",rev);
// }



// #include <stdio.h>
// int main(){
//     int i,n,arr[]={10,20,30,40};
//     for (i=0;i<4;i++){
//         arr[0]=arr[1];
//         printf("%d\n",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int aadhar[12],i;
//     for (i=0;i<12;i++){
//         printf("enter i: ");
//         scanf("%d",&aadhar[i]);
//     }
// for (i=0;i<12;i++){
//     printf("%d\n",aadhar[i]);
// }
// }



// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i;
//     for (i=0;i<4;i++){
//         printf("enter i: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<4;i++){
//     printf("%d\t",arr[i]);
//     }
//     arr[4]=35;
//     printf("%d\t",arr[i]);
// }



// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i;
//     for (i=0;i<5;i++){
//         printf("enter i: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<5;i++){
//         printf("%d\t\n",arr[i]);
//     }
//     for(i=0;i<5;i++){
//     arr[2]=25;
//     arr[4]=35;
//     printf("%d\t",arr[i]);
// }
// }


// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter size: ");
//     scanf("%d",&n);
//     int arr[n];
//     int i,sum=0;
//     float avg;
//     for (i=0;i<n;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<n;i++){
//         sum=sum+arr[i];
//         printf("%d\n",arr[i]);
//     }
//     avg=sum/n;
//     printf("avg is: %f",avg);
// }


// #include<stdio.h>
// int main(){
//     int arr[2][3];
//     int i,j;
//     for (i=0;i<2;i++){
//         for (j=0;j<3;j++){
//             printf("enter number: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//      for (i=0;i<2;i++){
//         for (j=0;j<3;j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// deletion---------------------------
// #include <stdio.h>
// int main(){
//     int pos,n,arr[5],i;
//     printf("enter num of element: ");
//     scanf("%d",&n);
//     for (i=0;i<4;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     printf("enter position: ");
//     scanf("%d",&pos);
//     if(pos>=n+1){
//         printf("invalid");
//     }
//     else{
//         for (i=pos-1;i<n-1;i++){
//             arr[i]=arr[i+1];
//             printf("enter array: ");
//         }
//         for (i=0;i<n-1;i++){
//             printf(" %d\t",arr[i]);
//         }
//     }
// }

// insertion element from array==============================(at beginning)
// #include <stdio.h>
// int main(){
//     int arr[10],i,n,new;
//     printf("enter no of ele: ");
//     scanf("%d",&n);
//     for (i=0;i<n;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//         // scanf("%d",&i);
//     }
//     printf("enter new: ");
//     scanf("%d",&new);
//     arr[0]=new;
//     // n=n+1;
//     for (i=0;i<n;i++){
        
//         printf("%d\t",arr[i]);
//     }
// }


//insertion at end=======================
// #include <stdio.h>
// int main(){
//     int arr[5],i,a;
//     for (i=0;i<4;i++){
//         printf("enter i: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<4;i++){
//         printf("%d\t",arr[i]);
//     }
//     arr[4]=50;
//     printf("%d\t",arr[i]);
// }


// //insertion in between========================

// #include <stdio.h>
// int main(){
//     int arr[10],n,i,ind,new;
//     printf("enter no of element: ");
//     scanf("%d",&n);
//     for (i=0;i<n;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("enter index: ");
//     scanf("%d",&ind);
//     printf("enter new: ");
//     scanf("%d",&new);
//     for (i=n-1;i>=ind;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[ind]=new;
//     n++;
    
//     for(i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
// }



// WAp to remove the duplicate element from an array of element===================
// #include<stdio.h>
// int main(){
//     int arr[10],i,j,pos;
//     for (i=0;i<9;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<9;i++){
//         printf("%d",arr[i]);
//     }
//     for (i=0;i<9;i++){
//         for (j=i+1;j<9;j++){
//             if (arr[i]==arr[j]){
//                 pos=arr[j];
//             }
//         }
//     }
//     printf("%d",pos);
// }



// #include <stdio.h>
// int main(){
//     int arr[10],i,n,add_ele;
//     printf("enter no of ele: ");
//     scanf("%d",&n);
//     for (i=0;i<n;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     int index=0;
//     printf("enter new ele: ");
//     scanf("%d",&add_ele);
//     for (i=n-1;i>=0;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[0]=add_ele;
//     n++;
//     for (i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
// }



// #include <stdio.h>
// int funt(int a);
// int main(){
//     int a=10;
//     funt(a);
//     printf("%d",a);
// }
// int funt(int a){
//     a=a+10;
//     printf("%d",a);
// }


// #include <stdio.h>
// int main(){
//     int *p;
//     int a=20;
//     p=&a;
//     printf("%d\n",p);//add of a
//     printf("%d\n",*p);//20
//     printf("%d\n",&p);//add p
//     printf("%d\n",&a);//add a
//     printf("%d\n",a);//20
// }

//  #include <stdio.h>
//     int main()
//     {
//         switch (printf("Do"))
//         {
//            case 1:
//               printf("First\n");
//               break;
//            case 2:
//               printf("Second\n");
//               break;
//            default:
//               printf("Default\n");
//               break;
//         }
//     }




// #include <stdio.h>


// int main() {
//     int i,j;
//     printf("enter i: ");
//     scanf("%d",&i);
//     int arr[i];
//     for(j=0;j<i;j++){
//       printf("enter num: ");
//       scanf("%d",&arr[j]);
//     }
//     int sum=0;
//     for(j=0;j<i;j++){
//         sum=sum+arr[j];
//     }
//     printf("%d\n",sum);
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main(){
//     int a,i;
//     scanf("%d",&a);
//     int arr[a];
//     for(i=0;i<a;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<a;i++){
//         printf("%d \n",arr[i]);
//     }
//     int sum =0;
//     for(i=0;i<a;i++){
//         sum=sum+arr[i];
//     }
//     printf("%d",sum);
// }


// fibonacci series----------------------------------
// #include <stdio.h>
// int main(){
//     int i;
//     int a=0;
//     int b=1;
//     int c=a+b;
//     printf("fibonacci series is: \n");
//     printf("%d\t%d\t",a,b);
//     for(i=3;i<=10;i++){
//        printf("%d\t",c);
//         a=b;
//         b=c;
//         c=a+b;   
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     for (i=1;i<=5;i++){
//         for (j=0;j<i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,j,b;
//     for (i=1;i<=5;i++){
//         for(b=1;b<=5-i;b++){
//             printf(" ");
//         }
//         for (j=0;j<i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,j,b;
//     for (i=1;i<=5;i++){
//         for(b=1;b<=5-i;b++){
//             printf(" ");
//         }
//         for (j=0;j<i*2-1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,j,arr[5];
//     for (i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<5;i++){
//         // printf("enter ele: ");
//         printf("%d\t",arr[i]);
//     }
//     for (i=5;i>=1;i++){
//         // printf("enter ele: ");
//         printf("%d\t",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     area('a','r');
//     circumference('c','r');
// }
// void area(float a, int r){
//     printf("enter radius: ");
//     scanf("%d",&r);
//     a=3.14*r*r;
//     printf("area of circle is: %.2f\n",a);
// }
// void circumference(float c, int r){
//     printf("enter radius: ");
//     scanf("%d",&r);
//     c=2*3.14*r;
//     printf("circumfernce of circle is: %.2f\n",c);
// }


// #include <stdio.h> 
// #include <math.h> 
// int isPrime(int n) { 
// if (n < 2) 
// return 0; 
// for (int i = 2; i <= sqrt(n); i++) 
// { if (n % i == 0) { 
// return 0; 
// } 
// } 
// return 1; 
// } 
// int arms(int x) 
// { int n1 = x; 
// int count = 0; 
// float r; 
// while (x > 0) 
// { x = x / 10; 
// count++; 
// } 
// int sum = 0; 
// while (n1 != 0) { 
// int d1 = n1 % 10; 
// r= pow(d1, count); 
// sum += r; 
// n1 = n1 / 10; 
// } 
// return sum; 
// } 
// void perfect(int n) 
// { int sum = 0; 
// for (int i = 1; i <= n / 2; i++) 
// { if (n % i == 0) { 
// sum += i; 
// } 
// } 
// if (sum == n) 
// { printf("Numberis perfect"); 
// } else { 
// printf("Number is not perfect"); 
// } 
// } 
// int main() 
// { int n; 
// printf("Enterthe number:"); 
// scanf("%d", &n);
// int result1 = isPrime(n); 
// if (result1 == 1) { 
// printf("%d is a prime number\n", n); 
// } else { 
// printf("%d is not a prime number\n", n); 
// } 
// int result2 = arms(n); 
// if (result2 == n) { 
// printf("%d is an Armstrong number\n", n); 
// } else { 
// printf("%d is not an Armstrong number\n", n); 
// } 
// perfect(n); 
// return 0; 
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     for (i=100;i<700;i++){
//         for(j=1;j<=50000;j++){
//             if ((pow(i,.5))==j){
//                 printf("%d ",i);
//             }
//         }
//     }
// }





// #include <stdio.h>
// int main(){
//     int i,p;
//     printf("enter i: ");
//     scanf("%d",&i);
//     while(i!=0){
//         p=i%10;
//         i++;
//         printf("%d ",p);
//     }
// }


// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter num: ");
//     scanf("%d",&n);
//     int sum=0,p;
//     int sign=1;
//     while(n>0){
//         p=n%10;
//         sum+=sign*p;
//         // sign=-sign;
//         n/=10;
//     }
//     printf("%d\n",sum);
// }



// #include <stdio.h>
// void swap(){
//     int i,j,k;
//     printf("enter i: ");
//     scanf("%d",&i);
//     printf("enter j: ");
//     scanf("%d",&j);
//     printf("enter k: ");
//     scanf("%d",&k);
//     int p;
//     p=i;
//     i=j;
//     j=k;
//     k=p;
//     printf("i is : %d\n",i);
//     printf("j is : %d\n",j);
//     printf("k is : %d\n",k);
// }
// int main(){
//     int i,j,k,p;
//     swap();
// }



// #include <stdio.h>
// int main(){
//     int i,j,k,arr[2][3],brr[3][2];
//     for(i=0;i<2;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele of arr: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for (j=0;j<2;j++){
//             printf("enter ele of brr: ");
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for (j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++){
//         for (j=0;j<2;j++){
//             printf("%d ",brr[i][j]);
//         }
//         printf("\n");
//     }
//     int mul[2][2];
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             mul[i][j]=0;
//             for (k=0;k<3;k++){
//                 mul[i][j]+=(arr[i][k]*brr[k][j]);
//             }
//         }
//         printf("\n");
//     }
//     for(i=0;i<2;i++){
//         for (j=0;j<2;j++){
//             printf("%d ",mul[i][j]);
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// void swap(){
//     int i,j;
//     printf("enter i: ");
//     scanf("%d",&i);
//     printf("enter j: ");
//     scanf("%d",&j);
//     i=i+j;
//     j=i-j;
//     i=i-j;
//     printf("%d\n",i);
//     printf("%d\n",j);

// }
// int main(){
//     int i,j;
//     swap(); 
// }



// #include <stdio.h>
// int main(){
//     int i,j,*p,**q;
//     i=20;
//     j=30;
//     p=&i;
//     q=&p;
//     printf("%d\n",*p);
//     printf("%d\n",**q);
// }



// # include <stdio.h>

// void fun ( int, int ) ;

// int main( )

// {

// int i=5 , j=2;

// fun (i,j);

// printf ("%d %d\n", i, j ) ;

// return 0;

// }

// void fun( int i, int j ){

// i = i * i ;

// j = j * j ;

// }



// #include<stdio.h>

// void fun ( int *, int * );

// int main( )

// {

// int i=5,j=2;

// fun(&i, &j);

// printf("%d %d\n", i,j );

// return 0;

// }

// void fun (int *i, int *j )

// {

// *i= *i * *i;

// *j = *j * *j;

// }


// #include <stdio.h>
// int main(){
//     int arr[]={10,20,30,40,56,59,98};
//     int *i,*j;
//     i=&arr[1];
//     j=&arr[5];
//     printf("%d %d ",j-i,*j-*i);
// }



// #include <stdio.h>
// int main(){
//     int arr[]={10,20,30,80,50,60,90};
//     int *i,*j;
//     i=&arr[4];
//     j=arr+4;
//     if (i==j)
//     printf("same %d %d",i,j);
//     else
//     printf("not");
// }


// #include <stdio.h>
// int main(){
//     int i=10;
//     {
//         auto int i;
//         printf("%d\n",i);
//     }
//     printf("%d ",i);
// }


// #include <stdio.h>
// int main(){
//     int a,b,*p,*q;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     p=&a;
//     q=&b;
//     printf("sum is: %d",*p+*q);
// }


// #include <stdio.h>
// int main(){
//     int a,b;
//     int *p,*q;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     p=&a;
//     q=&b;
//     for(char i=*p;i<=*q;i++){
//         printf("%c ",i);
//     }
// }


// #include <stdio.h>

// int main() {

// int x = 10;

// if (x > 5) {

// int y = x * 2;

// printf("%d", y);

// }

// return 0;

// }



// #include <stdio.h>

// int main() {

// int arr[5] = {2, 4, 6, 8, 10};

// int *ptr = &arr[2];

// printf("%d", *(ptr+1));

// return 0;

// }



// #include <stdio.h>

// int main() {

// int a = 10, b = 20;

// int *ptr1 = &a, *ptr2 = &b;

// *ptr1 = *ptr2;

// printf("%d %d", a, b);

// return 0;

// }



// #include<stdio.h>
// static int a = 10;
// static int b = 24;
// void sum()
// {
// printf("%d %d \n",a,b);
// a++;
// b++;
// }
// void main()
// {
// int i;
// for(i = 0; i< 3; i++)
// {
// sum();
// }
// }


// #include <stdio.h>

// int main()

// {

// static int i=5;

// if(--i){

// main();

// printf("%d ",i);

// }

// return 0;

// }



// #include <stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j;
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int flag=0;
    // for (i=0;i<3;i++){
    //     for (j=0;j<3;j++){
    //        if (i>j && arr[i][j]!=0){
    //         flag=1;
    //        }
    //     }
    // }
    // if (flag==1){
    //     printf("NOT tri");
    // }
    // else{
    //     printf("UPPER TRI");
    // }

    // for (i=0;i<3;i++){
    //     for (j=0;j<3;j++){
    //        if (j>i && arr[i][j]!=0){
    //         flag=1;
    //        }
    //     }
    // }
    // if (flag==1){
    //     printf("NOT tri");
    // }
    // else{
    //     printf("lower TRI");
    // }    
// }



// #include <stdio.h>
// int main(){
//     int i,n;
//     printf("enter size: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     int pos;
//     printf("enter pos: ");
//     scanf("%d",&pos);
//     for(i=0;i<n;i++){
//         if(pos>n+1){
//             printf("invalid");
//         }
//         else{
//             for(i=pos-1;i<n-1;i++){
//                 arr[i]=arr[i+1];
//             }
//         }
//     }
//     for(i=0;i<n-1;i++){
//         printf("%d",arr[i]);
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,arr[5];
//     for (i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<5;i++){
//         printf("%d",arr[i]);
//     }
//     int p;
   
//     printf("searching ele: ");
//     scanf("%d",&p);
//     for (i=0;i<5;i++){
//         if(arr[i]==p){
//         printf("arr[%d] is ",arr[i]);}
//     }  
// }


// #include <stdio.h> 
// int main(){
//     int lb,hb;
//     printf("enter lb: ");
//     scanf("%d",&lb);
//     printf("enter hb: ");
//     scanf("%d",&hb);
//     int i,j,is_prime;
//     for (i=lb;i<hb;i++){
//         is_prime=1;
//         for(j=2;j<i/2;j++){
//             if (i%j==0){
//                 is_prime=0;
//             }
//         }
//         if(is_prime && i>1){
//             printf("%d ",i);
//         }
//     }
// }



// doubt floyd's triangle------------------------------------------------------------------------------------------
// doubt sum and diff bet an array element------------------------------------------------------------------------------

// #include <stdio.h>
// int main(){
//     int i,j,p,q;
//     for (i=1;i<=6;i++){
//         if(i%2==0){
//             p=1;
//             q=0;
//         }
//         else{
//             p=0;
//             q=1;
//         }
//         for(j=1;j<=i;j++){
//             if(j%2==0){
//                 printf("%d ",p);
//             }
//             else{
//                 printf("%d ",q);
//             }
//         }
//         printf("\n");
//     }
// }




// #include <stdio.h>
// void swap(int a,int b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("a is: %d\n",a);
//     printf("b is: %d\n",b);
// }
// int main(){
//     int a,b;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     swap(a,b);
//     printf("a: %d\n",a);
//     printf("b: %d\n",b);
// }



// #include <stdio.h>
// int main(){
//     char str2[]="Hello ";
//     char str1[]="World!";
//     printf("%s",strcat(str2,str1));
// }



// # include <stdio.h>
// void italy( ) ;
// void brazil( ) ;
// void argentina( ) ;
// int main( )
// {
// printf ( "I am in main\n" ) ;
// italy( ) ;
// brazil( ) ;
// argentina( ) ; 
// return 0 ;
// }
// void italy( ) 
// {
// printf ( "I am in italy\n" ) ;
// }
// void brazil( ) 
// {
// printf ( "I am in brazil\n" ) ;
// }
// void argentina( ) 
// {
// printf ( "I am in argentina\n" ) ;
// }



// #include <stdio.h>
// void sum(float value);
// int main(){
// float value=100;
// sum(value);
// }
// void sum(float value){
//     value=value+(.18*value);
//     printf("%f\n",value);
// }


// #include <stdio.h>
// int main(){
//     int a,b;
//     int i,p;
//     a=0,b=1,p=1;
//     printf("%d %d ",a,p);
//     while(p<10){
//         p=a+b;
//         printf("%d ",p);
//         a=b;
//         b=p;
//     }  
// }


// #include <stdio.h>
// int gst (float value);
// int main(){
//     float value=100;
//     gst(value);
//     printf("%f ",value);
// }
// int gst (float value){
//     value+=(value*0.18);
//     printf("%f ",value);
// }


// #include <stdio.h>
// #include <math.h>
// int sq(int n);
// int main(){
//    int n=12;
//     sq(n);
// }
// int sq(int n){
//     n=pow(n,2);
//     printf("%d",n);
// }


// #include <stdio.h>
// int main(){
//     int count=5;
//     hello(count);
// }
// int hello(int count){
//     if(count==0){
//         return;
//     }
//     printf("hello world\n");
//     return hello(count-1);
// }




// #include <stdio.h>
// #include<math.h>
// int table(int i){
//     int n;
//     if(n<1){
//         return 0;
//     }
//     return pow(n,table(i-1));
// }
// int main(){
//     int n=2;
//     int i;
//     for(i=1;i<n;i++){
//         printf("%d ",table(i));
//     }
// }



// #include <stdio.h>
// int main(){
//     int num,o_num,n;
//     printf("enter num: ");
//     scanf("%d",&num);
//     int arm,i,rem;
    
//     while(num!=0){
//         num/=10;
//         n++;
//     }
//     o_num=num;
//     for(o_num=num;o_num!=0;o_num/=10){
//         rem=o_num%10;
//         arm+=pow(rem,n);
//         // o_num/=10;
//     }
//     printf("%d\n",arm);
//     printf("%d ",n);
// }


// #include <stdio.h>
// #include<math.h>
// int main(){
//     int ori_num,num,rem,count=0,arms=0;
//     printf("enter num: ");
//     scanf("%d",&num);
//     while(num!=0){
//         num/=10;
//         count++;
//     }
//     ori_num=num;
//     for(ori_num=num;num!=0;num/=10){
//         rem=ori_num%10;
//         arms=arms+(pow(rem,count));
        
//     }
//     printf("%d",arms);
// }



// #include <stdio.h>
// #include<math.h>
// int main(){
//     int num, r, sum=0, ori;

//     printf("enter number: "); 
//     scanf("%d",&num); 
//     for(ori=num;num!=0;num=num/10){ 
//          r=num % 10; 
//          sum=sum+(r*r*r); 
//     }

//     if(sum==ori) 
//          printf("%d is an Armstrong number.\n",ori); 
//     else
//          printf("%d is not an Armstrong number.\n",ori); 
// }


// #include <stdio.h> 
// #include <math.h>
// int main(){
//     int num, r, sum=0, temp,n; 
//     printf("Input a number: "); 
//     scanf("%d",&num); 
//     for(temp=num;num!=0;num/=10){
//         n++;
//     }
    
//     for(temp=num;num!=0;num=num/10){ 
//          r=num % 10; 
//          sum=sum+pow(r,n);
//     }
    
//     if(sum==temp)
//          printf("%d is an Armstrong number.\n",temp);
//     else
//          printf("%d is not an Armstrong number.\n",temp); 
// }



// #include <stdio.h>
// int main(){
//     int a,b;
//     a=10,b=20;
//     printf("before swapping a is: %d\n",a);
//     printf("before swapping b is: %d\n",b);
//     swap(a,b);
// }
// int swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
//     printf("after awapping a is: %d\n",a);
//     printf("after swapping b is: %d\n",b);
// }



// #include <stdio.h>
// int main(){
//     int i=0,p;
//     int a,b;
//     a=0;
//     b=1;
//     printf("%d %d ",a,b);
//     while(i<10){
//         p=a+b;
//         printf("%d ",p);
//         a=b;
//         b=p;
//         i++;
//     }
// }

// #include<stdio.h>
// int main(){
//     int a=512,sum=0;
//     while(a>0){
//         int rem=a%10;
//         sum+=rem;
//         a/=10;
//     }
//     printf("%d",sum);
// }