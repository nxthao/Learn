Bài tập:
- Array
   1 Viet chuong trinh tính giá trị trung bình của mảng 1 chiều và mảng 2 chiều.
   2 Viet chuong trinh tìm phần tử có giá có giá trị lớn nhất trong mảng (1 và 2 chiều).
   3 Viêt chuong trinh tìm phần tử có giá trị lớn thứ nhì trong mảng ( 1 chiều và 2 chiều).
   4 Viet chuong trình sắp xếp mãng tăng dần/giảm dần (1 và 2 chiều).
   5 Viết chương trình đảo ngược mãng.
   6 Mảng 1 chiều:
       Trong 1 mảng 1 chiều chứa các phần tử dương và âm, viết chương trình tạo lập 2 mãng mới (1 mãng chứa chỉ có các phần tử mang giá trị >=0 và 1 mãng chỉ chứa các phần tử mang giá trị <0).

- Đệ qui:
   7 Viet chuong trình tính tổng (1+2+3+...+n)
   8 Viet chuong trinh giai thừa (n*(n-1)*(n-2)*..*3*2*1.

- Input/Output:
   9 Viet chuong trình nhập vào 1 mãng 1 chiều (2 chiều) từ bàn phím và xuất ra màn hình theo thứ tự ngược lại.

- Con trỏ: 
   10 Làm lại bài tập 1-6 sử dụng con trỏ.




   Practice3_FindSecondMax1D:
#include <stdio.h>
/*
Find second max in Array 1D
Solve: Create a variable: Max and a variable is SecondMax
when Max < a, => SecondMax = Max, Max = a; , beside if a < Max, but a > SecondMax => SeconMax = a
note: does not assign Max = A[0] in initial
*/
float A[8] = { 1.57,-2.352,3,-4,5,6.77,87.48722, 80.22 };
float Max, SecondMax;
//float Max = A[0], SecondMax; does not use, it will be Error

void main()
{
   Max = A[0];
   for (int i = 0; i < 8; i++)
   {
      if (A[i] > Max)
      {
         SecondMax = Max;
         Max = A[i];
      }
      else if (A[i] > SecondMax)
      {
         SecondMax = A[i];
      }
   }
   printf("Max = %0.1f\n", Max);
   printf("SecondMax = %0.1f\n", SecondMax);
}

Practice3_FindSecondMax2D:
#include <stdio.h>

float A[4][5] = {{ 1.22, -2.3, 3.456, 4.5, -5.67},
{ 5.6789, -6, 4, 8.9, -10},
{ 7.8, 9.3, 8.6, -7.8, 5.6},
{ 2.3, 3.4, 5.4321, 6.785, -9}};
float max, secondMax;

void main()
{
   max = A[0][0];
   for (int i = 0; i < 4; i++ )
   {
      for ( int j = 0; j < 5; j++)
      {
         if (A[i][j] > max)
         {
            secondMax = max;
            max = A[i][j];
         }
         else if (A[i][j] > secondMax)
         {
            secondMax = A[i][j];
         }
      }
   }
   printf(" max = %0.2f secondMax = %0.2f\n", max, secondMax);
}

Practice4_ArrangeIncrease1D:
#include <stdio.h>

float A[8]={3.22,-2.352,3,-4,5,6.77,87.48722,-1.32 };
float tmp;

void main()
{
   for (int i = 0; i < 7; i++)
   {
      for (int j = i + 1; j < 8; j++)
      {
         if (A[i] > A[j])
         {
            tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
         }
         printf("A[%d] = %0.1f A[%d] = %0.1f \n", i, A[i], j, A[j]);
      }
   }
   // Print each element
   for (int i = 0; i < 8; i++)
   {
      printf("A[%d] = %0.1f \n", i, A[i]);
   }
}

Practice4_ArrangeIncrease2D:
#include <stdio.h>

float A[4][5] = { { 1.22, -2.3, 3.456, 4.5, -5.67},
{ 5.6789, -6, 4, 8.9, -10},
{ 7.8, 9.3, 8.6, -7.8, 5.6},
{ 2.3, 3.4, 5.4321, 6.785, -9} };
float B[20];
float tmp;

// Change 2-dimensional array to a dimensional
void Move2dTo1d()
{
   int m = 0;
   for (int i = 0; i < 4; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         printf("A[%d][%d] = %0.2f \n", i, j, A[i][j]);
         B[m] = A[i][j];
         printf("B[%d] = %0.2f \n", m, B[m]);
         m++;
      }
   }
}

// Arrange the increasing array
void ArrangeArrayIncrease()
{
   float tmp;
   for (int i = 0; i < 19; i++)
   {
      for (int j = i + 1; j < 20; j++)
      {
         printf("B[%d] = %0.2f \n", i, B[i]);
         if (B[i] > B[j])
         {
            tmp = B[i];
            B[i] = B[j];
            B[j] = tmp;
         }
      }
   }
}

// Come back Array 2D 
void Move1dTo2d()
{
   int m = 0;
   for (int i = 0; i < 4; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         printf("B[%d] = %0.2f \n", m, B[m]);
         A[i][j] = B[m];
         printf("A[%d][%d] = %0.2f \n", i, j, A[i][j]);
         m++;
      }
   }
}

void main()
{
   Move2dTo1d();
   ArrangeArrayIncrease();
   Move1dTo2d();
   //print each element.
   for (int i = 0; i < 4; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         printf(" A[%d][%d] = %0.2f", i, j, A[i][j]);
      }
      printf("\n");
   }
}

Practice5_reverseArray1D:
#include <stdio.h>
float A[8]={3.22,-2.352,3,-4,5,6.77,87.48722,-1.32 };
float tmp;

void ReverseArray()
{
   for (int i = 0, int j = 7; i < j; i++, j--)
   {
      tmp = A[i];
      A[i] = A[j];
      A[j] = tmp;
   }
}
void main()
{
   ReverseArray();

   // print each element.
   for (int i = 0; i < 8; i++)
   {
      printf("A[%d] = %0.2f\n", i, A[i]);
   }
}

Practice6_Create2arrayFrom1array:
#include <stdio.h>
float A[8] = { 3.22,-2.352,3,-4,5,6.77,87.48722,-1.32 };
float B[8], C[8];

void main()
{
   int m = 0, n = 0;
   for (int i = 0; i < 8; i++)
   {
      if (A[i] < 0)
      {
         C[n] = A[i];
         n++;
      }
      else
      {
         B[m] = A[i];
         m++;
      }
   }

   // Print each element
   for (int i = 0; i < m; i++)
   {
      printf("The negative array B[%d] = %0.2f \n", i, B[i]);
   }

   for (int i = 0; i < n; i++)
   {
      printf("The positive array C[%d]= %0.2f \n", i, C[i]);
   }
}




