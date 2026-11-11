#include <stdio.h>

void copy(char *psource, char *ptarget, unsigned num_char)
{
    
    while (num_char > 0 && *psource != '\0')
    {
        *ptarget = *psource;
        psource++;
        ptarget++;
        num_char--;
    }   

    *ptarget = '\0';
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    
    if (buffer_size == 0)
    {
        return;
    }

    unsigned remaining = buffer_size;

    while (*psrc1 != '\0' && remaining > 1)
    {
        *ptarget = *psrc1;
        psrc1++;
        ptarget++;
        remaining--;
    }

    while (*psrc2 != '\0' && remaining > 1)
    {
        *ptarget = *psrc2;
        psrc2++;
        ptarget++;
        remaining--;
    }

    *ptarget = '\0';
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above