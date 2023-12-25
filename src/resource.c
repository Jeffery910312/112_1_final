#include "header.h"

void resourceInitPic(struct ResourcePic* Pic)
{
    Pic->bitmap1 = NULL;
    Pic->bitmap2 = NULL;
    Pic->bitmap3 = NULL;
    Pic->bitmap4 = NULL;
    Pic->bitmap5 = NULL;
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
}

void resourceLoadPic(struct ResourcePic* Pic)
{

    Pic->bitmap1 = al_load_bitmap("./map.bmp");
    Pic->bitmap2 = al_load_bitmap("./player.png");
    Pic->bitmap3 = al_load_bitmap("./bomp.png");
    Pic->bitmap4 = al_load_bitmap("./bomp-1.png");
    Pic->bitmap5 = al_load_bitmap("./bomp-2.png");
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
}

void resourceDestoryPic(struct ResourcePic* Pic)
{

    al_destroy_bitmap(Pic->bitmap1);
    al_destroy_bitmap(Pic->bitmap2);
    al_destroy_bitmap(Pic->bitmap3);
    al_destroy_bitmap(Pic->bitmap4);
    al_destroy_bitmap(Pic->bitmap5);
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
}

void resourceInitAudio(struct ResourceAudio* Audio)
{
    Audio->Start = NULL;
    Audio->button = NULL;
    Audio->boom = NULL;
    Audio->flying = NULL;
    Audio->background = NULL;
    
}

void resourceLoadAudio(struct ResourceAudio* Audio)
{

    Audio->Start = al_load_sample("./Start.mp3"); 
    Audio->button = al_load_sample("./bonk.mp3"); 
    Audio->boom = al_load_sample("./boom.mp3");
    Audio->flying = al_load_sample("./flying.mp3"); 
    //Audio->background = al_load_sample("./background.mp3");
}

void resourceDestoryAudio(struct ResourceAudio* Audio)
{
    
    al_destroy_sample(Audio->Start);
    al_destroy_sample(Audio->button);
    al_destroy_sample(Audio->boom);
    al_destroy_sample(Audio->flying);
    al_destroy_sample(Audio->background);

}