// #include <stdio.h>
// int main(){
    // int a=10;
    // printf("%d\n",&a);

    // int *p=&a;
    // printf("%d\n",p);
    // printf("%d\n",*p);

    // int i=3;
    // int *j=&i;
    // int *k=&j;
    // int **k=&i;
    // printf("%u\n",&i);
    // printf("%u\n",j);
    // printf("%u\n",*j);
    // printf("%u\n",*(&i));


// } 

// #include <stdio.h>
// int swap(int *x,int *y){
//     int t=*x;
//     *x=*y;
//     *y=t;
//     printf("x is : %d\n",*x);
//     printf("y is: %d\n",*y);
// }
// int main(){
//     int a=12;
//     int b=18;
//     int dummy;
//     dummy=swap(&a,&b);
//     printf("a is: %d\n",a);
//     printf("b is: %d\n",b);
// }

// #include <stdio.h>
// int main(){
//     int a=55;
//     int *ptr=&a;
//     printf("%d\n",&a);
//     printf("%d\n",ptr);
//     printf("%d\n",*ptr);
// }


// #include <stdio.h>
// int main(){
//     int a=50;
//     int *ptr=&a;
//     printf("%p\n",&a);
//     printf("%u\n",ptr);
// }


// #include <stdio.h>
// int main(){
//     int *ptr;
//     int x;
//     ptr=&x;
//     *ptr=0;
//     printf("%d\n",x);
//     printf("%d\n",*ptr);
//     *ptr+=1;
//     printf("%d\n",x);
//     (*ptr)++;
//     printf("%d",x);
// }


// #include <stdio.h>
// int main(){
    // int i=5;
    // int j=&i;
    // int *ptr=&j;
    // int k=&j;
    // int *p=&j;
    // printf("add of i is: %d\n",&i);
    // printf("add of j is: %d\n",&j);
    // printf("add of k is: %d\n",&k);
    // printf("val of i is: %d\n",i);
    // printf("val of j is: %d\n",*ptr);
    // printf("val of k is: %d\n",*p);
// }


//sum of two number using pointer-------------------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     a=10;
//     b=20;
//     int *p=&a;
//     int *q=&b;
//     int sum=*p+*q;
//     printf("address of a: %d\n",&a);
//     printf("address of b: %d\n",&b);
//     printf("address of a: %d\n",sum);
// }

// WAP to check a number is even or odd----------------------------
// #include <stdio.h>
// int main(){
//     int a;
//     printf("enter a: ");
//     scanf("%d",&a);
//     int *p=&a;
//     printf("address of the number is: %d\n",p);
//     if(*p%2==0){
//         printf("pointer is even: %d\n",*p);
//     }
//     else{
//         printf("pointer is odd: %d\n",*p);
//     }
// }


// WAP to check the num is prime or not------------------------
// #include <stdio.h>
// int main(){
//   int a,i,count=0;
//   int *p=&a;
//   printf("enter num: ");
//   scanf("%d",&a);
// //   *p=&a;
//   for (i=1;i<=*p;i++){
//     if(*p%i==0){
//         count++;
//     }
    
//   }
//   if (count==2){
//     printf("prime");
//   }
//   else{
//     printf("not prime");}
// }


// WAP to print an array using pointer--------------------------
// #include <stdio.h>
// int main(){
//     int arr[5],i;   
//     for (i=0;i<5;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     int *p=&arr[0];
//     for (i=0;i<5;i++){
//         // printf("enter num: ");
//         printf("%d\n",*(p+i));
//     }
// }



// #include <stdio.h>
// int swap(int *p, int *q);
// int main(){
//     int a,b;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);   
//     swap(&a,&b);
//     printf("val of a is: %d\n",a);
//     printf("val of b is: %d\n",b);
// }
// int swap(int *p,int *q){
//     int temp=*p;
//     *p=*q;
//     *q=temp;
//     printf("val of *p: %d\n",*p);
//     printf("val of *q: %d\n",*q);
// }



// #include<stdio.h>
// int main(){
//     int a=10,*p,**q;
//     p=&a;
//     q=&p;
//     printf("add of a: %d\n",&a);
//     printf("add of a: %d\n",p);
//     printf("add of a: %d\n",*q);
//     printf("val of a: %d\n",a);
//     printf("add of p: %d\n",&p);
//     printf("add of p: %d",*q);
//     printf("val of p: %d\n",*p);
//     printf("add of q: %d\n",&q);
//     printf("val of q: %d\n",**q);
// }



// #include <stdio.h>
// void sq(int i,int j);
// int main(){
//     int i=5,j=2;
//     sq(i,j);
//     printf("%d\n%d\n",i,j);
// }
// void sq(int i, int j){
//     i=i*i;
//     j=j*j;
//     printf("%d\n",i);
//     printf("%d\n",j);
// }



// #include <stdio.h>
// void mul(int *i,int *j);
// int main(){
//     int a,b,*i,*j;
//     a=10;
//     b=20;
//     i=&a;
//     j=&b;
//     printf("%d\n",i);
//     printf("%d\n",j);
//     mul(*i,*j);
// }
// void mul(int *i,int *j){
//     *i=*i**i;
//     *j=*j**j;
//     printf("%d\n",*i);
//     printf("%d\n",*j);
// }


// WAP to print all the alphabet using pointer--------------------
// #include <stdio.h>
// int main(){
//     int *p;
//     char i;
//     p=&i;
//     for (i='A';i<='Z';i++){
//         printf("%c\n",*p);
//     }
// }


// Write a program in C to find the maximum number between two numbers using a
// pointer.--------------------------------------------------------
// #include <stdio.h>
// int main(){
//     int a,b,*p,*q;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     p=&a;
//     q=&b;
//     if (*p>*q){
//         printf("max is a: %d\n",*p);
//     }
//     else{
//         printf("max is b: %d\n",*q);
//     }
// }




// #include <stdio.h>
// void fun(int *ar,int n);
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80};
//     int cnt=sizeof(arr)/sizeof(int);
//     printf("total ele: %d\n",cnt);
//     fun(&arr,cnt);
// }
// void fun(int *ar,int n){
//     int i=0;
// //     while(i<n){
// //         printf("%d\n",*ar++);
// //         i++;
// // }
//  while(i<n){
//         printf("%d",ar);
//         printf("  %d\n",*ar++);
//         i++;
// }
// }



// #include <stdio.h>
// void swap(int a,int b);
// int main(){
//     int a,b;
//     printf("enter a,b");
//     scanf("%d%d",&a,&b);
//     swap(a,b);
//     printf("%d\t%d",a,b);
// }
// void swap(int a,int b){
//     int *p,*q,t;
//     t=a;
//     a=b;
//     b=p;
//     printf("%d\n",*p);
//     printf("%d\n",*q);
// }


// #include <stdio.h>
// int main(){
//     int a=5;
//     int *p,**q;
//     p=&a;
//     q=&p;
//     printf("a is: %d\n",a);
//     printf("address of a is: %d\n",p);
//     printf("p is: %d\n",*p);
//     printf("address of p is: %d\n",q);
//     printf("value of q is: %d\n",**q);
// }


// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i,*p;
//     p=&arr;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d %d\n",*(p+i),p);
//     }
// }


// #include <stdio.h>
// int main(){
//     int a=5,b=5;
//     int *p,*q;
//     p=&a;
//     q=&b;
//     printf("sum is: %d",*p+*q);
// }


// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i,*p,*q,*r;
//     p=&arr;
//     for(i=0;i<10;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     int sum=0;
    
//     for(i=0;i<10;i++){
//         if((*(p+i))%2==0){
//             sum+=(*(p+i));
//         }
//     }
//     printf("sum is: %d",sum);
// }


// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[20]={"W3RESOURCE"};
//     int a=strlen(str);
//     int *p;
//     p=&a;
//     printf("%d",*p);
// }



// #include <stdio.h>
// int main(){
//     int a=1,i,*p;
//     p=&a;
//     for(i=1;i<=5;i++){
//         *p*=i;
//     }
//     printf("%d",*p);
// }



// #include<stdio.h>
// int main(){
//     char str[20];
//     printf("enter string: ");
//     scanf("%19s",str);
//     int i=0,countv=0,countc=0;
//     while(str[i]!='\0'){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
//             countv++;
//         }
//         else{
//             countc++;
//         }
//         i++;
//     }
//     printf("countvowel is: %d\n",countv);
//     printf("countconsonent is: %d\n",countc); 
// }



// #include <stdio.h>
// int main(){
//     char i;
//     int *p;
//     p=&i;
//     for(i=65;i<91;i++){
//         printf("%c ",*p);
//     }
// }



// #include <stdio.h>
// int main(){
//     char str[20]={"hello world"};
//     char *p;
//     p=&str;
//     while(*p>=0){
//         printf("%c",*p);
//         (*p)--;
//     }  
// }
