// #include <stdio.h>
// int main(){
//     int ch;
//     printf("enter any number between 1 to 12: ");
//     scanf("%d",&ch);
//     switch(ch){
//         case 1:{
//             printf("January");
//             break;
//         }
//         case 2:{
//             printf("February");
//             break;
//         }
//         case 3:{
//             printf("Merch");
//             break;
//         }
//         case 4:{
//             printf("April");
//             break;
//         }
//         case 5:{
//             printf("May");
//             break;
//         }
//         case 6:{
//             printf("June");
//             break;
//         }
//         case 7:{
//             printf("July");
//             break;
//         }
//         case 8:{
//             printf("August");
//             break;
//         }
//         case 9:{
//             printf("Septmber");
//             break;
//         }
//         case 10:{
//             printf("October");
//             break;
//         }
//         case 11:{
//             printf("November");
//             break;
//         }
//         case 12:{
//             printf("December");
//             break;
//         }
//         default:{
//             printf("incorrect input");
//         }
        
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int ch;
//     printf("enter any number between 1 to 12: ");
//     scanf("%d",&ch);
//         if(ch==1){
//             printf("January");
//         }
//         else if(ch==2){
//             printf("February");
//         }
//         else if(ch==3) {
//             printf("Merch");
//         }
//         else if(ch==4) {
//             printf("April");
//         }
//         else if(ch==5) {
//             printf("May");
//         }
//         else if(ch==6) {
//             printf("June");
//         }
//         else if(ch==7){
//             printf("July");
//         }
//         else if(ch==8){
//             printf("August");
//         }
//         else if(ch==9){
//             printf("Septmber");
//         }
//         else if(ch==10){
//             printf("October");
//         }
//         else if(ch==11){
//             printf("November");
//         }
//         else if(ch==12){
//             printf("December");
//         }
//         else{
//             printf("incorrect input");
//         }
        
    
//     return 0;
// }


// alphabet is vowel or consonent------------
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("enter ch: ");
//     scanf("%c",&ch);
//     switch(ch){
//         case 'a':{
//             printf("it is vowel: %c",ch);
//             break;
//         }
//         case 'e':{
//             printf("it is vowel: %c",ch);
//             break;
//         }
//         case 'i':{
//             printf("it is vowel: %c",ch);
//             break;
//         }
//         case 'o':{
//             printf("it is vowel: %c",ch);
//             break;
//         }
//         case 'u':{
//             printf("it is vowel: %c",ch);
//             break;
//         }
//         default:{
//             printf("it is consonent: %c",ch);
//             break;
//         }
        
//     }
//     return 0;
// }

// max between two numbers-------------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     switch(a>b){
//         case 1:{
//             printf("a is max: %d",a);
//             break;
//         }
//         case 0:{
//             printf("b is max: %d",b);
//             break;
//         }
//         default:{
//             printf("both numbers are equal:a,b");
//             break;
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int x=2;
//     if(x=1){
//         printf("x is equal to 1");
//     }
//     else {
//         printf("x is not equal to 1");
//     }
//     return 0;

// }


// #include <stdio.h>
// int main(){
//     float unit;
//     float amt,scharge,total;
//     printf("enter unit: ");
//     scanf("%f",&unit);
//     if(unit<100){
//         amt=unit*0.8;
//     }
//     else if(unit>=101 && unit<300){
//         amt=80+((unit-50)*.5);
//     }
//     else if(unit>300){
//         amt=180+((unit-200)*.3);
//     }
//     else if(unit>500) {
//         amt=160+((unit-300)*.3);
//     }
//     else{
//         amt=unit*50;
//     }
//     scharge=unit*.10;
//     total=50+amt+scharge;
//     printf("%f\n",total);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a=10;
//     int b=11;
//     if ((++a==++b) || (++a==b)){
//         printf("hello");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int c,a=10;
//     c=a<<5;
//     printf("%d",c);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int c,a=5;
//     c=a>>2;
//     printf("%d",c);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int p=10,a=5;
//     // c=p&a;
//     printf("%d",p|a);
//     return 0;
// }


// #include<stdio.h>  
//  int main()    
// {    
// int a=10, b=20;      
// printf("Before swap a=%d b=%d",a,b);      
// a=a+b;//a=30 (10+20)    
// b=a-b;//b=10 (30-20)    
// a=a-b;//a=20 (30-10)    
// printf("\nAfter swap a=%d b=%d",a,b);    
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


// #include <stdio.h>
// int main(){
//     int a=100;
//     int b=3;
//     float c=a/b;
//     printf("%f",c);
// }


// #include <stdio.h>
// int main(){
//     int i=0,j=1,k=2,n;
//     n=i++||j++||k++;
//     printf("%d%d%d%d",n,i,j,k);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a=10,b=20;
//     char x=1,y=0;
//     if (a,b,x,y){
//         printf("hello");
//     }
// }


// #include <stdio.h>
// int main(){
//     int a=10, b=11,c=13,d;
//     d=(a=c,b+=a,c=a+b+c);
//     printf("%d%d%d%d",d,a,b,c);
// }


// #include<stdio.h>
// int main(){
//     int fixedrate = 0 , callsBill = 0 , smsBill = 0 , serviceTax = 0 , sms , calls,totalbill ;
//     fixedrate=100;
//     printf("Enter no of sms: ");
//     scanf("%d",&sms);
//     printf("Enter no of calls: ");
//     scanf("%d",&calls);
//     if(sms >= 0 && sms <= 100 )    {
//         smsBill = 0 ;    }
//     else if ( sms > 100)    {
//         smsBill = ( sms - 100 ) * 2 ;
//     }
    // else    {
    //     printf("invalide input\n"); }
    // if(calls >= 0 && calls <= 100 )    {
    //     callsBill = 0 ;    }
    // else if ( calls > 100 && calls <= 300)    {
    //     callsBill = ( calls - 100 ) * 2 ; }
    // else if ( calls > 300)    {
    //     callsBill = ( calls - 100 ) * 2 + ( calls - 300 ) * 1.5 ;    }
//     else{
//         printf("Invalid input\n");    }
//     totalbill = fixedrate + smsBill + callsBill ;
//     serviceTax  =  ( totalbill * 5 ) / 100 ;
//     totalbill = totalbill + serviceTax ;
//     printf("mobile bill is\n");
//     printf("Fixed Rent is: %d\n",fixedrate);
//     printf("Calls Bill is: %d\n",callsBill);
//     printf("SMS Bill is: %d\n",smsBill);
//     printf("Amount with tax is: %d\n", fixedrate + smsBill + callsBill );
//     printf("total Service Tax is: %d\n",serviceTax);
//     printf("Total Bill is: %d\n",totalbill);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//   int unit;
//   float  bill=0,totalbill;
//   printf("enter the unit: ");
//   scanf("%d",&unit);

// if(unit<101){
//   bill=unit*0.8;
// }
// else if(unit>101 && unit<=30){
// bill=100*0.8+(unit-100)*0.5;

// }
// else if(unit>=301){
//   bill=(100*0.8)+(200*0.5)+(unit-300)*0.3;
// }

// else if(unit>500){
//   bill=bill-100;
// }

// bill=bill+50;
// bill=bill+(0.10*bill);
// printf("%f total bill:",bill);
//  return 0;
// }



// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//   int u ;
//   float  bill=0 , totalbill ;
//   printf("enter the unit:");
//   scanf("%d",&u);

// if(u<101){
//   bill=u*0.8;
// }
// else if(u>101 && u<=300){
// bill=100*0.8+(u-100)*0.5;

// }
// else if(u>=301){
//   bill=(100*0.8)+(200*0.5)+(u-300)*0.3;
// }

// if(u>500){
//   bill=bill-100;
// }

// bill=bill+50;
// bill=bill+(0.10*bill);
// printf("%f total bill:",bill);
//  return 0;
// }




// #include <stdio.h>
// int main(){
//     int temp,raining,sunnyday;
//     printf("enter temperature: ");
//     scanf("%d",&temp);
//     if (temp<0){
//         printf("freezing: %d\n",temp);
//     }
//     else if (temp>0 && temp<=10){
//         printf("raining?('true'=1,'false'=0)");
//         scanf("%d",&raining);
//         if (raining){
//             printf("cold and wet: %d\n",temp);
//         }
//         else {
//             printf("cold\n",temp);
//         }
//     }
//     else if (temp>11 && temp<=20){
//         printf("sunny day('true'=1,'false'=0)");
//         scanf("%d",&sunnyday);
//         if (sunnyday){
//             printf("sunny and mild: %d\n",temp);
//         }
//         else {
//             printf("mild\n",temp);
//         }
//     }
//     else{
//         printf("warm\n",temp);
//     }
//     return 0;
// }


// #include <math.h>
// int main(){
//     int a=2,b;
//     b=5%3;
//     printf("%d",b);
//     return 0;
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
//     if (a>b && a>c){
//         printf("a is larger: %d",a);
//     }
//     else if (b>a && b>c){
//         printf("b is larger: %d",b);
//     }
//     else{
//         printf("c is larger: %d",c);
//     }
//     return 0;
// }


#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter c: ");
    scanf("%d",&c);
    switch(a,b,c){
        case 1:{
            printf("a is larger: %d",a);
        }
        case 0:{
            
        }
    }
    return 0;
}