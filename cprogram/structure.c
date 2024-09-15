// #include <stdio.h>
// struct Student{
//     int roll;
//     float marks;
//     float cgpa;
//     char name[10];
// };
// int main(){
//     struct Student s1;
//     s1.roll=1251;
//     s1.marks=30;
//     s1.cgpa=8.9;
//     s1.name[10]="Partha";
//     strcpy(s1.name,"Partha");
//     printf("roll no is: %d\n",s1.roll);
//     printf("marks is: %f\n",s1.marks);
//     printf("cgpa is: %f\n",s1.cgpa);
//     printf("name is : %s\n",s1.name);
//     struct Student s2;
//     s2.roll=1259;
//     s2.marks=30;
//     s2.cgpa=9.1;
//     s2.name[10]="Mukul";
//     strcpy(s2.name,"Mukul");
//     printf("roll no is: %d\n",s2.roll);
//     printf("marks is: %f\n",s2.marks);
//     printf("cgpa is: %f\n",s2.cgpa);
//     printf("name is : %s\n",s2.name);
//     struct Student s3;
//     s3.roll=6152;
//     s3.marks=50;
//     s3.cgpa=7.5;
//     s3.name[10]="Krishna";
//     strcpy(s3.name,"krishna");
//     printf("....  : %d\n",s3.roll);
//     printf("   : %f\n",s3.marks);
//     printf("m  : %f\n",s3.cgpa);
//     printf("k kv: %s",s3.name);
// }



// #include <stdio.h>
// struct college{
//     char name[20];
//     int marks;
//     float cgpa; 
// };
// int main(){
//     struct college s2;
//     s2.name[10];
//     s2.marks=98;
//     s2.cgpa=9.8;
//     strcpy(s2.name,"Partha");
//     printf("name : %s\n",s2.name);
//     printf("marks: %d\n",s2.marks);
//     printf("cgpa: %f\n",s2.cgpa);
// }



// #include <stdio.h>
// #include <string.h>
// struct student{
//     int roll;
//     float cgpa;
//     char name[10];
// };
// int main(){
//     struct student s1={1251,8.9,"Partha"};
//     strcpy(s1.name,"Partha");
//     // printf("roll is : %d\n",s1.roll);
//     // printf("name is : %s\n",s1.name);
//     struct student *ptr;
//     ptr=&s1;
    // printf("roll is : %d\n",(*ptr).roll);
    // printf("name is : %s\n",(*ptr).name);
//     printf("roll is : %d\n",ptr->roll);
//     printf("name is : %s\n",ptr->name);
// }




// #include <stdio.h>
// struct student{
//     int roll;
//     int mark;
//     float cgpa;
//     char name[10];
// };
// int printHello(struct student s1);
// int main(){
//     struct student s1={1251,90,8.9,"hello"};
//     printHello(s1);
// }
// int printHello(struct student s1){
//     printf("roll is : %d\n",s1.roll);
//     printf("mark is: %d\n",s1.mark);
//     printf("cgpa is: %f\n",s1.cgpa);
//     printf("name is: %s\n",s1.name);
// }



// #include <stdio.h>
// typedef struct student{
//     int roll;
//     int mark;
//     float cgpa;
//     char name[10]; 
// }stu;
// int main(){
//     stu s1;
//     s1.roll=1251;
//     s1.mark=90;
//     s1.cgpa=8.9;
//     strcpy(s1.name,"partha");
//     printf("name is : %s\n",s1.name);
// }



// store address in an array of 5 people by using structure------------------------------------------ 
// #include <stdio.h>
// struct address{
//     int house_no;
//     int block;
//     char city[20];
//     char state[20];
// };
// int main(){
//     struct address adds[5];
//     printf("enter info of 1st people:");
//     scanf("%d",&adds[0].house_no);
//     scanf("%d",&adds[0].block);
//     scanf("%s",&adds[0].city);
//     scanf("%s",&adds[0].state);

//     printf("enter info of 2nd people:");
//     scanf("%d",&adds[1].house_no);
//     scanf("%d",&adds[1].block);
//     scanf("%s",&adds[1].city);
//     scanf("%s",&adds[1].state);

//     printf("enter info of 3rd people:");
//     scanf("%d",&adds[2].house_no);
//     scanf("%d",&adds[2].block);
//     scanf("%s",&adds[2].city);
//     scanf("%s",&adds[2].state);

//     printf("enter info of 4th people:");
//     scanf("%d",&adds[3].house_no);
//     scanf("%d",&adds[3].block);
//     scanf("%s",&adds[3].city);
//     scanf("%s",&adds[3].state);

//     printf("enter info of 5th people:");
//     scanf("%d",&adds[4].house_no);
//     scanf("%d",&adds[4].block);
//     scanf("%s",&adds[4].city);
//     scanf("%s",&adds[4].state);
//     int i;
//     for(i=0;i<5;i++){
//         printf("address is: %d %d %s %s\n",adds[i].house_no,adds[i].block,adds[i].city,adds[i].state);
//     }
// }



// #include<stdio.h>
// struct student{
//     int roll;
//     float cgpa;
// };
// typedef struct student std;
// int main(){
//     std a={10,20};
//     std b={30,90};
//     // a.roll=1251;
//     // b.cgpa=8.9;
//     printf("a.roll is: %d\n",a.roll);
//     printf("a.cgpa is: %f\n",a.cgpa);
// }



// #include <stdio.h>
// struct student {
//     int roll;
//     struct student1{
//         int roll;
//         float cgpa;
//     };
// };
// int main(){
//     struct student s1;
//     s1.roll=1251;
//     struct student1 s2={1221,9.9};
//     printf("s1.roll is: %d\n",s1.roll);
//     printf("s2.roll is: %d\n",s1.s2.roll);

// }



// #include <stdio.h>
// struct child{
// int x;
// int y;
// };
// struct parent {
// int a;
// struct child b;
// };
// int main(){
//     struct parent var1={25,195,'P'};
//     printf("var1.a: %d\n",var1.a);
//     printf("var1.b.x: %d\n",var1.b.x);
//     printf("var1.b.y: %c\n",var1.b.y);
// }


//wap to print two friends result on their lab evaluation with the help of structure---------------------------
// #include <stdio.h>
// struct st{
//     int mark;
// };
// struct CE{
//     float file;
//     float viva;
//     float prog;
// };
// struct student{
//     struct st s1;
//     struct CE s2;
// };
// int main(){
//     struct student v1={{30},5,20,10};
//     struct student v2={{25},4,17,9};
//     // int i;
//     // for(i=0;i<2;i++){
//     printf("final result is: %d %f %f %f\n",v1.s1.mark,v1.s2.file,v1.s2.viva,v1.s2.prog);
//     // }
//     printf("final result is: %d %f %f %f\n",v2.s1.mark,v2.s2.file,v2.s2.viva,v2.s2.prog);
// }



// #include <stdio.h>
// struct vector{
//     int x;
//     int y;
// };
// void calSum(struct vector s1, struct vector s2, struct vector sum);
// int main(){
//     struct vector s1={10,20};
//     struct vector s2={5,7};
//     struct vector sum={0};
//     calSum(s1,s2,sum);
//     return 0;
// }
// void calSum(struct vector s1,struct vector s2,struct vector sum){
//     sum.x=s1.x+s2.x;
//     sum.y=s1.y+s2.y;
//     printf("sum of 1st is: %d\n",sum.x);
//     printf("sum of 2nd is: %d\n",sum.y);
// }


//to store the st1,st2,ce1,ce2 marks using structure type further perform the following opr.
//print th max from st1,st2
//print the average of ce1,ce2
//print the hishest st and ce marks 
// #include <stdio.h>
// struct st1{
//     float Math;
//     float Phys;
//     float c;
//     float os;
// };
// struct st2{
//     float Math;
//     float Phys;
//     float c;
//     float os;
// };
// struct ce1{
//     float Math;
//     float Phys;
//     float c;
//     float os;
// };
// struct ce2{
//     float Math;
//     float Phys;
//     float c;
//     float os;
// };
// int main(){
//     struct st1 s1={40,46,40,40};
//     struct st2 s2={39,39,41,43};
//     struct ce1 c1={9,7,9,8};
//     struct ce2 c2={10,7,9.5,10};
    
//     printf("marks of st1: %.1f %.1f %.1f %.1f \n",s1.Math,s1.Phys,s1.c,s1.os);
//     printf("marks of st2: %.1f %.1f %.1f %.1f \n",s2.Math,s2.Phys,s2.c,s2.os);
//     printf("max is: ");
//     printf("%.1f ",(s1.Math > s2.Math) ? s1.Math : s2.Math);
//     printf("%.1f ",(s1.Phys > s2.Phys) ? s1.Phys : s2.Phys);
//     printf("%.1f ",(s1.c > s2.c) ? s1.c : s2.c);
//     printf("%.1f ",(s1.os > s2.os) ? s1.os : s2.os);
//     printf("\n");
//     float arr[5];
//     arr[0]=(s1.Math > s2.Math) ? s1.Math : s2.Math;
//     arr[1]=(s1.Phys > s2.Phys) ? s1.Phys : s2.Phys;
//     arr[2]=(s1.c > s2.c) ? s1.c : s2.c;
//     arr[3]=(s1.os > s2.os) ? s1.os : s2.os;
//     if((arr[0]>arr[1])&&(arr[0]>arr[2])&&(arr[0]>arr[3])){
//         printf("max is : %.1f",arr[0]);
//     }
//     else if((arr[1]>arr[0])&&(arr[1]>arr[2])&&(arr[1]>arr[3])){
//         printf("max is : %.1f",arr[1]);
//     }
//     else if((arr[2]>arr[0])&&(arr[2]>arr[1])&&(arr[2]>arr[3])){
//         printf("max is : %.1f",arr[2]);
//     }
//     else{
//         printf("max is : %.1f",arr[3]);
//     }
//     printf("\n");

//     printf("marks of ce1: %.1f %.1f %.1f %.1f \n",c1.Math,c1.Phys,c1.c,c1.os);
//     printf("marks of ce2: %.1f %.1f %.1f %.1f \n",c2.Math,c2.Phys,c2.c,c2.os);
//     printf("avr of ce2: %.1f %.1f %.1f %.1f \n",((c1.Math+c2.Math)/2),((c1.Phys+c2.Phys)/2),((c1.c+c2.c)/2),((c1.os+c2.os)/2));
//     if((((c1.Math+c2.Math)/2)>((c1.Phys+c2.Phys)/2))||(((c1.Math+c2.Math)/2)>((c1.c+c2.c)/2))||(((c1.Math+c2.Math)/2)>(((c1.os+c2.os)/2)))){
//         printf("max of ce1 or ce2: %.1f ",((c1.Math+c2.Math)/2));
//     }
//     else if((((c1.Phys+c2.Phys)/2)>((c1.Math+c2.Math)/2))||(((c1.Phys+c2.Phys)/2)>((c1.c+c2.c)/2))||(((c1.Phys+c2.Phys)/2)>(((c1.os+c2.os)/2)))){
//         printf("max of ce1 or ce2: %.1f ",((c1.Phys+c2.Phys)/2));
//     }
//     else if((((c1.c+c2.c)/2)>((c1.Math+c2.Math)/2))||(((c1.c+c2.c)/2)>((c1.Math+c2.Math)/2))||(((c1.c+c2.c)/2)>(((c1.os+c2.os)/2)))){
//         printf("max of ce1 or ce2: %.1f ",((c1.c+c2.c)/2));
//     }  
//     else{
//         printf("max of ce1 or ce2: %.1f ",((c1.os+c2.os)/2));
//     } 
// }




// #include <stdio.h>
// #include <string.h>
// struct student {
//     char name[50];
//     int age;
//     float marks;
// };
// int main(){
//     struct student s1={"Ram",20,199};
//     strcpy(s1.name,"Ram");
//     struct student s2={"Krishna",22,195};
//     strcpy(s2.name,"Krishna");
//     struct student s3={"Chaitanya",19,190};
//     strcpy(s3.name,"Chaitanya");
//     printf("details of 1st student: %s %d %.1f\n",s1.name,s1.age,s1.marks);
//     printf("details of 2nd student: %s %d %.1f\n",s2.name,s2.age,s2.marks);
//     printf("details of 3rd student: %s %d %.1f\n",s3.name,s3.age,s3.marks);
// }


// #include <stdio.h>
// struct student {
//     char name[20];
//     int age;
//     float marks;
// };
// int main(){
//     struct student s1[3];
//     int i;
//     for(i=0;i<3;i++){
//         printf("enter name: ");
//         scanf("%s",&s1[i].name);
//         printf("enter age: ");
//         scanf("%d",&s1[i].age);
//         printf("enter marks: ");
//         scanf("%f",&s1[i].marks);
//     }
//     for(i=0;i<3;i++){
//         printf("student details: %s %d %.1f\n",s1[i].name,s1[i].age,s1[i].marks);
//     }
// }



// #include<stdio.h>
// struct time{
//     int hour;
//     int min;
//     int sec;
// };
// int main(){
//     struct time t1[2];
//     int i;
//     for(i=0;i<2;i++){
//         printf("enter hour: ");
//         scanf("%d",&t1[i].hour);
//         printf("enter min: ");
//         scanf("%d",&t1[i].min);
//         printf("enter sec: ");
//         scanf("%d",&t1[i].sec);
//     }
//     for(i=0;i<2;i++){
//         printf("time is: %d %d %d\n",t1[i].hour,t1[i].min,t1[i].sec);  
//     }
//     printf("total time is: %d %d %d\n",(t1[0].hour+t1[1].hour),(t1[0].min+t1[1].min),(t1[0].sec+t1[1].sec));
//     int sec=(t1[0].sec+t1[1].sec)%60;
//     int min=(t1[0].sec+t1[1].sec)/60;
//     min+=((t1[0].min+t1[1].min)%60);
//     int hour=(t1[0].min+t1[1].min)/60;
//     int totalhour=hour+(t1[0].hour+t1[1].hour);
//     hour=totalhour%24;
//     int day=totalhour/24;
//     printf("actual time is: %d %d %d %d \n",day,hour,min,sec);
// }



// #include <stdio.h>
// #include <math.h>
// struct circle{
//     int rad;
//     float perimeter;
//     float area;
// };
// int main(){
//    struct circle c1[2];
//    struct circle c2[2];
//    int i;
//    for(i=0;i<2;i++){
//     printf("enter radius: ");
//     scanf("%d",&c1[i].rad);
//     c1[i].area=3.14*(pow((c1[i].rad),2));
//     c1[i].perimeter=2*3.14*(c1[i].rad);
//    }
//    for(i=0;i<2;i++){
//     printf("perimeter of %d is: %.2f\n",i+1,c1[i].perimeter);
//     printf("area of %d is: %.2f\n",i+1,c1[i].area);
//    }
// }


// Create a structure named Book to store book details like title, author, and price. 
// Write a C program to input details for three books,
// find the most expensive and the lowest priced books, and display their information.

// #include<stdio.h>
// struct books{
//     char title[10];
//     char author[10];
//     float price;
// };
// int main(){
//     struct books b1[3];
//     int i;
//     for(i=0;i<3;i++){
//         printf("enter title: ");
//         scanf("%s",&b1[i].title);
//         printf("enter author name: ");
//         scanf("%s",&b1[i].author);
//         printf("enter book price: ");
//         scanf("%f",&b1[i].price);
//     }
//     printf("Book details are: Title Author Price\n");
//     for(i=0;i<3;i++){
//         printf("book details of %d: %s    %s    %.1f\n",i+1,b1[i].title,b1[i].author,b1[i].price);
//     }
//     float p,q,r;
//     p=b1[0].price;
//     q=b1[1].price;
//     r=b1[2].price;
//     if(p>q && p>r){
//         printf("most expansive book is: %.1f\n",p);
//     }
//     else if(q>r&&q>p){
//         printf("most expansive book is: %.1f\n",q);
//     }
//     else{
//         printf("most expansive book is:%.1f\n",r);
//     }
//     // printf("\n");
//     if(p<q && p<r){
//         printf("most lowest book is: %.1f\n",p);
//     }
//     else if(q<r&&q<p){
//         printf("most lowest book is: %.1f\n",q);
//     }
//     else{
//         printf("most lowest book is:%.1f\n",r);
//     }
// }



// WAP to input the following information
// book title,book author,book pages,book price of 5 books
//and apply search for a book on the following basis-----------------
// #include <stdio.h>
// struct book{
//     char book_title[20];
//     char book_author[20];
//     int book_pages;
//     int book_price;
// };
// int main(){
//     struct book b1[5];
//     int i;
//     for(i=0;i<5;i++){
//         printf("enter book_title: ");
//         scanf("%s",&b1[i].book_title);
//         printf("enter book_author: ");
//         scanf("%s",&b1[i].book_author);
//         printf("enter book_pages: ");
//         scanf("%d",&b1[i].book_pages);
//         printf("enter book_price: ");
//         scanf("%d",&b1[i].book_price);
//     }
//     printf("b.title b.auth b.page b.price \n");
//     for(i=0;i<5;i++){
//         printf("%s\t %s\t %d\t %d\n",b1[i].book_title,b1[i].book_author,b1[i].book_pages,b1[i].book_price);
//     }
//     char search_title[20];
//     printf("enter search_titile: ");
//     scanf("%s",&b1[i].book_title);
//     int flag=1;
//     for(i=0;i<5;i++){
//         if(b1[i].book_title==search_title){
//             flag=0;
//         }
//     }
//     if(flag==1){
//         printf("element present");
//     }
//     else {
//         printf("not found");
//     } 
//     char serach_author[20];
//     printf("enter search_author: ");
//     scanf("%s",&serach_author);
//     for(i=0;i<5;i++){
//         strcmp(serach_author,b1[i].book_author);
//         flag=0;
//     }
//     if (flag==0){
//         printf("element found:");
//     }
//     else{
//         printf("not found");
//     }
// }



//enter 3 students details and print the specific student information by using structure
// #include <stdio.h>
// struct student {
//     int sl_no;
//     int roll;
//     char name[10];
//     float marks;
// };
// int main(){
//     struct student s1[3];
//     int i;
//     for(i=0;i<3;i++){
//         printf("sl no is: ");
//         scanf("%d",&s1[i].sl_no);
//         printf("roll no is: ");
//         scanf("%d",&s1[i].roll);
//         printf("name is: ");
//         scanf("%s",&s1[i].name);
//         printf("marks is: ");
//         scanf("%f",&s1[i].marks);
//     }
//     for(i=0;i<3;i++){
//         printf("%d %d %s %.2f\n",s1[i].sl_no,s1[i].roll,s1[i].name,s1[i].marks);
//     }
//     int search;
//     printf("enter search: ");
//     scanf("%d",&search);
//     for(i=0;i<3;i++){
//         if(s1[i].sl_no==search){
//             printf("%d %d %s %.1f",s1[i].sl_no,s1[i].roll,s1[i].name,s1[i].marks);
//         }
//     }
// }