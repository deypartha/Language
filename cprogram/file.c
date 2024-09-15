// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("hello.txt","r");
//     fclose(fptr);
// }


// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("new.txt","w");
//     if(fptr==NULL){
//         printf("doesn`t exist: \n");
//     }
//     else{
//         fclose(fptr);
//     }
// }



// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("new.txt","r");       //inside new.txt(Hello)
//     char ch;
//     fscanf(fptr,"%c",&ch);
//     printf("character= %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character= %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character= %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character= %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character= %c\n",ch);
//     fclose(fptr);
// }



// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("new.txt","r");    //inside new.txt(111 222 333)
//     int ch;
//     fscanf(fptr,"%d",&ch);
//     printf("character= %d\n",ch);
//     fscanf(fptr,"%d",&ch);
//     printf("character= %d\n",ch);
//     fscanf(fptr,"%d",&ch);
//     printf("character= %d\n",ch); 
//     fclose(fptr);
// }


// to write char in the text file--------------
// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("new.txt","w");
//     fprintf(fptr,"%c",'m');
//     fprintf(fptr,"%c",'a');
//     fprintf(fptr,"%c",'n');
//     fprintf(fptr,"%c",'g');
//     fprintf(fptr,"%c",'o');
//     fclose(fptr);
// }


//to get char read from the text file one by one by using fgets---------------
// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("new.txt","r");
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
// }


//to write all the char by using fputs----------------------
// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("new.txt","w");
//     fputc('a',fptr);
//     fputc('p',fptr);
//     fputc('p',fptr);
//     fputc('l',fptr);
//     fputc('e',fptr);
// }



// #include <stdio.h>
// int main(){
//     FILE *fp;
//     fp=fopen("hi.txt","r");
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
//     printf("%c\n",fgetc(fp));
// }




// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("p.txt","r");
//     if(fptr==NULL){
//         printf("FILE DOESN`T EXIST");
//     }else{
// fclose(fptr);
//     }
// }


//using fscanf for input from user---------------
// #include <stdio.h>
// int main(){
//     FILE *fptr;
    // fptr=fopen("p.txt","r");---------for read mode
    // char str;------------------------for string
    // fscanf(fptr,"%c",&str);
    // printf("char is: %c",str);

    // int num;-------------------------for num
    // fscanf(fptr,"%d",&num);
    // printf("num is: %d\n",num);
    // fscanf(fptr,"%d",&num);
    // printf("num is: %d\n",num);
    // fscanf(fptr,"%d",&num);
    // printf("num is: %d\n",num);

    // fptr=fopen("p.txt","w");//----------for write mode
    // char ch;
    // fprintf(fptr, "%c",'M');
    // fprintf(fptr, "%c",'A');
    // fprintf(fptr, "%c",'N');
    // fprintf(fptr, "%c",'G');
    // fprintf(fptr, "%c",'O');
//     fclose(fptr);
// }



// #include <stdio.h>
// int main(){
//     FILE *fptr;
    // fptr=fopen("p.txt","r");----------use of fgetc(in read mode)
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));

    // fptr=fopen("p.txt","w");---------use of fputc(in write mode)
    // fputc('A',fptr);
    // fputc('P',fptr);
    // fputc('P',fptr);
    // fputc('L',fptr);
    // fputc('E',fptr);
    // fclose(fptr);
// }


//using EOF to print a sentence in file handling--------------------------
// #include <stdio.h>
// int main(){
//     FILE* fptr;
//     fptr=fopen("p.txt","r");
//     char ch;
//     ch=fgetc(fptr);
//     while(ch!=EOF){
//         printf("%c",ch);
//         ch=fgetc(fptr);
//     }
//     printf("\n");
//     fclose(fptr);
// }


//read 5 numbers from file and print this------------------------
// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("p.txt","r");
//     int n;
//     fscanf(fptr,"%d",&n);
//     printf("num is: %d\n",n);
//     fscanf(fptr,"%d",&n);
//     printf("num is: %d\n",n);
//     fscanf(fptr,"%d",&n);
//     printf("num is: %d\n",n);
//     fscanf(fptr,"%d",&n);
//     printf("num is: %d\n",n);
//     fscanf(fptr,"%d",&n);
//     printf("num is: %d\n",n);
//     fclose(fptr);
// }

//doubt------------------
// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("p.txt","r");
    
//     printf("num is: %d\n",fgetc(fptr));
//     printf("num is: %d\n",fgetc(fptr));
//     printf("num is: %d\n",fgetc(fptr));
//     printf("num is: %d\n",fgetc(fptr));
//     printf("num is: %d\n",fgetc(fptr));
//     flose(fptr);
// }


//3 students details using fprintf
// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("student.txt","w");
//     char name[50];
//     int age;
//     float cgpa;
//     printf("enter name: ");
//     scanf("%s",name);
//     printf("enter age: ");
//     scanf("%d",&age);
//     printf("enter cgpa: ");
//     scanf("%f",&cgpa);
//     fprintf(fptr,"%s\t",name);
//     fprintf(fptr,"%d\t",age);
//     fprintf(fptr,"%.1f\t",cgpa);
//     printf("\n");
//     printf("enter name: ");
//     scanf("%s",name);
//     printf("enter age: ");
//     scanf("%d",&age);
//     printf("enter cgpa: ");
//     scanf("%f",&cgpa);
//     fprintf(fptr,"%s\t",name);
//     fprintf(fptr,"%d\t",age);
//     fprintf(fptr,"%.1f\t",cgpa);
//     printf("\n");
//     printf("enter name: ");
//     scanf("%s",name);
//     printf("enter age: ");
//     scanf("%d",&age);
//     printf("enter cgpa: ");
//     scanf("%f",&cgpa);
//     fprintf(fptr,"%s\t",name);
//     fprintf(fptr,"%d\t",age);
//     fprintf(fptr,"%.1f\t",cgpa);
//     fclose(fptr);
// }


//wap to print even numbers from 1 to num and print the num in file-----------
// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("new.txt","w");
//     int num;
//     printf("enter num: ");
//     scanf("%d",&num);
//     for(int i=1;i<num;i++){
//         if(i%2==0){
//             fprintf(fptr,"%d ",i);
//         }
//     }
//     fclose(fptr);
// }




// #include<stdio.h>
// int main(){
//     FILE* fptr;
//     fptr=fopen("file.txt","r");
//     int a,b;
//     fscanf(fptr,"%d",&a);
//     fscanf(fptr,"%d",&b);
//        fclose(fptr);
//     fptr=fopen("file.txt","w");
//        fprintf(fptr,"%d",a+b);
//        fclose(fptr);
// }


// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("file.txt","r");
//     if(fptr==NULL){
//         printf("not");
//     }
//     printf("yes");
//     fclose(fptr);
// }


// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("file.txt","r");
//     int a,b;
//     fscanf(fptr,"%d",&a);
//     fscanf(fptr,"%d",&b);
//     fclose(fptr);
//     fptr=fopen("file.txt","w");
//     fprintf(fptr,"%d",a*b);
//     fclose(fptr);
// }



// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("student.txt","r");
//     char text[300];
//     // fputc('t',fptr);
//     // fprintf(fptr,"hello world");
//     // fputs("hello",fptr);       //()
//     // fgets(text,200,fptr);
//     // fscanf(fptr,"%s",text);
//     // printf("%s",text);
//     // fclose(fptr);
// }