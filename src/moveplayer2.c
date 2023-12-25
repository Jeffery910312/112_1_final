#include "header.h"

int moveplayer(ALLEGRO_EVENT_QUEUE *event_queue,int * positionx,int * positiony,int *bullet_x ,int *bullet_y,int* bullet_dir,int*transbomb)
{
        ALLEGRO_EVENT ev;
        al_get_next_event(event_queue, &ev);
        static int a=0;
        if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
        {
            switch (ev.keyboard.keycode)
            {
            case ALLEGRO_KEY_RIGHT:
                if (*positionx < 890 && (*positiony == 0 || *positiony == LOWER_BOUNDARY))
                {
                    *positionx += MOVEMENT_STEP;
                }
                
                else if (*positionx == 890 && *positiony == 0)
                {
                    *positionx += MOVEMENT_STEP;
                    *positiony += MOVEMENT_STEP;
                }
                else if (*positionx == 890 && *positiony == LOWER_BOUNDARY)
                {
                    *positionx += MOVEMENT_STEP;
                    *positiony -= MOVEMENT_STEP;
                }
                break;

            case ALLEGRO_KEY_LEFT:
                if (*positionx > 340 && (*positiony == 0 || *positiony == LOWER_BOUNDARY))
                {
                    *positionx -= MOVEMENT_STEP;
                }
                else if (*positionx <= LEFT_BOUNDARY)
                {
                    *positionx -= 0;
                }
                else if (*positionx == 340 && *positiony == 0)
                {
                    *positionx -= MOVEMENT_STEP;
                    *positiony += MOVEMENT_STEP;
                }
                else if (*positionx == 340 && *positiony == LOWER_BOUNDARY)
                {
                    *positionx -= MOVEMENT_STEP;
                    *positiony -= MOVEMENT_STEP;
                }
                break;

            case ALLEGRO_KEY_UP:
                if (*positiony > UPPER_BOUNDARY && (*positionx == LEFT_BOUNDARY || *positionx == RIGHT_BOUNDARY))
                {
                    *positiony -= MOVEMENT_STEP;
                }
                else if (*positiony <= 0)
                {
                    *positiony -= 0;
                }
                else if (*positiony == UPPER_BOUNDARY && *positionx == LEFT_BOUNDARY)
                {
                    *positionx += MOVEMENT_STEP;
                    *positiony -= MOVEMENT_STEP;
                }
                else if (*positiony == UPPER_BOUNDARY && *positionx == RIGHT_BOUNDARY)
                {
                    *positionx -= MOVEMENT_STEP;
                    *positiony -= MOVEMENT_STEP;
                }
                break;

            case ALLEGRO_KEY_DOWN:
                if (*positiony < 600 && (*positionx == LEFT_BOUNDARY || *positionx == RIGHT_BOUNDARY))
                {
                    *positiony += MOVEMENT_STEP;
                }
                else if (*positiony >= LOWER_BOUNDARY)
                {
                    *positiony += 0;
                }
                else if (*positiony == 600 && *positionx == LEFT_BOUNDARY)
                {
                    *positionx += MOVEMENT_STEP;
                    *positiony += MOVEMENT_STEP;
                }
                else if (*positiony == 600 && *positionx == RIGHT_BOUNDARY)
                {
                    *positionx -= MOVEMENT_STEP;
                    *positiony += MOVEMENT_STEP;
                }
                break;

            case ALLEGRO_KEY_TAB:
                if (*positionx == 290 && *positiony >= 0 && *positiony <= 650)
                {
                    *bullet_x = *positionx + 50;
                    *bullet_y = *positiony;
                    *bullet_dir = 0; // 子彈向右
                }
                else if (*positionx >= 290 && *positionx <= 940 && *positiony == 0)
                {
                    *bullet_x = *positionx;
                    *bullet_y = *positiony + 50;
                    *bullet_dir = 1; // 子彈向下
                }
                else if (*positionx == 940 && *positiony >= 0 && *positiony <= 650)
                {
                    *bullet_x = *positionx - 50;
                    *bullet_y = *positiony;
                    *bullet_dir = 2; // 子彈向左
                }
                else if (*positionx >= LEFT_BOUNDARY && *positionx <= RIGHT_BOUNDARY && *positiony == LOWER_BOUNDARY)
                {
                    *bullet_x = *positionx;
                    *bullet_y = *positiony - 50;
                    *bullet_dir = 3; // 子彈向上
                }
                break;
            case ALLEGRO_KEY_RSHIFT:
                printf("click");
                *transbomb=(a%3);
                a=a+1;
                break;
                
            }
        }
        return 0;

}