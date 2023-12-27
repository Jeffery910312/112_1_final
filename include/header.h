#ifndef HEADER_H//.h檔中一定要使用flag避免各個檔案間重複宣告
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_primitives.h>//new 1
#include <allegro5/allegro_image.h>
#include <time.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

#define DISPLAY_WIDTH   1280
#define DISPLAY_HEIGHT  700
#define RIGHT_BOUNDARY  940
#define LEFT_BOUNDARY  290
#define UPPER_BOUNDARY  50
#define LOWER_BOUNDARY  650
#define MOVEMENT_STEP  50



struct bomb
{
    int type_1;
    int type_2;
    int type_3;
};

struct barrier
{
    int initial_x;
    int initial_y;
};

struct ResourcePic
{
    ALLEGRO_BITMAP *bitmap1 ;
    ALLEGRO_BITMAP *bitmap2 ;
    ALLEGRO_BITMAP *bitmap3 ;
    ALLEGRO_BITMAP *bitmap4 ;
    ALLEGRO_BITMAP *bitmap5 ;
    ALLEGRO_BITMAP *bitmapexplosion ;
    ALLEGRO_BITMAP *bitmapstone ;
    ALLEGRO_BITMAP *redfish ;
    ALLEGRO_BITMAP *yellowfish ;
    ALLEGRO_BITMAP *bluefish ;
    ALLEGRO_BITMAP *grass ;
    ALLEGRO_BITMAP *bitmap_right ;
    ALLEGRO_BITMAP *bitmap_left ;
    ALLEGRO_BITMAP *bitmap_up ;
    ALLEGRO_BITMAP *bitmap_down ;
    ALLEGRO_BITMAP *back ;
};

struct ResourceAudio
{
    ALLEGRO_SAMPLE* Start;
    ALLEGRO_SAMPLE* button;
    ALLEGRO_SAMPLE* boom;
    ALLEGRO_SAMPLE* flying;
    ALLEGRO_SAMPLE* background;

};

//function
void initial_src();//new4
void initial_array(struct barrier [144]);
int menu_first(ALLEGRO_DISPLAY*,ALLEGRO_EVENT_QUEUE *,struct ResourcePic );//new2
int menu_second(ALLEGRO_DISPLAY*,ALLEGRO_EVENT_QUEUE *,struct ResourcePic);//new3
void endgame(ALLEGRO_DISPLAY*,ALLEGRO_EVENT_QUEUE *,struct ResourcePic );
int returnfirstmenu(ALLEGRO_EVENT_QUEUE *,ALLEGRO_DISPLAY *,int*,int*,struct ResourcePic);
void player(ALLEGRO_DISPLAY*,ALLEGRO_EVENT_QUEUE *,int stageNumber,struct ResourcePic);
int moveplayer(ALLEGRO_EVENT_QUEUE *,int * ,int *,int *,int *,int*,int*,int[3]);
void stagefile(int [40][40], struct barrier[144] ,int stageNumber ,int [2]);
void stageprint(int [40][40],ALLEGRO_BITMAP *,ALLEGRO_BITMAP *,ALLEGRO_BITMAP *,ALLEGRO_BITMAP *,ALLEGRO_BITMAP *);
void renew_bullet(int *,int*,int*);
void renew_arrow(int *,int*,int*,int*,int*,int*);
void detectbarrier(struct barrier [144],int *,int *,int*,int*,ALLEGRO_BITMAP *,int [40][40],int[3]);
void detectexplosion(struct barrier*,int [40][40],int);
void fresharray(int [40][40],struct barrier [144]);
void DetonateBomb(ALLEGRO_EVENT_QUEUE *event_queue_,int *bullet_x,int *bullet_y,int* bullet_dir,int*transbomb,ALLEGRO_BITMAP *bitmapexplosion,int [40][40],int[3]);
int StageChanged(int [40][40]);
void displayLoadingScreen(ALLEGRO_FONT *font , struct ResourcePic );
void ScoreDisplay(ALLEGRO_FONT *font,int);
void LevelDisplay(ALLEGRO_FONT *font,int);
void BombTypeDisplay(ALLEGRO_FONT *font,int [3],struct ResourcePic);



//炸彈種類
void cross(int *,int *,ALLEGRO_BITMAP* ,int*,int [40][40] );
void bigcross(int *,int *,ALLEGRO_BITMAP* ,int*,int [40][40]);
void square(int *,int *,ALLEGRO_BITMAP* ,int* ,int [40][40]);

void resourceInitPic(struct ResourcePic* );       /* Initial resources */
void resourceLoadPic(struct ResourcePic* );
void resourceDestoryPic(struct ResourcePic* ); 
void resourceInitAudio(struct ResourceAudio* );
void resourceLoadAudio(struct ResourceAudio* );
void resourceDestoryAudio(struct ResourceAudio* );

#endif