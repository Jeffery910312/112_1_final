#include "header.h"

void resourceInitPic(struct ResourcePic* Pic)
{
    Pic->map = NULL;
    Pic->playerPic = NULL;
    Pic->bomp = NULL;
    Pic->bomp2 = NULL;
    Pic->bomp3 = NULL;
    Pic->bitmapexplosion = NULL;
    Pic->bitmapstone = NULL;
    Pic->redfish = NULL;
    Pic->yellowfish = NULL;
    Pic->bluefish = NULL;
    Pic->grass = NULL;
    Pic->bitmapstone = NULL;
    Pic->bitmap_right = NULL;
    Pic->bitmap_left = NULL;
    Pic->bitmap_up = NULL;
    Pic->bitmap_down = NULL;
    Pic->back = NULL; 
    Pic->contiune = NULL;
    Pic->exit = NULL; 
    Pic->background = NULL;
    Pic->restartbutton = NULL;
    Pic->level1 = NULL;
    Pic->level2 = NULL;
    Pic->level3 = NULL;
    Pic->historybutton = NULL;
}

void resourceLoadPic(struct ResourcePic* Pic)
{

    //Pic->map = al_load_bitmap("./map.bmp");
    Pic->playerPic = al_load_bitmap("./player.png");
    Pic->bomp = al_load_bitmap("./bomp.png");
    Pic->bomp2 = al_load_bitmap("./bomp-1.png");
    Pic->bomp3 = al_load_bitmap("./bomp-2.png");
    Pic->bitmapexplosion = al_load_bitmap("./explosion.png");
    Pic->bitmapstone = al_load_bitmap("./stone.png");
    Pic->redfish = al_load_bitmap("./goldfish.png");
    Pic->yellowfish = al_load_bitmap("./trout.png");
    Pic->bluefish = al_load_bitmap("./tilapia.png");
    Pic->grass = al_load_bitmap("./grass.png");
    Pic->bitmapstone = al_load_bitmap("./stone.png");
    Pic->bitmap_right = al_load_bitmap("./arrow_right.png");
    Pic->bitmap_left = al_load_bitmap("./arrow_left.png");
    Pic->bitmap_up = al_load_bitmap("./arrow_up.png");
    Pic->bitmap_down = al_load_bitmap("./arrow_down.png");
    Pic->back = al_load_bitmap("./back.png");
    Pic->contiune = al_load_bitmap("./contiunebutton.png");  
    Pic->exit = al_load_bitmap("./exitbutton.png");
    Pic->background = al_load_bitmap("./background.jpg");
    Pic->restartbutton = al_load_bitmap("./restartbutton.png");
    Pic->level1 = al_load_bitmap("./level1.png");
    Pic->level2 = al_load_bitmap("./level2.png");
    Pic->level3 = al_load_bitmap("./level3.png");   
    Pic->historybutton = al_load_bitmap("./historybutton.png");
}

void resourceDestoryPic(struct ResourcePic* Pic)
{

    al_destroy_bitmap(Pic->map);
    al_destroy_bitmap(Pic->playerPic);
    al_destroy_bitmap(Pic->bomp);
    al_destroy_bitmap(Pic->bomp2);
    al_destroy_bitmap(Pic->bomp3);
    al_destroy_bitmap(Pic->bitmapexplosion);
    al_destroy_bitmap(Pic->bitmapstone);
    al_destroy_bitmap(Pic->redfish);
    al_destroy_bitmap(Pic->yellowfish);
    al_destroy_bitmap(Pic->bluefish);
    al_destroy_bitmap(Pic->grass);
    al_destroy_bitmap(Pic->bitmapstone);
    al_destroy_bitmap(Pic->bitmap_right);
    al_destroy_bitmap(Pic->bitmap_left);
    al_destroy_bitmap(Pic->bitmap_up);
    al_destroy_bitmap(Pic->bitmap_down);
    al_destroy_bitmap(Pic->contiune);
    al_destroy_bitmap(Pic->exit);
    al_destroy_bitmap(Pic->background);
    al_destroy_bitmap(Pic->restartbutton);
    al_destroy_bitmap(Pic->level1);
    al_destroy_bitmap(Pic->level2);
    al_destroy_bitmap(Pic->level3);
    al_destroy_bitmap(Pic->historybutton );
}

void resourceInitAudio(struct ResourceAudio* Audio)
{
    Audio->start = NULL;
    Audio->button = NULL;
    Audio->boom = NULL;
    Audio->flying = NULL;
    Audio->background = NULL;
    
}

void resourceLoadAudio(struct ResourceAudio* Audio)
{

    Audio->start = al_load_sample("./Start.mp3"); 
    Audio->button = al_load_sample("./bonk.mp3"); 
    Audio->boom = al_load_sample("./boom.mp3");
    Audio->flying = al_load_sample("./flying.mp3"); 
    //Audio->background = al_load_sample("./background.mp3");
}

void resourceDestoryAudio(struct ResourceAudio* Audio)
{
    
    al_destroy_sample(Audio->start);
    al_destroy_sample(Audio->button);
    al_destroy_sample(Audio->boom);
    al_destroy_sample(Audio->flying);
    al_destroy_sample(Audio->background);

}