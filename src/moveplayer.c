#include "header.h"

void player(ALLEGRO_DISPLAY *display,ALLEGRO_EVENT_QUEUE *event_queue,int stageNumber,struct ResourcePic Pic)
{   

    resourceLoadPic(&Pic);
    int stage [40][40];
    struct barrier barrier[144];
    int positionx = 340;
    int positiony = 0  ;
    int bullet_x = 1000;
    int bullet_y = 1000;
    int bullet_dir = -1; // -1 表示沒有子彈
    int transbomb=0;

    int arrowR_x = 340 ;
    int arrowR_y = 800 ;
    int arrowL_x = 890 ;
    int arrowL_y = 800 ;
    int arrowU_x = 1280;
    int arrowU_y = 600 ;    
    int arrowD_x = 1280;
    int arrowD_y = 50  ;

    initial_array(barrier);
    stagefile(stage,barrier,stageNumber);
    int menu =0;
    while ( menu != 3)
    {
        
        al_clear_to_color(al_map_rgb(0, 0, 0));
        al_draw_bitmap(Pic.bitmap1, 290, 0, 0);
        stageprint(stage,Pic.bitmapstone,Pic.redfish,Pic.yellowfish,Pic.bluefish,Pic.grass);
        al_draw_bitmap(Pic.bitmap2, positionx, positiony, 0);
        if(transbomb==0)
        {
            al_draw_bitmap(Pic.bitmap3, bullet_x, bullet_y, 0);
        }
        else if(transbomb==1)
        {
            al_draw_bitmap(Pic.bitmap4, bullet_x, bullet_y, 0);
        }
        else if(transbomb==2)
        {
            al_draw_bitmap(Pic.bitmap5, bullet_x, bullet_y, 0);
        }
        al_draw_bitmap(Pic.bitmap_right,arrowR_x,arrowR_y,0);
        al_draw_bitmap(Pic.bitmap_left,arrowL_x,arrowL_y,0);
        al_draw_bitmap(Pic.bitmap_up,arrowU_x,arrowU_y,0);
        al_draw_bitmap(Pic.bitmap_down,arrowD_x,arrowD_y,0);


        DetonateBomb(event_queue, &bullet_x, &bullet_y, &bullet_dir, &transbomb,Pic.bitmapexplosion,stage);
        moveplayer(event_queue,&positionx, &positiony,&bullet_x,&bullet_y,&bullet_dir,&transbomb);
        menu = returnfirstmenu(event_queue,display,&positionx,&positiony);
        detectbarrier(barrier,&bullet_x,&bullet_y,&bullet_dir,&transbomb,Pic.bitmapexplosion,stage);
        renew_arrow(&positionx,&positiony,&arrowD_x,&arrowU_x,&arrowR_y,&arrowL_y);
        renew_bullet(&bullet_dir,&bullet_x,&bullet_y);
        fresharray(stage,barrier);
        al_rest(0.03);
        
        // 繪製畫面
        
        al_flip_display();
        al_rest(0.01);
    }

    // Cleanup
    
}