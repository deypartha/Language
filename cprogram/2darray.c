// 2d array
// #include<stdio.h>
// int main(){
//     int arr[3][3],i,j;
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
// }

// 2d array-----------------------------------------------------

// #include <stdio.h>
// int main(){
//     int i,j,p,q;
//     printf("enter row: ");
//     scanf("%d",&i);
//     printf("enter col: ");
//     scanf("%d",&j);
//     int arr[i][j];
//     for (p=0;p<i;p++){
//         for (q=0;q<j;q++){
//             printf("enter ele: ");
//             scanf("%d",&arr[p][q]);
//         }
//         printf("\n");
//     }
//     for (p=0;p<i;p++){
//         for (q=0;q<j;q++){
//             // printf("enter ele: ");
//             printf("%d ",arr[p][q]);
//         }
//         printf("\n");
//     }
//     //// count no of odd or even
//     int even=0, odd=0;
//     for (p=0;p<i;p++){
//         for (q=0;q<j;q++){
//             // printf("enter ele: ");
//             if(arr[p][q]%2==0){
//                 even++;
//             }
//             else{
//                 odd++;
//             }
//         }
//     }
//      printf("no of even: %d\n",even);
//     printf("no of odd: %d\n",odd);
// }

// print 2d array and sum of their row -------------------------------------
// #include <stdio.h>
// int main(){
//     int arr[3][3],i,j;
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter i,j: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// int sum1=0,sum2=0,sum3=0,sum4=0;
// sum1=arr[0][0]+arr[0][1]+arr[0][2];
// sum2=arr[1][0]+arr[1][1]+arr[1][2];
// sum3=arr[2][0]+arr[2][1]+arr[2][2];
// sum4=arr[0][0]+arr[1][1]+arr[2][2];
// printf("1st row : %d\n",sum1);
// printf("2st row : %d\n",sum2);
// printf("3st row : %d\n",sum3);
// printf("diagonal : %d\n",sum4);
// }

// //multiply two matrix-----------------
// #include <stdio.h>
// int main(){
//     int i,j,k;
//     int a[3][3],b[3][3];
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter ele of 1st: ");
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter ele of 2nd: ");
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("\n");
//     printf("1st array: \n");
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\t");
//     printf("2nd array: \n");
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     int m[3][3]={{0,0,0},{0,0,0},{0,0,0}};
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             for(k=0;k<3;k++){
//                m[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//     }
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",m[i][j]);
//         }
//         printf("\n");
//     }
// }


// total sum of this matrix---------------------------------
// #include <stdio.h>
// int main(){
//     int i,j,p,q;
//     printf("enter row: ");
//     scanf("%d",&i);
//     printf("enter col: ");
//     scanf("%d",&j);
//     int arr[i][j];
//     for (p=0;p<i;p++){
//         for (q=0;q<j;q++){
//             printf("enter ele: ");
//             scanf("%d",&arr[p][q]);
//         }
//         printf("\n");
//     }
//     for (p=0;p<i;p++){
//         for (q=0;q<j;q++){
//             // printf("enter ele: ");
//             printf("%d ",arr[p][q]);
//         }
//         printf("\n");
//     }
//     int sum=0;
//     for (p=0;p<i;p++){
//         for (q=0;q<j;q++){
//             // printf("enter ele: ");
//             sum=sum+arr[p][q];
//         }
//         // printf("\n");
//     }
//     printf("sum is: %d\n",sum);
// }


// to find array element------------------
// #include <stdio.h>
// int main(){
//     int i,j,p,q;
//     printf("enter row: ");
//     scanf("%d",&i);
//     printf("enter col: ");
//     scanf("%d",&j);
//     int arr[i][j];
//     for (p=0;p<i;p++){
//         for (q=0;q<j;q++){
//             printf("enter ele: ");
//             scanf("%d",&arr[p][q]);
//         }
//         printf("\n");
//     }
//     for (p=0;p<i;p++){
//         for (q=0;q<j;q++){
//             // printf("enter ele: ");
//             printf("%d ",arr[p][q]);
//         }
//         printf("\n");
//     }
//     int find;
//     printf("enter no to find: ");
//     scanf("%d",&find);
//     for (p=0;p<i;p++){
//         for (q=0;q<j;q++){
//             if(arr[p][q]==find){
//                 printf("arr[%d][%d]",p,q);
//             }
//             // else{
//             //     printf("invalid input: ");
//             // }
//         }
//     }
// }


// Sum of left or right diagonal element----------------------------------
// #include <stdio.h>
// int main(){
//     int i,j,p,q;
//     printf("enter row: ");
//     scanf("%d",&i);
//     printf("enter col: ");
//     scanf("%d",&j);
//     int arr[i][j];
//     for (p=0;p<i;p++){
//         for (q=0;q<j;q++){
//             printf("enter ele: ");
//             scanf("%d",&arr[p][q]);
//         }
//         printf("\n");
//     }
//     for (p=0;p<i;p++){
//         for (q=0;q<j;q++){
//             // printf("enter ele: ");
//             printf("%d ",arr[p][q]);
//         }
//         printf("\n");
//     }
// int leftsum=0;/////////////////////////////sum of left_diagonal numbers--------------------
// for (p=0;p<i;p++){
//     for (q=0;q<j;q++){
//         if(p==q){
//             printf("arr[%d][%d]\n",p,q);
//             printf("%d\n",arr[p][q]);
//             leftsum=leftsum+arr[p][q];
//         }

//     }
//     printf("\n");
// }
// int rightsum=0;/////////////////////////////////sum of right_diagonal numbers---------------
// for (p=0;p<i;p++){
//     for (q=0;q<j;q++){
//         if((p+q)==2){
//             printf("arr[%d][%d]\n",p,q);
//             printf("%d\n",arr[p][q]);
//             rightsum=rightsum+arr[p][q];
//         }
//     }
//     printf("\n");
// }
// printf("left_sum of diagonal: %d\n",leftsum);
// printf("right_sum is: %d\n",rightsum);
// }

// Sum of rows and column in the matrix---------------------------------------

// #include<stdio.h>
// int main(){
//     int arr[3][3],i,j;
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
//         int sum=0;
//         for (j=0;j<3;j++){
//             sum=sum+arr[i][j];
//         }
//         printf("sum of row is : %d\n",sum);
//     }

//     for (i=0;i<3;i++){
//         int sum=0;
//         for (j=0;j<3;j++){
//             sum=sum+arr[j][i];
//         }
//         printf("sum of column is : %d\n",sum);
//     }
// }

// add of two matrix-----------------------------------

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
//             printf("%d  ",p[i][j]);
//         }
//         printf("\n");
//     }
// }

// multiply two matrix----------------------------------
// #include<stdio.h>
// int main(){
//     int arr[3][3],i,j,brr[3][3],k,p[3][3];

//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele : ");
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     printf("first matrix : \n");
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d  ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("second matrix : \n");
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d  ",brr[i][j]);
//         }
//         printf("\n");
//     }
//      for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//         p[i][j]=0;
//             for(k=0;k<3;k++){
//             p[i][j]+=(arr[i][k]*brr[k][j]);
//             }
//         }
//         printf("\n");
//     }
//     printf("multiply of two matrix: \n");
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d  ",p[i][j]);
//         }
//         printf("\n");
//     }
// }


// transpose of a matrix-------------------------------
// #include<stdio.h>
// int main(){
//     int arr[3][3],i,j;
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("original matrix is: \n");
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d  ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("transpose of the matrix is: \n");
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d  ",arr[j][i]);
//         }
//         printf("\n");
//     }
// }

// to check matrics are same or not------------------------------------
//  #include<stdio.h>
//  int main(){
//      int arr[3][3],i,j,brr[3][3],flag=0;
//      for (i=0;i<3;i++){
//          for (j=0;j<3;j++){
//              printf("enter ele: ");
//              scanf("%d",&arr[i][j]);
//          }
//      }
//      for (i=0;i<3;i++){
//          for (j=0;j<3;j++){
//              printf("%d  ",arr[i][j]);
//          }
//          printf("\n");
//      }
//      for (i=0;i<3;i++){
//          for (j=0;j<3;j++){
//              printf("enter ele: ");
//              scanf("%d",&brr[i][j]);
//          }
//      }
//      for (i=0;i<3;i++){
//          for (j=0;j<3;j++){
//              printf("%d  ",brr[i][j]);
//          }
//          printf("\n");
//      }
//      for (i=0;i<3;i++){
//          for (j=0;j<3;j++){
//              if(arr[i][j]!=brr[i][j])
//              flag=1;
//          }
//      }
//      if(flag==0){
//          printf("matrics are same");
//      }
//      else{
//          printf("not same");
//      }
//  }

// Upper or lower triangle-----------------------------
// #include<stdio.h>
// int main(){
//     int arr[3][3],i,j,flag=0;
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

//     for (i=0;i<3;i++){////////////////////////upper triangle
//         for (j=0;j<3;j++){
//             if(i>j && arr[i][j]!=0){
//                 flag=1;
//             }
//         }
//     }
//     if (flag==1){
//         printf("not upper");
//     }
//     else{
//         printf("upper");
//     }

//     for (i=0;i<3;i++){////////////////lower triangle
//         for (j=0;j<3;j++){
//             if(i<j && arr[i][j]!=0){
//                 flag=1;
//             }
//         }
//     }
//     if(flag==1)
//     printf("not lower");
//     else
//     printf("lower");
// }


//  #include<stdio.h>
// int main(){
//     int arr[3][3],i,j,sear,flag=0;
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
//     printf("enter sear: ");
//     scanf("%d",&sear);
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             if(arr[i][j]==sear)
//             flag=1;
//         }
//         printf("\n");
//     }
//     if(flag==1){
//         printf("arr[%d][%d] found: ",i,j);
//     }
//     else{
//         printf("not found");
//     }
// }


// WAP to print negative element ----------------------------
// #include <stdio.h>
// int main(){
//     int arr[3][3],i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d  ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(arr[i][j]<0){
//                 printf("%d\n",arr[i][j]);
//             }
//         }
//     }
// }


// WAP to print max and min number in the array---------------------------------
// #include <stdio.h>
// int main(){
//     int arr[3][3],i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d  ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int max=arr[0][0];
//     int min =arr[0][0];
//    int flag=0;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//             }
// else if(arr[i][j]<min){
//     min=arr[i][j];
// }
//         }
//     }
//     printf("\nmax is: %d",max);
//     printf("\nmin is: %d",min);/
// }

// #include <stdio.h>
// int main(){
//     int arr[5],i,j,a;
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<5;i++){
//         for (j=i+1;j<5;j++){
//             if(arr[i]>arr[j])
//             a=arr[i];
//             arr[i]=arr[j];
//             arr[i]=a;
//         }
//     }
//     printf("\n");
//     for(i=0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
// }

// #include<stdio.h>
// void funDisp(int *a);
// int main(){
//     int a;
//     int arr[]={10,20,30,40,50};
//     funDisp(arr);
// }
// void funDisp(int *a){
//     int i;
//     for (i=0;i<5;i++){
//         printf("%d\n",a[i]);
//     }
// }

// max and min in array-----------------------------
// #include <stdio.h>
// int main(){
//     int arr[5],i;
//     for (i=0;i<5;i++){
//         printf("enter i: ");
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
//     int max=0;
//     int min=0;
//     arr[i]=arr[0];
//     for (i=0;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             printf("%d\n",arr[i]);
//         }
//        else if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     printf("max is: %d\n",max);
//     printf("min is: %d\n",min);
// }

// #include<stdio.h>
// int main(){
//     int arr[5],i;
//     for(i=0;i<5;i++){
//         printf("enter i: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d\t\n",arr[i]);
//     }
//     for(i=4;i>-1;i--){
//         printf("%d\t",arr[i]);
//     }
// }

// print an array with its size--------------------
// #include <stdio.h>
// void fun(int ar[],int n);
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80};
//     int cnt=sizeof(arr)/sizeof(int);
//     printf("total ele: %d\n",cnt);
//     fun(arr,cnt);
// }
// void fun(int ar[],int n){
// int i;
// for(i=0;i<n;i++){
//     printf("%d\n",ar[i]);
//     }
// }

// #include <stdio.h>
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
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

// int evencount=0;
// int evensum=0;
// int oddcount=0;
// int oddsum=0;
// for (i=0;i<3;i++){
//     for (j=0;j<3;j++){
//         if (arr[i][j]%2==0){
//             evensum=evensum+arr[i][j];
//             evencount+=1;
//         }
//        else if (arr[i][j]%2!=0){
//             oddsum=oddsum+arr[i][j];
//             oddcount+=1;
//         }
//     }
// }
// printf("%d\n ",evencount);
// printf("%d\n ",oddcount);
// printf("%d\n ",evensum);
// printf("%d\n ",oddsum);

// for (i=0;i<3;i++){
//     for (j=0;j<3;j++){
//         printf("enter ele: ");
//         scanf("%d",&brr[i][j]);
//     }
// }

// for (i=0;i<3;i++){
//     for (j=0;j<3;j++){
//         printf("%d ",brr[i][j]);
//     }
//     printf("\n");
// }
// int sum[i][j];
// for (i=0;i<3;i++){
//     for (j=0;j<3;j++){
//         sum[i][j]=arr[i][j]+brr[i][j];
//         printf("%d ",sum[i][j]);
//     }
//     printf("\n");
// }

// int max=arr[0][0];
// int min=arr[0][0];
// for (i=0;i<3;i++){
//     for (j=0;j<3;j++){
//         if(arr[i][j]>max){
//             max=arr[i][j];
//         }
//         else if(arr[i][j]>max){
//             min=arr[i][j];
//         }
//     }

// }
// printf("%d\n",max);
// printf("%d\n",min);
// int sub[i][j];
// for (i=0;i<3;i++){
//     for (j=0;j<3;j++){
//         sub[i][j]=arr[i][j]-brr[i][j];
//         printf("%d ",sub[i][j]);
//     }
//     printf("\n");
// }

// #include <stdio.h>
// int main(){
//     int i,arr[5];
//     for(i=0;i<5;i++){
//         printf("enter ele: ");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     for(i=4;i>=0;i--){
//         printf("%d\t",arr[i]);
//     }
// }

// Determinant of a matrix--------------------------
// #include <stdio.h>
// int main(){
//     int i,j;
//     int arr[3][3];
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int det;
//     det=(arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1])))-(arr[0][1]*((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0])))+(arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0])));
//     printf("%d",det);
// }

// Check the matrix is symmetric or not-------------------------
// #include <stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j;
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter num: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     int p[3][3];
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             p[i][j]=arr[j][i];
//         }
//     }
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",p[i][j]);
//         }
//         printf("\n");
//     }
//     int isSymmetric = 1;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (arr[i][j] != arr[j][i]) {
//                 isSymmetric = 0;
//                 break;
//             }
//         }
//     }
//     if (isSymmetric) {
//         printf("The matrix is symmetric.\n");
//     } else {
//         printf("The matrix is not symmetric.\n");
//     }
// }

// Check the matrix is Diagonal or not------------------------
// #include<stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j;
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter num: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int flag=1;
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i==j){
//                 if(arr[i][j]==0)
//                 flag=0;
//             }
//         }
//     }
//     if(flag==1)
//     printf("matrix is diagonal: ");
//     else
//     printf("not");
//     int sum=0;
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i==j)
//             sum=sum+arr[i][j];
//         }
//     }
//     printf("sum is: %d",sum);
// }

// Check a matrix is null or not---------------------
// #include <stdio.h>
// int main(){
//     int arr[2][2];
//     int i,j;
//     int flag=1;
//     for(i=0;i<2;i++){
//         for (j=0;j<2;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for (j=0;j<2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for (i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             if (arr[i][j]==0)
//             flag=1;
//         }
//     }
//     if(flag==1)
//     printf("null matrix");
//     else{
//         printf("no");
//     }
// }

// #include <stdio.h>
// int main(){
//     int i,j,arr[3][3];
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("matrix is:\n");
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int flag=1;
//     int max=arr[0][0];
//     int min=arr[0][0];
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//             }
//             else if(arr[i][j]<min){
//                 min=arr[i][j];
//             }
//         }
//     }

//    printf("%d ",max);
//    printf("%d ",min);

// }

// #include <stdio.h>
// int main(){
//     int i,j,arr[3][3];
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("enter ele: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("matrix is:\n");
//     for(i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int counteven=0;
//     int countodd=0;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(arr[i][j]%2==0){
//                 counteven++;
//             }
//             else if(arr[i][j]%2!=0){
//                countodd++;
//             }
//         }
//     }
//    printf("count of even num: %d\n",counteven);
//    printf("count of odd num: %d\n",countodd);
// }

// #include <stdio.h>
// int main(){
//     int i,j,arr[3][3],brr[3][3];
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter num: ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i==j){
//                 printf("%d ",arr[i][j]);
//             }
//         }
//     }
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
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if((i+j)==2){
//                 printf("%d",arr[i][j]);
//             }
//         }
//     }
//     int flag=0;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i>j && arr[i][j]!=0){
//                 flag=1;
//                 break;
//             }
//         }
//     }
//     if(flag==0){
//         printf("upper triangle");
//     }
//     else{
//         printf("invalid");
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
//     for(i=0;i<4;i++){
//         for(j=i+1;j<5;j++){
//             if(arr[j]>arr[i]){
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     printf("\n");
//     for(i=0;i<5;i++){
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
//     for(i=4;i>=0;i--){
//         printf("%d ",arr[i]);
//     }
//     }

// #include <stdio.h>
// int main(){
//     int arr[5];

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
//             if(arr[i]>arr[j]){
//                int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
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
//     int pos=2;
//     for(i=pos-1;i<4;i++){
//         arr[i]=arr[i+1];
//     }
//     for(i=0;i<4;i++){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>
// int main(){
//     int i,j,n=1;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",n);
//             n++;
//         }
//         printf("\n");
//     }
// }



#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter ele: ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // printf("%d\n",arr[0][2]);
    // printf("%d\n",arr[1][1]);
    // printf("%d\n",arr[2][0]);
    for(i=0;i<n;i++){
        printf("%d ",arr[i][n-1-i]);
    }
}