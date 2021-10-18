/* strlen example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char kalimat[256];
  printf ("Masukan Kalimat : ");
  gets (kalimat);
  printf ("Kalimat yang dimasukan panjangnya %u Karakter \n",(unsigned)strlen(kalimat));
  return 0;
}
