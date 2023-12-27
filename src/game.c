#include "header.h"

void player(ALLEGRO_DISPLAY *display,ALLEGRO_EVENT_QUEUE *event_queue,int stageNumber,struct ResourcePic Pic)
{   

    ALLEGRO_FONT *font = al_load_ttf_font("arial.ttf", 60, 0);
    ALLEGRO_FONT *font2 = al_load_ttf_font("arial.ttf", 32, 0);
    if (!font) {
    fprintf(stderr, "Failed to load font.\n");
    // 处理加载字体失败的情况
    exit(EXIT_FAILURE);
    }
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
    int score = 0;
    int MaxScore = 0;
    int CurrentScore = 0;
    int bombNUM[3];

    initial_array(barrier);
    stagefile(stage,barrier,stageNumber,bombNUM);

    MaxScore = StageChanged( stage );
    int previousScore = MaxScore;
    int menu =0;

    displayLoadingScreen(font,Pic);

    while ( menu != 3)
    {
        
        al_draw_bitmap(Pic.back, 0, 0, 0);
        al_draw_bitmap(Pic.bitmap1, 290, 0, 0);

        al_draw_filled_rectangle(1035 , 50 , 1235 ,400,al_map_rgb(180, 135, 65));
        al_draw_text(font2, al_map_rgb(240, 240, 240), 1045, 115, ALLEGRO_ALIGN_LEFT, "Next:");
        LevelDisplay(font2,stageNumber);
        BombTypeDisplay(font2,bombNUM,Pic);



        stageprint(stage,Pic.bitmapstone,Pic.redfish,Pic.yellowfish,Pic.bluefish,Pic.grass);
        al_draw_bitmap(Pic.bitmap2, positionx, positiony, 0);
        if(transbomb==0)
        {
            al_draw_bitmap(Pic.bitmap3, bullet_x, bullet_y, 0);
            al_draw_bitmap(Pic.bitmap3, 1135, 110, 0);
        }
        else if(transbomb==1)
        {
            al_draw_bitmap(Pic.bitmap4, bullet_x, bullet_y, 0);
            al_draw_bitmap(Pic.bitmap4, 1135, 110, 0); 
        }
        else if(transbomb==2)
        {
            al_draw_bitmap(Pic.bitmap5, bullet_x, bullet_y, 0);
            al_draw_bitmap(Pic.bitmap5, 1135, 110, 0);
        }
        al_draw_bitmap(Pic.bitmap_right,arrowR_x,arrowR_y,0);
        al_draw_bitmap(Pic.bitmap_left,arrowL_x,arrowL_y,0);
        al_draw_bitmap(Pic.bitmap_up,arrowU_x,arrowU_y,0);
        al_draw_bitmap(Pic.bitmap_down,arrowD_x,arrowD_y,0);
        ScoreDisplay(font2,CurrentScore);

        menu = returnfirstmenu(event_queue,display,&positionx,&positiony,Pic);
        DetonateBomb(event_queue, &bullet_x, &bullet_y, &bullet_dir, &transbomb,Pic.bitmapexplosion,stage,bombNUM);
        moveplayer(event_queue,&positionx, &positiony,&bullet_x,&bullet_y,&bullet_dir,&transbomb);
        
        detectbarrier(barrier,&bullet_x,&bullet_y,&bullet_dir,&transbomb,Pic.bitmapexplosion,stage,bombNUM);
        renew_arrow(&positionx,&positiony,&arrowD_x,&arrowU_x,&arrowR_y,&arrowL_y);
        renew_bullet(&bullet_dir,&bullet_x,&bullet_y);
        score = StageChanged( stage );

        if (score != previousScore)
        {
            CurrentScore = MaxScore - score;    
            previousScore = score;
        }


        fresharray(stage,barrier);
        al_rest(0.001);
        
        // 繪製畫面
        
        al_flip_display();
        al_rest(0.001);
    }

    displayLoadingScreen(font,Pic);

    // Cleanup
    
}