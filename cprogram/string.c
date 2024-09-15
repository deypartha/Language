// #include <stdio.h>
// int main(){
//     char hello[]="hello world";
//     printf("%s",hello);
// }


// #include <stdio.h>
// int main(){
//     char ch[]="Namastey Duniya";
//     ch[0]='H';
//     printf("%s",ch);
// }



// #include<stdio.h>
// int main(){
//     int i;
//     char ch[]="PARTHA DEY";
//     for (i=0;i<10;i++){
//         printf("%c\n",ch[i]);
//     }
// }


// #include<stdio.h>
// int main(){
//     char p[]="Namastey";
//     int i;
//     int length=sizeof(p)/sizeof(p[0]);
//     printf("%d",length);
//     for (i=0;i<length;++i){
//         printf("%c\n",p[i]);
//     }
// }


//  '/0' => is used for string termination

// #include<stdio.h>
// int main(){
//     char ch[]={'H','e','l','l','o',' ','w','o','r','l','d','/0'};
//     char p[]="Hello World";
//     int l1=sizeof(ch);
//     int l2=sizeof(p);
//     printf("%d\n",l1);
//     printf("%d\n",l2);
// }



// #include <stdio.h>
// void pstr(char arr[]){
//     int i;
//     for (i=0;arr[i]!='\0';i++){
//         printf("%c",arr[i]);
//     }
// }
// int main(){
//      char fname[]="Partha";
//     char lname[]="Dey";
//     pstr(fname);
//     pstr(lname);
// }



// #include <stdio.h>
// int main(){
//     char name[40];
//     printf("enter name: ");
//     scanf("%s",name);
//     printf("your name: %s",name);
// }


// #include <stdio.h>
// int main(){
//     char fname[40];
//     char fullname[100];
    // printf("enter first name: ");
    // scanf("%s",fname);
//     printf("enter full name: ");
//     scanf("%s",fullname);    /////////////scanf can not take input for mulple string like a sentence;
//     printf("first name is: %s",fullname);
        // gets(fullname); //use for take input for a sentence
        // fgets(fullname,100,stdin); ///(str,size,stdin) use for stdandard form and it is use for (size - 1) element; 
        // puts(fullname);  //use to print the output and create next line 
// }
///char print by pointer and array
//diff bet pointer and array is when we declare with new object pointer can allow this but array do not allow this



// #include <stdio.h>
// int main(){
//     char *str="hello world";
//     puts(str);
//     str="Partha Dey";
//     puts (str);
//     char str[]="namastey dunia";
//     puts(str);
//     str="jdbff";
//     puts(str);
// }


// #include <stdio.h>
// #include <string.h>
// int countLength(char name[]){
//     int i,count=0;
//     for(i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count-1;
// }
// int main(){
//     char name[10];
//     fgets(name,10,stdin);
//     puts(name);
//     int length=strlen(name);
//     printf("%d",countLength(name));
// }



// #include <stdio.h>
// #include <string.h>
// int main(){
//     char fn[]="Hello";
//     char ln[]="World";
//     strcpy(fn,ln);
//     puts(fn);
// }


// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str1[12]="Hello ";
//     char str2[]="World";
//     strcat(str1,str2);
//     puts(str1);
// }



// #include <stdio.h>
// #include <string.h>
// int main(){
//     char st1[]="RAM";
//     char st2[]={'R','A','M','\0'};
//     char st3[10]={0};
//     printf("%d\n",strlen(st1));
//     printf("%d\n",strlen(st2));
//     printf("%d\n",strlen(st3));
//     strcpy(st3,st1);
//     printf("%s",st3);
// }


// #include<stdio.h>
// int main(){
//     char a[]={'P','A','R','T','H','A','\0'};
//     printf("%s\n",a);
//     int p=strlen(a);
//     printf("%d\n",p);
// }


// #include <stdio.h>
// int main(){
//     char ch[]="HELLO";
//     char i;
//     while (ch[i]!='\0'){
//         printf("%c ",ch[i]);
//         i++;
//     }
// }



// #include<stdio.h>
// int main(){
//     char ch[5];
//     char ch1[]="Namastey";
//     strcpy(ch,ch1);
//     printf("%s",ch);
// }


// WAP to input a name and print its length
// #include <stdio.h>
// int main(){
//     char ch[10];
//     printf("enter name: ");
//     gets(ch);
//     printf("name is: ");
//     puts(ch);
    // int p=strlen(ch);
    // printf("%d",p);
//     char i;
//     int count=0;
//     while(ch[i]!='\0'){
//         count+=1;
//         i++;
//     }
//     printf("%d",count);
// }



// #include <stdio.h>
// #include <string.h>
// int main(){
//     char ch1[10]="krishna";
//     char ch2[10]="ram";
//     char ch3[10]="krishna";
//     char ch4[10];
//     char ch5[10];
//     char ch6[10]="hello";
//     char ch7[10]="hello";
//     printf("length of ch1: %d\n",strlen(ch1));
//     ch5[5]=strcat(ch1,ch2);
//     printf("concatinate is : %s\n",strcat(ch2,ch3));
//     printf("copy from ch3 to ch4: %s\n",strcpy(ch4,ch3));
//     printf("compare when not same: %d\n",strcmp(ch1,ch3));
//     printf("compare when same: %d\n",strcmp(ch6,ch7));
//     printf("reverse is: %s\n",strrev(ch6));
// }


// W.A.P to store 10 students name  1
// printf  the duplicate names
// printf the students  name having maximum length
// printf the first five students name in reverse order
// search for a students name in the list if present then print the position otherwise print "name does not exit "
// print all the student name in upper case
// concatenate first student name with last student

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char std[10][10]={"partha","shivam","ram","krishna","raman","raj","dev","ram","krishna","pranav"};
//     char i,j;
//     //  printf  the duplicate names-----------
//     for (i=0;i<9;i++){
        
//         for (j=i+1;j<10;j++){
//             if ((strcmp(std[i],std[j]))==0)
//             {
//                 printf("%s  ",std[i]);
//                 break;
//             }
//         }
//     } 

//     // printf the students  name having maximum length-------------------
//     int max=0;
//     int n;
//     n=strlen(std);
//     for (i=0;i<n;i++){
//         int length=strlen(std[i]);
//         if(length>max){
//             max=length;
//         }
//     }
//     printf("max is : %d",max);

//     printf("\n");
//     // print names in uppercase------------------
//     for (i=0;i<10;i++){
//         printf("%s ",strupr(std[i]));
//     }
//     printf("\n");
//     printf the first five students name in reverse order-----------------
//     for (i=0;i<5;i++){
//         printf("%s ",strrev(std[i]));
//     }
//     printf("\n");
//     // search for a students name in the list if present then print the position otherwise print "name does not exit "--------------
//     char p[10];
//     int found =0;
//     printf("enter find name: ");
//     scanf("%s",&p);
//     for (i=0;i<10;i++){
//        if((strcmp(std[i],p))==0){
//         printf("found in index : %d",i+1);
//         found=1;
//         break;
//        } 
//        else{
//         printf("not found");
//         break;
//        }
//        }
//     printf("\n");
//     concatenate first student name with last student-----------------------
//     printf("%s\n",strcat(std[0],std[9]));
// }



// #include <stdio.h>
// int main(){
//     char str[10]={"Partha Dey"};
//     int i;
//     for (i=0;i<10;i++){
//         printf("%c ",str[i]);
//     }
// }


// #include <stdio.h>
// int main(){
//     char str[10],str1[10];
//     printf("enter string1: ");
//     gets(str);
//     printf("enter string2: ");
//     gets(str1);
//     if((strcmp(str,str1))==0){
//         printf("they are equal: ");
//     }
//     else{
//         printf("they are not equal: ");
//     }
// }



// Count vowel and consonent in a word--------------------
// #include <stdio.h>
// int main(){
//     char str[10];
//     printf("enter string: ");
//     scanf("%s",&str);
//     int n=strlen(str);
//     int i,count=0,con_count=0;
//     for (i=0;i<n;i++){
//         if(str[i]=='a'){
//             // printf("vowel");
//             count++;
//         }
//         else if(str[i]=='e'){
//             // printf("vowel");
//             count++;
//         }
//         else if(str[i]=='i'){
//             // printf("vowel");
//             count++;
//         }
//         else if(str[i]=='o'){
//             // printf("vowel");
//             count++;
//         }
//         else if(str[i]=='u'){
//             // printf("vowel");
//             count++;
//         }
//         else{
//             con_count++;
//         }
//     }
//     printf("total count of letter is: %d\n",n);
//     printf("no of vowel is: %d\n",count);
//     printf("no of consonent is: %d\n",con_count);
// }


// #include<stdio.h>
// #include <string.h>
// int main(){
//     char str[10]={"hello"};
//     char *p=strrev(str);
//     if(strcmp(str,p)==0){
//     printf("palindromic: ");
//     }
//     else{
//     printf("not palindromic: ");
//     }
// }



// #include <stdio.h>
// #include<string.h>
// int main(){
    // char fullname[100];
    // int n;
    // fgets(fullname,n,stdin);
    // gets(fullname);
    // puts(fullname);


    // char *hello="hello world";
    // puts(hello);
    // hello="namastey dunia";
    // puts(hello);

    // char user[10];
    // int count =0;
    // gets(user);
    // int i;
    // for(i=0;user[i]!='\0';i++){
    //     count++;
    // }
    // printf("total count: %d",count);


    // char a[10]="HHHA";
    // char b[10]="HHHB";
    // int p=strcmp(a,b);
    // printf("%d",p);

    // char str[10];
    // char ch;
    // int i=0;
    // while(ch!='\n'){
    //     scanf("%c",&ch);
    //     str[i]=ch;
    //     i++;
    // }
    // str[i]='\0';
    // puts(str);


    // char arr[100];
    // char ch;
    // int i=0;
    // while(ch!='\n'){
    //     scanf("%c",&ch);
    //     arr[i]=ch;
    //     i++;
    // }
    // arr[i]='\0';
    // puts(arr);
// }



// #include <stdio.h>
// int main(){
//     char str1[15]={"Hello world"};
//     char str2[20]={"Namastey Dunia"};
//     char str3;
//     printf("string length of str1 is: %d\n",strlen(str1));
//     printf("string catination is: %s\n",strcat(str1,str2));
//     printf("%s")
//     printf("copy from str2 to str3 is: %s\n",strcpy(str2,str3))
//     printf("%")
// }



// #include <stdio.h>
// #include <string.h>
// void newchar(char arr[]);
// int main(){
//     char str1[]="Partha";
//     char str2[]="Dey";
//     newchar(str1);
//     newchar(str2);
// }
// void newchar(char arr[]){
//     int i;
//     for(i=0;arr[i]!='\0';i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }




// #include <stdio.h>
// int main(){
//     char arr[5];
//     char i;
//     i=0;
//     while(i<5){
//         printf("enter str: ");
//         scanf(" %c",&arr[i]);
//         i++;
//     }
//     i=0;
//     // int *p;
//     // p=&arr[5];
//     while(arr[i]!='\0'){
//         printf("%d\n",&arr[i]);
//         i++;
//     }
// }


// #include <stdio.h>
// int main(){
//     char name[10]={"namastey"};
//     char i=0;
//     while(name[i]!='\0'){
//         printf("%c ",name[i]);
//         i++;
//     }
// }



// #include <stdio.h>
// int main(){
//     char str[20];
//     printf("enter str: ");
//     gets(str);
//     char i;
//     for(i=0;str[i]!='\0';i++){
//         printf("%c",str[i]);
//     }
//     printf("\n");
//     int count=0;
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
//             // count++;
//             printf("%c ",str[i]);
//         }
//     }
//     // printf("no of vowel is: %d",count);
// }



// #include <stdio.h>
// int main(){
//     char str[10];
//     printf("enter str: ");
//     gets(str);
//     int i;
//     int l=strlen(str);
//     for(i=l-1;i>=0;i--){
//         printf("%c ",str[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     char str[20];
//     char i;
//     printf("enter sen: ");
//     gets(str);
//     for(i=0;str[i]!='\0';i++){
//         printf("%c",str[i]);
//     }
//     printf("\n");
//     int countv=0;
//     int countc=0;
//     int countf=0;
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//             countv++;
//         }
//         else if(str[i]==' '){
//             countf++;
//         }
//         else{
//             countc++;
//         }
//     }
//     printf("no of vowel is: %d\n",countv);
//     printf("no of consonent is: %d\n",countc);
//     printf("no of free space is: %d",countf);
// }


// #include <stdio.h>
// int main(){
//     char str[20];
//     printf("enter string: ");
//     scanf("%s",str);
//     int p=strlen(str);
//     for(int i=p;i>=0;i--){
//         printf("%c ",str[i]);
//     }
// }


// #include <stdio.h>
// int main(){
//     int a=152;
//     int i;
//     while(a>0){
//         i=a%10;
//         printf("%d",i);
//         a/=10;
//     }
// }


// #include <stdio.h>
// int main(){
//     char str[20];
//     printf("enter str: ");
//     scanf("%s",&str);
//     char i;
//     int countv=0;
//     int countc=0;
//     for(i=0;i<strlen(str);i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//             countv++;
//         }
//         else{
//             countc++;
//         }
//     }
//     printf("%d\n",countv);
//     printf("%d\n",countc);
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for(i=65;i<91;i++){
//         printf("%c ",i);
//     }
// }


// #include<stdio.h>
// int main(){
//     char str1[5];
//     char str2[5];
//     char str3[5];
//     char arr[3];
//     arr[0]=str1;
//     arr[1]=str2;
//     arr[2]=str3;
//     printf("enter string1: ");
//     scanf("%s",&str1);
//     printf("enter string2: ");
//     scanf("%s",&str2);
//     printf("enter string3: ");
//     scanf("%s",&str3);
//     int i,j;
//     for(i=0;i<2;i++){
//         for(j=i+1;j<3;j++){
//             if(arr[i]<arr[j]){
//                 printf("%s ",arr[i]);
//             }
//         } 
//     }
// }



// #include <stdio.h>
// int main(){
//     char str[15];
//     char i;
//     printf("enter string: ");
//     gets(str);
//     for(i=8;i<=12;i++){
//         printf("%c",str[i]);
//     }
// }


// #include <stdio.h>
// int main(){
//     char str[10];
//     printf("enter str: ");
//     scanf("%s",str);
//     int count=0;
//     // char i,j;
//     for(int i=0;i<strlen(str);i++){
//         int count=0;
//         for(int j=0;j<strlen(str);j++){
//             if(str[i]==str[j]){
//                 count++;
//             }
//         }
//         printf("%c %d\n",str[i],count);
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[]={1,2,15,25,4};
//     int sum=0,sum2=0;
//     int sum1=0;
//     int totalsum=0,i;
//     for(i=0;i<5;i++){
//         sum=sum+arr[i];
//     }
//     printf("sum of array element is: %d\n",sum);
//     for(i=0;i<5;i++){
//         int n=arr[i];
//         if (n>10){
//             while (n>0)
//             {
//                int r=n%10;
//                sum2+=r;
//                n/=10;
//             }
//             totalsum+=sum2;
//         } 
//     }
//     printf("%d ",totalsum);
// }



// #include <stdio.h>
// int main(){
//     int i=5;
//     switch(i%2){
//         case 0:
//         printf("no is even: ");
//         break;
//         case 1:
//         printf("no is odd: ");
//         break;
//     }
// }



// #include <stdio.h>
// int main(){
//     char arr[]="Hello world";
//     int i=0;
//     // arr[0]='M';
//     // arr[1]=97;
//     while(arr[i]!='\0'){
//         // printf("%d ",arr[i]);
//         printf("%c",*(arr+i));
//         i++;
//     }
//     printf("\n");
//     printf("%d",arr[5]);
// }



// #include <stdio.h>
// int main(){
//     int i=0;
//     char arr[5];
//     while(i<5){
//         printf("enter ch: ");
//         scanf(" %c",&arr[i]);
//         i++;
//     }
//     i=0;
//     while(i<5){
//         printf("%c",arr[i]);
//         i++;
//     }
// }



// #include <stdio.h>
// int main(){
//     char arr[15];
//     printf("enter char: ");
//     gets(arr);
//     puts(arr);
// }



// #include<stdio.h>
// int main(){
//     char str[15];
//     printf("enter str: ");
//     gets(str);
//     int i;
//     for(i=strlen(str);i>=0;i--){
//         printf("%c",str[i]);
//     }
// }



// #include <stdio.h>
// int nth(int n,int a,int b,int c){
//     int nterm;
//     if(n==1){
//         nterm=a;
//     }
//     else if(n==2){
//         nterm= b;
//     }
//     else if(n==3){
//         nterm= c;
//     }
//     else{
//         for(int i=4;i<n;i++){
//             nterm=n+a+b+c;
//             a=b;
//             b=c;
//             c=nterm;
//         }
//     }
//     return nterm;
// }
// int main(){
//     int n,a,b,c;
//     scanf("%d %d %d %d",&n,&a,&b,&c);
//     printf("%d",nth(n,a,b,c));
// }



// #include <stdio.h>
// int main(){
//     char ch[10][5];
//     int i;
//     for(i=0;i<5;i++){
//         printf("enter ch: ");
//         scanf("%s",ch[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%s ",ch[i]);
//     }
//     printf("\n");
//     int j;
//     char temp;
//     for(i=0;i<4;i++){
//         for(j=i+1;j<5;j++){
//             if(strcmp(ch[i],ch[j])>0){
//                 strcpy(temp,ch[i]);
//                 strcpy(ch[i],ch[j]);
//                 strcpy(ch[j],temp);
//             }
//         }
//     }
//     for(i=0;i<5;i++){
//         printf("%s ",ch[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     char arr[]={"hello"};
//     char* ptr=&arr;
//     int i;
//     while(*ptr!='\0'){
//         printf("%c",*ptr);
//         ptr++;
//         i++;
//     }

// }



// #include <stdio.h>
// #include <string.h>
// int main(){
// 	char str[5];
// 	scanf("%s",&str);              	                  // Reading input from STDIN
// 	// strrev(str);
// 	if(str==strrev(str)){
// 		printf("YES");
// 	}       
// 	else{
// 		printf("NO");
// 	}
// }



// #include <stdio.h>
// int main(){
//     char arr[10]="abcEvg";
//     int i=0;
//     int len=strlen(arr);
//     for(i=0;i<len;i++){
//         if(arr[i]>='a' && arr[i]<='z'){
//             arr[i]=arr[i]-32;
//         }
//         else if(arr[i]>='A' && arr[i]<='Z'){
//             arr[i]=arr[i]+32;
//         }
//         printf("%c",arr[i]);
//     }
//     // for(i=0;i<len;i++){
//     //     printf("%c",arr[i]);
//     // }
// }



// #include <stdio.h>

// int main(){
// 	int n;
// 	scanf("%d", &n);              	                  
// 	char str[n];
// 	gets(str);
// 	int i;
// 	int len=strlen(str);
// 	for(i=0;i<len;i++){
// 		if(str[i]>='a' && str[i]<='z'){
// 			str[i]=str[i]-32;
// 		}
// 		else if(str[i]>='A' && str[i]<='Z'){
// 			str[i]=str[i]+32;
// 		}
// 		printf("%c",str[i]);
// 	}	
// }



// #include <stdio.h>
// int main(){
//     char str[10];
//     fgets(str,10,stdin);
//     int i;
//     for(i=0;i<10;i++){
//         if(str[i]==' '){
//             if(str[i+1]>='a' && str[i+1]<='z'){
//                 str[i+1]=str[i+1]-32;
//             }
//         } 
//     }
//     printf("%c",toupper(str[0]));
//     for(i=0;i<10;i++){
//          printf("%c",str[i+1]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d\n",&n);
//     char name[n];
//     fgets(name,n,stdin);
//     printf("%s",name);
// }



// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("enter size: ");
//     scanf("%d",&n);
//     char str[n];
//     fgets(str, n, stdin);
//     int len=strlen(str);
//     for(i=0;i<len;i++){
//         if(str[i]==' '){
//             if(str[i+1]>='a' && str[i+1]<='z'){
//                 str[i+1]=str[i+1]-32;
//             }
//         }
//     }
//     printf("%c",toupper(str[0]));
//     for(i=0;i<len;i++){
//         printf("%c",str[i+1]);
//     }
// }




// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s",&str);

//     int length = strlen(str);
//     int i, flag = 0;

//     for (i = 0; i < length; i++) {
//         if (str[i] != str[length - i - 1]) {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 0)
//         printf("%s is a palindromic string.\n", str);
//     else
//         printf("%s is not a palindromic string.\n", str);

//     return 0;
// }



// #include <stdio.h>
// int main(){
//     char str[200];
//     fgets(str,200,stdin);
//     int i,flag=0;
//     int ln=strlen(str);
//     for(i=0;i<ln;i++){
//         if(str[i]>='a' && str[i]<='z'){
//             str[i]-=32;
//         }
//         else if(str[i]>='A' && str[i]<='Z'){
//             str[i]+=32;
//         }
//         printf("%c",str[i]);
//     }
// }


// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[20];
//     scanf("%s",str);
//     int i;
//     int len=strlen(str);
//     for(i=0;i<len;i++){
//         if(str[i]>='a' && str[i]<='z'){
//             str[i]-=32;
//         }
//         else if(str[i]>='A' && str[i]<='Z'){
//             str[i]+=32;
//         }
//         else if(str[i]=='!'){
//             continue;
//         }
//         else{
//             continue;
//         }
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



// #include <stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int i;
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]=='a'){
//             str[i]='p';
//         }
//         printf("%c",str[i]);
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



// #include <stdio.h>
// int main(){
//     int i;
//     int j;
//     for(i=0;i<6;i++){
//         for(j=1;j<6;j++){
//             printf("%d  ",i+j);
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main(){
//     char str[100];
//     fgets(str,100,stdin);
//     int i;
//     int len=strlen(str);
//     for(i=0;i<len;i++){
//         if(str[i]>' '){
//             continue;
//         }
//     }
//     for(i=0;i<len;i++){
//         printf("%c",str[i]);
//     }
// }


//count of words in a string---------------------
// #include <stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int i;
//     int len=strlen(str);
//     int count=0;
//     for(i=0;i<len;i++){
//         if(str[i]==' '){
//             count++;
//         }
//     }
//     printf("no of words are: %d",count+1);
// }



// remove duplicate from an array--------------------
// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     for(i=0;i<5;i++){
//         printf("entre ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     for(i=0;i<5;i++){
//         int flag=1;
//         for(j=i+1;j<5;j++){
//             if(arr[j]==arr[i]){
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag){
//         printf("%d ",arr[i]);
//     }}
// }