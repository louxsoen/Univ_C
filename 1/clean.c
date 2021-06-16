#include <stdio.h>
#pragma warning (disable:4996)
#pragma warning (disable:6031)

#define MAX_ARRAY 100

void DoPrintModula( int count, int* x, int*v, int* m )
{   
   if( NULL == x || NULL == v || NULL == m )
   {
      return ;
   } //if

   for (int i = 0; i < count; i++)
   {
      printf("%d x = %d (mod %d)\n", x[i], v[i], m[i]);
   } //for

   printf("\n");
} //DoPrintModula

int DoInputData( int* x, int* v, int* m )
{
   if( NULL == x || NULL == v || NULL == m )
   {
      return 0;
   } //if

   //   갯수를 입력 받습니다.
   int nCount = 0;
   printf("식의 갯수: ");
   scanf(" %d", &nCount);
   
   for (int i = 0; i < nCount; i++)
   {
      printf("x계수 정수입력 modula 순서대로 입력: ");
      scanf(" %d %d %d", &x[i], &v[i], &m[i]);
   } //for
   
   printf("\n");

   return nCount;
} //DoInputCount

void UpdateValue( int count, int* x, int*v, int* m )
{   
   for( int i = 0 ; i < count ; i++ )
   {
      if( x[i] == 1 )
      {
         continue;
      } //if
      
      int p = 0;
      
      while (1)
      {
         if( ( x[i] * p % m[i] ) != 1)
         {
            p++;
            continue;
         } //if
         
         x[i] = 1;
         v[i] = v[i] * p % m[i];
         break;
      } //while
   } //for   
} //UpdateValue

int main(void)
{
   int x[MAX_ARRAY] = { 0 };
   int value[MAX_ARRAY] = { 0 };
   int mod[MAX_ARRAY] = { 0 };
   int m[MAX_ARRAY] = { 0 };
   int y[MAX_ARRAY] = { 0 };

   int p = 0;
   int nCount = 0;
   int temp = 1;
   int result = 0;
   int result_mod = 1;
   
   nCount = DoInputData( x, value, mod );

   DoPrintModula( nCount, x, value, mod );
   UpdateValue( nCount, x, value, mod );   
   DoPrintModula( nCount, x, value, mod );

   for (int i = 0; i < nCount ; i++)
   { 
      temp = 1;
      for (int z = 0; z < nCount; z++)
      {
         if (z != i)      temp *= mod[z];
      } //for

      m[i] = temp;
      printf("M(%d)=%d    ", i + 1, m[i]);
   } //for

   for (int i = 0; i < nCount; i++)
   {
      if( m[i] == 1 )   continue;

      int p = 0;
      while (1)
      {
         if( ( m[i] * p % mod[i] ) != 1)
         {
            p++;
            continue;
         } //if

         y[i] = p % mod[i];
         break;
      }
   }
   printf("\n");
   
   DoPrintModula( nCount, x, value, mod );

   for (int i = 0; i < nCount ; i++)
   {
      result += value[i] * m[i] * y[i];
      result_mod *= mod[i];
   }

   printf("x = %d (mod%d)", result % result_mod, result_mod);
   return 0;
} // 1