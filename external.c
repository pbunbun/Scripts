#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    FILE *fp;

    while (1)
    {
        fp = fopen("/media/HITACHI/.keep", "w+");
        fprintf(fp, "Open\n");
        fflush(fp);
        sleep(30);
        fclose(fp);
    }
}
