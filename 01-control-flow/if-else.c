#include <stdio.h>

int main()
{  int _x;
   char _end[] = "END";  
   printf("hasil nilai : ");
   scanf("%d", &_x);
   if (_x == 17) {
   	printf("nilai yang kamu masukan adalah 17");
   } else {
    printf("nilai yang kamu masukan bukan salah\n");   	
   }
   printf("%s\n", _end);
   
   return 0;
}
