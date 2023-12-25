#include "header.h"

void fresharray(int stage[40][40],struct barrier barrier[144])
{
    int i=0,j=0,a=0;
    for(i=0;i<144;i++)
    {
        barrier[i].initial_x=0;
        barrier[i].initial_y=0;
    }
    for (j = 0; j < 12; j++)
        for (i = 0; i < 12; i++) 
        {
            if(stage[j][i]!=0)
            {
                barrier[a].initial_x=340+50*i;
                barrier[a].initial_y=50+50*j;
                a=a+1;
            }
        }
}