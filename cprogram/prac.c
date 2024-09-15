
// #include <stdio.h>
// int main(){
//     int a;
//     printf("enter a:");
//     scanf("%d",&a);
//     printf("a*3: %d",a*3);
//     return 0;
// }


// //write a program to find sum of two number
// #include <stdio.h>
// int main(){
//     int a,b;   
//     printf("enter a: ");  55
//     scanf("%d",&a);
//     printf("enter b: ");   89
//     scanf("%d",&b);
//     printf("the sum of two number: %d", a+b);   144
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
//         printf("%d",i+i);
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int price[5];
//     int i,sum=0;
//     float gst;
//     for (i=0;i<5;i++){
//         printf("enter price[i]: ");
//         scanf("%d",&price[i]);
//     }
//     for (i=0;i<5;i++){
//         sum=sum+price[i];
//     }
//     printf("total price: %d\n",sum);
//     gst=sum+(sum*0.18);
//     printf("gst is : %f\n",gst);
// }


// #include <stdio.h>
// int main(){
//     float price[]={100.0,200.0,300.0};
//     float i;
//     // for (i=0;i<3;i++){
//         // printf("enter price: ");
//         // scanf("%f",&price[i]);
//     // }
//     price[0]=(price[0]+(0.18*price[0]));
//     price[1]=(price[1]+(0.18*price[1]));
//     price[3]=(price[2]+(0.18*price[2]));
//     printf("%f\n",price[0]);
//     printf("%f\n",price[1]);
//     printf("%f\n",price[2]);
// }



// #include <stdio.h>
// int main(){
//     int arr[]={1,2,3,5,2,6,3};
//     int i,j,k;
//     for (i=0;i<7;i++){
//         for (j=i+1;j<7;j++){
//             if (arr[i]==arr[j]){
//                 printf("%d\t",arr[j]);
//                 for (k=j;k<8;k++){
//                     arr[k]=arr[k+1];
//                 }
//             }
//         }
//         printf("%d\t",arr[i]);
//     }
// }


// #include<stdio.h>
// int main(){
//     int arr[3][3],i,j,brr[3][3];
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d  ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d  ",brr[i][j]);
//         }
//         printf("\n");
//     }
//     int p[i][j];
//      for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             p[i][j]=arr[i][j]+brr[i][j];
            
//         }
//         printf("\n");
//     }
//      for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d  ",p[i][j]);
//         }
//         printf("\n");
//     }
// }




// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main(){
//     int a,i;
//     scanf("%d",&a);
//     int arr[a];
//     for(i=0;i<a;i++){
//         scanf("%d",&arr[i]);
//     }
    
//     int sum =0;
//     for(i=0;i<a;i++){
//         sum=sum+arr[i];
//     }
//     printf(" sum is: %d",sum);
// }


// #include <stdio.h>
// int main(){
//     int a,b;
//     float i,j;
//     scanf("%d%d",&a,&b);
//     scanf("%f%f",&i,&j);
//     int p=a+b;
//     int q=a-b;
//     int m=i+j;
//     printf("%d",m);
// }



// #include <stdio.h>
// int main(){
//     int a,b,c,d;
//     printf("enter ele: ");
//     scanf("%d%d%d%d",&a,&b,&c,&d);
//     if(a>b && a>c && a>d){
//         printf("%d",a);
//     }
//     else if(b>c && b>d && b>a){
//         printf("%d",b);
//     }
//     else if(c>a && c>b && c>d){
//         printf("%d",c);
//     }
//     else{
//         printf("%d",d);
//     }
// }


// #include <stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j;
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//            printf("enter marks: ");
//            scanf("%d",&arr[i][j]); 
//         }
//     }
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//            printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("math phy eng total per \n");
    
//     printf("%d   %d   %d   %d  %d\n",arr[0][0],arr[0][1],arr[0][2],(arr[0][0]+arr[0][1]+arr[0][2]),((arr[0][0]+arr[0][1]+arr[0][2])/3));
//     printf("%d   %d   %d   %d  %d\n",arr[1][0],arr[1][1],arr[1][2],(arr[1][0]+arr[1][1]+arr[1][2]),((arr[1][0]+arr[1][1]+arr[1][2])/3));
//     printf("%d   %d   %d   %d  %d\n",arr[2][0],arr[2][1],arr[2][2],(arr[2][0]+arr[2][1]+arr[2][2]),((arr[2][0]+arr[2][1]+arr[2][2])/3));
// }



// #include <stdio.h> 
// int main(){
//     int arr[3][3],brr[3][3];
//     int i,j,k;
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//            printf("enter marks: ");
//            scanf("%d",&arr[i][j]); 
//         }
//     }
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//            printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//            printf("enter marks: ");
//            scanf("%d",&brr[i][j]); 
//         }
//     }
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//            printf("%d ",brr[i][j]);
//         }
//         printf("\n");
//     }
//     int mul[3][3];
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             mul[i][j]=0;
//             for(k=0;k<3;k++){
//                 mul[i][j]+=arr[i][k]*brr[k][j];
//             }
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//            printf("%d ",mul[i][j]);
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,rev=0;
//     printf("enter num: ");
//     scanf("%d",&i);
//     int co=0;
//     while(i!=0){
//         int rem=i%10;
//         rev=rev*10+rem;
//         i=i/10;
//         ++co;
//     }
//     printf("count is: %d\n",co);
//     printf("reverse is:  %d\n",rev); 
// }


// #include<stdio.h>
// void sum(){
//     int i,arr[]={10,20,30,40,50};
//     int sum=0;
//     for (i=0;i<5;i++){
//         sum=sum+arr[i];
//     }
//     printf("sum is: %d",sum);
// }

// int main(){
//     sum();
// }


// #include <stdio.h>
// void swap(int a,int b){
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     int temp=a;
//     a=b;
//     b=temp;
//     printf("a is: %d\n",a);
//     printf("b is: %d\n",b);
// }
// int main(){
//     swap('a','b');
// }



// #include <stdio.h>
// int main(){
//     int i,j;
//     int arr[]={1,8,2,7,5};
//     int t;
//     int size=5;
//     for (i=0;i<size-1;i++){
//         for (j=i+1;j<size;j++){
//             if (arr[i]>arr[j]){
//                 t=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=t;
//             }
//         }
//     }
//     for (i=0;i<size;i++){  
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,j,t;
//     int arr[5];
//     for (i=0;i<5;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<4;i++){
//         for (j=i+1;j<5;j++){
//             if(arr[i]>arr[j]){
//                 t=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=t;
//             }
//         }
//     }
//     for (i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,j,k;
//     int arr[]={1,2,5,3,3,8,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<n;i++){
//         for (j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 for(k=j;k<n-1;k++){
//                     arr[k]=arr[k+1];
//                 }
//                 n--;
//                 j--;
//             }
            
//         }
//     }
//     for (i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,j,k,arr[]={10,20,30,50,10,60};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (i=0;i<n;i++){
//         for (j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 for(k=j;k<n-1;k++){
//                     arr[k]=arr[k+1];
//                 }
//                 n--;
//                 j--;
//             }
//         }
//     }
//     for (i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include<stdio.h>
// int main(){
//     int arr[]={1,2,1,3,5};
//     int i,j;
//     for(i=0;i<5;i++){
//         int is_duplicate=1;
//         for(j=0;j<i;j++){
//             if(arr[i]==arr[j]){
//               is_duplicate=0;
//               break;
//             }
//         }
//         if(is_duplicate){
//             printf("%d ",arr[i]);
//         }
//     }
// }


// #include <stdio.h>
// int main(){
//     char ch[]={'P','a','r','t','h','a',' ','D','e','y','\0'};
//     char p[]="partha dey";
//     int l1=sizeof(p);
//     int l=sizeof(ch);
//     printf("%d\n",l1);
//     printf("%d\n",l);
// }



// #include <stdio.h>
// int main(){
//     int i,j;
//     int lb,ub;
//     printf("enter lb: ");
//     scanf("%d",&lb);
//     printf("enter ub: ");
//     scanf("%d",&ub);  
//     for (i=lb;i<=ub;i++){
//         int flag=1;
//         for (j=2;j<=i/2;++j){
//             if (i%j==0){
//                 flag=0;
//                 break;
//             }
//         }   
//         if (flag==1){
//             printf("%d ",i);      
//     }
//     }
// }


// #include <stdio.h>
// void chprime(){
//     int i,j,lb,hb;
//     lb=10,hb=30;
//     for(i=lb;i<=hb;i++){
//         int flag=1;
//         for(j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag=0;
//                 break;
//             }
//         }
//         if (flag==1){
//             printf("%d ",i);
//         }
//     }
// }
// int main(){
//     int i,j,lb,hb,flag;
//     chprime();
// }


// #include <stdio.h>
// #include <math.h>
// int main(){
//     int sum=0,rem;
//     int num;
//     printf("enter num: ");
//     scanf("%d",&num);
//     int org=num;
//     while(num!=0){
//         rem=num%10;
//         sum+=pow(rem,3);
//         num/=10;
//     }
//     printf("%d\n",sum);
//     // printf("%d\n",num);
//     if (org==sum){
//         printf("armstrong num: %d",org);
//     } 
//     else{
//         printf("not : %d",org);
//     }
// }



// #include <stdio.h>
// #include <math.h>

// int main() {
//     int sum = 0, rem;
//     int num;
//     printf("enter num: ");
//     scanf("%d", &num);
//     int org = num;
//     while (num != 0) {
//         rem = num % 10;
//         sum += pow(rem, 3);
//         num /= 10; // Corrected here: Update num, not org
//     }
//     printf("Sum of cubes of digits: %d\n", sum);
//     if (org == sum) {
//         printf("%d is an Armstrong number.\n", org);
//     } else {
//         printf("%d is not an Armstrong number.\n", org);
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int arr[]={1,1,2,2,2,3,4,4,5,5};
//     int i,j=0;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<size;i++){
//         for (j=0;j<size;j++){
//         if(arr[j]!=arr[i]){
//             arr[++j]=arr[i];
//             printf("%d",arr[j+1]);
//         }
//         }
//     }
// }



// Write a program in C to find the sum of all elements of the array.

// #include <stdio.h>
// int  main(){
//     int arr[5];
//     int i;
//     int n=sizeof(arr)/sizeof(arr[0]);
    
//     for(i=0;i<n;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     // for(i=n-1;i>=0;i--){
//     //     printf("%d ",arr[i]);
//     // }
//     // int sum=0;
//     // for(i=0;i<n;i++){
//     //     sum=sum+arr[i];
//     // }
//     // printf("sum is: %d",sum);
//     int j,count_duplicate=0;
//     int count_unique=0,is_unique=1;
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[j]==arr[i]){
//                 count_duplicate++;
//                 break;
//             }
//            else if(arr[j]!=arr[i]){
//                 count_unique++;
//                 break;
//             }
//         }
//         printf("count_unique is: %d",arr[i]);
//     }
//     printf("count_duplicate is: %d",count_duplicate);
    // printf("count_unique is: %d",arr[i]);
// }


// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     for(i=0;i<5;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
    // for(i=0;i<4;i++){
    //     for(j=i+1;j<5;j++){
    //         if(arr[j]>arr[i]){
    //            int temp=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;
    //         }
    //     }
    // }

    // for(i=0;i<4;i++){
    //     for(j=i+1;j<5;j++){
    //         if(arr[j]<arr[i]){
    //             int temp=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;
    //         }
    //     }
    // }
    // for(i=0;i<5;i++){
    //     printf("%d ",arr[i]);
    // }
// }



//Write a program in C to merge two arrays of the same size sorted in descending order.
// #include <stdio.h>
// int main(){
//     int arr[3],brr[3],crr[6];
//     int i,j;
//     for(i=0;i<3;i++){
//         printf("enter 1st arr: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<3;i++){
//         printf("enter 2nd arr: ");
//         scanf("%d",&brr[i]);
//     }
//     for(i=0;i<3;i++){
//         crr[i]=arr[i];
//         crr[i+3]=brr[i];
//     }
//     printf("original array is: \n");
//     for(i=0;i<6;i++){
//         printf("%d ",crr[i]);
//     }
//     printf("\n");
//     for(i=0;i<5;i++){
//         for(j=i+1;j<6;j++){
//             if(crr[j]>crr[i]){
//                 int temp=crr[i];
//                 crr[i]=crr[j];
//                 crr[j]=temp;
//             }
//         }
//     }
//     printf("decending order array is: \n");
//    for(i=0;i<6;i++){
//     printf("%d ",crr[i]);
//    }
//    printf("\n");
//    for(i=0;i<5;i++){
//         for(j=i+1;j<6;j++){
//             if(crr[j]<crr[i]){
//                 int temp=crr[i];
//                 crr[i]=crr[j];
//                 crr[j]=temp;
//             }
//         }
//     }
//     printf("ascending order array is: \n");
//     for(i=0;i<6;i++){
//         printf("%d ",crr[i]);
//     }
// }


//9. Write a program in C to find the maximum and minimum elements in an array.
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



// #include <stdio.h>
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
//     int max=1;
//     for(i=0;i<4;i++){
//         for(j=i+1;j<5;j++){
//             if(arr[j]>arr[i]){
//                 max=1;
//             }
//         }
//     }
//     if(max==1){
//         printf("%d",arr[i]);
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
//     printf("\n");
//     for(i=0;i<5;i++){
//         // if(arr[i]%2==0){
//         //     printf("%d ",arr[i]);
//         // }
//         if(arr[i]%2!=0){
//             printf("%d ",arr[i]);
//         }
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
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     for(i=0;i<4;i++){
//         for(j=i+1;j<5;j++){
//             if(arr[j]>arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     // for(i=0;i<5;i++){
//         printf("%d ",arr[1]);
//     // }
// }


// #include <stdio.h>
// int main(){
//     int arr[]={2,3,5,6,9};
//     int i,j;
//     // for(i=1;i<5;i++){
//     //     printf("%d ",arr[i]);
//     // }
//     int pos;
//     printf("enter position: ");
//     scanf("%d",&pos);
//     for(i=0;i<4;i++){
//         if()
//         for(j=1;j<5;j++){
//            if(pos)
//         }
//     }
//     for(i=0;i<4;i++){
//         printf("%d ",arr[i]);
//     }
// }


// #include <stdio.h>
// int main(){
// int r,c;
// r=6;c=6;
// int i,j,value;
// for(i=1;i<=r;i++){
//     for(j=1;j<=c;j++){
//         value=i*j;
//         printf("%d  ",value);
//     }
//     printf("\n");
// }
// }



// #include<stdio.h>
// int sum(int arr[],int n){
//     int sum=0,i;
//     for(i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     printf("sum of array ele is: %d",sum);
// }
// int main(){
//     int arr[]={10,20,30,40,50};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     sum(arr,n);
// }



// #include <stdio.h>
// int main(){
//     int a,b;
//     product(10,20);
// }
// int product(int a,int b){
//     printf("%d ",a*b);
// }



// #include <stdio.h>
// int main(){
//     ap();
//     int a=10;
//     printf("%d",a);
// }
// int ap(){
//     int a;
//     return a;
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



// #include<stdio.h>
// #include<math.h>
// int armstrong(int n) {
//     int temp, rem, sum = 0;
//     temp = n;
//     while (n > 0) {
//         rem = n % 10;
//         sum = sum + (pow(rem,3));
//         n = n / 10;
//     }
//     if (temp == sum) {
//         printf("Armstrong number: %d\n", temp);
//     } else {
//         printf("not an Armstrong number: %d\n", temp);
//     }
// }
// int prime(int n) {
//     int flag = 0, i;
//     for (i = 2; i <= n / 2; i++) {
//         if (n % i == 0) {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0) {
//         printf("prime number: %d\n", n);
//     } else {
//         printf("not a prime number: %d\n", n);
//     }
// }
// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     armstrong(n);
//     prime(n);
//     return 0;
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
//         int temp=arr[0];
//         arr[0]=arr[9];
//         arr[9]=temp;
//     printf("\n");
//     for(i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int num,rem,rev=0;
//     printf("enter num: ");
//     scanf("%d",&num);
//     while(num!=0){
//         rem=num%10;
//         rev=(rev*10)+rem;
//         num/=10; 
//     }
//     printf("reverse form is: %d",rev);
// }




// Write a c program toprint add of even and odd postion add in array
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
//     printf("\n");
//     int even_sum=0,odd_sum=0;
//     for(i=0;i<5;i++){
//         if(i%2==0){
//             even_sum+=arr[i];
//         }
//         else{
//             odd_sum+=arr[i];
//         }
//     }
//     printf("sum of even pos is: %d\n",even_sum);
//     printf("sum of odd pos is: %d\n",odd_sum);
// }



// #include<stdio.h>
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
//     int det=(arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1])))-(arr[0][1]*((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][1])))+(arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0])));
//     printf("determinant of the matrix is: %d\n",det);
// }



// #include<stdio.h>
// int main(){
//     int arr[10];
//     int i,j;
//     for(i=0;i<10;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     printf("original array is: ");
//     for(i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     for(i=0;i<9;i++){
//         for(j=i+1;j<10;j++){
//             if(arr[j]>arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     printf("sorted array is: ");
//     for(i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[5];
//     static int i=1;
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[]={1,2,5,1,2};
//     int i,j;
//     for(i=0;i<5;i++){
//         int duplicate=1;
//         for(j=0;j<i;j++){
//             if(arr[i]==arr[j]){
//                 duplicate=0;
//             }
//         }
//         if(duplicate)
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[3][3],brr[3][3],p[3][3];
//     int i,j,k;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//            printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//            printf("%d ",brr[i][j]);
//         }
//         printf("\n");
//     }
    
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//            p[i][j]=0;
//            for(k=0;k<3;k++){
//             p[i][j]+=(arr[i][k]*brr[k][j]);
//            }
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",p[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i,j;
//     for(i=0;i<9;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<9;i++){
//         printf("%d ",arr[i]);
//     }
//     int pos=3,val=100;
//    for(i=8;i>=pos-1;i--){
//     arr[i+1]=arr[i];
//    }
//    arr[pos-1]=val;
//    printf("\n");
//     for(i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i,j;
//     for(i=0;i<10;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
//     int val=3;
//     // printf("the given value is: ");
//     // scanf("%d",&val);
//     int count=0;
//     for(i=0;i<10;i++){
//         if(arr[i]==val){
//             count++;
//         }
//     }
//     printf("\n");
//     if(count>=4){
//         printf("3 appears more than 4");
//     }
// }



// #include <stdio.h>
// int taxableIncome; 
// int taxAmount = 0;
// void function_1();
// int main() {
//     int income, d_ppf, d_nps, r_health;
//     printf("Enter your Yearly Income: ");
//     scanf("%d", &income);
//     printf("\nEnter PPF: ");
//     scanf("%d", &d_ppf);
//     printf("\nEnter NPS: ");
//     scanf("%d", &d_nps);
//     printf("\nEnter HEALTH INSURANCE: ");
//     scanf("%d", &r_health);
//     if (d_ppf <= 150000) {
//         income -= d_ppf;
//     } else {
//         income -= 150000;    }
//     if (d_nps <= 50000) {
//         income -= d_nps;
//     } else {
//         income -= 50000;    }
//     if (r_health <= 25000) {
//         income -= r_health;
//     } else {
//         income -= 25000;    }
//     taxableIncome = income;
//     function_1();
//     printf("\nYour Total Tax payable is : %d\n", taxAmount);
//     return 0;}
// void function_1() {
//     printf("Your taxable Income is : %d", taxableIncome);
//     if ((taxableIncome > 300000) && (taxableIncome < 500000)) {
//         taxAmount = taxAmount + (taxableIncome - 300000) * 0.05; }
//     if ((taxableIncome > 500000) && (taxableIncome < 1000000)) {
//         taxAmount = taxAmount + 10000 + (taxableIncome - 500000) * 0.10; // here 10000 = (500000-300000=200000*0.05)   
//          }
//     if (taxableIncome > 1000000) {
//         taxAmount = taxAmount + 10000 + 50000 + (taxableIncome - 1000000) * 0.20; // here 50000 = (1000000-500000=500000*0.10)   
//          }
// }



// #include<stdio.h>
// int main(){
//     int arr[10];
//     int i;
//     for(i=0;i<5;i++){
//         printf("enter num: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
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



// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=3;i<5;i++){
//         arr[i]=arr[i+1];
//     }
//     for(i=0;i<4;i++){
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
//     int flag=1;
//     int find;
//     printf("enter find: ");
//     scanf("%d",&find);
//     for(i=0;i<5;i++){
//         if(arr[i]==find){
//             flag=0;
//         }
//     }
//     if(flag==0){
//         printf("ele found");
//     }
//     else{
//         printf("not found");
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
//     for(i=0;i<4;i++){
//         arr[i]=arr[i+1];
//     }
//     printf("\n");
//     for(i=0;i<4;i++){
//         printf("%d ",arr[i]);
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
//     printf("original matrix is: \n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("primary element are: \n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i==j){
//                 printf("%d ",arr[i][j]);
//             }
//         }
//     }
//     printf("\n");
//     printf("1st row of the matrix is: \n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i==0){
//                 printf("%d ",arr[i][j]);
//             }
//         }
//     }
// }



// #include<stdio.h>
// int main(){
//     int arr[8];
//     int i,j;
//     for(i=0;i<8;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<8;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     for(i=0;i<7;i++){
//         for(j=1;j<8;j++){
//         if(arr[j]>arr[j+1]){
//             int temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
//     }
//     }
//     for(i=0;i<8;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include<stdio.h>
// int main(){
//     int n=5;
//     while(n++)
//     printf("%d ",n);
// }



// #include <stdio.h>
// int main(){
//     int i,j,b;
//     for (i=5;i>=1; i--)
//     {
//         for(b=4;b>=i;b--){
//             printf(" ");
//         }
//         for (j=i;j>=1;j--)
//         {
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
// struct student{
//     int roll;
//     char name[10];
//     float marks;
// };
// int main(){
//     struct student s1[3];
//     int i;
//     for(i=0;i<3;i++){
//         printf("enter roll: ");
//         scanf("%d",&s1[i].roll);
//         printf("enter name: ");
//         scanf("%s",&s1[i].name);
//         printf("enter marks: ");
//         scanf("%f",&s1[i].marks);
//     }
//     for(i=0;i<3;i++){
//         printf("%d %s %.1f\n",s1[i].roll,s1[i].name,s1[i].marks);
//     }
//     int j;
//     for(i=0;i<2;i++){
//         for(j=i+1;j<3;j++){
//             if(s1[i].marks>s1[j].marks){
//                 int temp=s1[i].marks;
//                 s1[i].marks=s1[j].marks;
//                 s1[j].marks=temp;
//             }
//         }
//     } 
//     for(i=0;i<3;i++){
//         printf("%.1f\n",s1[i].marks);
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
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",arr[j][i]);
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[3][3],brr[3][3];
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
//             printf("enter ele: ");
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",brr[i][j]);
//         }
//         printf("\n");
//     }
//     int p[3][3],k;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             p[i][j]=0;
//             for(k=0;k<3;k++){
//                 p[i][j]+=(arr[i][k]*brr[k][j]);
//             }
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",p[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int i,b,j;
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
// int fibo(int n);
// int main(){
//     int n=10;
//     printf("0 1 ");
//     for(int i=2;i<n;i++){
//         printf("%d ",fibo(i));
//     }
// }
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



// #include<stdio.h>
// int palindromic(char n){
//     return strrev(palindromic(n));
// }
// int main(){
//     char n="madam";
//     if(palindromic(n)==n){
//         printf("palindromic");
//     }
//     else{
//         printf("not");
//     }
// }



// #include <stdio.h>
// #include <string.h>

// int main() {
//    char string[100], rev_string[100];

//    printf("Enter a string: ");
//    gets(string);

//    strcpy(rev_string, string);
//    strrev(rev_string);

//    if(strcmp(string, rev_string) == 0)
//       printf("%s is a palindrome string.\n", string);
//    else
//       printf("%s is not a palindrome string.\n", string);

//    return 0;
// }



// #include <stdio.h>
// int main(){
//     char str[10],rev[10];
//     printf("enter str: ");
//     scanf("%s",&str);
//     strcpy(rev,str);
//     strrev(rev);
//     if(strcmp(rev,str)==0){
//         printf("palindromic");
//     }
//     else{
//         printf("not");
//     }
// }



// #include <stdio.h>
// #include <string.h>

// // Function to reverse the order of words in a string
// void reverseWords(char *str) {
//     int i, j, k;
//     int len = strlen(str);

//     // Reverse the entire string
//     for (i = 0, j = len - 1; i < j; i++, j--) {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }

//     // Reverse each word individually
//     for (i = 0, j = 0; i <= len; i++) {
//         if (str[i] == ' ' || str[i] == '\0') {
//             for (k = j, j = i - 1; k < j; k++, j--) {
//                 char temp = str[k];
//                 str[k] = str[j];
//                 str[j] = temp;
//             }
//             j = i + 1;
//         }
//     }
// }

// int main() {
//     char str[] = "chitkara university";
    
//     printf("Original string: %s\n", str);

//     // Call function to reverse words
//     reverseWords(str);

//     printf("Reversed string: %s\n", str);

//     return 0;
// }



// #include<stdio.h>
// int main(){
//    char str[15];
//    printf("enter str: ");
//    fgets(str,sizeof(str),stdin);
//    int len=strlen(str);
//    printf("%c",str[0]);
//    printf("%c",str[len-2]);
// }


// #include <stdio.h>
// int main(){
//     char str1[10],str2[10];
//     printf("enter str: ");
//     gets(str1);
//     int i,j,flag=0;
//     j=0;
//     for(i=strlen(str1)-1;i>=0;i--){
//         str2[j]=str1[i];
//         j++;
//     }
//     str2[j]='\0';
//     for(i=0;i<=strlen(str1);i++){
//         if(str1[i]!=str2[i]){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//         printf("palindromic");
//     }
//     else{
//         printf("not");
//     }

// }.


// #include <stdio.h>
// int main(){
//     char str[10];
//     printf("enter str: ");
//     gets(str);
//     char i;
//     int count=0;
//     while (str[i]!='\0')
//     {
//         count++;
//         i++;
//     }
//     printf("count id: %d",count);
// }


// #include <stdio.h>
// int main(){
//     int a=9;
//     if(a=8){
//         printf("dn");
//     }
//     else{
//         printf("dl");
//     }
// }



// #include <stdio.h>
// int main(){
//     int a,b=122;
//     for(a=98;a<=b;a++){
//         printf("%c ",a);
//     } 
// }


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


// #include<stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<4;i++){
//         for(j=i+1;j<5;j++){
//             if(arr[j]>arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     // for(i=0;i<5;i++){
//     //     printf("%d ",arr[i]);
//     // }
//     printf("%d\n",arr[0]);
//     printf("%d",arr[1]);
// }



// #include <stdio.h>
// int main(){
//     int i,j;
//     int arr[6];
//     int pos;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("enter pos: ");
//     scanf("%d",&pos);
    
//     for(i=5;i>=pos-1;i--){
//         arr[i+1]=arr[i];
        
//     }
//     arr[pos-1]=10;
//     for(i=0;i<6;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     char st[5];
//     scanf("%s",&st);
//     printf("%.5s",st);//-------------that means total 5 characters are printed
//     printf("%10.5s",st);//-----------that means (.5) denoted as 5 free space in starting
// }


// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter n: ");
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
//     for(i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include<stdio.h>
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
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         int count=1;
//         for(j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//             else{
//                 break;
//             }
//         }
//         printf("%d -> %d\n",arr[i],count);
//         i+=count-1;
//     }
// }



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



// #include <stdio.h>

// int main(){
// 	int arr[5];
// 	int i;
// 	for(i=0;i<=4;i++){
//         printf("enter ele: ");
// 		scanf("%d",&arr[i]);
// 	}
// 	int sum=0;
// 	for(i=0;i<=4;i++){
// 		sum=sum+arr[i];
// 	}
// 	printf("%d",sum);
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



// #include <stdio.h>
// int main(){
//     char str[10][10];
//     fgets(str,10,stdin);
//     int i,j;
//     int len=strlen(str);
//     for(i=0;i<len;i++){
//         if(str[i][j]<str[i+1][j]){
//             str[i][j]=str[i+1][j];
//         }
//         printf("%s ",str[i][j]);
//     }
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



// #include <stdio.h>
// int main(){
//     char str[20];
//     scanf("%s",&str);
//     int i;
//     for(i=0;i<strlen(str);i++){
//         int count=0;
//         if(str[i]>='a' && str[i]<='z'){
//             count++;
//         }
//         else if(str[i]>='A' && str[i]<='Z'){
//             count++;
//         }
//         else if(str[i]==str[i+1]){
//             count++;
//             continue;
//         }
//         printf("%c %d\n",str[i],count);
//     }
// }


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


// #include <stdio.h>
// int main(){
//     FILE *ptr;
//     ptr=fopen("hello.txt","w");
//     // printf("%s",ptr);
//     fclose(ptr);
// }




// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[200],new[200];
//     printf("enter full name: ");
//     fgets(str,200,stdin);
//     int i=0,j=0,k=0,c=0;
//     new[j++]=' ';
//     for(i=0;str[i]!='\0';i++){
//         new[j++]=str[i];
//     }
//     new[i]='\0';
//     str[0]='\0';
//     for(i=0;new[i]!='\0';i++){
//         if(new[i]==' ' && new[i+1]!=0){
//             str[k++]=toupper(new[i+1]);
//             str[k++]='.';
//             c=i;
//         }
//     }
//     k--;
//     for(i=c+2;new[i]!='\0';i++){
//         str[k++]=tolower(new[i]);
//     }
//     new[k]='\0';
//     printf("%s",new);
// }


// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i=0;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",i+j);
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,j,k,n=6,c;
//     for(i=0;i<n;i++){
//         for(k=1;k<n-i;k++){
//             printf(" ");
//         }
//         for(j=0;j<=i;j++){
//             if(i==0||j==0){
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

// #include <stdio.h>
// #include<string.h>
// int main(){
//     char s1[20],s2[20];
//     printf("enter 1st name: ");
//     fgets(s1,sizeof(s1),stdin);
//     printf("enter 2nd name: ");
//     fgets(s2,sizeof(s2),stdin);
//     int i,j;
//     for(i=0;s1[i]!='\0';i++);
//     for(j=0;s2[j]!='\0';j++,i++){
//         s1[i]=s2[j];
//     }
//     s1[i]='\0';
//     printf("%s ",s1);
// }



//find the word---------------------------


// #include<stdio.h>
// int main(){
//     char str[20];
//     printf("enter string: ");
//     gets(str);
//     int i=0;
//     int flag=1;
//     int len=strlen(str);
//     while(i<len){
//         if(str[i]!=str[len-i-1]){
//             flag=0;
//             // break;
//         }
//         i++;
//     }
//     if(flag){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
// }


// #include <stdio.h>
// int main(){
//     char st[50],st2[50];
//     int i,j,flag=1;
//     printf("enter st: ");
//     scanf("%[^\n]",&st);
//     getchar();
//     printf("enter st2: ");
//     scanf("%[^\n]",&st2);
//     int l1=strlen(st);
//     int l2=strlen(st2);
//     for(i=0;i<l1;i++){
//         for(j=0;j<l2;j++){
//             if(st[i+j]!=st2[j]){
//                 break;
//             }
//         }
//         if(j==l2){
//             printf("found at: %d",i+1);
//             break;
//         }
//     }
// }


// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<len;i++){
//         printf("entre ele: ");
//         scanf("%d",&arr[i]);
//     }
//     int pos;
//     printf("enter pos: ");
//     scanf("%d",&pos);
//     for(i=pos;i<4;i++){
//         arr[i]=arr[i+1];
//     }
//     for(i=0;i<len-1;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>

// int main(void) {
// 	// your code goes here
// 	int n;
// 	scanf("%d",&n);
// 	int arr[n];
// 	int i,j;
// 	for(i=0;i<n;i++){
// 	    scanf("%d",&arr[i]);
// 	}
// 	for(i=0;i<n-1;i++){
// 	    for(j=i+1;j<n;j++){
// 	        if(arr[j]>arr[i]){
// 	            int temp=arr[i];
// 	            arr[i]=arr[j];
// 	            arr[j]=temp;
// 	        }
// 	    }
// 	}
// 	// printf("\n");
// 	printf("%d",arr[0]);

// }



// #include<stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int i,j;
//     int len=strlen(str);
//     int count;
//     for(i='a';i<='z';i++){
//         count=0;
//         for(j=0;j<len;j++){
//             if(i==str[j]){
//                 count++;
//             }
//         }
//         if(count>0){
//             printf("%c %d\n",i,count);
//         }
//     }
// }



// #include <stdio.h>
// int main(){
//     char a,b;
//     a=5;b=9;
//     printf("a<<b is: %d\n",(a<<2));
//     printf("a>>2 is: %d",(a>>2));
// }


// #include <stdio.h>
// int main(){
//     int a;
//     printf("%lu",sizeof(a));
// }



// Armstrong number--------------------------------------
// #include <stdio.h>
// #include <math.h>
// int armstrong(int n){
//     int count=0,rem=0,sum=0;
    
//     int temp=n;
//     int original=n;
//     while(temp>0){
//         ++count;
//         temp/=10;
//     }
//     temp=n;
//     while(temp>0){
//         rem=temp%10;
//         sum=sum+(pow(rem,count));
//         temp/=10;
//     }
//     return original==sum;
// }
// int main(){
//     int n;
//     printf("enter num: ");
//     scanf("%d",&n);
//     if(armstrong(n)){
//         printf("Yes");
//     }
//     else{
//         printf("No");
//     }
// }


// check prime number---------------------------------
// #include <stdio.h>
// int main(){
//     int num;
//     printf("enter num: ");
//     scanf("%d",&num);
//     int i,flag=1;
//     for(i=2;i<=num/2;i++){
//         if(num%i==0){
//             flag=0;
//             break;
//         }
//     }
//     if(flag==1){
//         printf("yes: %d",num);
//     }
//     else{
//         printf("not: %d",num)
// ;    }
// }


// #include <stdio.h>
// int main(){
//     int lb,hb;
//     printf("enter 1st: ");
//     scanf("%d",&lb);
//     printf("enter 2nd: ");
//     scanf("%d",&hb);
//     int i,j;
//     for(i=lb;i<hb;i++){
//         int flag=1;
//         for(j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag){
//             printf("%d ",i);
//         }
//     }
// }


// print max from array------------------------------
// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i;
//     for(i=0;i<5;i++){
//         printf("entre ele: ");
//         scanf("%d",&arr[i]);
//     }
//     int max=arr[0];
//     for(i=0;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     printf("%d",max);
// }


// print duplicate element from array-----------------------
// #include <stdio.h>
// int main(){
//     int arr[10];
//     int i,j;
//     for(i=0;i<10;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<9;i++){
//         for(j=i+1;j<10;j++){
//             if(arr[j]==arr[i]){
//                 printf("%d ",arr[j]);
//             }
//         }
//     }
// }


//frequency of each element in the array--------------------
// #include <stdio.h>
// int main(){
//     int arr[10];
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
//     for(i=0;i<len-1;i++){
//         for(j=i+1;j<len;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     int count=0;
//     for(i=0;i<len;i++){
//         count=1;
//         for(j=i+1;j<len;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 i+=count-1;
//                 break;
//             }
//         }
//         printf("%d->%d\n",arr[i],count);
//     } 
// }


// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     for(j=0;j<9;j++){
//         int count=0;
//         for(i=0;i<5;i++){
//             if(j==arr[i]){
//                 count++;
//             }
//         }
//         if(count>0){
//             printf("%d %d \n",j,count);
//         }
//     }
// }



//check leap year--------------------------
// #include <stdio.h>
// int main(){
//     int year;
//     printf("enter year: ");
//     scanf("%d",&year);
//     if(year%400==0){
//         printf("leap year");
//     }
//     else if(year%4==0 && year%100!=0){
//         printf("leap year");

//     }
    
//     else{
//         printf("not a leap year");
//     }
// }



// #include <stdio.h>
// #include <math.h>
// int main(){
//     int choice;
//     float area,radius,ln,br,hg,base;
//     printf("enter choice: ");
//     scanf("%d",&choice);
//     switch(choice){
//         case 1:{
//             printf("enter length: ");
//             scanf("%f",&ln);
//             printf("enter bredth: ");
//             scanf("%f",&br);
//             area=ln*br;
//             printf("%.2f\n",area);
//         }
//         case 2:{
//             printf("enter base: ");
//             scanf("%f",&base);
//             printf("enter heigth: ");
//             scanf("%f",&hg);
//             area=(base*hg)/2;
//             printf("%.2f\n",area);
//         }
//         case 3:{
//             printf("enter radius: ");
//             scanf("%f",&radius);
//             area=3.14*pow(radius,2);
//             printf("%.2f\n",area);
//         }
//     }
// }


// An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). 
// A company manager wants to make the production of both types of vehicle according to the given data below:----------------------------
// #include <stdio.h>
// int main(){
//     int tot_veh,tot_whe;
//     printf("enter total vehicle: ");
//     scanf("%d",&tot_veh);
//     printf("enter total wheel: ");
//     scanf("%d",&tot_whe);
//     int x=((4*tot_veh)-tot_whe)/2;
//     printf("number of total two wheelers are: %d\n",x);
//     printf("total number of four wheels are: %d\n",(tot_veh-x));
// }



// month days using switch case------------------------------
// #include <stdio.h>
// int main(){
//     int mn_no;
//     printf("enter month number: ");
//     scanf("%d",&mn_no);
//     switch (mn_no)
//     {
//     case 1:{
//         printf("31");
//         break;
//     }
//     case 2:{
//         printf("28");
//         break;
//     }
//     case 3:{
//         printf("31");
//         break;
//     }
//     case 4:{
//         printf("30");
//         break;
//     }
//     case 5:{
//         printf("31");
//         break;
//     }
//     case 6:{
//         printf("30");
//         break;
//     }
//     case 7:{
//         printf("31");
//         break;
//     }
//     case 8:{
//         printf("31");
//         break;
//     }
//     case 9:{
//         printf("30");
//         break;
//     }
//     case 10:{
//         printf("31");
//         break;
//     }
//     case 11:{
//         printf("30");
//         break;
//     }
//     case 12:{
//         printf("31");
//         break;
//     }
//     default:
//     printf("invalid input");
//         break;
//     }
// }




// #include <stdio.h>
// int main(){
//     int total_class;
//     float attend;
//     char ML;
//     printf("enter total class: ");
//     scanf("%d",&total_class);
//     printf("total attendance: ");
//     scanf("%f",&attend);
//     printf("ML--");
//     scanf(" %c",&ML);
//     float percent=(attend/total_class)*100;
//     if(percent<75){
//         if(ML=='Y'||ML=='y'){
//             printf("you can seat");
//         }
//         else{
//             printf("you can not seat");
//         }
//     }
//     else{
//         printf("you can seat");
//     }
// }



//Unique element from an array-------------------
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
//     printf("\n");
//     // int flag=1;
//     for(i=0;i<n;i++){
//         int flag=1;
//         for(j=0;j<n;j++){
//             if(i!=j && arr[j]==arr[i]){
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag==1){
//             printf("%d ",arr[i]);
//         }
//     }
// }




//merge two array and sort the array and count the frequency-------------------------
// #include <stdio.h>
// int main(){
//     int s1,s2;
//     int arr[3],brr[3],crr[3];
//     int i,j;
//     printf("enter 1st size: ");
//     scanf("%d",&s1);
//     printf("enter 2nd size: ");
//     scanf("%d",&s2);
//     for(i=0;i<s1;i++){
//         printf("enter 1st: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<s2;i++){
//         printf("enter 2nd: ");
//         scanf("%d",&brr[i]);
//     }
//     for(i=0;i<s1;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     for(i=0;i<s2;i++){
//         printf("%d ",brr[i]);
//     }
//     printf("\n");
//     int s3=s1+s2;
//     for(i=0;i<s1;i++){
//         crr[i]=arr[i];
//     }
//     for(i=0;i<s1;i++){
//         crr[i]=brr[i];
//     }
//     for(i=0;i<s3-1;i++){
//         for(j=i+1;j<s3;j++){
//             if(crr[i]<crr[j]){
//                 int temp=crr[i];
//                 crr[i]=crr[j];
//                 crr[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<s3;i++){
//         printf("%d ",crr[i]);
//     }
//     printf("\n");
//     int count=0;
//     for(i=0;i<s3;i++){
//         count=1;
//         for(j=i+1;j<s3;j++){
//             if(crr[i]==crr[j]){
//                 count++;
//                 i+=count-1;
//             }
//         }
//         printf("%d->%d\n",crr[i],count);
//     }
// }


//Write a program in C to separate odd and even integers into separate arrays.--------------------
// #include <stdio.h>
// int main(){
//     int s1;
//     printf("enter size: ");
//     scanf("%d",&s1);
//     int arr[s1];
//     int i,j;
//     for(i=0;i<s1;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<s1;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     printf("Even ele are: \n");
//     for(i=0;i<s1;i++){
//         if(arr[i]%2==0){
//             printf("%d ",arr[i]);
//         }
//     }
//     printf("\n");
//     printf("Odd ele are: \n");
//     for(i=0;i<s1;i++){
//         if(arr[i]%2!=0){
//             printf("%d ",arr[i]);
//         }
//     }
// }


//insert an element in a specific position-----------
// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i,j;
//     for(i=0;i<4;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<4;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     int pos;
//     printf("enter position: ");
//     scanf("%d",&pos);
//     for(i=4;i>=pos;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos]=10;
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }


// print secondary element in an 2d array---------------
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
//     i=0;j=2;
//     while(i<3 && j>=0){
//         printf("%d ",arr[i][j]);
//         i++;
//         j--;
//     }
// }



// Sum of two 2d array--------------------
// #include<stdio.h>
// int main(){
//     int n1,n2;
//     scanf("%d %d",&n1,&n2);
//     int arr[n1][n2],brr[n1][n2],crr[n1][n2];
//     int i,j;
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("enter ele: ");
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("%d ",brr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             crr[i][j]=arr[i][j]+brr[i][j];
//         }
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("%d ",crr[i][j]);
//         }
//         printf("\n");
//     }
// }


//Matrix multiplication------------------
// #include<stdio.h>
// int main(){
//     int n1,n2;
//     scanf("%d %d",&n1,&n2);
//     int arr[n1][n2],brr[n1][n2],crr[n1][n2];
//     int i,j,k;
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("enter ele: ");
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("%d ",brr[i][j]);
//         }
//         printf("\n");
//     }
//     int sum=0;
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             sum=0;
//             for(k=0;k<n1;k++){
//                 sum+=(arr[i][k]*brr[k][j]);
//                 crr[i][j]=sum;
//             }
//         }
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("%d ",crr[i][j]);
//         }
//         printf("\n");
//     }
// }



///transpose of a 2d matrix-------------------
// #include<stdio.h>
// int main(){
//     int n1,n2;
//     scanf("%d %d",&n1,&n2);
//     int arr[n1][n2];
//     int i,j;
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<n1;i++){
//         for(j=i+1;j<n2;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }


// check the matrix is identity or not-----------------
//  #include<stdio.h>
// int main(){
//     int n1,n2;
//     scanf("%d %d",&n1,&n2);
//     int arr[n1][n2];
//     int i,j;
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     } 
//     int flag=0;
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//                if((i==j && arr[i][j]!=1)||(i!=j && arr[i][j]!=0)){
//                     flag=1;
//                     break;
//             }
//         }
//         if(flag==1){
//             break;
//         }
//     } 
//     if(flag==0){
//         printf("identity");
//     }
//     else{
//         printf("not identity");
//     }
// }



// merge two array and sort then--------------------
// #include <stdio.h>
// int main(){
//     int n1,n2,n3;
//     scanf("%d %d",&n1,&n2);
//     n3=n1+n2;
//     int a[n1],b[n2],c[n3];
//     int i,j;
//     for(i=0;i<n1;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n1;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\n");
//     for(i=0;i<n2;i++){
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<n2;i++){
//         printf("%d ",b[i]);
//     }
//     printf("\n");
//     for(i=0;i<n1;i++){
//         c[i]=a[i];
//     }
//     for(i=0;i<n2;i++){
//         c[n1+i]=b[i];
//     }
//     for(i=0;i<n3-1;i++){
//         for(j=i+1;j<n3;j++){
//             if(c[i]>c[j]){
//                 int temp=c[i];
//                 c[i]=c[j];
//                 c[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<n3;i++){
//         printf("%d ",c[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[5][5];
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             printf("%d ",i*j);
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main(){
//     int n;
//     int i=0,rem=0,sum=0;
//     printf("enter bin: ");
//     scanf("%d",&n);
//     while(n!=0){
//         rem=n%10;
//         if(rem==1){
//             sum+=(int)pow(2,i);
//         }
//         n/=10;
//         i++;
//     }
//     printf("sum is: %d",sum);
// }


// searching an element from a matrix----------------
// #include <stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     int find;
//     scanf("%d",&find);
//     int flag=1;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(find==arr[i][j]){
//                 printf("yes at arr[%d][%d]",i,j);
//             }
//         }
//     }
// }


// #include <stdio.h>
// int main(){
//     int arr[7];
//     int i,j;
//     for(i=0;i<7;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<7;i++){
//         printf("%d ",arr[i]);
//     }
//     int l=sizeof(arr)/sizeof(arr[0]);
//     printf("\n");
//     for(i=0;i<l-1;i++){
//         for(j=i+1;j<l;j++){
//             if(arr[j]>arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     printf("%d ",(arr[0]-arr[l-2]));
// }



// #include<stdio.h>
// int main(){
//     int arr[7];
//     int i,j;
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<len;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<len;i++){
//         printf("%d ",arr[i]);
//     }
//     for(i=0;i<len-1;i++){
//         for(j=i+1;j<len-1;j++){

//         }
//     }

// }



// #include<stdio.h>
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
    
//     for(int j=0;j<=9;j++){
//         int count=0;
//         for(int i=0;i<5;i++){
//             if(j==arr[i]){
//                 count++;
//                 if(count==1){
//                     printf("%d ",j);
//                 }
//             }
//         }
//     }
//     return 0;
// }


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
//     printf("\n");
//     for(i=0;i<n;i++){
//         int flag=1;
//         for(j=0;j<n;j++){
//             if(i!=j && arr[j]==arr[i]){
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag==1){
//             printf("%d ",arr[i]);
//         }
//     }
// }



// #include<stdio.h>
// int main(){
//     char ch;
//     scanf("%c",&ch);
//     if(isalpha(ch)){
//         printf("%c is a alphabet\n",ch);
//     }
//     else if(isdigit(ch)){
//         printf("%d is a digit\n",ch);
//     }
//     else{
//         printf("%c is a spacial character\n",ch);
//     }
// }
// #include<stdio.h>
// int main(){
//     char ch;
//     scanf("%c",&ch);
//     if(ch>=65 && ch<=90 || ch>=97 && ch<=122){
//         printf("%c is a alphabet\n",ch);
//     }
//     else if(ch>=48 && ch<=57){
//         printf("%d is a digit\n",ch);
//     }
//     else{
//         printf("%c is a spacial character\n",ch);
//     }
// }


//ternary operator to check odd or even
// #include <stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     (num%2==0)?printf("%d is a Even num: ",num):printf("%d is a odd num: ",num);
// }


// Add the digit of roll num and indicate the specific position alphabet--------------
// #include <stdio.h>
// int main(){
//     int roll,rem=0,sum=0; 
//     scanf("%d",&roll);
//     while(roll!=0){
//         rem=roll%10;
//         sum+=rem;
//         roll/=10;
//     }
//     if(sum>27){
//         int r1,sum1=0;
//         while(sum!=0){
//             r1=sum%10;
//             sum1+=r1;
//             sum/=10;
//         }
//         printf("%c",64+sum1);
//     }
//     else{
//         printf("%c",64+sum);
//     }
// }


// input number and add the digit such this way like(124==1-2+4)------------------
// #include <stdio.h>
// int main(){
//     char num[100];
//     int i,sum=0,sign=1;
//     scanf("%s",num);
//     for(i=0;i<strlen(num);i++){
//         int digit=num[i]-'0';
//         sum+=sign*digit;
//         sign=-sign;
//     }
//     printf("sum is: %d",sum);
// }



// #include <stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int len=strlen(str);
//     int i;
//     for(i=0;i<len;i++){
//         if(str[i]>=97 && str[i]<=122){
//             str[i]-=32;
//         }     
//     }
//     printf("%s",str);
// }


// sorting the letter containing in a string-----------------------
// #include <stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int len=strlen(str);
//     int i,j;
//     for(i=0;i<len-1;i++){
//         for(j=i+1;j<len;j++){
//             if(str[i]>str[j]){
//                 char temp=str[i];
//                 str[i]=str[j];
//                 str[j]=temp;
//             }
//         }
//     }
//     printf("%s",str);
// }



// find a character and count its frequency------------------ 
// #include <stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int len=strlen(str);
//     int i,j,count=0;
//     char find;
//     scanf(" %c",&find);
//     for(i=0;i<len;i++){
//         if(find==str[i]){
//             ++count;
//         }
//     }
//     printf("%c=>%d",find,count);
// }



// check password is valid or not-----------------------------
// #include <stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int i,f1=1,f2=1,f3=1,f4=1;
//     int len=strlen(str);
//     for(i=0;i<len;i++){
//         if(str[i]>='a' && str[i]<='z'){
//             f1=0;
//         }
//     }
//     for(i=0;i<len;i++){
//         if(str[i]>='A' && str[i]<='Z'){
//             f2=0;
//         }
//         else if(str[i]=='@'||str[i]=='%'||str[i]=='$'||str[i]=='#'){
//             f3=0;
//         }
//         else if(str[i]>='0' && str[i]<='9'){
//             f4=0;
//         }
//     }
//     if(f1==0 && f2==0 && f3==0 && f4==0){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
// }



// #include <stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int i,j,rem=0,sum=0;
//     for(i=1;i<num;i++){
//         j=1;
//         while(j<i){
//             if(i%j==0){
//                 sum+=i;
//                 i++;
//             }
            
//         }
//         if(sum==i){
//             printf("%d",i);
//         }
//     }
// }



// #include <stdio.h>
// int main(){
    // int lb=10;
    // int hb=20,i,j;
    // for(i=lb;i<=hb;i++){
    //     int flag=1;
    //     for(j=2;j<i/2;j++){
    //         if(i%j==0){
    //             flag=0;
    //             break;
    //         }
    //     }
    //     if(flag){
    //         printf("%d ",i);
    //     }
    // }
//     int n=5;
//     int i;
//     int flag=1;
//     for(i=2;i<n/2;i++){
//         if(n%i==0){
//             flag=0;
//         }
//     }
//     if(flag==0){
//         printf("not prime");
//     }
//     else{
//         printf("prime");
//     }
// }


// find element in which time----------------------
// #include <stdio.h>
// int main(){
//     int arr[8];
//     int i,j,n;
    
//     for(i=0;i<8;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("\n");
//     scanf("%d",&n);
//     int count=0;
//     for(i=0;i<8;i++){
//         if(n==arr[i]){
//             count++;
//         }
//     }
//     if (count==0){
//         printf("no found: ");
//     }
//     else{
//         printf("%d found at %d times: ",n,count);
//     }
// }


// count no of even numbers in an array--------------
// #include <stdio.h>
// int main(){
//     int arr[8];
//     int i,j,n;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("\n");
//     // scanf("%d",&n);
//     int count=0;
//     for(i=0;i<n;i++){
//         if(arr[i]%2==0){
//             printf("%d\n",arr[i]);
//             count++;
//         }     
//     }  
//     printf(" %d",count);
// }


// insert char in a string in a specific position--------------------
// #include<stdio.h>
// int main(){
//     char str[10];
//     int i;
//     fgets(str,10,stdin);
//     int len=strlen(str);
//     int ind;
//     scanf("%d",&ind);
//     char ch;
//     scanf(" %c",&ch);
//     for(i=len;i>=ind;i--){
//         str[i+1]=str[i];
//     }
//     str[ind]=ch; 
//         printf("%s",str);
// }



// to remove element from a string---------------------
// #include <stdio.h>
// int main(){
//     char str[10];
//     fgets(str,10,stdin);
//     int i,j;
//     int len=strlen(str);
//     int ind;
//     scanf("%d",&ind);
//     for(i=ind;i<len;i++){
//         str[i-1]=str[i];
//     }
//     printf("%s",str);
// }



// #include <stdio.h>
// #include<string.h>
// #include<math.h>
// int main(){
//     char str[100];
//     // fgets(str,100,stdin);
//     scanf("%[^\n]",str);
//     int len=strlen(str);
//     char* part=strtok(str," ");
//     while(part!=NULL){
//         int s=strlen(part),i=0;
//         while(part!='\0'){
//             if(i==0){
//                 printf("%c",part[i]-32);
//             }else{
//                 printf("%c",part[i]);
//             }
//             i++;
//         }
//         part=strtok(NULL," ");
//         if(part!=NULL){
//             printf(" ");
//         }
//     }
// }


// first letter capital of each word in a sentence-----------------------
// #include <stdio.h>
// int main(){
//     char str[200];
//     fgets(str,30,stdin);
//     int len=strlen(str);
//     int i,j;
//     for(i=0;i<len;i++){
//         if(str[i]==' '){
//             str[i+1]=str[i+1]-32;
//         }
//     }
//     str[0]=str[0]-32;
//     for(i=0;i<len;i++){
//         printf("%c",str[i]);
//     }
// }



// #include <stdio.h>                                  1
// int main(){                                        232
//     int i,j,b;                                    34543
//     for(i=1;i<=5;i++){                           4567654
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
//     int bill,total_amount,unit;
//     scanf("%d",&unit);
//     if(unit<=200){
//         total_amount=0;
//     }
//     else if(unit<=300){
//         total_amount+=(unit*3);
//     }

// }



// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("student.txt","w");
//     if(fptr==NULL){
//         printf("invalid");
//     }
//     int num;
//     printf("enter num: ");
//     scanf("%d",&num);
//     fprintf(fptr,"%d",num);
//     fclose(fptr);
//     fptr=fopen("student.txt","r");
//     fscanf(fptr,"%d",&num);
//     printf("%d",num);
//     fclose(fptr);
// }



// #include <stdio.h>
// int main(){
//     int i=1;
//     if(i%2==0){
//         goto even;
//     }
//     else{
//         goto odd;
//     }
//     even:
//     printf("even");
//     odd:
//     printf("odd");
// }



// count the frequency of array element in an array must be unsorted------------------
// #include <stdio.h>
// int main(){
//     int arr[]={1, 1, 3, 4, 5,5,3,2,1,4, 2, 3, 2, 4};
//     int i,j;
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int counted[200]={0};
//     int count=0;
//     for(i=0;i<len;i++){
//         if(counted[i]==1){
//             continue;
//         }
//         count=1;
//         for(j=i+1;j<len;j++){
//             if(arr[j]==arr[i]){
//                 count++;
//                 counted[j]=1;
//             }
//         }
//         printf("%d %d \n",arr[i],count);
//     }
// }



// #include <stdio.h>
// int main(){
//     int arr[]={1, 1, 3, 4, 5,5,3,2,1,4, 2, 3, 2, 4};
//     int i,j,k;
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<len;i++){
//         int check=1;
//         for(j=0;j<i;j++){
//             if(arr[i]==arr[j]){
//             check=0;
//         }
//         if(check){
//             for(k=0;k<len;k++){
//                 if(arr[i]==arr[k]){
//                 check++;
//             }
//             }
//         }
//         printf("%d %d\n",arr[i],check);
//     }
// }


// #include <stdio.h>
// int main(){
//     char str[25];
//     fgets(str,20,stdin);
//     int len=strlen(str);
//     int i,j;
//     int count=0;
//     char counted[256]={};
//     for(i=0;i<len-1;i++){
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
//         printf("%c-%d ",str[i],count);
//     }
// }



//HCF of two numbers----------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int i,j,gcd;
//     if(i<0){
//         gcd=-1;
//     }
//     else{
//         for(i=1;i<=a&&i<=b;++i){
//             if(a%i==0 && b%i==0){
//                 gcd=i;
//             }
//         }
//     }
//     printf("Hcf is: %d %d %d",a,b,gcd);
// }



// #include <stdio.h>
// int main(){
//     int decimal;
//     int octal=0,binary;
//     scanf("%d",&binary);
//     int i=0,rem=0,sum=0;
//     int r1=0,s1=0;
//     while(binary!=0){
//         r1=binary%10;
//         s1+=r1*pow(2,i);
//         binary/=10;
//         i++;
//     }
//     decimal=s1;
//     while(decimal!=0){
//         rem=decimal%8;
//         sum+=rem*pow(10,i);
//         decimal/=8;
//         i++;
//     }
//     printf("%d",sum);
// }


//unique element in an array-------------------
// #include <stdio.h>
// int main(){
//     int arr[8];
//     int i,j;
//     for(i=0;i<8;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<8;i++){
//         int flag=1;
//         for(j=0;j<8;j++){
//             if(i!=j && arr[i]==arr[j]){
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag){
//             printf("%d ",arr[i]);
//         }
//     }
// }


// unique element in a string------------------------
// #include <stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int len=strlen(str);
//     int i,j;
//     for(i=0;i<len;i++){
//         int flag=1;
//         for(j=0;j<len;j++){
//             if(i!=j && str[i]==str[j]){
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag){
//             printf("%c ",str[i]);
//         }
//     }
// }



// #include <stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int len=strlen(str);
//     int i,j,count=0;
//     int counted[100]={0};
//     for(i=0;i<len-1;i++){
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
//             printf("%c-%d ",str[i],count);
//         }
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,j,n,b;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(b=1;b<=n-i;b++){
//             printf(" ");
//         }
//         for(j=0;j<=i-1;j++){
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
//     int unit,total;
//     scanf("%d",&unit);
//     if(unit<=199){
//         total=unit*1.2;
//     }
//     else if(unit>=200 && unit<=400){
//         total=unit*1.50;
//     }
//     else if(unit>=401 && unit<=600){
//         total=unit*1.80;
//     }
//     else if(unit>=601){
//         total=unit*2.00;
//     }
//     float sur,to_am=total;
//     if(unit>400){
//         to_am=total+(total*.2);
//     }
//     else{
//         to_am=total;
//     }
//     printf("%.2f",to_am);
// }



// #include <stdio.h>
// int main(){
//     int i,j;
//     char s1[20],s2[20];
//     fgets(s1,20,stdin);
//     int l1=strlen(s1);
//     for(i=0;s1[i]!='\0';i++){
//         if(s1[i]=='\n'){
//             s1[i]='\0';
//             break;
//         }
//     }
//     fgets(s2,20,stdin);
//     int l2=strlen(s2);
//     for(i=0;s2[i]!='\0';i++){
//         if(s2[i]=='\n'){
//             s2[i]='\0';
//             break;
//         }
//     }
//     for(i=0;s1[i]!='\0';i++);
//     for(j=0;s2[j]!='\0';j++,i++){
//         s1[i]=s2[j];
//     }
//     s1[i]='\0';
//     printf("%s ",s1);
// }


// #include <stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int i,j,count=0;
//     for(i=0;i<20;i++){
//         if(str[i]==' '){
//             count++;
//         }
//     }
//     if(count>0){
//         printf("no of word is: %d",count+1);
//     }
// }



// #include <stdio.h>
// int main(){
//     char s1[20],s2[20];
//     int i,j;
//     fgets(s1,20,stdin);
//     int l1=strlen(s1);
//     fgets(s2,20,stdin);
//     int l2=strlen(s2);
//     if(l1!=l2){
//         printf("False");
//     }
//     for(i=0;i<l1;i++){
//         for(j=i+1;j<l2;j++){
//             if(s1[i]>s1[j]){
//                 char temp=s1[i];
//                 s1[i]=s1[j];
//                 s1[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<l1;i++){
//         for(j=i+1;j<l2;j++){
//             if(s2[i]>s2[j]){
//                 char temp=s2[i];
//                 s2[i]=s2[j];
//                 s2[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<l1;i++){
//         if(s1!=s2){
//             printf("FALSE");
//         }
//     }
//     printf("TRUE");
// }



// #include <stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int i,sum=0;
//     for(i=1;i<num;i++){
//         if(num%i==0){
//             // sum+=i;
//             printf("%d ",i);
//         }
//     }
    // if(sum==num){
    //     printf("perfect num: ");
    // }
    // else{
    //     printf("not");
    // }
// }



// #include<stdio.h>
// int main(){
//     char str[20];
//     fgets(str,20,stdin);
//     int len=strlen(str);
//     int i,j,cd=0,ca=0,cs=0;
//     for(i=0;i<len-1;i++){
//         if(str[i]>='0' && str[i]<='9'){
//             cd++;
//         }
//         else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
//             ca++;
//         }
//         else{
//             cs++;
//         }
//     }
//     printf("no of alphabet is: %d\n",ca);
//     printf("no of number is: %d\n",cd);
//     printf("no of special character is: %d\n",cs);
// }


// #include <stdio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     int i,j,count=0;
//     int max;
//     char maxrepeat;
//     fgets(str,20,stdin);
//     int len=strlen(str);
//     for(i=0;i<len;i++){
//         count=1;
//         for(j=i+1;j<len;j++){
//             if(str[i]==str[j]){
//                 count++;
//             }
//         }
//         if(max<count){
//             max=count;
//             maxrepeat=str[i];
//         }
//         i=j;
//     }
//     printf("%c %d",maxrepeat,max);
// }



// #include <stdio.h>
// int main(){
//     int arr[]={1,2,3,2,5,2,3};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int i,j;
//     int flag=0,count=0,ind;
//     for(i=0;i<len;i++){
//         for(j=0;j<i;j++){
//             if(arr[i]==arr[j]){
//                 flag=1;
//             }
//         }
//         if(!flag){
//             for(j=0;j<len;j++){
//                 if(arr[i]==arr[j]){
//                     flag++;
//                 }
//             }
//             if(flag>count){
//                 count=flag;
//                 ind=i;
//             }
//         }
//     }
//     printf("%d %d ",arr[ind],count);
// }

// (1/1!)+(2/2!)+(3/3!)+..+n.------------------
// #include <stdio.h>
// float fact(int t){
//         if(t==1||t==0){
//             return 1;
//         }
//         return t*fact(t-1);
//     }
// int main(){
//     int i,t;
//     scanf("%d",&t);
//     float sum=0;
//     for(i=1;i<=t;i++){
//         sum+=(i/fact(i));   
//     }
//     printf("%.2f",sum);
// }



// #include<stdio.h>
// int main(){
//     int arr[8];
//     for(int i=0;i<8;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int j=0;j<=10;j++){
//         int count=0;
//         for(int i=0;i<8;i++){
//             if(j==arr[i]){
//                 count++;
//             }
//         }
//         if(count>=1){
//            printf("%d ",j);
//         }    
//     }
//   return 0;
// }



// #include<stdio.h>
// int main(){
//     int num;
//     int rev=0,rem=0;
//     scanf("%d",&num);
//     int x=num;
//     while (num !=0){
//         rem= num % 10;
//         rev=rev * 10 + rem;
//         num/=10;
//     }
//     // printf("%d",rev);
//     if(x==rev){
//         printf("yes");
//     }
//     else{
//         printf("no");
//     }
//     return 0;
// }



#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i,j;
    int sum=0;
    for(i=a;i<b;i++){
       for(j=0;j<i;j++){
        if(j%i==0){
            sum+=i;
            }
       }
       if(sum==i){
        printf("%d",i);
    }
    }
    
}