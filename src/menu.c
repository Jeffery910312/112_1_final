#include "header.h"

int menu_first(ALLEGRO_DISPLAY* display_1,ALLEGRO_EVENT_QUEUE *event_queue_1,struct ResourcePic Pic,struct ResourceAudio Audio) 
{
    al_clear_to_color(al_map_rgb(255, 255, 255));
    al_draw_bitmap(Pic.back,0, 0, 0);

    bool buttonPressed = true;

    int menu=0;
    while (buttonPressed) {

        ALLEGRO_EVENT ev;//用以儲存al_get_next_event所取出的事件
        if (al_get_next_event(event_queue_1, &ev)) 
        {
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) 
            {
                break;

            } else if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
                int mouseX = ev.mouse.x;
                int mouseY = ev.mouse.y;
                // Check if the mouse click is within the button area (for simplicity, a rectangle)
                if (mouseX >= DISPLAY_WIDTH/2 - 100 && mouseX <= DISPLAY_WIDTH/2 +100 && mouseY >= DISPLAY_HEIGHT/2 - 225 && mouseY <= DISPLAY_HEIGHT/2 - 150) 
                {
                    al_play_sample(Audio.button, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE,NULL);
                    printf("restart game!\n");
                    menu=1;
                    break;
                    
                }
                if (mouseX >= DISPLAY_WIDTH/2 - 100 && mouseX <= DISPLAY_WIDTH/2 +100 && mouseY >=DISPLAY_HEIGHT/2 - 75 && mouseY <= DISPLAY_HEIGHT/2) 
                {
                    al_play_sample(Audio.button, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE,NULL);
                    //buttonPressed = false;
                    menu=2;
                    printf("continue game!\n");
                    break;
                    
                }
                if (mouseX >= DISPLAY_WIDTH/2 - 100 && mouseX <= DISPLAY_WIDTH/2 +100 && mouseY >= DISPLAY_HEIGHT/2 + 75 && mouseY <= DISPLAY_HEIGHT/2 + 150) 
                {
                    al_play_sample(Audio.button, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE,NULL);
                    buttonPressed = false;
                    menu=3;
                    printf("return mainmenu!\n");
                    break;
                    
                }
            } 
        }
        al_draw_bitmap(Pic.background,DISPLAY_WIDTH/2 -250 , DISPLAY_HEIGHT/2 - 300 , 0);
        al_draw_bitmap(Pic.restartbutton,DISPLAY_WIDTH/2 -100, DISPLAY_HEIGHT/2 - 225, 0);
        al_draw_bitmap(Pic.contiune,DISPLAY_WIDTH/2 -100, DISPLAY_HEIGHT/2 - 75, 0);
        al_draw_bitmap(Pic.exit,DISPLAY_WIDTH/2 -100, DISPLAY_HEIGHT/2 + 75, 0);
        al_flip_display();    
    }

    return menu;

}


int menu_second(ALLEGRO_DISPLAY*display,ALLEGRO_EVENT_QUEUE *event_queue,struct ResourcePic Pic,struct ResourceAudio Audio) 
{
    al_draw_bitmap(Pic.back,0, 0, 0);

    bool buttonPressed = true;

    int menu=0;
    while (buttonPressed) {

        ALLEGRO_EVENT ev;//用以儲存al_get_next_event所取出的事件
        if (al_get_next_event(event_queue, &ev)) 
        {
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) 
            {
                break;

            } else if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
                int mouseX = ev.mouse.x;
                int mouseY = ev.mouse.y;
                // Check if the mouse click is within the button area (for simplicity, a rectangle)
                if (mouseX >= DISPLAY_WIDTH/2 -163 && mouseX <= DISPLAY_WIDTH/2 -87 && mouseY >= DISPLAY_HEIGHT/2 - 225 && mouseY <= DISPLAY_HEIGHT/2 - 150) 
                {

                    al_play_sample(Audio.start, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE,NULL);
                    buttonPressed = false;
                    menu = 1;
                    printf("\nlevel1!\n");

                }
                if (mouseX >= DISPLAY_WIDTH/2 -38 && mouseX <= DISPLAY_WIDTH/2 +37 && mouseY >= DISPLAY_HEIGHT/2 - 225 && mouseY <= DISPLAY_HEIGHT/2 - 150) 
                {
                    al_play_sample(Audio.start, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE,NULL);
                    buttonPressed = false;
                    menu = 2;
                    printf("\nlevel2!\n");
                }
                if (mouseX >= DISPLAY_WIDTH/2 +87 && mouseX <= DISPLAY_WIDTH/2 +162 && mouseY >= DISPLAY_HEIGHT/2 - 225 && mouseY <= DISPLAY_HEIGHT/2 - 150) 
                {   

                    buttonPressed = false;
                    menu = 3;
                    al_play_sample(Audio.start, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE,NULL);
                    printf("\nlevel3!\n");
                }
                if (mouseX >= DISPLAY_WIDTH/2 - 100 && mouseX <= DISPLAY_WIDTH/2 +100 && mouseY >= DISPLAY_HEIGHT/2 - 75 && mouseY <= DISPLAY_HEIGHT/2) 
                {
                    buttonPressed = false;
                    menu= 4;
                    //al_play_sample(button, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE,NULL);
                    printf(" game history!\n");
                }
                if (mouseX >= DISPLAY_WIDTH/2 - 100 && mouseX <= DISPLAY_WIDTH/2 +100 && mouseY >= DISPLAY_HEIGHT/2 + 75 && mouseY <= DISPLAY_HEIGHT/2 + 150) 
                {
                    
                    menu = 5;
                    printf("exit game!\n");
                    //al_play_sample(button, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE,NULL);
                    buttonPressed = false;
                }
            } 
        }
        //al_clear_to_color(al_map_rgb(255, 255, 255));
        // Draw the button
        al_draw_bitmap(Pic.background,DISPLAY_WIDTH/2 -250, DISPLAY_HEIGHT/2 - 300, 0);
        al_draw_bitmap(Pic.level1,DISPLAY_WIDTH/2 -163, DISPLAY_HEIGHT/2 - 225 , 0);
        al_draw_bitmap(Pic.level2,DISPLAY_WIDTH/2 -38, DISPLAY_HEIGHT/2 - 225 , 0);
        al_draw_bitmap(Pic.level3,DISPLAY_WIDTH/2 +87, DISPLAY_HEIGHT/2 - 225 , 0);
        al_draw_bitmap(Pic.contiune,DISPLAY_WIDTH/2 -100, DISPLAY_HEIGHT/2 - 75, 0);
        al_draw_bitmap(Pic.exit,DISPLAY_WIDTH/2 -100, DISPLAY_HEIGHT/2 + 75 , 0);
        al_flip_display();
        //al_rest(0.01);
    }

    return menu;
}

int returnfirstmenu(ALLEGRO_EVENT_QUEUE *event_queue,ALLEGRO_DISPLAY *display,int*positionx,int*positiony,struct ResourcePic Pic,struct ResourceAudio Audio)
{
    ALLEGRO_EVENT ev;
    int menu=0;
    al_peek_next_event(event_queue, &ev);
    
    if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_LSHIFT)
    {       
            menu = menu_first(display,event_queue,Pic,Audio);
            if(menu==1)
            {
                *positionx = 340 ;
                *positiony = 0;
                menu=1;
            }
            else if(menu==2)
            {
                menu=0;
            }
            else if(menu==3)
            {
                menu=3;
            }

        }
    
    return menu;      
}



void endgame(ALLEGRO_DISPLAY*display,ALLEGRO_EVENT_QUEUE *event_queue,struct ResourcePic Pic,struct ResourceAudio Audio) 
{
    al_draw_bitmap(Pic.back,0, 0, 0);
    bool buttonPressed = true;
    int menu=0;
    while (buttonPressed) {

        ALLEGRO_EVENT ev;//用以儲存al_get_next_event所取出的事件
        if (al_get_next_event(event_queue, &ev)) 
        {
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) 
            {
                break;

            } else if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
                int mouseX = ev.mouse.x;
                int mouseY = ev.mouse.y;

                if (mouseX >= 150 && mouseX <= 350 && mouseY >= 225 && mouseY <= 300) 
                {
                    al_play_sample(Audio.button, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE,NULL);
                    //buttonPressed = false;
                    menu=2;
                    printf("continue game!\n");
                    break;
                    
                }

            } 
        }
        //al_clear_to_color(al_map_rgb(255, 255, 255));

        al_draw_bitmap(Pic.contiune,150, 225, 0);
        al_draw_bitmap(Pic.end1,300, 500, 0);
        al_draw_bitmap(Pic.end2,100, 500, 0);
        al_draw_bitmap(Pic.end3,0,0,0);      
        al_flip_display();    
    }

    

}

void displayLoadingScreen(ALLEGRO_FONT *font , struct ResourcePic Pic) {
    al_draw_bitmap(Pic.back,0, 0, 0);
    al_draw_filled_rectangle(400 , 300 , 700 ,390,al_map_rgb(100, 65, 0));
    al_draw_text(font, al_map_rgb(240, 240, 240), 410, 310, ALLEGRO_ALIGN_LEFT, "Loading...");//加載頁面
    al_flip_display();
    al_rest(1.3);
}