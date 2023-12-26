#include "header.h"

void cross(int *bullet_x,int *bullet_y,ALLEGRO_BITMAP *bitmapexplosion,int *bullet_dir,int stage[40][40])
{

    struct barrier coop[5];
    int bullet_x1[5],bullet_y1[5],i;
    printf("bomb\n");
    printf("bullet_dir=%d\n",*bullet_dir);
    if (*bullet_dir == 0)
        {
            bullet_x1[0]=*bullet_x+25;
            bullet_y1[0]=*bullet_y-100;

            bullet_x1[1]=*bullet_x+75;
            bullet_y1[1]=*bullet_y-50;

            bullet_x1[2]=*bullet_x+25;
            bullet_y1[2]=*bullet_y;

            bullet_x1[3]=*bullet_x+25;
            bullet_y1[3]=*bullet_y-100;

            bullet_x1[4]=*bullet_x+25;
            bullet_y1[4]=*bullet_y-50;
            // 向右移動
            for(i=0;i<5;i++)
            {
                printf("%d\n",bullet_y1[i]);
                coop[i].initial_x=(bullet_x1[i]-340)/50;
                coop[i].initial_y=(bullet_y1[i])/50;
                
            }
            
        }
        else if (*bullet_dir == 1)
        {// 向下移動
            bullet_x1[0]=*bullet_x;
            bullet_y1[0]=*bullet_y+25;

            bullet_x1[1]=*bullet_x+50;
            bullet_y1[1]=*bullet_y-25;

            bullet_x1[2]=*bullet_x;
            bullet_y1[2]=*bullet_y-25;

            bullet_x1[3]=*bullet_x;
            bullet_y1[3]=*bullet_y-75;

            bullet_x1[4]=*bullet_x-50;
            bullet_y1[4]=*bullet_y-25;
            for(i=0;i<5;i++)
            {
                coop[i].initial_x=(bullet_x1[i]-340)/50;
                coop[i].initial_y=(bullet_y1[i])/50;
            }
        }
        else if (*bullet_dir == 3)
        {// 向上移動
            bullet_x1[0]=*bullet_x;
            bullet_y1[0]=*bullet_y+25;

            bullet_x1[1]=*bullet_x+50;
            bullet_y1[1]=*bullet_y-25;

            bullet_x1[2]=*bullet_x;
            bullet_y1[2]=*bullet_y-25;

            bullet_x1[3]=*bullet_x;
            bullet_y1[3]=*bullet_y-75;

            bullet_x1[4]=*bullet_x-50;
            bullet_y1[4]=*bullet_y-25;
            for(i=0;i<5;i++)
            {
                coop[i].initial_x=(bullet_x1[i]-340)/50;
                coop[i].initial_y=(bullet_y1[i])/50;
            }
        }
        else if (*bullet_dir == 2)
        {// 向左移動
            bullet_x1[0]=*bullet_x+25;
            bullet_y1[0]=*bullet_y-50;

            bullet_x1[1]=*bullet_x+75;
            bullet_y1[1]=*bullet_y-50;

            bullet_x1[2]=*bullet_x+25;
            bullet_y1[2]=*bullet_y;

            bullet_x1[3]=*bullet_x+25;
            bullet_y1[3]=*bullet_y-100;

            bullet_x1[4]=*bullet_x-25;
            bullet_y1[4]=*bullet_y-50;
            for(i=0;i<5;i++)
            {
                coop[i].initial_x=(bullet_x1[i]-340)/50;
                coop[i].initial_y=(bullet_y1[i])/50;
            }
        }        
        detectexplosion(coop,stage,5 );
        al_draw_bitmap(bitmapexplosion, *bullet_x, *bullet_y, 0);
        if(*bullet_x + 50 < 915){
            al_draw_bitmap(bitmapexplosion, *bullet_x+50, *bullet_y, 0);
        }
        if(*bullet_x - 50 >= 305){
            al_draw_bitmap(bitmapexplosion, *bullet_x-50, *bullet_y, 0);
        }
        if(*bullet_y + 50 < 655){
            al_draw_bitmap(bitmapexplosion, *bullet_x, *bullet_y+50, 0);
        }
        if(*bullet_y - 50 >= 25){
            al_draw_bitmap(bitmapexplosion, *bullet_x, *bullet_y-50, 0);
        }
        al_flip_display();
        printf("cross");
        al_rest(0.2);
                     
}

void bigcross(int *bullet_x,int *bullet_y,ALLEGRO_BITMAP *bitmapexplosion,int *bullet_dir,int stage[40][40])
{
    struct barrier coop[9];
    int bullet_x1[9],bullet_y1[9],i;
    printf("bomb\n");

    printf("bullet_dir=%d\n",*bullet_dir);
    if (*bullet_dir == 0)
        {
            bullet_x1[0]=*bullet_x+25;
            bullet_y1[0]=*bullet_y-100;

            bullet_x1[1]=*bullet_x+75;
            bullet_y1[1]=*bullet_y-50;

            bullet_x1[2]=*bullet_x+25;
            bullet_y1[2]=*bullet_y;

            bullet_x1[3]=*bullet_x+25;
            bullet_y1[3]=*bullet_y-100;

            bullet_x1[4]=*bullet_x+25;
            bullet_y1[4]=*bullet_y-50;

            bullet_x1[5]=*bullet_x-75;
            bullet_y1[5]=*bullet_y-50;

            bullet_x1[6]=*bullet_x+25;
            bullet_y1[6]=*bullet_y-150;

            bullet_x1[7]=*bullet_x+25;
            bullet_y1[7]=*bullet_y+50;

            bullet_x1[8]=*bullet_x+125;
            bullet_y1[8]=*bullet_y-50;
            // 向右移動
            for(i=0;i<9;i++)
            {
                printf("%d\n",bullet_y1[i]);
                coop[i].initial_x=(bullet_x1[i]-340)/50;
                coop[i].initial_y=(bullet_y1[i])/50;
                
            }
            
        }
        else if (*bullet_dir == 1)
        {// 向下移動
            bullet_x1[0]=*bullet_x;
            bullet_y1[0]=*bullet_y+25;

            bullet_x1[1]=*bullet_x+50;
            bullet_y1[1]=*bullet_y-25;

            bullet_x1[2]=*bullet_x;
            bullet_y1[2]=*bullet_y-25;

            bullet_x1[3]=*bullet_x;
            bullet_y1[3]=*bullet_y-75;

            bullet_x1[4]=*bullet_x-50;
            bullet_y1[4]=*bullet_y-25;

            bullet_x1[4]=*bullet_x-50;
            bullet_y1[4]=*bullet_y-25;

            bullet_x1[5]=*bullet_x-100;
            bullet_y1[5]=*bullet_y-25;

            bullet_x1[6]=*bullet_x;
            bullet_y1[6]=*bullet_y-125;

            bullet_x1[7]=*bullet_x;
            bullet_y1[7]=*bullet_y+75;

            bullet_x1[8]=*bullet_x+100;
            bullet_y1[8]=*bullet_y-25;

            for(i=0;i<9;i++)
            {
                coop[i].initial_x=(bullet_x1[i]-340)/50;
                coop[i].initial_y=(bullet_y1[i])/50;
            }
        }
        else if (*bullet_dir == 3)
        {// 向上移動
            bullet_x1[0]=*bullet_x;
            bullet_y1[0]=*bullet_y+25;

            bullet_x1[1]=*bullet_x+50;
            bullet_y1[1]=*bullet_y-25;

            bullet_x1[2]=*bullet_x;
            bullet_y1[2]=*bullet_y-25;

            bullet_x1[3]=*bullet_x;
            bullet_y1[3]=*bullet_y-75;

            bullet_x1[4]=*bullet_x-50;
            bullet_y1[4]=*bullet_y-25;

            bullet_x1[4]=*bullet_x-50;
            bullet_y1[4]=*bullet_y-25;

            bullet_x1[5]=*bullet_x-100;
            bullet_y1[5]=*bullet_y-25;

            bullet_x1[6]=*bullet_x;
            bullet_y1[6]=*bullet_y-125;

            bullet_x1[7]=*bullet_x;
            bullet_y1[7]=*bullet_y+75;

            bullet_x1[8]=*bullet_x+100;
            bullet_y1[8]=*bullet_y-25;
            for(i=0;i<9;i++)
            {
                coop[i].initial_x=(bullet_x1[i]-340)/50;
                coop[i].initial_y=(bullet_y1[i])/50;
            }
        }
        else if (*bullet_dir == 2)
        {// 向左移動
            bullet_x1[0]=*bullet_x+25;
            bullet_y1[0]=*bullet_y-50;

            bullet_x1[1]=*bullet_x+25;
            bullet_y1[1]=*bullet_y-50;

            bullet_x1[2]=*bullet_x+25;
            bullet_y1[2]=*bullet_y;

            bullet_x1[3]=*bullet_x+25;
            bullet_y1[3]=*bullet_y-100;

            bullet_x1[4]=*bullet_x-25;
            bullet_y1[4]=*bullet_y-50;

            bullet_x1[5]=*bullet_x-75;
            bullet_y1[5]=*bullet_y-50;

            bullet_x1[6]=*bullet_x+25;
            bullet_y1[6]=*bullet_y-150;

            bullet_x1[7]=*bullet_x+25;
            bullet_y1[7]=*bullet_y+50;

            bullet_x1[8]=*bullet_x+75;
            bullet_y1[8]=*bullet_y-50;
            
            for(i=0;i<9;i++)
            {
                coop[i].initial_x=(bullet_x1[i]-340)/50;
                coop[i].initial_y=(bullet_y1[i])/50;
            }
        }    

    detectexplosion(coop,stage,9 );
    al_draw_bitmap(bitmapexplosion, *bullet_x, *bullet_y, 0);
    if(*bullet_x + 50 < 915){
        al_draw_bitmap(bitmapexplosion, *bullet_x+50, *bullet_y, 0);
    }
    if(*bullet_x - 50 > 305){
        al_draw_bitmap(bitmapexplosion, *bullet_x-50, *bullet_y, 0);
    }
    if(*bullet_y + 50 < 655){
        al_draw_bitmap(bitmapexplosion, *bullet_x, *bullet_y+50, 0);
    }
    if(*bullet_y - 50 >= 25){
        al_draw_bitmap(bitmapexplosion, *bullet_x, *bullet_y-50, 0);
    }
    if(*bullet_x + 100 < 915){
        al_draw_bitmap(bitmapexplosion, *bullet_x+100, *bullet_y, 0);
    }
    if(*bullet_x - 100 >= 305){
        al_draw_bitmap(bitmapexplosion, *bullet_x-100, *bullet_y, 0);
    }
    if(*bullet_y + 100 < 655){
        al_draw_bitmap(bitmapexplosion, *bullet_x, *bullet_y+100, 0);
    }
    if(*bullet_y - 100 >= 25){
        al_draw_bitmap(bitmapexplosion, *bullet_x, *bullet_y-100, 0);
    }
    al_flip_display();
    al_rest(0.2);
    
}

void square(int *bullet_x,int *bullet_y,ALLEGRO_BITMAP *bitmapexplosion,int *bullet_dir,int stage[40][40])
{
    struct barrier coop[9];
    int bullet_x1[9],bullet_y1[9],i;
    printf("bomb\n");

    printf("bullet_dir=%d\n",*bullet_dir);
    if (*bullet_dir == 0)
        {
            bullet_x1[0]=*bullet_x+25;
            bullet_y1[0]=*bullet_y;

            bullet_x1[1]=*bullet_x-25;
            bullet_y1[1]=*bullet_y;

            bullet_x1[2]=*bullet_x+75;
            bullet_y1[2]=*bullet_y;

            bullet_x1[3]=*bullet_x+25;
            bullet_y1[3]=*bullet_y-50;

            bullet_x1[4]=*bullet_x-25;
            bullet_y1[4]=*bullet_y-50;

            bullet_x1[5]=*bullet_x+75;
            bullet_y1[5]=*bullet_y-50;

            bullet_x1[6]=*bullet_x-25;
            bullet_y1[6]=*bullet_y-100;

            bullet_x1[7]=*bullet_x+75;
            bullet_y1[7]=*bullet_y-100;

            bullet_x1[8]=*bullet_x+25;
            bullet_y1[8]=*bullet_y-100;
            // 向右移動
            for(i=0;i<9;i++)
            {
                printf("%d\n",bullet_y1[i]);
                coop[i].initial_x=(bullet_x1[i]-320)/50;
                coop[i].initial_y=(bullet_y1[i])/50;
                
            }
            
        }
        else if (*bullet_dir == 1)
        {// 向下移動
           bullet_x1[0]=*bullet_x;
            bullet_y1[0]=*bullet_y;

            bullet_x1[1]=*bullet_x-50;
            bullet_y1[1]=*bullet_y;

            bullet_x1[2]=*bullet_x+50;
            bullet_y1[2]=*bullet_y;

            bullet_x1[3]=*bullet_x;
            bullet_y1[3]=*bullet_y-50;

            bullet_x1[4]=*bullet_x-50;
            bullet_y1[4]=*bullet_y-50;

            bullet_x1[5]=*bullet_x+50;
            bullet_y1[5]=*bullet_y-50;

            bullet_x1[6]=*bullet_x-50;
            bullet_y1[6]=*bullet_y+50;

            bullet_x1[7]=*bullet_x+50;
            bullet_y1[7]=*bullet_y+50;

            bullet_x1[8]=*bullet_x;
            bullet_y1[8]=*bullet_y+50;

            for(i=0;i<9;i++)
            {
                coop[i].initial_x=(bullet_x1[i]-340)/50;
                coop[i].initial_y=(bullet_y1[i]-20)/50;
            }
        }
        else if (*bullet_dir == 3)
        {// 向上移動
            bullet_x1[0]=*bullet_x;
            bullet_y1[0]=*bullet_y;

            bullet_x1[1]=*bullet_x-50;
            bullet_y1[1]=*bullet_y;

            bullet_x1[2]=*bullet_x+50;
            bullet_y1[2]=*bullet_y;

            bullet_x1[3]=*bullet_x;
            bullet_y1[3]=*bullet_y-50;

            bullet_x1[4]=*bullet_x-50;
            bullet_y1[4]=*bullet_y-50;

            bullet_x1[5]=*bullet_x+50;
            bullet_y1[5]=*bullet_y-50;

            bullet_x1[6]=*bullet_x-50;
            bullet_y1[6]=*bullet_y-100;

            bullet_x1[7]=*bullet_x+50;
            bullet_y1[7]=*bullet_y-100;

            bullet_x1[8]=*bullet_x;
            bullet_y1[8]=*bullet_y-100;
            for(i=0;i<9;i++)
            {
                coop[i].initial_x=(bullet_x1[i]-340)/50;
                coop[i].initial_y=(bullet_y1[i]+20)/50;
            }
        }
        else if (*bullet_dir == 2)
        {// 向左移動
            bullet_x1[0]=*bullet_x-25;
            bullet_y1[0]=*bullet_y;

            bullet_x1[1]=*bullet_x+75;
            bullet_y1[1]=*bullet_y;

            bullet_x1[2]=*bullet_x+25;
            bullet_y1[2]=*bullet_y;

            bullet_x1[3]=*bullet_x-25;
            bullet_y1[3]=*bullet_y-50;

            bullet_x1[4]=*bullet_x+75;
            bullet_y1[4]=*bullet_y-50;

            bullet_x1[5]=*bullet_x+25;
            bullet_y1[5]=*bullet_y-50;

            bullet_x1[6]=*bullet_x+75;
            bullet_y1[6]=*bullet_y-100;

            bullet_x1[7]=*bullet_x+25;
            bullet_y1[7]=*bullet_y-100;

            bullet_x1[8]=*bullet_x-25;
            bullet_y1[8]=*bullet_y-100;
            
            for(i=0;i<9;i++)
            {
                coop[i].initial_x=(bullet_x1[i]-360)/50;
                coop[i].initial_y=(bullet_y1[i])/50;
            }
        } 
    detectexplosion(coop,stage,9 );
    al_draw_bitmap(bitmapexplosion, *bullet_x, *bullet_y, 0);
    if(*bullet_x + 50 < 915){
        al_draw_bitmap(bitmapexplosion, *bullet_x+50, *bullet_y, 0);
    }
    if(*bullet_x - 50 >= 305){
        al_draw_bitmap(bitmapexplosion, *bullet_x-50, *bullet_y, 0);
    }
    if(*bullet_y + 50 < 655){
        al_draw_bitmap(bitmapexplosion, *bullet_x, *bullet_y+50, 0);
    }
    if(*bullet_y - 50 >= 25){
        al_draw_bitmap(bitmapexplosion, *bullet_x, *bullet_y-50, 0);
    }
    if(*bullet_y + 50 < 655 && *bullet_x + 50 < 915){
        al_draw_bitmap(bitmapexplosion, *bullet_x+50, *bullet_y+50, 0);
    }
    if(*bullet_y + 50 < 655 && *bullet_x - 50 < 305){
        al_draw_bitmap(bitmapexplosion, *bullet_x-50, *bullet_y+50, 0);
    }
    if(*bullet_y - 50 >= 25 && *bullet_x + 50 < 915){
        al_draw_bitmap(bitmapexplosion, *bullet_x+50, *bullet_y-50, 0);
    }
    if(*bullet_y - 50 >= 25 && *bullet_x - 50 < 305){
        al_draw_bitmap(bitmapexplosion, *bullet_x-50, *bullet_y-50, 0);
    }

    al_flip_display();
    al_rest(0.2);
    
}