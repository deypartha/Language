// pattern of
// 1
// 22
// 333
// 4444
// 55555-----------------------
// #include <stdio.h>             
// int main(){
//     int i,j,b;
//     for (i=1;i<=6;i++){
//         for (j=1;j<=i;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
// }



// pattern of SQUARE----------
// #include <stdio.h>
// int main(){
//     int i,j;
//     for (i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//                 int v=i*j;
//             printf("%d ",v);
//         }
//         printf("\n");
//   }
// }



// #include <stdio.h>
// int main(){
//     int i,j;
//     i=1;
//     while(i<=5){
//         j=1;
//         while(j<=i){
//             printf("*");
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     for (i=5;i>=1;i--){
        
//         for(j=i;j>=1;j--){
//             printf("*  ");
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
//         for (j=1;j<=i;j++){
//             printf("i");
//         }
//         printf("\n");
//     }
// }
 

// #include <stdio.h>
// int main() {
//     int r= 6;
//     int c= 6;
//     for (int i = 1; i <= r; i++) {
//         for (int j = 1; j <= c; j++) {
//             int value = i * j;
//             printf("  %d", value);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>             
// int main(){
//     int i,j,b;
//     for (i=5;i>=1;i--){
//         for(b=5-1;b>=1;b--){
//             printf(" ");
//         }
//         for (j=i;j>=1;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int i,b,j;
//     for(i=5;i>=1;i--){
//         for(b=4;b>=1;b--){
//             printf(" ");
//         }
//         for(j=i;j>=1;j--){
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
//         for (j=1;j<=i*2-1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,j,b;
//     for(i=1;i<=5;i++){
//         for(b=1;b<=5-i;b++){
//             printf(" ");
//         }
//         for(j=1;j<=i*2-1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>

// int main() {
//     int N;
//     int notes[6] = {100, 50, 10, 5, 2, 1}; // Array to store denominations
//     int count[6] = {0}; // Array to store count of each denomination

//     // Input the value of N from the user
//     printf("Enter the amount in Rs.: ");
//     scanf("%d", &N);

//     // Iterate through each denomination
//     for (int i = 0; i < 6; i++) {
//         // Calculate the number of notes of current denomination
//         count[i] = N / notes[i];
//         // Update N to the remainder after taking current denomination's notes
//         N %= notes[i];
//     }

//     // Output the smallest number of notes
//     printf("Smallest number of notes:\n");
//     for (int i = 0; i < 6; i++) {
//         if (count[i] > 0) {
//             printf("%d note of Rs. %d\n", count[i], notes[i]);
//         }
//     }

//     return 0;
// }




// #include <stdio.h>
// int main(){
//     int notes[]={100,50,10,5,2,1};
//     int count[6]={0};
//     int i,N;
//     printf("enter amount: ");
//     scanf("%d",&N);
//     for(i=0;i<6;i++){
//         count[i]=(N/notes[i]);
//         N%=notes[i];
//     }
//     for(i=0;i<6;i++){
//         if(count[i]>0){
//             printf("%d %d\n",count[i],notes[i]);
//         }
//     }
// }


//  # include <stdio.h>
// int main( )
// {
// float a = 12.25, b = 12.52 ;
// if ( a =b )
// printf ( "a and b are equal\n" ) ;
// return 0 ;
// }



// #include <stdio.h>
// int main(){
//     int i,j,k=1;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",k++);
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// struct student{
//     char name[20];
//     int marks;
//     int roll;
// };
// int main(){
//     int i;
//     struct student s1[5];
//     for(i=0;i<5;i++){
//         printf("enter name: ");
//         gets(s1[i].name);
//         printf("enter maks: ");
//         scanf("%d",&s1[i].marks);
//         printf("enter roll: ");
//         scanf("%d",&s1[i].roll);
//     }
//     for(i=0;i<5;i++){
//         printf("%s %d %d\n",s1[i].name,s1[i].marks,s1[i].roll);
//     }
// }



// #include <stdio.h>
// int main(){
//     char str[200];
//     fgets(str,200,stdin);
//     int i,len;
//     len=strlen(str);
//     for(i=len-1;i>=0;i--){
//         if(str[i]==' '){
//             str[i]=str[i-1];
//         }
//         printf("%s ",str[i]);
//     }
// }


// #include <stdio.h>
// int main(){
//     char str1[200];
//     fgets(str1,200,stdin);
//     int len=strlen(str1);
//     int i,count=0;
//     for ( i = 0; i < len; i++)
//     {
//         if(str1[i]>=0 && str1[i]<=127){
//             if(str1[i]>=65 && str1[i]<=90){
//                 continue;
//             }
//             else if(str1[i]>=97 && str1[i]<=122){
//                 continue;
//             }
//             else if(str1[i]>=48 && str1[i]<=57){
//                 continue;
//             }
//             printf("%c\n",str1[i]);

//         }
//     }
//     printf("%d",count);
    
// }



// #include <stdio.h>
// int main(){
//     int i,j,k,n=5,c;
//     for(i=0;i<n;i++){
//         for(k=1;k<n-i;k++){
//             printf(" ");
//         }
//         for(j=0;j<=i;j++){
//             if(i==0 || j==0){
//                 c=1;
//             }
//             else{
//                 c=c*(i-j+1)/j;
//             }
//             printf("%d ",c);
//         }
//         printf("\n");
//     }
// }