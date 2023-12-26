#include "header.h"

void detectbarrier(struct barrier barrier[144],int *bullet_x,int *bullet_y,int* bullet_dir,int*transbomb,ALLEGRO_BITMAP *bitmapexplosion,int stage[40][40])
{
    int i;
    int bullet_x1,bullet_y1;
    for(i=0;i<144;i++)
    {
        if (*bullet_dir == 0)
        {
            // 向右移動
            if(((*bullet_x+50 == barrier[i].initial_x)&&(*bullet_y == barrier[i].initial_y))||(*bullet_x+50 == 940) )
            {
                bullet_x1=*bullet_x;
                bullet_y1=*bullet_y;
                *bullet_x = 1500;
                *bullet_y = 1500;
                //*bullet_dir = -1;
                if(*transbomb==0)
                {
                    cross(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
                else if(*transbomb==1)
                {
                    bigcross(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
                else if(*transbomb==2)
                {
                    square(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
            }
        }
        else if (*bullet_dir == 1)
        {
            // 向下移動
            if(((*bullet_y+50 == barrier[i].initial_y)&&(*bullet_x == barrier[i].initial_x))||(*bullet_y+50 == 650))
            {
            bullet_x1=*bullet_x;
            bullet_y1=*bullet_y;
            *bullet_x = 2000;
            *bullet_y = 2000;
            //*bullet_dir = -1;
             if(*transbomb==0)
                {
                    cross(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
                else if(*transbomb==1)
                {
                    bigcross(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
                else if(*transbomb==2)
                {
                    square(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
            }            
        }
        else if (*bullet_dir == 2)
        {
            // 向左移動
            if(((*bullet_x-50 == barrier[i].initial_x)&&(*bullet_y == barrier[i].initial_y))||(*bullet_x-50 == 290))
            {
            bullet_x1=*bullet_x;
            bullet_y1=*bullet_y;
            *bullet_x = 1500;
            *bullet_y = 1500;
            //*bullet_dir = -1;
             if(*transbomb==0)
                {
                    cross(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
                else if(*transbomb==1)
                {
                    bigcross(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
                else if(*transbomb==2)
                {
                    square(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
            }            
        }
        else if (*bullet_dir == 3)
        {
             // 向上移動

            if(((*bullet_y-50 == barrier[i].initial_y)&&(*bullet_x == barrier[i].initial_x))||(*bullet_y-50 == 0))
            {
            bullet_x1=*bullet_x;
            bullet_y1=*bullet_y;
            *bullet_x = 1500;
            *bullet_y = 1500;
            //*bullet_dir = -1;
             if(*transbomb==0)
                {
                    cross(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
                else if(*transbomb==1)
                {
                    bigcross(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
                else if(*transbomb==2)
                {
                    square(&bullet_x1,&bullet_y1,bitmapexplosion,bullet_dir,stage);
                }
            }            
        }
    }
}

void DetonateBomb(ALLEGRO_EVENT_QUEUE *event_queue, int *bullet_x, int *bullet_y, int *bullet_dir, int *transbomb, ALLEGRO_BITMAP *bitmapexplosion,int stage[40][40])
{
    //ALLEGRO_KEYBOARD_STATE keyboard_state;
    ALLEGRO_EVENT ev;
    al_peek_next_event(event_queue, &ev);
    int bullet_x1 = *bullet_x;
    int bullet_y1 = *bullet_y;
    if(bullet_x1 >= 340 && bullet_x1 < 990) //avoid detonate outside display area
    { 
        if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER)
        {
            int bullet_x1 = *bullet_x;
            int bullet_y1 = *bullet_y;
            printf("Detonate\n");
            printf("bullet_dir: %d\n", *bullet_dir);

                if (*transbomb == 0)
                {
                    cross(&bullet_x1, &bullet_y1, bitmapexplosion,bullet_dir,stage);
                    *bullet_x = 1500;
                    *bullet_y = 1500;
                    *bullet_dir = -1;
                }
                else if (*transbomb == 1)
                {
                    bigcross(&bullet_x1, &bullet_y1, bitmapexplosion,bullet_dir,stage);
                    *bullet_x = 1500;
                    *bullet_y = 1500;
                    *bullet_dir = -1;
                }
                else if (*transbomb == 2)
                {
                    square(&bullet_x1, &bullet_y1, bitmapexplosion,bullet_dir,stage);
                    *bullet_x = 1500;
                    *bullet_y = 1500;
                    *bullet_dir = -1;
                }
                
            
        }
    }
}
void detectexplosion(struct barrier*coop,int stage[40][40],int i )
{
    int a;
    for (a=0;a<i;a++)       
    {
        printf("detectexplosion\n");
        if(stage[coop[a].initial_y][coop[a].initial_x]!=4)
        {
            stage[coop[a].initial_y][coop[a].initial_x]=0;
        }
    }
}
