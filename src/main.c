#include "header.h"

int main ()
{   
    
    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_EVENT_QUEUE *event_queue = NULL;
    struct ResourcePic Pic;
    resourceInitPic(&Pic);
    initial_src();
    display = al_create_display(DISPLAY_WIDTH,DISPLAY_HEIGHT);
    event_queue = al_create_event_queue();
    al_register_event_source(event_queue, al_get_display_event_source(display));
    al_register_event_source(event_queue, al_get_mouse_event_source());
    al_register_event_source(event_queue, al_get_keyboard_event_source());

    int menu=0;
    while(1)
    {
     
       //endgame(display,event_queue);
        printf("hi");
        menu=0;
        menu=menu_second(display,event_queue);
        if(menu==1)
        {
            player(display,event_queue,1,Pic);
            printf("back");
           

        }else if(menu==2)
        {
            player(display,event_queue,2,Pic);
            printf("back");
            
        }else if (menu==3)
        {
            player(display,event_queue,3,Pic);
            printf("back");
            
            
        }else if (menu==4)
        {
            printf("history\n");
            
        }else if(menu==5)
        {
            printf("exit\n");
            break;
        }
    }
  al_destroy_display(display);
  al_destroy_event_queue(event_queue);
  resourceDestoryPic(&Pic);
  return 0;
}