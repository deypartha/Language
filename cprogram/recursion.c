// #include <stdio.h>
// int main(){
// int n=5;
// int f=fact(n);
// printf("factorial is: %d",f);
// return 0;
// }
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }


// sum of n numbers ----------------
// #include <stdio.h>
// int main(){
// int n=10;
// int f=fact(n);
// printf("sum is: %d",f);
// return 0;
// }
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+fact(n-1);
// }


// #include <stdio.h>
// int main(){
//     int n=10; 
//     int p=sum(n);
//     printf("%d",p);
// }
// int sum(int n){
//     if(n<=0){
//         return 0;
//     }
//     if(n%2==0){
//         return n+sum(n-2);
//     }
// }


// w.a.p to print the sum of first n even nos----------------
// #include <stdio.h>
// int main(){
//     int n=10;
//     int p=sum(n);
//     printf("%d ",p);
// }
// int sum(int n){
//     if(n<=0){
//         return 0;
//     }
//     if(n%2==0){
//         return n+sum(n-2);
//     }
// }


// wap to sum of odd nos ------------
// #include <stdio.h>
// int main(){
//     int n=20;
//     printf("%d",sum(n));
// }
// int sum(int n){
//     if(n<=0){
//         return 0;
//     }
//     if(n%2==0){
//         return n+sum(n-2);
//     }
//     return sum(n-1);
// }



// wap to print fibonacci series---------------------
// #include <stdio.h>
// int main(){
//    int n=10;
//    printf(" 0 1 ");
//    printf("%d ",fibo(n-2));
// //    return 0;
// }
// int fibo(int n){
//    static int a=0,b=1,p;
//    if(n<=0){
//     return 0;
//    }
//     if(n>0){
//         p=a+b;
//         a=b;
//         b=p;
//         printf("%d ",p);
//         fibo(n-1);
//     }
// }


// #include <stdio.h>
// int fibo(int n){
//     if((n==0)||(n==1)){
//         return n;
//     }
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int i,n=10;
//     for(i=0;i<10;i++){
//         printf("%d ",fibo(i));
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int n=10;
//     return table(n);
// }
// int table(int n){
//     n=10;
//     if(n==1){
//         return 5;
//     }
//     if(n>1){
//         return 5*(n-1);
//     }
// }



// #include <stdio.h>
// int main(){
//     int n=5;
//     int r=fact(n);
//     printf("%d",r);
// }
// int fact(int n){
//     // n=5;
//     if(n==1){
//         return 1; 
//     }
//     return n*fact(n-1);
// }



// #include <stdio.h>
// int main(){
//     int n=5;
//     int p=sum(n);
//     printf("%d",p);
// }
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*sum(n-1);
// }



// #include <stdio.h>
// int main(){
//     int n=10;
//     int p=sum(n);
//     printf("%d",p);
// }
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }


// #include <stdio.h>
// float changeTemp(float celcius);
// int main(){
//     int celcius;
//     printf("enter temp: ");
//     scanf("%d",&celcius);
//     printf("%f",changeTemp(celcius));
// }
// float changeTemp(float celcius){
//     float temp=((celcius*(9.0/5.0))+32);
//     return temp;
// }


// #include <stdio.h>
// float calper(int math,int sans,int sci);
// int main(){
//     int math,sans,sci;
//     float per;
//     printf("enter mark of math: ");
//     scanf("%d",&math);
//     printf("enter mark of sans: ");
//     scanf("%d",&sans);
//     printf("enter mark of sci: ");
//     scanf("%d",&sci);
//     float p=calper(math,sans,sci);
//     printf("%f",p);
// }
// float calper(int math,int sans,int sci){
//     float per;
//     per=math+sans+sci; 
//     float total=(per/300.0)*100.0;
//     return total;
// }



// #include <stdio.h>
// #include <math.h>
// int sq(int n,int i){
//     if(n==0){
//         return 1;
//     }
//     return n*sq(n,i-1);
// }
// int main(){
//     int i,n=2;
//     for(i=1;i<=10;i++){
//         printf("%d ",sq(n,i));
//     }
// }



// #include <stdio.h>
// int sq(int n, int i) {
//     if (i == 0) {
//         return 1; 
//     }
//     return n * sq(n, i - 1); 
// }
// int main() {
//     int i, n = 2;
//     for (i = 1; i <= 10; i++) {
//         printf("%d ", sq(n, i));
//     }
//     return 0;
// }


// #include <stdio.h>
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n=5;
//     int i=fact(n);
//     printf("%d",i);
// }


// #include <stdio.h>
// int sum(int n);
// int main(){
//     int n=10;
//     printf("%d",sum(n));
// }
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }


// #include <stdio.h>
// int fibo(int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     else{
//     return fibo(n-1)+fibo(n-2);
//     }
// }
// int main(){
//     int n=10;
//     int i;
//     for(i=0;i<10;i++){
//         printf("%d ",fibo(i));
//     }
// }



// #include <stdio.h>
// int sum(int n){
//     if (n==0){
//         return 0;
//     }
//     return n+sum(n-1);
// }
// int main(){
//     int n=10;
//     printf("%d",sum(n));
// }


// sum of odd numbers in a loop-----------------
// #include <stdio.h>
// int odd(int n){
//     if(n==1){
//         return 1;
//     }
//     else if(n%2==0){
//         return odd(n-1);
//     }
//     else{
//         return n+odd(n-2);
//     }
// }
// int main(){
//     int n=10;
//     printf("%d",odd(n));
// }



// #include <stdio.h>
// int fact(int n);
// int main(){
//     int n=5;
//     int p=fact(n);
//     printf("%d",p);
// }
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }


//sum of digits of a number----------------
// #include <stdio.h>
// int sum(int n);
// int main(){
//     int n=187;
//     int q=sum(n);
//     printf("%d",q);
// }
// int sum(int n){
//     int p=n%10;
//     if(n==1){
//         return 1;
//     }
//     return (p+sum(n/10));
// }



// #include <stdio.h>
// int main(){
//     char str[15];
//     printf("enter string: ");
//     gets(str);
//     char i=strlen(str);
//     while(i>='\0'){
//         printf("%c",str[i]);
//         i--;
//     }
// }



// #include <stdio.h>
// int num(int n);
// int main(){
//     int n=5;
//     num(n);
// }
// int num(int n){
//     if(n==0){
//         return;
//     }
//     printf("%d ",n);
//     num(n-1);
// }



// #include <stdio.h>
// int num(int n);
// int main(){
//     int n=1;
//     num(n);
// }
// int num(int n){
//     if(n>10){
//         return;
//     }
//     printf("%d ",n);
//     num(n+1);
// }



// #include <stdio.h>
// int odd(int n);
// int main(){
//     int i,n=10;
//     for(i=1;i<=n;i++){
//         if(odd(i)==0){
//             printf("%d ",i);
//         }
//     }
// }
// int odd(int n){
//     if(n%2==0){
//         return 1;
//     }
//     return 0;
// }



// #include <stdio.h>
// int sum(int n);
// int main(){
//     int n=153;
//     int a=sum(n);
//     printf("%d",a);
// }
// int sum(int n){
//     int p=n%10;
//     if(n<=0){
//         return 0;
//     }
//     return(p+sum(n/10));
// }


// #include <stdio.h>
// int main(){
//     int a=0;
//     int b=1;
//     printf("0 1 ");
//     int p;
//     int i;
//     for(i=0;i<10;i++){
//         p=a+b;
//         printf("%d ",p);
//         a=b;
//         b=p;
//     }
// }



// #include <stdio.h>
// int fibo(int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     else{
//         return fibo(n-1)+fibo(n-2);
//     }
// }
// int main(){
//     int i,n=10;
//     for(i=0;i<10;i++){
//         printf("%d ",fibo(i));
//     }
// }


#include <stdio.h>
int palindrome(int n);
int main(){
    int n=152;
    if ()
    {
        /* code */
    }
    
}
int palindrome(int n){
    if(n==1){
        return 1;
    }
    int p=n%10;
    return p+palindrome(n/10);
}


// #include <stdio.h>
// int main(){
//     int n=152;
//     int p;
//     while(n>0){
//         p=n%10;
//         printf("%d",p);
//         n=n/10;
//     }
// }



// #include <stdio.h>
// int main(){
//     char str[10];
//     printf("enter string: ");
//     scanf("%s",&str);
//     char str1[10];
//     printf("%s\n",strrev(str));
//     if((strrev(str))==str){
//         printf("palindromic string");
//     }
//     else{
//         printf("not palindromic");
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i,j;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     int pos;
//     printf("enter pos: ");
//     scanf("%d",&pos);
//     for(i=6;i>=pos;i--){
//        arr[i]=arr[i-1]; 
//     }
//     arr[pos-1]=10;
//     for(i=0;i<6;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include<stdio.h>
// int main(){
//     char str[25];
//     char word[2][10];
//     printf("enter str: ");
//     gets(word);
//     char i;
//     for(i=0;i<2;i++){
//         printf("%s",strrev(word[i]));
//     }
// }


// #include <stdio.h>
// int main(){
//     int num=152;
//     int r,i;
//     while(num>0){
//         r=num%2;
//         printf("%d",r);
//         num/=2;
//     }
//     printf("\n");
    
// }



// #include <stdio.h>
// int main(){
//     char str[10];
//     printf("enter string: ");
//     gets(str);
//     int p=strlen(str);
//     int i,j;
//     while(i<p && str[i]==' '){
//         if(i>=p)break;
//         j=i+1;
//         while(j<p&& str[i]!=' '){
//             j++;
//         }
//         i++;
//         printf("%s %s",i,(j-1));
//     }
// }


// #include <stdio.h>
// int main(){
// 	char str[100];
//     fgets(str, 100, stdin);
// 	char rev[100]="";
// 	int i =0 , k ;
// 	while(str[i] !='\0'){
// 		 rev[strlen(rev)] = str[i];
// 		if(str[i]==' '){
// 			 k = strlen(rev)-1;
// 			 while(k--){
// 				printf("%c", rev[k]);
// 			 }
// 			 rev[0] ='\0';
// 		}
// 		i++;
// 	}
// 	int l=strlen(str)-1;
// 	while(str[l]!=' '){
// 		printf("%c", str[l]);
// 		l--;
// 	}
// }



// #include <stdio.h>
// int main(){
//     char str;
//     str=90;
//     printf("%c",str);
// }


// #include<stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     for(i=0;i<5;i++){
//         printf("enter : ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     j=2;
//     for(i=4;i>j-1;i--){
//         arr[i-1]=arr[i];
//     }
//     for(i=0;i<4;i++){
//         printf("%d ",arr[i]);
//     }
// }



