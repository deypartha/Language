// frquency of letter of a word-----------------
// #include <stdio.h>
// int main(){
//     char str[200];
//     fgets(str,200,stdin);
//     int i,j;
//      int count=0;
//     for(i='a';i<='z';i++){
//        count=0;
//        for(j=0;str[j]!='\0';j++){
//         if(i==str[j]){
//             count++;
//         }
//        }
//        if(count>0){
//         printf("%c %d\n",i,count);
//        }
//     }
// }


// Write a C program to input basic salary of an employee and calculate gross salary .
// Basic Salary <= 10000 :
// HRA = 20% DA=80%
// Basic Salary is between 10001 to 20000 : HRA = 25%
// DA=90%
// Basic Salary >= 20001 : HRA = 30%
// DA = 95%-----------------------------------------------------------------------------------------------
// #include<stdio.h>
// int main(){
//     int bs;
//     float da,hra,total;
//     printf("enter basic sallary: ");
//     scanf("%d",&bs);
//     if(bs<=10000){
//         da=bs*0.2;
//         hra=bs*0.8;
//     }
//     else if(bs>10000 && bs<=20000){
//         da=bs*0.25;
//         hra=bs*0.9;
//     }
//     else{
//         da=bs*0.3;
//         hra=bs*0.95;
//     }
//     total=bs+da+hra;
//     printf("%.1f",total);
// }


// total no of two wheelers and four wheelers------------------------------
// #include<stdio.h>
// int main(){
//     int tv,tt;
//     printf("total vhecle: ");
//     scanf("%d",&tv);
//     printf("enter tyre: ");
//     scanf("%d",&tt);
//     int tw=((4*tv)-tt)/2;
//     if((tt&1)||tt<2||tt<=tv){
//         printf("invalid");
//     }
//     printf("no of two wheels: %d\n",tw);
//     printf("no of four wheels: %d\n",(tv-tw));
// }


//create new line in a string-------------------------------
// #include<stdio.h>
// int main(){
//     char str[25];
//     if(fgets(str,sizeof(str),stdin)!=NULL){
//         int i;
//         int len=strlen(str);
//         for(i=0;i<len;i++){
//             if(str[i]==' '){
//                 printf("\n");
//             }
//             else{
//                 printf("%c",str[i]);
//             }
//         }
//         printf("\n");
//     }
// }


//Palindromic string-----------------------
// #include <stdio.h>
// #include<string.h>
// int main(){
// 	char str[200];
// 	fgets(str,200,stdin);
// 	int i,flag=1;
// 	int len=strlen(str);
// 	for(i=0;i<len;i++){
// 		if(str[i]==str[len-i-1]){
// 			flag=0;
// 		}
// 	}
// 	if(flag==1){
// 		printf("YES");
// 	}        	      
// 	else{
// 		printf("NO");
// 	}           
// }


//capital letter are changed in small and vice verse---------------------
// #include <stdio.h>
// #include <string.h>
// int main(){
// 	char str[200];
//     fgets(str,200,stdin);
// 	int i;
// 	int len=strlen(str);
// 	for(i=0;str[i]!='\0';i++){
// 		if(str[i]>='a' && str[i]<='z'){
// 			str[i]-=32;
// 		}
// 		else if(str[i]>='A' && str[i]<='Z'){
// 			str[i]+=32;
// 		}
// 		printf("%c",str[i]);
// 	}
// }


//count each of arr element in an array------------------------------
#include<stdio.h>
int main(){
    int n;
    printf("enter size: ");
    scanf("%d",&n);
    int arr[100];
    int i,j;
    for(i=0;i<n;i++){
        printf("enter ele: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        int count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            else{
                break;
            }
        }
        if(count>1){
        printf("%d -> %d\n",arr[i],count);}
        i+=count-1;
    }
}


// #include <stdio.h>
// int main(){
//     char st[5];
//     scanf("%s",&st);
//     printf("%.5s",st);//-------------that means total 5 characters are printed
//     printf("%10.5s",st);//-----------that means (.5) denoted as 5 free space in starting
// }


//remmove duplicate element from an array----------------
// #include<stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         int dupli=1;
//         for(j=0;j<i;j++){
//             if(arr[i]==arr[j]){
//                 dupli=0;
//                 break;
//             }
//         }
//         if(dupli){
//             printf("%d ",arr[i]);
//         }
//     }
// }


//inseertion in first---------------------------
// #include <stdio.h>
// int main(){
//     int arr[6];
//     int i;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=5;i>=1;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=20;
//     for(i=0;i<6;i++){
//         printf("%d ",arr[i]);
//     }
// }


//insertion in between------------------------
// #include <stdio.h>
// int main(){
//     int arr[6];
//     int i;
//     for(i=0;i<5;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=5;i>=3;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[2]=10;
//     for(i=0;i<6;i++){
//         printf("%d ",arr[i]);
//     }
// }


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
//     if(flag==0){
//         printf("element not found");
//     }
//     else{
//         for(;i<4;i++){
//             arr[i]=arr[i+1];
//         }
//     }
//     for(i=0;i<4;i++){
//         printf("%d ",arr[i]);
//     }
// }


//remove vowels from strings------------------
// #include <stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int i=0;
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//             continue;
//         }
//         // else if(str[i]==' '){
//         //     continue;
//         // }
//         printf("%c",str[i]);
//     }
// }


//binary to decimal--------------------------------------------
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int bin;
//     printf("enter binary: ");
//     scanf("%d",&bin);
//     int i=0;
//     int total=0;
//     while(bin>0){
//         int b=bin%10;
//         total+=b*(pow(2,i));
//         bin/=10;
//         i++;
//     }
//     printf("%d",total);
// }


//9. Write a program in C to find the maximum and minimum elements in an array--------------------
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter size: ");
//     scanf("%d",&n);
//     int arr[n];
//     int i,j;
//     for(i=0;i<n;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     printf("max is: %d \n",arr[0]);
//     printf("min is: %d ",arr[n-1]);
// }



//C Program to Copy String Without Using strcpy---------------------------
// #include<stdio.h>
// int main(){
//     int i,j=0;
//     char s1[50],s2[50];
//     printf("enter string: ");
//     fgets(s1,50,stdin);
//     for(i=0;s1[i]!='\0';i++){
//         s2[j++]=s1[i];
//     }
//     s2[j++]='\0';
//     printf("copy of input string: %s",s2);
// }


// C Program to Concatinate String Without Using strcat----------------------
// #include<stdio.h>
// int main(){
//     int i,j;
//     char s1[50],s2[50];
//     printf("enter 1st string: ");
//     fgets(s1,50,stdin);
//     for(i=0;s1[i]!='\0';i++){  //for remove newline character
//         if(s1[i]=='\n'){
//             s1[i]='\0';
//             break;
//         }
//     }
//     for(j=0;s2[j]!='\0';j++){  //for remove newline character
//         if(s2[j]=='\n'){
//             s2[j]='\0';
//             break;
//         }
//     }
//     printf("enter 2nd string: ");
//     fgets(s2,50,stdin);
//     for(i=0;s1[i]!='\0';i++);
//     for(j=0;s2[j]!='\0';j++,i++){
//         s1[i]=s2[j];
//     }
//     s1[i]='\0';
//     printf("%s ",s1);
// }



//C Program to Find Substring Of String Without Using Library Function--------------------------
// #include <stdio.h>
// int main(){
//     char p1[50],p2[50];
//     int i,j;
//     printf("enter 1st string: ");
//     gets(p1);
//     printf("enter find string: ");
//     gets(p2);
//     int l1=strlen(p1);
//     int l2=strlen(p2);
//     for(i=0;i<l1;i++){
//         for(j=0;j<l2;j++){
//             if(p1[i+j]!=p2[j]){
//                 break;
//             }
//         }
//         if(j==l2){
//             printf("string found at %d\n",i+1);
//             // found=1;
//             break;
//         }
//     }
//     printf("not found");
// }


//WAP to check the string is anagram is not---(like-->heart==earth)--------------------------
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char s1[20],s2[20],temp;
//     printf("enter str: ");
//     fgets(s1,20,stdin);
//     printf("enter new: ");
//     fgets(s2,20,stdin);
//     int i,j;
//     int l1=strlen(s1);
//     int l2=strlen(s2);
//     if(l1!=l2){
//         printf("false");
//     }
//     for(i=0;i<l1-1;i++){
//         for(j=i+1;j<l1;j++){
//             if(s1[j]>s1[i]){
//                 temp=s1[i];
//                 s1[i]=s1[j];
//                 s1[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<l1-1;i++){
//         for(j=i+1;j<l1;j++){        
//             if(s2[j]>s2[i]){
//                 temp=s2[i];
//                 s2[i]=s2[j];
//                 s2[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<l1;i++){
//         if(s1[i]!=s2[i]){
//             printf("false");
//         }
//     }
//     printf("true");
// }


//Find duplicate letter on a string-----------------
// #include <stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int i,j,dupli;
//     int len=strlen(str);
//     for(i=0;i<len-1;i++){
//         dupli=0;
//         for(j=i+1;j<len;j++){
//             if(str[i]==str[j]){
//                 dupli=1;
//                 break;
//             }
//         }
//         if(dupli==1){
//             printf("%c",str[i]);
//         }
//     }
// }


//natural number to roman style--------------
// #include<stdio.h>
// int roman(int n);
// int main(){
//     int n;
//     printf("enter num: ");
//     scanf("%d",&n);
//     roman(n);
// }
// int roman(int n){
//     if(n>=1000){
//         printf("M");
//         return roman(n-1000);
//     }
//     if(n>=500){
//         printf("D");
//         return roman(n-500);
//     }
//     if(n>=100){
//         printf("C");
//         return roman(n-100);
//     }
//     if(n>=50){
//         printf("L");
//         return roman(n-50);
//     }
//     if(n>=10){
//         printf("X");
//         return roman(n-10);
//     }
//     if(n>=5){
//         printf("V");
//         return roman(n-5);
//     }
//     if(n>=1){
//         printf("I");
//         return roman(n-1);
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,j;
//     char st1[20],st2[20];
//     fgets(st1,20,stdin);
//     fgets(st2,20,stdin);
//     for(i=0;st1[i]!='\0';i++);
//     for(j=0;st2[j]!='\0';j++,i++){
//         st1[i]=st2[j];
//     }
//     st1[i]='\0';
//     printf("%s ",st1);
// }

//maximum frequency of an element in an array------------------
// #include<stdio.h>
// int main(){
//     int arr[8];
//     for(int i=0;i<8;i++){
//         scanf("%d",&arr[i]);
//     }
//     int c=0;
//     int t;
//     for(int j=0;j<=10;j++){
//         int count=0;
//         for(int i=0;i<8;i++){
//             if(j==arr[i]){
//                 count++;
//             }
//         }
//         if(count>c){
//             c=count;
//             t=j;
//         }
//     }
//     printf("%d",t);
//     return 0;
// }


// #include <stdio.h>
// enum days { SUN, MON, TUE, WED=7, THU, FRI, SAT };
// int main() {
// enum days d = TUE;
// printf("%d", THU);
// return 0;
// }


// #include <stdio.h>
// int main(){
//     int i=5;
//     printf("%d",(++i+i++));
// }


// #include <stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int rem=0;
//     int left=num;
//     while(left>=10){
//         // left=num%10;
//         left/=10;
//     }
//     if (left>= 1 && left <= 7) {
//         switch (left) {
//             case 1:
//                 printf("Monday\n");
//                 break;
//             case 2:
//                 printf("Tuesday\n");
//                 break;
//             case 3:
//                 printf("Wednesday\n");
//                 break;
//             case 4:
//                 printf("Thursday\n");
//                 break;
//             case 5:
//                 printf("Friday\n");
//                 break;
//             case 6:
//                 printf("Saturday\n");
//                 break;
//             case 7:
//                 printf("Sunday\n");
//                 break;
//             case 8:
//                 printf("Invalid\n");
//                 break;
//             case 9:
//                 printf("Invalid\n");
//                 break;
//         }
//     } else {
//         printf("Invalid number\n");
//     }
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



// #include <stdio.h>
// int main(){
//     int n1,n2;
//     scanf("%d %d",&n1,&n2);
//     int arr[n1][n2];
//     int i,j;
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int transposed[n2][n1];
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//            transposed[j][i]=arr[i][j]; 
//         }
//     }
    
//     for(i=0;i<n2;i++){
//         for(j=0;j<n1;j++){
//             printf("%d ",transposed[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     char str[200];
//     fgets(str,200,stdin);
//     int i,j;
//     int len=strlen(str);
//     char ch;
//     scanf(" %c",&ch);
//     int count=0;
//     for(i=0;i<len;i++){
//         // count=1;
//         if(ch==str[i]){
//             ++count;
//         }
//     }
//     printf("%c ->%d",ch,count);
// }



// #include <stdio.h>
// int main(){
//     char str[200];
//     fgets(str,200,stdin);
//     char find[10];
//     scanf("%s",&find);
//     int len=strlen(str);
//     int i,j;
//     for(i=0;i<len;i++){
//         if(str[i]==' '){
//             if(str[i+1]==)
//         }
        
//     }
// }



// #include <stdio.h>
// struct student{
//     int roll;
//     char name[20];
//     int marks[3];
// };
// int main(){
//     int count;
//     scanf("%d",&count);
//     struct student st[count];
//     int i,j;
//     for(i=0;i<count;i++){
//         scanf("%d",&st[i].roll);
//         scanf("%s",st[i].name);
//         for(j=0;j<3;j++){
//             scanf("%d",&st[i].marks[j]);
//         }
//     }
//     float sum[count];
//     float avg[count];
//     for(i=0;i<count;i++){
//         printf("%d\t %s\t",st[i].roll,st[i].name);
//         for(j=0;j<3;j++){
//             sum[i]=sum[i]+st[i].marks[j];
//             avg[i]=sum[i]/3;
//         }
//         printf("%.2f",avg[i]);
//     }
// }


