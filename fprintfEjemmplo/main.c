#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    char buffer[100] = "Esto es un texto dentro del fichero.";
    char bufferIn[100];

    fp = fopen("fichero.txt", "w");

    fprintf(fp, buffer);
    fprintf(fp, "%s", "\nEsto es otro texto dentro del fichero.");
    fprintf(fp, "\nEsto es otro texto dentro del fichero. Y el buffer contiene: %s", buffer);

    fclose(fp);
    system("pause");
    system("cls");

    fp = fopen("fichero.txt", "r");
    if (fp==NULL)
    {
        printf("Archivo no encotrado.");
    }
    else
    {
        while(!feof(fp))
        {
            fgets(bufferIn, 100, fp);
            puts(bufferIn);
        }
    }
    return 0;
}
