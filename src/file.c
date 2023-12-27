#include "header.h"

void stagefile(int stage[40][40],struct barrier barrier[144],int stageNumber,int bomb[2])
{
    int i=0,j=0,a=0;

    char fileName[20];  // 文件檔名加載
    sprintf(fileName, "stage%d.txt", stageNumber);
    FILE *file2 = fopen(fileName, "r");
    if (file2 == NULL) {
        printf("Unable to open file for reading\n");
        
                        }
    // 讀取第一部分：12x12 的數字矩陣
    for (j = 0; j < 12; j++)
        for (i = 0; i < 12; i++) 
        {
            fscanf(file2, "%d", &stage[j][i]);
        }
    
    char buffer[100];
    fgets(buffer, sizeof(buffer), file2);

    // 讀取第二部分：三個數字
    fscanf(file2, "%d %d %d", &bomb[0], &bomb[1], &bomb[2]);

    fclose(file2);
    printf("Load Successful\n");
    
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

void stageprint(int stage[40][40],ALLEGRO_BITMAP *bitmapstone,ALLEGRO_BITMAP *redfish,ALLEGRO_BITMAP *yellowfish,ALLEGRO_BITMAP *bluefish,ALLEGRO_BITMAP *grass)
{
    int i=0,j=0;
    int x=340,y=50;
    for (j = 0; j < 12; j++)
        for (i = 0; i < 12; i++) 
        {
            if(stage[j][i]==1)
            {
                al_draw_bitmap(redfish,x+50*i ,y+50*j,0);
            }
            if(stage[j][i]==2)
            {
                al_draw_bitmap(yellowfish,x+50*i ,y+50*j,0);
            }
            if(stage[j][i]==3)
            {
                al_draw_bitmap(bluefish,x+50*i ,y+50*j,0);
            }
            if(stage[j][i]==4)
            {
                al_draw_bitmap(bitmapstone,x+50*i ,y+50*j,0);
            }
            if(stage[j][i]==5)
            {
                al_draw_bitmap(grass,x+50*i ,y+50*j,0);
            }

        }

}

