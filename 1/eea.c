
#include <stdio.h>
#pragma warning (disable:4996)
#pragma warning (disable:6031)

int main(void)
{
   int a, b;
   int i = 0;
   int temp;
   int R[100], Q1[100], S[100] = { 1,0 }, T[100] = { 0,1 };
   printf("두 정수를 입력하세요: ");
   scanf(" %d %d", &a, &b);
   if (a < b)
   {
      temp = a;
      a = b;
      b = temp;
   }
   R[i] = a; R[i+1] = b; R[i+2] = a % b; Q1[i] = a / b;
   printf("R(i)   R(i+1)   R(i+2)   Q(i)   S(i)   T(i)\n");
   printf("%5d  %5d  %5d  %5d  %5d  %5d\n", R[i], R[i+1], R[i+2], Q1[i], S[i], T[i]);
   i++;
   R[i + 2] = R[i] % R[i + 1]; Q1[i] = R[i] / R[i + 1];
   printf("%5d  %5d  %5d  %5d  %5d  %5d\n", R[i], R[i+1], R[i+2], Q1[i], S[i], T[i]);
   while (1)
   {

      i++;
      R[i + 2] = R[i] % R[i + 1]; Q1[i] = R[i] / R[i + 1];
      S[i]=S[i-2]-Q1[i-2]*S[i-1]; T[i]=T[i-2]-Q1[i-2]*T[i-1];
      printf("%5d  %5d  %5d  %5d  %5d  %5d\n", R[i], R[i+1], R[i+2], Q1[i], S[i], T[i]);
      if (R[i + 2] == 0)
      {
         printf("%5d  %5d  %5d  %5d  %5d  %5d\n", R[i+1], R[i + 2], 0, 0,
            S[i - 1] -Q1[i - 1] * S[i], T[i - 1] - Q1[i - 1] * T[i]);
         break;
      }

   }
   return 0;
}