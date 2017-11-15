#include <cs50.h>
#include <stdio.h>

int main(void)
{
   printf("How many minutes do you bath each morning?\n");
    float x = GetFloat(); 
    float total_bathtime = x *192 ;
    float number_ofbottles = total_bathtime / 16;
    printf("You use %f", number_ofbottles);
    // TODO
}
