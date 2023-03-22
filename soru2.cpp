#include <stdio.h>
#define elemanSayisi 5
int main(){
     int sayilar[elemanSayisi],  min;

     for(int i=0 ; i<elemanSayisi ; i++){
          printf("%d. sayiyi giriniz : ",i+1);
          scanf("%d", &sayilar[i]);
     }

     min = sayilar[0];

     for(int i=0 ; i<elemanSayisi ; i++){
         

          if(min > sayilar[i])
               min = sayilar[i]; //Aynı şekilde min'den küçük bir eleman var ise yeni min o olacak. 
     }

     
     printf("Dizideki en kucuk sayi : %d", min);
 }
 