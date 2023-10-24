#include <stdio.h>
#include <stdlib.h>

int main()
{
    float en,boy,yukseklik,metrekup;
    printf("Havumuzun eni boyu ve yuksekligini :\n");
    scanf("%f%f%f",&en,&boy,&yukseklik);
    metrekup=en*boy*yukseklik;
    printf("Havuzumuz %.2f  metrekup kadar su alabilir",metrekup);
}
