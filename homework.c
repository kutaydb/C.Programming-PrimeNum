#include <stdio.h>
int asal(sayi)
{
  for(int i=2;i<sayi;i++)
  {
    if(sayi%i==0)
    {
      printf("Girdiginiz sayi asal degildir.");
      break;
    }
    else
    printf("Girdiginiz sayi asaldir.");
    break;
  }
}

int main() {
  int sayi;
  printf("Sayinizi giriniz=");
  scanf("%d",&sayi);
   
  //OZEL DURUMLAR BASLANGIC
  if(sayi<=1)
  {
    printf("Asal sayilar '1' rakamindan buyuk tam sayilardir.");
  }
  if(sayi==2)
  {
    printf("Girdiginiz sayi asaldir.");
  }
  //OZEL DURUMLAR BITIS
   
  asal(sayi);
   


  return 0;
}