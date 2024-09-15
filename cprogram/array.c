//Remove an array element-------------------------------
// #include<stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     int flag=0,val=2;
//     for(i=0;i<5;i++){
//         if(arr[i]==val){
//             flag=1;
//             break;
//         }
//     }
//     printf("\n");
//     if(flag==1){
//         for(;i<4;i++){
//             arr[i]=arr[i+1];
//         }
//     }
//     printf("after delete: \n");
//     for(i=0;i<4;i++){
//         printf("%d ",arr[i]);
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
//     printf("Origial array: \n");
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     arr[2]=50;
//     printf("array with updation: \n");
//     for(i=0;i<5;i++){
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
//     printf("array is: \n");
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     int find,flag=0;
//     printf("enter find:");
//     scanf("%d",&find);
//     for(i=0;i<5;i++){
//         if(arr[i]==find)
//             flag=1;
//     }
//     if(flag==1)
//     printf("ele is exist: %d\n",find);
//     else
//     printf("not exist: %d\n",find);
// }


// #include <stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter num: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int flag=1;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i>j){
//                 if(arr[i][j]==0){
//                     flag=1;
//                 }
//             }
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int sort(int[],int);
// int main(){
//     int arr[10];
//     int i;
//     for(i=0;i<10;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int num;
// printf("enter num: ");
// scanf("%d",&num);
// sort(a,size); 
// int sort(int a[],int size){
//     int i,flag=0,pos,num;
//     for(i=0;i<10;i++){
//         if(arr[i]==num){
//             flag=1;
//         }
//     }
// }



// #include <stdio.h>
// #define SIZE 5
// int main(){
//     int arr[SIZE];
//     int i;
//     for(i=0;i<SIZE;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<SIZE;i++){
//         printf("%d ",arr[i]);
//     }

//     for(i=0;i<SIZE-1;i++){
//         for(int j=i+1;j<SIZE;j++){
//             if(arr[i]!=arr[j]){
//                 printf("%d ",arr[i]);
//             }
//         }
//     } 
// }


// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     for(i=0;i<5;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
    
//     for(i=0;i<5;i++){
//         int unique=1;
//         for(j=0;j<i;j++){
//             if(arr[i]==arr[j]){
//                 unique=0;
//                 break;
//             }
//         }
//         if(unique==1)
//         printf("%d ",arr[i]);
//     } 
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
//     int j;
//     for(i=0;i<5;i++){
//         int is_unique=0;
//         for(j=0;j<i;j++){
//             if(arr[i]==arr[j]){
//                 is_unique=1;
//                 break;
//             }
//         }
//         if(is_unique==0){
//             printf("%d ",arr[i]);
//         }
//     }
// }



// #include <stdio.h>
// int main(){
//     printf("*****\n");
//     printf("   *\n");
//     printf("  *\n");
//     printf(" *\n");
//     printf("*****\n");
// }    



// array element with its count-------------------------------------------
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter ele: ");
//     scanf("%d",&n);
//     int arr[n];
//     int i,j;
//     for(i=0;i<n;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<n-1;i++){
//         int count=1;
//         for(j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//             else{
//                 break;
//             }
//         }
//         printf("%d %d\n",arr[i],count);
//         i+=count-1;
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     int sum=0;
//     for ( i = 4; i >=0; i--)
//     {
//         sum=sum+arr[i];
//       printf("%d ",arr[i]);  
//     }
//     printf("%d",sum);
// }




// #include <stdio.h>
// int main(){
    
//     char str[15];
//     fgets(str,15,stdin);
//     int i=0,cv=0,cc=0;
//     while(str[i]!='\0'){
//         if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='U'){
//         cv++;
//         }
//         else if(str[i]=='!'){
//         continue;
//         }
//         else if(str[i]==' '){
//         continue;
//         }
//         else{
//         cc++;
//         }}
//         i++;
//     }
//     printf("no of vowel is: %d\n",cv);
//     printf("no of consonent is: %d\n",cc);
// }




// #include <stdio.h>
// int main(){
//     int s;
//     printf("enter size: ");
//     scanf("%d",&s);
//     int arr[s];
//     int i,j;
//     for(i=0;i<s;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<s-1;i++){
//         for(j=i+1;j<s;j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<s;i++){
//         int count=1;
//         for(j=i+1;j<s;j++){
//             if(arr[j]==arr[i]){
//                count++;
//             }
//             else{
//                 break;
//             }
//         }
//         printf("%d %d \n",arr[i],count);
//         i+=count-1;
//     }
// }



// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter size: ");
//     scanf("%d",&n);
//     int arr[n];
//     int i,j;
//     for(i=0;i<n-1;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n-1;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     int pos;
//     printf("enter pos: ");
//     scanf("%d",&pos);
//     int num;
//     printf("enter num: ");
//     scanf("%d",&num);
//     for(i=n;i>pos;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos]=num;
//     for(i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<len;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<len;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     for(i=0;i<len;i++){
//         int flag=1;
//         for(j=i+1;j<len;j++){
//             if(arr[i]==arr[j]){
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag){
//             printf("%d ",arr[i]);
//         }
//     }
// }



// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter num: ");
//     scanf("%d",&n);
//     int i,sum=0;
//     for(i=1;i<n;i++){
//         if(n%i==0){
//             sum+=i;
//         }
//     }
//     if(sum==n){
//         printf("perfect num: ");
//     }
//     else{
//         printf("no");
//     }
// }



#include <stdio.h>
int main(){
    int arr[];
    int i,j;
    for(i=0)
}