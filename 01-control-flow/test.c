#include <stdio.h>

int main() 
{   
    int _nilai = 74;
    printf("HAI"); 
    printf("status nilai : ");
    scanf("%d", &_nilai);
    if (_nilai > 65 ) {
      printf("lulus\n");    	
    } else {
    	printf("gagal\n");
    }
    printf("END");
    
	return 0;
}
