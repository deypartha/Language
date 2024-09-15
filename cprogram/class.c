// #include <stdio.h>
// int main(){
//     int a=20;
//     int b=
//     printf("hello students");
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a=20;
//     int b=10;
//     int c=a+b;
//     printf("%d",c);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a,b,c;
//     // int b=10;
//     c=a+b;
//     printf("%d",c);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter the value of a:");
//     scanf("%d",&a);
//     printf("enter the value of b:");
//     scanf("%d",&b);
//     c=a+b;
//     printf("%d",c);
//     // int c=a+b;
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a=30;
//     if (a>20){
//         printf("a is greater then 20");
//     }
//     else{
//         printf("a is less then 20");
//     }

//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a=30;
//     if (a==20){
//         printf("you enter 20");
//     }
//     else if(a==10){
//         printf("you enter 10");
//     }
//     else if(a==5){
//         printf("you enter 5");
//     }
//     else{
//         printf("incorrecet input");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a=5*2-3*2;
//     printf("a:%d",a);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a=5*(2/2)*3;
//     // int b=a/2;
//     // int c=b*3;
//     printf("a is: %d",a);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a=5+2/2*3;
//     printf("a: %d",a);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     // int a=5*2-3*2;
//     printf("%d",5<2);
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int mark;
//     printf("enter mark: ");
//     scanf("%d",&mark);
//     if (mark>=80){
//         printf("outstanding: %d",mark);
//     }
//     else if (mark>=60){
//         printf("very good: %d",mark);
//     }
//     else if (mark>=50){
//         printf("good: %d",mark);
//     }
//     else if (mark>=25){
//         printf("medium: %d",mark);
//     }
//     else{
//         printf("fail: %d",mark);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int p,r,t,c;
//     printf("enter principle p: ");
//     scanf("%d", &p);
//     printf("enter rate of change r: ");
//     scanf("%d", &r);
//     printf("enter time t: ");
//     scanf("%d", &t);
//     c=(p*r*t)/100;
//     printf("SI is:%d",c);
//     return 0;
    
// }


// #include <stdio.h>
// int main(){
//     for (int i=0;i<=10;i++){
//         printf("%d",i);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i=10;
//     while(i>=1){
//         printf("%d \n",i);
//         i=i-1;
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i,arr[5];
//     arr[0]=10;
//     arr[1]=20;
//     arr[2]=30;
//     arr[3]=40;
//     arr[4]=50;
//     for(i=0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }


// searching an element from a array-------------
// #include <stdio.h>
// int main(){
//     int a[]={10,20,30,40,50,60,10};
//     int i;
//     int searchele=10;
//     // printf("enter ele:");
//     // scanf("%d",&searchele);
//     for(i=0;i<7;i++){
//         if(a[i]==searchele){
//             printf("element has been found at:");
//             // break;
//         }  
//         printf("%d\n",i+i);
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int a;
//     printf("enter a: ");
//     scanf("%d",&a);
//     switch(a%2){
//         case 0:{
//             printf("a is even: %d",a);
//             break;
//         }
//         default:{
//             printf("a is odd: %d",a);
//             break;
//         } 
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int num;
//     printf("enter num: ");
//     scanf("%d",&num);
//     switch(num>0){
//         case 1:{
//             printf("num is positive: %d",num);
//             break;
//         }
//         case 0:{
//             switch (num<0)
//             {
//             case 1:{
//                 printf("num is negative: %d",num);
//                 break;
//             }
//             case 0:{
//                 printf("num is zero: %d",num);
//                 break;
//             }
//         }
//         break;}
//     }
//  return 0;
// }


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
//     switch (opr)
//     {
//     case '+':{
//         printf("sum is :%d",a+b);
//         break;
//         }
//         case '-':{
//         printf("sub is :%d",a-b);
//         break;
//         }
//         case '*':{
//         printf("mul is :%d",a*b);
//         break;
//         }
//         case '/':{
//         printf("div is :%d",a/b);
//         break;
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     float a,b,c,d,p,q,r,s;
//     printf("enter a: ");
//     scanf("%f",&a); 
//     printf("enter b: ");
//     scanf("%f",&b);
//     printf("enter c: ");
//     scanf("%f",&c);
//     d=(b*b)-(4*a*c);
//     p=-b+sqrt(d)/(2*a);
//     q=-b-sqrt(d)/(2*a);
//     r=-b/(2*a);
//     s=-b/(2*a);
//     switch (d>0)
//     {
//     case 1:{
//         printf("value of p: %f",p);
//         break;
//     }
//     case 0:{
//         switch (d==0)
//         {
//         case 1:{
//             printf("%f",r);
//             break;
//         }
//         case 0:{
//             switch (d<0)
//             {
//             case 1:{
//                 printf("it is an imaginary value: %f");
//                 break;
//             }
//             }
//         }
//         }
//     }

//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int salary;
//     int bonus,age,totalsal;
//     printf("enter salary:");
//     scanf("%d",&salary);
//     printf("enter age:");
//     scanf("%d",&age);
//     if (salary>50000){
//         if (age>50){
//             bonus=salary*.12;
//         }
//         else{
//             bonus=salary*0.1;
//         }
//     }
//     else {
//         bonus=salary*0.08;
//     }
//     totalsal=salary+bonus;
//     printf("%d",totalsal);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int b;
//     int j,k;
//     j=0;k=0;
//     b=(j++==k)||(j==++k);
//     printf("b,j,k: %d%d%d\n",b,j,k);
//     j=0; k=0;
//     b=(j++!=k)||(j==++k);
//     printf("b,j,k: %d%d%d\n",b,j,k);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int b;
//     int j,k;
//     j=0;k=0;
//     b=(j++==k)&&(j==++k);
//     printf("b,j,k: %d %d %d\n",b,j,k);
//     j=0; k=0;
//     b=(j++!=k)&&(j==++k);
//     printf("b,j,k: %d%d%d\n",b,j,k);
//     return 0;
// }



// write a program to print whetehr a student will participate in the event or nmot according to the instructions below:
// 1) take input of marks in CE, ST1, ST2.
// 2) if the average marks of ST1 and ST2 are grater than 70 percent and minimum marks ion CE 80 then the student will participate in the event.
// OR
// 3) If the maximum marks from ST1 and ST2 are greater than 60 percent and minimum marks in CE 70 then the student will participate in the event.
// #include <stdio.h>
// int main(){
//     int avmarks,st1,st2,ete,max;
//     printf("enter st1: ");
//     scanf("%d",&st1);
    // printf("enter st2: ");
    // scanf("%d",&st2);
    // printf("enter ete: ");
    // scanf("%d",&ete);
    // avmarks=(st1+st2)/2;
    // if (st1>st2){
    //     max=st1;
    // }
    // else{
    //     max=st2;
    // }
    // if (avmarks>70 && ete >80){
    //     printf("student will participate");
    // }
    // else if (max>60 && ete>70){
    //     printf("student will participate");
    // }
    // else{
    //     printf("student won`t participate");
    // }
    // return 0;
// }


// write a program to print whetehr a student will participate in the event or nmot according to the instructions below:
// 1) take input of marks in CE, ST1, ST2.
// 2) if the average marks of ST1 and ST2 are grater than 70 percent and minimum marks ion CE 80 then the student will participate in the event.
// OR
// 3) If the maximum marks from ST1 and ST2 are greater than 60 percent and minimum marks in CE 70 then the student will participate in the event






// #include <stdio.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int p=10;
//     while(p>=1){
//         printf("%d\n",p);
//         p--;
//     }
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for (i=97;i<=122;i++){
//         printf("%c\n",i);
//     }
// }


// #include <stdio.h>
// int main(){
//     int i=1;
//     while(i<=100){
//         if (i%2==0){
//             printf("%d\n",i);
//         }
//         i++;
//     }
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for (i=1;i<=100;i++){
//         if (i%2!=0){
//             printf("%d\n",i);
//         }
//     }
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for (i=0;i<=255;i++){
//         printf("%c",i);
//     }
// }

// #include <stdio.h>
// int main(){
//     int i,sum=0;
//     for (i=1;i<=10;i++){
//         sum=sum+i;
//     }
//     printf("%d",sum);
// }

// #include <stdio.h>
// int main(){
//     int i,sum=0;
//     for (i=1;i<=10;i++){
//         if (i%2==0){
//             sum=sum+i;
//         }
//     }
//     printf("%d",sum);
// }


// #include <stdio.h>
// int main(){
//     int i,sum=0;
//     for (i=1;i<=10;i++){
//         if (i%2!=0){
//             sum=sum+i;
//         }
//     }
//     printf("%d",sum);
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for (i=1;i<=10;i++){
//         printf("%d\n",7*i);
//     }
// }


// #include <stdio.h>
// int main(){
//     int num=4569,r,q;
//     int sum=0;
//     while (num>0){
//         r=num%10;
//         q=num/10;
//         num=q;
//         sum=sum+r;
//     }
//     printf("%d",sum);
// }


// #include <stdio.h>
// int main(){
//     int tclass, atclass,p;
//     char ml;
//     printf("enter ml: ");
//     scanf("%ch",&ml);
//     printf("enter tclass: ");
//     scanf("%d",&tclass);
//     printf("enter atclass: ");
//     scanf("%d",&atclass);
//     p=(atclass/tclass)*100;
//     if (p>75){
//         printf("attend");
//     }
//     else{
//         if(ml=='Y'){
//             printf("attend");
//         }
//         else if(ml=='N'){
//             printf("not attend");
//         }
//     }
// }



// //12
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int l,digit,f,q,p,n=5621;
//     p=n;
//     q=p%10;//to find last number(num modulas 10)
//     while(p>=10){
//         p=p/10;// to find first number(number is divided by 10 for looping; untill the loop terminate;)  
//     }
//     // printf("first digit: %d\n",p);
//     // printf("last digit: %d\n",q);
//     // printf("sum of two digits: %d\n",p+q);
//     digit=(int)log10(n);
//     f=q;
//     f *= (int) pow(10, digit);
//     f +=  n% ((int) pow(10, digit));
//     f -= q;
//     f += p;
//     printf("%d",f);
//     return 0;
// }

//14
// #include <stdio.h>
// int main(){
//     int p,q,i=6160;
//     while (i!=0){
//         p=i%10;
//         p/=10;
//     }
//     i++;
    
// }



// #include <stdio.h>
// #include <math.h> 
// int main(){
//     int l,f,i=512;
//     l=i%10;
//     f=i/(pow(10,i));
//     printf("%d",f);

// }



// #include <stdio.h>
// int main(){
//     int num,i,temp=0;
//     printf("enter num:");
//     scanf("%d",&num);
//     for (i=2;i<=num/2;i++){
//         if(num%i==0){
//             temp++;
//             printf("%d\n",i);
//             break;
//         } 
//     }
//     if (temp==0 && num!=1){
//         printf("prime num");
//     }
//     else{
//         printf("not prime");
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,n,mul=1;
//     printf("enter n: ");
//     scanf("%d",&n);
//     for (i=1;i<=n;i++){
//         mul=mul*i;
//     }
//     printf("factorial is : %d",mul);
// }



// #include <stdio.h>
// int main()
// {
//      int n;
//      printf("enter the no");
//      scanf("%d",&n);
//      for(int d=2;d<=n;d++){
//         if(n%d==0){
//             printf("not prime");
//             break;
//         }
//         else if(n==2){
//             printf("prime");
//             break;
//         }
//         else{
//             printf("prime");
//             break;
//     }
// }
// }


// #include <stdio.h>
// #include <math.h>
// int main(){
//     int d,b,a,c,p,q,r,s,t;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     printf("enter c: ");
//     scanf("%d",&c);
//     d=((b*b)-(4*a*c));
//     if (d>0){
//         p=(-b+(sqrt(d)))/2*a;
//         q=(-b-(sqrt(d)))/2*a;
//         printf("%d\n",p);
//         printf("%d\n",q);
//     }
//     else if(d==0){
//         r=-b/(2*a);
//         printf("%d\n",r);
//     }
//     else{
//         s=-b/(2*a);
//         t=sqrt(-d)/(2*a);
//         printf("%d\n",t);
//     }
// }


// #include<stdio.h>
// int main(){
//     int i,j,sum=0;
//     for (i=2;i<=50;i++){
//         for (j=2;j<i;j++){
//             if (i%j==0)
//             {
//                 break;
//             }
            
//         }
//         if(i==j){
//             sum=sum+i;
//         }
    
//     }
// printf("%d",sum);
    
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     for (i=6;i>=1;i--){
//         for (j=i;j>1;j--){
//             printf("*");
//         }
//         printf(" \n");
//     }
//     for (i=0;i<=5;i++){
//         for (j=0;j<i;j++){
//             printf("*");
//         }
//         printf(" \n");
//     }
// }



// #include <stdio.h>
// #include <math.h>
// int main(){
//     int num,i,j,sum=0,count;
//     printf("enter num: ");
//     scanf("%d",&num);
//     for(num!=0){
//         num/=10;
//         count++;
//     }
//     for (i=num;num!=0;num/=10){
//         j=num%10;
//         sum=sum+(j*j*j);
//     }
//     printf("%d",sum);
// }



// #include <stdio.h>
// int main() 
// {
//     int a, b,n;
//     scanf("%d", &b);
//   	// Complete the code.
//     for(n=a;n<b;n++){
//         if(n==1){
//             printf("one\n");
//         }
//         else if(n==2){
//             printf("two\n");
//         }
//         else if(n==3){
//             printf("three\n");
//         }
//         else if(n==4){
//             printf("four\n");
//         }
//         else if(n==5){
//             printf("five\n");
//         }
//         else if(n==6){
//             printf("six\n");
//         }
//         else if(n==7){
//             printf("seven\n");
//         }
//         else if(n==8){
//             printf("eight\n");
//         }
//         else if(n==9){
//             printf("nine\n");
//         }
//         else if(n%2==0){
//             printf("even\n");
//         }
//         else{
//             printf("odd\n");
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i=1;
//     do{
//         printf("%d ",i);
//         i++;
//     }
//     while (i<=10);
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     int arr[3][3],brr[3][3];
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter ele of 1st array: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter ele of 2nd array: ");
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     printf("\n");
//     printf("first arr is: \n");
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
        
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
    // printf("\n");
    // printf("second arr is: \n");
    // for (i=0;i<3;i++){
    //     for(j=0;j<3;j++){
        
    //         printf("%d ",brr[i][j]);
    //     }
    //     printf("\n");
    // }


    // printf("addition is: \n");
    // int p[i][j];
    // for (i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //       p[i][j]=arr[i][j]+brr[i][j];
    //       printf("%d ",p[i][j]);
    //     }
    //     printf("\n");
    // }


    // printf("subtraction is: \n");
    // int p[i][j];
    // for (i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //       p[i][j]=arr[i][j]-brr[i][j];
    //       printf("%d ",p[i][j]);
    //     }
    //     printf("\n");
    // }
// }



// Multiplication of Two  matrix--------------------
// #include <stdio.h>
// int main(){
//     int i,j,k;
//     int arr[3][3]={{1,2,3},{3,4,2},{1,3,1}};
//     int brr[3][3]={{2,4,6},{6,4,2},{1,2,3}};
//     int m[3][3]={{0,0,0},{0,0,0},{0,0,0}};
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             for(k=0;k<3;k++){
//                 m[i][j]+=arr[i][k]*brr[k][j];
//             }
//         }
//     }
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d ",m[i][j]);
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,j,k,arr[3][3],brr[3][3];
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele of 1st: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
    // for(i=0;i<3;i++){
    //     for (j=0;j<3;j++){
    //         printf("enter ele of 2nd: ");
    //         scanf("%d",&brr[i][j]);
    //     }
    // }
    // printf("\t");
    // printf("1st matrix: \n");
    // for(i=0;i<3;i++){
    //     for (j=0;j<3;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\t");
    // printf("2nd matrix: \n");
    // for(i=0;i<3;i++){
    //     for (j=0;j<3;j++){
    //         printf("%d ",brr[i][j]);
    //     }
    //     printf("\n");
    // }
    // int mul[3][3];
    // for(i=0;i<3;i++){
    //     for (j=0;j<3;j++){
    //         mul[i][j]=0;
    //         for(k=0;k<3;k++){
    //         mul[i][j]+=arr[i][k]*brr[k][j];
    //     }
    //     }
    //     printf("\n");
    // }
    // for(i=0;i<3;i++){
    //     for (j=0;j<3;j++){
    //         printf("%d ",mul[i][j]);
    //     }
    //     printf("\n");
    // }



//     int sum=1;
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){ 
//             if (i==j){
//                 sum*=arr[i][j];
//                 }  
//         }
//         printf("\n");
//     }
//     printf("%d",sum);
// }


// #include <stdio.h>
// int main(){
//     int i,j,k,arr[3][3],brr[3][3];
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele of 1st: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
    
//     printf("\t");
//     printf("1st matrix: \n");
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             brr[i][j]=arr[j][i];
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d ",brr[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int arr[2][2]={{1,3},{2,4}};
//     int i,j,det,p[2][2];
//     det=(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
//     printf("%d",det);
//     for (i=0;i<2;i++){
//         for (j=0;j<2;j++){
//             p[i][j]=arr[j][i];
//         }
//     }
//     p[i][j]=p[i][j];
//     for (i=0;i<2;i++){
//         for (j=0;j<2;j++){
//             printf("%d ",p[i][j]);
//         }
//         printf("\n");
//     } 
// }



// doubt========================================
// #include<stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j,k,l;
//         for (j=0;j<3;j++){
//             for (k=0;k<3;k++){
//                 printf("enter ele: ");
//                 scanf("%d",&arr[j][k]);
//             }
//         }
//     printf("math phy eng total per");
//     printf("\n");
//     for (j=0;j<3;j++){
//         for (k=0;k<3;k++){
//             printf("%d    ",arr[j][k]);
//         }
//         printf("\n");
//         }
//     printf("\n");
//     int p1=(arr[0][0]+arr[0][1]+arr[0][2])/3;
//     int p2=(arr[1][0]+arr[1][1]+arr[1][2])/3;
//     int p3=(arr[2][0]+arr[2][1]+arr[2][2])/3;
//     printf("%d   %d   %d   %d   %d \n",arr[0][0],arr[0][1],arr[0][2],(arr[0][0]+arr[0][1]+arr[0][2]),p1);
//     printf("%d   %d   %d   %d   %d \n",arr[1][0],arr[1][1],arr[1][2],(arr[1][0]+arr[1][1]+arr[1][2]),p2);
//     printf("%d   %d   %d   %d   %d \n",arr[2][0],arr[2][1],arr[2][2],(arr[2][0]+arr[2][1]+arr[2][2]),p3);
// }



// #include <stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j;
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             // printf("enter ele: ");
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int count=0;
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             if (arr[i][j]==0);
//             count++;
//         }
//     }
//     int flag=1;
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             if (count>5)
//             flag=1;
//             else if(count<5)
//             flag=0;
//         }
//     } for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             if (flag==1)
//                 printf("sp");
//             else if(flag==0)
//             printf("no");
//         }
//     }
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
//     int det;
//     det=(arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1])))-(arr[0][1]*((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0])))+(arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0])));
//     printf("det is: %d",det);
//     printf("\n");
    
//     int co[3][3];
//     co[0][0] = arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1];
//     co[0][1] = -(arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]);
//     co[0][2] = arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0];
//     co[1][0] = -(arr[0][1] * arr[2][2] - arr[0][2] * arr[2][1]);
//     co[1][1] = arr[0][0] * arr[2][2] - arr[0][2] * arr[2][0];
//     co[1][2] = -(arr[0][0] * arr[2][1] - arr[0][1] * arr[2][0]);
//     co[2][0] = arr[0][1] * arr[1][2] - arr[0][2] * arr[1][1];
//     co[2][1] = -(arr[0][0] * arr[1][2] - arr[0][2] * arr[1][0]);
//     co[2][2] = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d ",co[i][j]);
//         }
//         printf("\n");
//     }
//     printf("co-factor of the matrix is: \n");
//     int a[3][3];
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//            a[i][j]=co[j][i];
//         }
//     }
//     printf("adj matrix is: \n");
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d ",(a[i][j]));
//         }
//         printf("\n");
//     }
    // a[i][j]=(a[i][j])*(1/2);
    // for (i=0;i<3;i++){
    //     for (j=0;j<3;j++){
    //         printf("%d ",(a[i][j]));
    //     }
    //     printf("\n");
    // }
    
// }



// Online C compiler to run C program online
// #include <stdio.h>
// #include <math.h>

// int  check(int n){
//     int b = sqrt(n);

//     return b;
// }

// int main() {
//     int n1,n2;
    
//     printf("Enter limit 1:");
//     scanf("%d",&n1);
    
//     printf("Enter limit 2:");
//     scanf("%d",&n2);

//     for(int i=n1; i<= n2; i++){
//         int c = check(i);
//         int mul = c * c;
        
//         if(mul == i){
//             printf("%d \n", i);
//         }
//     }
    
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int i;
//     int arr[5];
//     for (i=0;i<5;i++){
//         printf("enter i: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
    
//     for(i=0;i<5;i++){
//         if (arr[0]<arr[i])
//         arr[0]=arr[i];
//     }
//     printf("largest is: %d",arr[0]);
// }



// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i;
//     for(i=0;i<5;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     int max1,max2;
//     for(i=0;i<5;i++){
//         if (max1<arr[i]){
//             max2=max1;
//             max1=arr[i];
//         }
    
//     else if(arr[i]>max2 && arr[i]<max1){
//         max2=arr[i];
//     }
//     }
//     printf("lar is: %d",max1);
//     printf("2nd lar is : %d",max2);
// }



// #include <stdio.h>
// int main(){
//     int arr[]={4,9,2,10,6};
//     int i;
//     for (i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     int max1=arr[0];
//     int max2=arr[1];
//     if(max1<max2){
//         int temp=max1;
//         max1=max2;
//         max2=temp;
//     }
//     for (i=2;i<5;i++){
//         if(arr[i]>max1){
//             max2=max1;
//             max1=arr[i];
//         }
//         else if(arr[i]>max2){
//             max2=arr[i];
//         }
//     }
//     printf("%d\n",max1);
//     printf("%d\n",max2);
// }



// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i;
//     for(i=0;i<5;i++){
//         printf("enter i: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     for(i=4;i>-1;i--){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
//     int j;
//     int length=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<length;i++){
//         for(j=i+1;j<length;j++){
//             if(arr[j]==arr[i]){
//                 printf("d is: %d",arr[j]);
//             }
//         }
//     }
// }




// #include <stdio.h>
// int main(){
    // int i,j,n;
    // int arr[10];
    // for (i=0;i<10;i++){
    //     printf("enter ele: ");
    //     scanf("%d",&arr[i]);
    // }
    // for (i=0;i<10;i++){
    //     printf("%d",arr[i]);
    // }
    // n=10/2;
    // int find;
    // printf("enter find: ");
    // scanf("%d",&find);
    // for (i=0;i<10;i++){
    //     if (arr[i]==find){
    //         printf("element find");
    //         break;
    //     }
    // }
    // if(i==5){
    //     printf("not found");
    // }


//     int arr[]={10,20,30,40,50,60};
//     int i,j,k;
//     int lb=0,ub=5;
//     int n=lb+ub;
//     int mid=n/2;
//     int find;
//     printf("enter find: ");
//     scanf("%d",&find);
//     for(i=0;i<n;i++){
//         if(arr[mid]==find){
//             printf("element found: %d",arr[mid]);
//             break;
//         }
//         else if(arr[mid]<find){
//             lb=mid+1;
//             printf("ele found at lb: %d",arr[i]);
//             break;
//         }
//         else if(arr[mid]>find){
//             ub=mid-1;
//             printf("ele found at hb :",i);
//             break;
//         }
//     }
//     int lb1=3;
//     int hb1=5;
//     int n1=lb1+hb1;
//     int m1=n1/2;
//     int f1;
//     printf("enter find: ");
//     scanf("%d",&f1);
//     for (i=3;i<n1;i++){
//         if (arr[m1]==f1){
//             printf("ele found: %d",f1);
//             break;
//         }
//         else if (arr[m1]!=f1){
//             printf("ele not found: %d",f1);
//             break;
//         }
//     }
// }



// #include <stdio.h>
// int main(){
    // int arr[5];
//     int i;
//     for (i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d  ",arr[i]);
//     }
//     printf("\n");
//     int find;
//     printf("enter find: ");
//     scanf("%d",&find);
//     for(i=0;i<5;i++){
//         if(arr[i]==find){
//             printf("element found: %d",find);
//             break;
//         }
//     }  
// }



// #include <stdio.h>
// int main(){
//     int arr[]={20,10,2,2,8,25,15};
//     int i,j,t;
//     int n=7;
//     for(i=0;i<n-1;i++){
//         for (j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 t=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=t;
//             }
//         }
//     }
    // for (i=0;i<n;i++){
    //         printf("%d ",arr[i]);
    // }
//     for (i=0;i<n;i++){
//         arr[i]=arr[i+1];
//         printf("%d ",arr[i]);
//     }
// }




// #include<stdio.h>
// int main(){
//     int arr[]={10,20,30,10,50};
//     int i;
//     for (i=0;i<5;i++){
//         arr[2]=arr[i+1];
//     }
//     for (i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }


// #include <stdio.h>
// int main(){
//     int arr[]={10,20,30,10,50};
//     int i;
//     int uni=0;
//     for (i=1;i<5;i++){
//         if (arr[i]!=arr[uni]){
//             uni++;
//             arr[uni]=arr[i];
//         }
//     }
//     for(i=0;i<=uni;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
    // char ch='A';
    // printf("%c",ch);
    // char ch[]={'N','A','M','A','S','T','E','Y','\0'};
    // char st[]={'N','A','M','A','S','T','E','Y','\0'};
    // char st[]="Namastey";
    // printf("%s\n",ch);
    // printf("%s\n",st);
    // for (int i=0;i<8;i++){
    //     printf("%c\n",st[i]);
    // }
    // printf("%s",st);
// }



// #include <stdio.h>
// int main(){
//     char ch[]={'H','E','L','L','O','\0'};
//     int i=0;
//     while(ch[i]!=NULL){
//         printf("%c",ch[i]);
//         i++;
//     }
// }



// #include <stdio.h>
// int main(){
//     int i=0;
//     char p[]={'H','E','L','L','O','\0'};
//     while(p[i]!='\0'){
//         printf("%c",p[i]);
//         i++;
//     }
// }



// #include <stdio.h>
// int main(){
//     char name[5][10]={"Satyam","Shivam","Krishna","Ram","Partha"};
//     int i;
//     // for (i=0;i<5;i++){
//     //     printf("%s ",name[i]);
//     // }
//     for (i=2;name[i]!='\0';i++)
//     {
//         printf("%s ",name[i]);

//     }
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     char str[10][10]={"raja","hari","radha","raj","papu","ram","raj","piku","ramen","hero"};
//     for(i=0;i<9;i++){
//         int duplicate=1;
//         for(j=i+1;j<10;j++){
//             if((strcmp(str[j],str[i]))==0){
//                 printf("%s",str[i]);
//                 break;
//             }
//         }
//     }
// }

//wap to print a given string without using in-built function------------------------
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str1[10]={"krishna"};
//     int length=0;
//     for(int i=0;str1[i]!='\0';i++){
//         length++;
//     } 
//     printf("length is: %d\n",length);
//     for(int i=length-1;i>=0;i--){
//         printf("%c",str1[i]);
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,fact=1;
//     int n;
//     printf("enter num: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("factorial is: %d",fact);
// }


// #include <stdio.h>
// int main(){
//     int arr[5];

//     int i;
//     for (i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     for (i=4;i>=0;i--){
//         printf("%d ",arr[i]);
//     }
// }


// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i,j;
//     for(i=0;i<10;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     int ele;
//     printf("enter find ele: ");
//     scanf("%d",&ele);
//     int flag=0;
//     for(i=0;i<10;i++){
//         if(arr[i]==ele)
//         flag=1;
//     }
//     if(flag==1){
//         printf("ele found: %d",arr[i]);
//     }
//     else{
//         printf("not found: %d",arr[i]);
//     }
// }



// #include<stdio.h>
// int main(){
//     char ch[10];
//     printf("enter string: ");
//     scanf("%s",ch);
//     int i;
//     int count=0;
//     for(i=0;ch[i]!='\0';i++){
//         if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
//             count++;
//         }
//     }
//     if(count%2==0){
//         printf("yes");
//     } 
//     else{
//         printf("no");
//     }
// }




// #include <stdio.h>
// int main(){
//     char str[10]="namastey";
//     char str1[10]="Dunia";
//     printf("%s ",strcat(str, str1));
// }




// #include <stdio.h>

// struct st {
//     int mark;
// };

// struct CE {
//     float file;
//     float viva;
//     float prog;
// };

// struct student {
//     struct st s1;
//     struct CE s2;
// };

// int main() {
//     struct student v[2] = {
//         {{30}, {5, 20, 10}},
//         {{25}, {4.5, 17.55, 9}}
//     };

//     int i;
//     for (i = 0; i < 2; i++) {
//         printf("final result is: %d %f %f %f\n", v[i].s1.mark, v[i].s2.file, v[i].s2.viva, v[i].s2.prog);
//     }

//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//            if (j==1){
//             printf("%d ",arr[i][j]);
//            }
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main(){
//     int lb,hb;
//     printf("enter lb: ");
//     scanf("%d",&lb);
//     printf("enter hb: ");
//     scanf("%d",&hb);
//     int i,j;
//     for(i=lb;i<hb;i++){
//         int is_prime=1;
//         for(j=2;j<i/2;j++){
//             if(i%j==0){
//                 is_prime=0;
//                 break;
//             }
//         }
//         if(is_prime&&i>1){
//             printf("%d ",i);
//         }
//     }
// }



// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter num:");
//     scanf("%d",&n);
//     int rem,sum=0;
//     while(n>0){
//         rem=n%10;
//         // printf("%d",rem);
//         sum=sum+rem;
//         n/=10;
//     }
//     printf("%d",sum);
// }



// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i,pos;
    // for(i=0;i<8;i++){
    //     printf("enter ele: ");
    //     scanf("%d",&arr[i]);
    // }
    // for(i=0;i<8;i++){
    //     printf("%d ",arr[i]);
    // }
//     pos=5;
//     for(i=8;i>pos;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos]=20;
//     for(i=0;i<9;i++){
//         printf("%d ",arr[i]);
//     }
// }


// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     int pos=3;
//     for(i=pos;i<5;i++){
//         arr[i]=arr[i+1];
//     }
//     for(i=0;i<4;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=0;j<i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }



#include <stdio.h>

int main() {
    int arr[] = {1, 1, 3, 4, 5, 2, 3, 2, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    int counted[10] = {0}; // To keep track of counted elements
    int i, j;

    // Count and print the frequency of each element
    for (i = 0; i < len; i++) {
        if (counted[i] == 1) {
            continue; // Skip elements that have already been counted
        }

        int count = 1; // Initialize count for the current element
        for (j = i + 1; j < len; j++) {
            if (arr[j] == arr[i]) {
                count++;
                counted[j] = 1; // Mark the element as counted
            }
        }

        // Print the element and its frequency
        printf("%d-%d ", arr[i], count);
    }

    return 0;
}
