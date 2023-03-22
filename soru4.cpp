#include <stdio.h>
#include <stdlib.h>

struct Ogrenci {
  char ad[20];
  char soyad[20];
  int no;
};

int main() {
  int i;
  struct Ogrenci ogrenciler[5] = {
    {"Ali", "Yilmaz", 1823},
    {"Ayse", "Ozturk", 452},
    {"Mehmet", "Kaya", 744},
    {"Fatma", "Aydin", 844},
    {"Mustafa", "Koc", 138}
  };
  printf("Ogrenci bilgileri:\n");
  for (i = 0; i < 5; i++) {
    printf("%d. ogrenci: %s %s (no: %d)\n", i+1, ogrenciler[i].ad, ogrenciler[i].soyad, ogrenciler[i].no);
  }
  return 0;
}
