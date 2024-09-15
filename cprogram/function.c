//function with no argument and no return value
// #include <stdio.h>
// void sum()
// {
//     int x, y;
//     printf("Enter x and y\n");
//     scanf("%d %d", &x, &y);
//     printf("Sum of %d and %d is: %d", x, y, x + y);
// }
// int main()
// {
//     sum();
//     return 0;
// }



//function with no argument with return value(do not allow other keyword like(void with int))
// #include <stdio.h>
// int sum(){
//     int x,y;
//     scanf("%d",&x);
//     scanf("%d",&y);
//     int s=x+y;
//     return s;
// }
// int main(){
//     printf("total is: %d",sum());
//     return 0;
// }


//function with argument with no return value
// #include <stdio.h>
// void sum(int x,int y){
//     printf("%d",x+y);
// }
// int main(){
//     int x,y;
//     printf("enter x: ");
//     scanf("%d",&x);
//     printf("enter y: ");
//     scanf("%d",&y);
//     sum(x,y);
// }


//function with argument with no return value
// #include <stdio.h>
// int sum(int x,int y){
//     return x+y;
// }
// int main(){
//     int x=10,y=10;
//     printf("%d",sum(x,y));
// }


// #include <stdio.h>
// int fact(int n);
// int main(){
//     int n;
//     printf("enter num: ");
//     scanf("%d",&n);
//     int factorial;
//     fact(n);
// }
// int fact(int n){
//    int ans=fact(n);
// }



// #include <stdio.h>
// int roll(){
//     int roll;
//     printf("enter roll : ");
//     scanf("%d",&roll);
//     printf("roll no is: %d",roll);
//     // char name[15];
//     // printf("enter name: ");
//     // gets(name);
//     // puts(name);
// }
// int main(){
//     roll();
// }


// #include <stdio.h>
// void brazil();
// void italy();
// void india();
// int main(){
//    void brazil();
//     india();
//     italy();
    
// }
// void brazil(){
//     printf("I am in Brazil\n");
// }
// void india(){
//     printf("I am in India\n");
// }
// void italy(){
//     printf("I am in Italy\n");
// }



// #include<stdio.h>
// int sum();
// // void sub();
// // void mul();
// // void div();
// int main(){
//     int a,b;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     int add=sum(a,b);
//     printf("%d",add);
//     // sub(a,b);
//     // mul(a,b);
//     // div(a,b);
// }
// int sum(int m,int n){
//     // printf("sum is: %d\n",m+n);
//     int summm;
//     summm=m+n;
//     return summm;
// }
// void sub(int c,int d){
//     printf("sub is: %d\n",c-d);
// }
// void mul(int p,int q){
//     printf("mul is: %d\n",p*q);
// }
// void div(int x,int y){
//     printf("div is: %d\n",x/y);
// }



// #include <stdio.h>
// int big();
// int main(){
//     int a,b;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     big(a,b);
// }
// int big(int m,int n){
//     if(m>n){
//         return m;
//     }
//     else {
//         return n;
//     }
// }




// #include <stdio.h>
// int fact(int n);
// int main(){
//     int a,n;
//     printf("enter num: ");
//     scanf("%d",&a);
//     n=a;
//     printf("%d",fact(n));
// }
// int fact(int n){
//     int i,r=1;
//     for(i=1;i<=n;i++){
//         r*=i;
//     }
//     return r;
// }




// #include <stdio.h>
// int fact(int n);
// int main(){
//     int a,n;
//     printf("enter value: ");
//     scanf("%d",&a);
//     n=a;
//     fact(n);
//     printf("%d",fact(n));
// }
// int fact(int n){
//     int r=1,i;
//     for(i=1;i<=n;i++){
//         r=r*i;
//     }
//     return r;
// }



// #include <stdio.h>
// #include <math.h>
// int power(int n);
// int main(){
//     int a,n;
//     n=a;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("%d",power(n));
// }
// int power(int n){
//     if(n==0){
//         return 0;
//     }
//     return (power(n)*power(n));
// }



// #include <stdio.h>
// int main(){
//     int rem,num=152;
//     int sum=0;
//     while(num!=0){
//         rem=num%10;
//         sum=sum+rem;
//         num/=10;
//     }
//     printf("%d",sum);
// }




// #include <stdio.h>

// float raised(int a, int b) {
//     if (b == 0) 
//         return 1;
//     else if (b > 0)
//         return a * raised(a, b - 1); 
//     else
//         return 1 / (a * raised(a, -b - 1)); 
// }
// int main() {
//     double base;
//     int exponent;
//     printf("Enter the base number: ");
//     scanf("%lf", &base);
//     printf("Enter the exponent: ");
//     scanf("%d", &exponent);
//     double result = raised(base, exponent);
//     printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);
//     return 0;
// }




// #include <stdio.h>
// int roman(int n);
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     roman(n);
// }
// int roman(int n){

//     if (n>=1000){
//         printf("M");
//         return roman(n-1000);
//     }
//     if (n>=500){
//         printf("D");
//         return roman(n-500);
//     }
//     if (n>=100){
//         printf("C");
//         return roman(n-100);
//     }
//     if (n>=50){
//         printf("L");
//         return roman(n-50);
//     }
//     if (n>=10){
//         printf("X");
//         return roman(n-10);
//     }
//     if (n>=5){
//         printf("V");
//         return roman(n-5);
//     }
//     if (n>=1){
//         printf("I");
//         return roman(n-1);
//     }
// }



// #include <stdio.h>
// int roman()
// int main(){
//     int num;
//     printf("enter num: ");
//     scanf("%d",&num);
//     if(n>=1000){
//         printf("M");
//         return (n-1000)
//     }
// }



// #include <stdio.h>
// int var(int *a,int *b,int *c);
// int main(){
//     int p,q,r;
//     printf("enter p: ");
//     scanf("%d",&p);
//     printf("enter q: ");
//     scanf("%d",&q);
//     printf("enter r: ");
//     scanf("%d",&r);
//     var(&p,&q,&r);
//     printf("p is: %d\n",p);
//     printf("q is: %d\n",q);
//     printf("r is: %d\n",r);
// }
// int var(int *a,int *b,int *c){
//     int temp=*c;
//     *c=*b;
//     *b=*a;
//     *a=temp;
// }



// #include <stdio.h>
// int swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int x,y;
//     printf("enter x: ");
//     scanf("%d",&x);
//     printf("enter y: ");
//     scanf("%d",&y);
//     swap(&x,&y);
//     printf("%d",x);
//     printf("%d",y);
// }



// #include <stdio.h>
// int exam(int *avg){
//     int a,b,c;
    // printf("enter mark 1: ");
    // scanf("%d",&a);
    // printf("enter mark 2: ");
    // scanf("%d",&b);
    // printf("enter mark 3: ");
    // scanf("%d",&c);
//     *avg=(a+b+c)/3;
// }
// int main(){
//     int avg=0;
//     exam(&avg);
//     printf("avg is: %d",avg);
// }



#include <stdio.h>
int sumof(float *sum,float **avg){
    int a,b,c,d,e;
    printf("enter mark 1: ");
    scanf("%d",&a);
    printf("enter mark 2: ");
    scanf("%d",&b);
    printf("enter mark 3: ");
    scanf("%d",&c);
    printf("enter mark 4: ");
    scanf("%d",&d);
    printf("enter mark 5: ");
    scanf("%d",&e);
    float add=a+b+c+d+e;
    *sum=add;
    // avg=(&sum)/5;
}
int main(){
    float avg=0;
    float sum=0;
    avg=sumof(&sum,&avg);
    printf("%f",avg);
}