// fequeency of letter in a string----------------------
// #include <stdio.h>
// int main(){
//     char str[]="Hello";
//     int len=strlen(str);
//     int i,j;
//     for(i=0;i<len;i++){
//         for(j=i+1;j<len;j++){
//             if(str[i]>str[j]){
//                 char temp=str[i];
//                 str[i]=str[j];
//                 str[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<len;i++){
//         int count=1;
//         for(j=i+1;j<len;j++){
//             if(str[i]==str[j]){
//                 count++;
//             }
//         }
//         if(count>0){
//             printf("%c->%d\n",str[i],count);
//         }
//         i+=count-1;
//     }
// }
// #include <stdio.h>
// int main(){
//     char str[]="appleisred";
//     int i,j;
//     int len=strlen(str);
//     int count=0;
//     char counted[50]={0};
//     for(i=0;i<len;i++){
//         if(counted[i]==1){
//             continue;
//         }
//         count=1;
//         for(j=i+1;j<len;j++){
//             if(str[i]==str[j]){
//                 count++;
//                 counted[j]=1;
//             }
//         }
//         if(count>0){
//             printf("%c->%d ",str[i],count);
//         }
//     }
// }

// binary to decimal-----------------------------------
// #include <stdio.h>
// #include<math.h>
// int main(){
//     int n=1110;
//     int i=0,rem=0,sum=0;
//     while(n!=0){
//         rem=n%10;
//         sum+=rem*pow(2,i);
//         n/=10;
//         i++;
//     }
//     printf("%d",sum);
// }

// palindromic string--------------------------------
// #include<stdio.h>
// int main(){
//     char str[]="madam";
//     int i,j;
//     int len=strlen(str);
//     int flag=1;
//     for(i=0;i<len;i++){
//         if(str[i]!=str[len-i-1]){
//             flag=0;
//         }
//     }
//     if(flag==1){
//         printf("Palindromic");
//     }
//     else{
//         printf("not");
//     }
// }

// password valid or invalid---------------------------
// #include <stdio.h>
// int main(){
//     char str[100];
//     fgets(str,20,stdin);
//     int i;
//     int len=strlen(str);
//     int flag1=1,flag2=1,flag3=1,flag4=1;
//     for(i=0;i<len;i++){
//         if(str[i]>='a' && str[i]<='z'){
//             flag1=0;
//         }
//     }
//     for(i=0;i<len;i++){
//         if(str[i]>='A' && str[i]<='Z'){
//             flag2=0;
//         }
//         else if(str[i]>='0' && str[i]<='9'){
//             flag3=0;
//         }
//         else if(str[i]=='@' || str[i]=='#' || str[i]=='&' ||str[i]=='$'){
//             flag4=0;
//         }
//     }
//     if(flag1==0 && flag2==0 && flag3==0 && flag4==0){
//         printf("valid");
//     }
//     else{
//         printf("invalid");
//     }
// }

// frequency of array elememt in an array--------------
// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i,j;
//     int count=0;
//     int counted[200]={0};
//     for(i=0;i<6;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<6;i++){
//         if(counted[i]==1){
//             continue;
//         }
//         count=1;
//         for(j=i+1;j<6;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 counted[j]=1;
//             }
//         }
//         if(count>0){
//             printf("%d->%d ",arr[i],count);
//         }
//     }
// }

// insert an array--------------------------------------
// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i;
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     int ind=2;
//     for(i=4;i>ind;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[ind]=10;
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }

// Array element remove---------------------------------
// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i;
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     int pos=2;
//     for(i=pos;i<5;i++){
//         arr[i]=arr[i+1];
//     }
//     for(i=0;i<4;i++){
//         printf("%d ",arr[i]);
//     }
// }

//Armstrong number------------------------------------
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int ori=n;
//     int count=0,rem=0,sum=0;
//     int num=n;
//     while (num!=0)
//     {
//         count++;
//         num/=10;
//     }
//     num=n;
//     while(num!=0){
//         rem=num%10;
//         sum+=pow(rem,count);
//         num/=10;
//     }
//     if(sum==ori){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
// }

// Unique element in an array------------------------
// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i,j;
//     int counted[100]={0};
//     for(i=0;i<7;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<7;i++){
//         if (counted[i]==1){
//             continue;
//         }
//         int flag=1;
//         for(j=i+1;j<7;j++){
//             if(arr[i]==arr[j]){
//                 flag++;
//                 counted[j]=1;
//             }
//         }
//         if(flag>1){
//             printf("%d ",arr[i]);
//         }
//     }
// }

// duplicate element in an array--------------------
    // #include <stdio.h>
    // int main(){
    //     int i,j;
    //     int arr[10];
    //     int counted[100]={0};
    //     for(i=0;i<5;i++){
    //         scanf("%d",&arr[i]);
    //     }
    //     for(i=0;i<5;i++){
    //         if(counted[i]==1){
    //             continue;
    //         }
    //         int count=1;
    //         for(j=i+1;j<5;j++){
    //             if(arr[j]==arr[i]){
    //                 count++;
    //                 counted[j]=1;
    //             }
    //         }
    //         if(count>=1){
    //             printf("%d ",arr[i]);
    //         }
    //     }
    // }

// pattern----------------------------
// #include <stdio.h>
// int main(){
//     int i,j,b;
//     for(i=1;i<5;i++){
//         for(b=1;b<=5-i;b++){
//             printf(" ");
//         }
//         for(j=0;j<i;j++){
//             printf("%d",i+j);
//         }
//         for(j=i-2;j>=0;j--){
//             printf("%d",i+j);
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i=0;i<6;i++){
//         for(j=1;j<=6;j++){
//             printf("%d ",i+j);
//         }
//         printf("\n");
//     }
// }


// transpose of a matrix------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int arr[a][b];
//     int i,j;
//     for(i=0;i<a;i++){
//         for(j=0;j<b;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int arr2[a][b];
//     for(i=0;i<a;i++){
//         for(j=0;j<b;j++){
//             arr2[j][i]=arr[i][j];
//         }
//     }
//     for(i=0;i<b;i++){
//         for(j=0;j<a;j++){
//             printf("%d ",arr2[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int num;
//     int i;
//     scanf("%d",&num);
//     if(num>=1 && num<=12){
//         // for(i=1;i<=12;i++){
//             switch(num){
//                 case 1:
//                 printf("January");
//                 break;
//                 case 2:
//                 printf("February");
//                 break;
//                 case 3:
//                 printf("March");
//                 break;
//                 case 4:
//                 printf("April");
//                 break;
//                 case 5:
//                 printf("May");
//                 break;
//                 case 6: 
//                 printf("June");
//                 break;
//                 case 7:
//                 printf("July");
//                 break;
//                 case 8:
//                 printf("August");
//                 break;
//                 case 9:
//                 printf("Sept");
//                 break;
//                 case 10:
//                 printf("Octo");
//                 break;
//                 case 11:
//                 printf("NOve");
//                 break;
//                 case 12:
//                 printf("DEce");
//                 break;
//             }
//         // }
//     }
//     else{
//         printf("Invalid");
//     }
// }

// sum of digit of a number-------------
// #include <stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int i,rem=0,sum=0;
//     while(num!=0){
//         rem=num%10;
//         sum+=rem;
//         num/=10;
//     }
//     printf("%d",sum);
// }

// toggle string letters---------------
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[20];
//     int i;
//     fgets(str,20,stdin);
//     int len=strlen(str);
//     for(i=0;i<len;i++){
//         if(str[i]>=65 && str[i]<=90){
//             str[i]=str[i]+32;
//         }
//         else if(str[i]>=97 && str[i]<=122){
//             str[i]=str[i]-32;
//         }
//     }
//     printf("%s",str);
// }


// reverse a string--------------
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int i;
//     int len=strlen(str);
//     for(i=len-1;i>=0;i--){
//         printf("%c",str[i]);
//     }
// }


// --palindromic string-------------
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int i,j,flag=1;
//     int len=strlen(str);
//     for(i=0;i<len;i++){
//         if(str[i]==str[len-i-1]){
//             flag=0;
//         }
//     }
//     if(flag){
//         printf("%s is a Palindromic string",str);
//     }
//     else{
//         printf("%s is not a palindromic string",str);
//     }
// }

// check prime-----------------
// #include <stdio.h>
// int main(){
//     int i;
//     int num;
//     scanf("%d",&num);
//     int flag=1;
//     for(i=2;i<num/2;i++){
//         if(num%i==0){
//             flag=0;
//         }
//     }
//     if(flag && num!=1){
//         printf("prime");
//     }
//     else{
//         printf("not prime");
//     }
// }


// #include<stdio.h>
// int main()
// {
// int i = 5;
// printf("%d %d %d", i++, i++, i++);
// return 0;
// }


// #include <stdio.h>
// struct student{
//     int count;
//     char name[20];
//     int roll;
//     int mark[3];
// };
// int main(){
//     int i,n;
//     scanf("%d",&n);
//     struct student s1[n];
//     for(i=0;i<n;i++){
//         // printf("enter name: ");
//         // scanf("%s",s1[i].name);
//         // printf("enter roll: ");
//         // scanf("%d",&s1[i].roll);
//         for(int j=0;j<3;j++){
//             printf("marks: ");
//             scanf("%d",&s1[i].mark[j]);
//         }
//     }
//     float sum[n];
//     float avg[n];
//     for(i=0;i<n;i++){
//         // printf("%s\t%d",s1[i].name,s1[i].roll);
//         for(int j=0;j<3;j++){
//             // printf("\t%d",s1[i].mark[j]);
//             sum[i]+=(s1[i].mark[j]);
//             avg[i]=sum[i]/3;
//         }
//         printf("%.2f\n",avg[i]);
//     } 
// }

// counteven and odd and store individual array-------------
// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i,j,k;
//     int count_even=0,count_odd=0;
//     for(i=0;i<8;i++){
//         scanf("%d",&arr[i]);
//     }
//     j=0,k=0;
//     int e[10],o[10];
//     for(i=0;i<8;i++){
//         if((arr[i]%2)==0){
//             e[j]=arr[i];
//             j++;
//             ++count_even;
//         }
//         else{
//             o[k]=arr[i];
//             k++;
//             ++count_odd;
//         }
//     }
//     for(i=0;i<count_even;i++){
//         printf("%d ",e[i]);
//     }
//     printf("\n");
//     for(i=0;i<count_odd;i++){
//         printf("%d ",o[i]);
//     }
// }

// max count of ele in an array-------------
// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     int max=0;
//     int temp=0;
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(j=0;j<10;j++){
//         int count=0;
//         for(i=0;i<5;i++){
//             if(j==arr[i]){
//                 count++;
//             }
//         }
//         if(max<count){
//             max=count;
//             temp=j;
//         }
//     }
//     printf("%d %d",temp,max);
// }

// max char find in a string------------
// #include <stdio.h>
// int main(){
//     char str[200];
//     fgets(str,200,stdin);
//     char ch;
//     int max=0;
//     int min=l;
//     int i;
//     char maxch,minch;
//     for(i=0;str[i]!='\0';i++){
//     if(str[i]=='\n'){
//         str[i]='\0';
//     }
//     }
//     for(ch='a';ch<='z';ch++){
//         int count=0;
//         for(i=0;str[i]!='\0';i++){
//             if(str[i]==ch){
//                 count++;
//             }
//         }
//         if(count>max){
//             max=count;
//             maxch=ch;
//         }
//         else if(count<min){
//             min=count;
//             minch=ch;
//         }
//     }
//     printf("%c %d\n",maxch,max);
//     printf("%c %d\n",minch,min);
// }


// reverse of a number-------------
// #include <stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int rem=0,rev=0;
//     while(num!=0){
//         rem=num%10;
//         rev=(rev*10)+rem;
//         num/=10;
//     }
//     printf("%d",rev);
// }


// sign changing sum------------
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[200];
//     scanf("%s",&str);
//     int i,rem=0,sum=0,sign=1;
//     for(i=0;i<strlen(str);i++){
//         int digit=str[i]-'0';
//         sum+=sign*digit;
//         sign=-sign;
//     }
//     printf("%d",sum);
// }

// frequency of char in a string-------
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int i,j;
//     char ch;
//     scanf(" %c",&ch);
//     int count=0;
//     for(i=0;str[i]!='\0';i++){
//         if(ch==str[i]){
//             ++count;
//         }
//     }
//     printf("%d",count);
// }

// 


// #include<stdio.h>
// int main(){
//     int arr[100];
//     int i,j;
//     for(i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(j=0;j<=2000;j++){
//         int count=0;
//         for(i=0;i<10;i++){
//             if(j==arr[i]){
//                 count++;
//             }
//         }
//         if(count>1){
//             printf("%d ",j);
//         }
//     }
// }


//unique element-------
// #include<stdio.h>
// int main(){
//     int str[100];
//     int i,j;
//     // for(i=0;i<10;i++){
//         scanf("%s",&str);
//     // }
//     int counted[100]={0};
//     int count=0;
//     for(i=0;str[i]!='\0';i++){
//         if(counted[i]==1){
//             continue;
//         }
//         count=0;
//         for(j=i+1;str[j]!='\0';j++){
//             ++count;
//             counted[j]=1;
//         }
//         if(count==1){
//             printf("%c",str[i]);
//         }
//     }
// }



// #include <stdio.h>
// struct student{
//     char name[20];
//     int roll;
//     int marks[4];
//     int imark;
// };
// int main(){
//     struct student s1[3];
//     int i,j;
//     for(i=0;i<3;i++){
//         scanf("%s",&s1[i].name);
//         scanf("%d",&s1[i].roll);
//         for(j=0;j<4;j++){
//             scanf("%d",&s1[i].marks[j]);
//         }
//     }
//     int high=0;
//     int sum;
    
//     for(i=0;i<3;i++){
//         sum=0;
//         for(j=0;j<4;j++){
//             sum+=s1[i].marks[j];
//         }
//         s1[i].imark=sum;
//         if(sum>high){
//             high=sum;
//         }
//     }
//     for(i=0;i<3;i++){
//         if(sum==s1[i].imark){
//             printf("%s %d %d\n",s1[i].name,s1[i].roll,s1[i].imark);
//         }
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i;
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     int find;
//     scanf("%d",&find);
//     int c=1;
//     for(i=0;i<5;i++){
//         if(arr[i]==find){
//             printf("%d ",i+1);
//             c=0;
//         }
//     }
//     if (c){
//         printf("-1");
//     }
// }


// #include <stdio.h>
// struct student{
//     char name[20];
//     int roll;
//     int mark[4];
//     int imark;
// };
// int main(){
//     struct student s1[3];
//     int i,j;
//     for(i=0;i<3;i++){
//         printf("enter name: ");
//         scanf("%s",&s1[i].name);
//         printf("enter roll: ");
//         scanf("%d",&s1[i].roll);
//         for(j=0;j<4;j++){
//             printf("mark: ");
//             scanf("%d",&s1[i].mark[j]);
//         }
//     }
//     int max=0;
//     for(i=0;i<3;i++){
//         int sum=0;
//         for(j=0;j<4;j++){
//             sum+=s1[i].mark[j];
//         }
//         s1[i].imark=sum;
//         if(sum>max){
//             max=sum;
//         }
//     }
//     for(i=0;i<3;i++){
//         if(max==s1[i].imark){
//             printf("%s %d %d\n",s1[i].name,s1[i].roll,max);
//         }
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     int arr[10];
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     int f=2;
//     int c=0;
//     for(i=0;i<5;i++){
//         if(arr[i]==f){
//             printf("%d ",i+1);
//             c=1;
//         }
//     }
//     if(!c){
//         printf("-1");
//     }
// }


// #include <stdio.h>
// int main(){
//     int a=1;
//     printf("%d %d %d\n",a,++a,a++);
//     a=1;
//     printf("%d %d %d\n",++a,a++,a);
//     a=1;
//     printf("%d %d %d\n",++a,a,a++);
// }




#include <stdio.h>
int main(){
    int arr[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum+=arr[i][j];
        }
    }
    int corner=arr[0][0]+arr[0][2]+arr[2][0]+arr[2][2];
    printf("%d\n",corner);
    printf("%d",sum-corner);
}