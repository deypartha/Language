// ***Auto (by default=======)
// #include <stdio.h>
// int main(){
//     int a=10,b=50;
// {
//     int a=20,c=40;
//     printf("a, c is : %d%d",a,c);
//     {
//         int b=15,d=25;
//         printf("a,b,c,d: %d%d%d%d",a,b,c,d);
//     }
//     printf("a,b,c,d: %d%d%d%d",a,b,c);
// }
// printf("a,b,c,d: %d%d%d%d",a,b);
// }


// Auto=================
// #include <stdio.h>
// void fun(){
//     int a=10;
//     printf("%d\n",a);
// }
// void main(){
//     fun(); //10
//     fun(); //10
//     fun(); //10
// }

//static ()=================
// #include<stdio.h>
// void fun(){
//     static a=10;
//     ++a;
//     printf("%d\n",a);
// }
// void main(){
   
//     fun(); //16
//     fun(); //17
//     fun(); //18
// }


// #include <stdio.h>
// int main()
// {
// static int a = 3;
// printf("%d", a --);
// return 0;
// }