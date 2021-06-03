# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>

//CONTADOR DE VOCALES DE PALABRAS
main () {
  int long_palabra = 0;
  printf("La cadena tiene una longitud de: ");
  scanf("%d", &long_palabra);

  char *palabra = (char *)malloc(long_palabra + 1);
  printf("palabra: ");
  scanf("%s",palabra);

  char vocal_mayus []="AEIOU";
  static int vocal;
  static int cont_v [5];
  int j;
  printf ("Usted ha ingresado: \"%s\"",palabra);
  for(j=0; j < strlen(palabra); j++) {
    if (isalpha (palabra[j])!=0)
      palabra[j]=palabra[j]&0xdf;
    if (strchr(vocal_mayus,palabra[j])!='\0')
      vocal++;
    switch (palabra[j]) {
      case 'A': cont_v[0]++;break;
      case 'E': cont_v[1]++;break;
      case 'I': cont_v[2]++;break;
      case 'O': cont_v[3]++;break;
      case 'U': cont_v[4]++;break;
   }
  }
  printf ("\n La palabra tiene %d vocales.\n",vocal);
  printf ("Hay:\n A: %d\n E: %d\n I: %d\n O: %d\n U: %d\n",cont_v[0], cont_v[1], cont_v[2], cont_v[3], cont_v[4]);
  free(palabra);
}