// Write a C program to perform input/output of all basic data types .----------------
// #include <stdio.h>
// int main(){
//     int p;
//     printf("enter p: ");
//     scanf("%d",&p);
//     printf("%d",p);
//     return 0;
// }


// Write a C program to enter two numbers and find their sum.-----------------
// #include <stdio.h>
// int main(){
//     int p,q;
//     printf("enter p,q: ");
//     scanf("%d%d",&p,&q);
//     printf("sum is: %d",p+q);
//     return 0;
// }


// Write a C program to enter two numbers and perform all arithmetic operations.----------------------
// #include <stdio.h>
// int main(){
//     int p,q;
//     printf("enter p: ");
//     scanf("%d",&p);
//     printf("enter q: ");
//     scanf("%d",&q);
//     printf("sum is: %d",p+q);
//     printf("subtract is: %d",p-q);
//     printf("multiplication is: %d",p*q);
//     printf("division is: %d",p/q);
//     return 0;
// }


// Write a C program to enter length and breadth of a rectangle and find its perimeter.-----------
// #include <stdio.h>
// int main(){
//     int p,q,s;
//     printf("enter p: ");
//     scanf("%d",&p);
//     printf("enter q: ");
//     scanf("%d",&q);
//     s=2*(p+q);
//     printf("sum is: %d",s);
//     return 0;
// }

// Write a C program to enter length and breadth of a rectangle and find its area.-------------------
// #include <stdio.h>
// int main(){
//     int p,q;
//     printf("enter p: ");
//     scanf("%d",&p);
//     printf("enter q: ");
//     scanf("%d",&q);
//     printf("area of ractangle is: %d",p*q);
//     return 0;
// }


// Write a C program to enter radius of a circle and find its diameter, circumference and area.----------------
// #include <stdio.h>
// int main(){
//     float r,diam,cir,area;
//     printf("enter r: ");
//     scanf("%f",&r);
//     diam=2*r;
//     cir=2*3.14*r;
//     area=3.14*r*r;
//     printf("diam is: %f"\n,diam);
//     printf("diam is: %f"\n,cir);
//     printf("diam is: %f"\n,area);
//     return 0;
// }

// Write a C program to enter length in centimeter and convert it into meter and kilometer.--------------------
// #include <stdio.h>
// int main(){
//     float dis,met,km;
//     printf("enter dis: ");
//     scanf("%f",&dis);
//     met=dis/100;
//     km=dis/100000;
//     printf("dis in meter is: %f\n",met);
//     printf("dis in km is %f\n",km);
//     return 0;
// }


// Write a C program to enter temperature in Celsius and convert it into Fahrenheit.-------------
// #include <stdio.h>
// int main(){
//     float temp,fer;
//     printf("enter temp: ");
//     scanf("%f",&temp);
//     fer=((9*temp)+160)/5;
//     printf("temprature in ferhnheit is: %f",fer);
//     return 0;
// }


// Write a C program to convert days into years, weeks and days .-------------
// #include <stdio.h>
// int main(){
//     int td,years,weeks,days;
//     printf("enter td: ");
//     scanf("%d",&td);
//     years=td/365;
//     weeks=(td%365)/7;
//     days=(td-((years*365)+(weeks*7)));
//     printf("years : %d\n",years);
//     printf("weeks : %d\n",weeks);
//     printf("days : %d\n",days);
//     return 0;
// }


// Write a C program to enter two angles of a triangle and find the third angle.---------
// #include <stdio.h>
// int main(){
//     int p,q,r;
//     printf("enter p: ");
//     scanf("%d",&p);
//     printf("enter q: ");
//     scanf("%d",&q);
//     r=180-(p+q);
//     printf("third angle is: %d",r);
//     return 0;
// }


// Write a C program to enter P, T, R and calculate Simple Interest.------------------
// #include <stdio.h>
// int main(){
//     int p,t,r,si;
//     printf("enter p: ");
//     scanf("%d",&p);
//     printf("enter t: ");
//     scanf("%d",&t);
//     printf("enter r: ");
//     scanf("%d",&r);
//     si =(p*t*r)/100;
//     printf("simple interest is: %d",si);
//     return 0;
// }


// Write a C program to find maximum between two numbers using conditional operator.------------------
// #include <stdio.h>
// int main(){
//     int p,q;
//     printf("enter p: ");
//     scanf("%d",&p);
//     printf("enter q: ");
//     scanf("%d",&q);
//     if(p>q){
//         printf("maximum number is p: %d\n",p);
//     }
//     else{
//         printf("maxium number is q: %d\n",q);
//     }
//     return 0;
// }


// Write a C program to find maximum between three numbers using conditional operator .---------------
// #include <stdio.h>
// int main(){
//     int p,q,r;
//     printf("enter p: ");
//     scanf("%d",&p);
//     printf("enter q: ");
//     scanf("%d",&q);
//     printf("enter r: ");
//     scanf("%d",&r);
//     if(p>q){
//         printf("maximum number is p: %d\n",p);
//     }
//     else if{
//         printf("maxium number is q: %d\n",q);
//     }
//     else{
//         printf("maxium number is r: %d\n",r);
//     }
//     return 0;
// }


// Write a C program to check whether a number is even or odd using conditional operator.----------------
// #include <stdio.h>
// int main(){
//     int p;
//     printf("enter p: ");
//     scanf("%d",&p);
//     if(p%2==0){
//         printf("p is even: %d\n",p);
//     }
//     else{
//         printf("p is odd: %d\n",p);
//     }
//     return 0;
// }


// Write a C program to check whether year is leap year or not using conditional operator.----------------
// #include <stdio.h>
// int main(){
//     int year;
//     printf("enter year: ");
//     scanf("%d",&year);
//     if(p%4==0 && p%400){
//         printf("year is leap year: %d\n",year);
//     }
//     else{
//         printf("year is not leap year: %d\n",year);
//     }
//     return 0;
// }


// Write a C program to check whether character is an alphabet or not using conditional operator.-----------
// #include <stdio.h>
// int main(){
//     int year;
//     printf("enter year: ");
//     scanf("%d",&year);
//     if(p%4==0 && p%400){
//         printf("year is leap year: %d\n",year);
//     }
//     else{
//         printf("year is not leap year: %d\n",year);
//     }
//     return 0;
// }


// Write a C program to input any alphabet and check whether it is vowel or consonant.-----------------
// #include <stdio.h>
// int main(){
//     char alphabet;
//     printf("enter alphabet:");
//     scanf("%s",&alphabet);
//     switch(alphabet)
//     {
//     case 'a':{
//         printf("vowel:",alphabet);
//         break;
//     }
//     case 'e':{
//         printf("vowel:",alphabet);
//         break;
//     }
//     case 'i':{
//         printf("vowel:",alphabet);
//         break;
//     }
//     case 'o':{
//         printf("vowel:",alphabet);
//         break;
//     }
//     case 'u':{
//         printf("vowel:",alphabet);
//         break;
//     }
//     default:{
//         printf("consonent:",alphabet);
//         break;
//     }
        
//     }
//     return 0;
// }


// Write a C program to input any character and check whether it is alphabet, digit or special character.-------
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("enter ch: ");
//     scanf("%c",&ch);
//     if (ch>='0' && ch<='9'){
//         printf("it is a digit: %c",ch);
//     }
//     else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
//         printf("it is a char: %c",ch);
//     }
//     else {
//         printf("it is a sp: %c",ch);
//     }
// }


// Write a C program to input month number and print number of days in that month.------------
// #include <stdio.h>
// int main(){
//     int number;
//     printf("enter number: ");
//     scanf("%d",&number);
//     switch(number){
//         case 1:{
//             printf("January--31");
//             break;
//         }
//         case 2:{
//             printf("February--28");
//             break;
//         }
//         case 3:{
//             printf("Merch--31");
//             break;
//         }
//         case 4:{
//             printf("April--30");
//             break;
//         }
//         case 5:{
//             printf("May--31");
//             break;
//         }
//         case 6:{
//             printf("June--30");
//             break;
//         }
//         case 7:{
//             printf("July--31");
//             break;
//         }
//         case 8:{
//             printf("August--31");
//             break;
//         }
//         case 9:{
//             printf("Septmber--30");
//             break;
//         }
//         case 10:{
//             printf("October--31");
//             break;
//         }
//         case 11:{
//             printf("November--30");
//             break;
//         }
//         case 12:{
//             printf("December--31");
//             break;
//         }
//     }
// }


// Write a C program to check whether a character is uppercase or lowercase alphabet .----------------
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("enter ch: ");
//     scanf("%c",&ch);
//     if(ch>='a' && ch<='z'){
//         printf("lowercase letter: %c",ch);
//     }
//     else if(ch>='A' && ch<='Z'){
//         printf("uppercase letter: %c",ch);
//     }
//     else{
//         printf("does not a letter: %c",ch);
//     }
//     return 0;
// }


// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.-----------
// Calculate percentage and grade according to following:
// Percentage &gt;= 90% : Grade A
// Percentage &gt;= 80% : Grade B
// Percentage &gt;= 70% : Grade C
// Percentage &gt;= 60% : Grade D
// Percentage &gt;= 40% : Grade E
// Percentage &lt; 40% : Grade F
// #include <stdio.h>
// int main(){
//     int mark_Physics,mark_Chemistry,mark_Biology,mark_Mathematics,mark_Computer;
//     float per;
//     printf("enter mark_Physics: ");
//     scanf("%d%d%d%d%d",&mark_Physics,mark_Biology,mark_Chemistry,mark_Mathematics,mark_Computer);
//     per =(mark_Physics+mark_Chemistry+mark_Biology+mark_Mathematics+mark_Computer)/5.0;
//     if (per>=90){
//         printf("Grade A:%d",mark_Physics);
//     }
//     else if (per>=80){
//         printf("Grade B:%d",mark_Physics);
//     }
//     else if (per>=70){
//         printf("Grade C:%d",mark_Physics);
//     }
//     else if (per>=60){
//         printf("Grade D:%d",mark_Physics);
//     }
//     else if (per>=40){
//         printf("Grade E:%d",mark_Physics);
//     }
//     else{
//         printf("Grade F:%d",mark_Physics);
//     }
//     return 0;
// }

// Write a C program to input electricity unit charges and calculate total electricity bill according to the given--------
// condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill
// #include <stdio.h>
// int main(){
//     float sur_charge,total,unit,charge;
//     printf("enter unit: ");
//     scanf("%f",&unit);
//     if (unit<=50){
//         charge=unit*0.50;
//     }
//     else if (unit>50 && unit<=150){
//         charge=(unit-50)*0.75;
//     }
//     else if (unit>150 && unit<=250){
//         charge=(unit-150)*1.2;
//     }
//     else{
//         charge=(unit-250)*1.50;
//     }
//     sur_charge=charge*0.20;
//     total=sur_charge+charge;
//     printf("total charge is: %f",total);
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     int x,y;
//     int p1,d1,p2,d2;
//     // int call,message;
//     printf("\n enter the total calls: ");
//     scanf("%d",&x);
//     printf("\n enter the total message: ");
//     scanf("%d",&y);
//     if (x<=100)
//         {
//         printf("\nyour call under the 100 calls so your calls free");
// }
//     else if (x>=100 || x==300) {
//         p1=(x-100)*2;
//         p2=(p1/100)*5;
//         p1+=p2;
//         printf("\n this is your call rate %d",x1);

//     }
//     else{
//         p1=(x-300)*1.5;
//         p2=(p1/100)*5;
//         p1+=p2;
//         printf("\nthis is your call rate %d",p1);
//     }
//     if (y<=100)
//     {
//         printf("\nits your message is free ");
//     }
//     else{
//         d1=(y-100)*2;
//         d2=(d1/100)*5;
//         d1+=d2;
//         printf("\n this is your message rate %d",d1);
//     }
//     // printf("product of the above two integer =%d\n",result);
//     return 0;

// }


