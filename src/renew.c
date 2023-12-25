#include "header.h"

void renew_bullet(int *bullet_dir,int*bullet_x,int*bullet_y)
{
        if (*bullet_dir == 0)
        {
            *bullet_x += 5; // 向右移動
            if(*bullet_x == 940)
            {
            *bullet_x = 1500;
            *bullet_y = 1500;
            //*bullet_dir = -1;
            }
        }
        else if (*bullet_dir == 1)
        {
            *bullet_y += 5;  // 向下移動
            if(*bullet_y == 650)
            {
            *bullet_x = 1500;
            *bullet_y = 1500;
            //*bullet_dir = -1;
            }            
        }
        else if (*bullet_dir == 2)
        {
            *bullet_x -= 5; // 向左移動
            if(*bullet_x == 290)
            {
            *bullet_x = 1500;
            *bullet_y = 1500;
            //*bullet_dir = -1;
            }            
        }
        else if (*bullet_dir == 3)
        {
            *bullet_y -= 5; // 向上移動

            if(*bullet_y == 0)
            {
            *bullet_x = 1500;
            *bullet_y = 1500;
            //*bullet_dir = -1;
            }            
        }
}

void renew_arrow(int *positionx,int*positiony,int*arrowD_x,int*arrowU_x,int*arrowR_y,int*arrowL_y)
{
        if ((*positionx >=340 || *positionx <= 890) && *positiony == 0)
        *arrowD_x = *positionx;

        else 
            *arrowD_x = 1280;

        // 箭頭位置
        if ((*positionx >=340 || *positionx <= 890) && *positiony == 650)
            *arrowU_x = *positionx;

        else 
            *arrowU_x = 1280;

        // 箭頭位置
        if ((*positiony >=50 || *positiony <= 600) && *positionx == 290)
            *arrowR_y = *positiony;

        else 
            *arrowR_y = 800;

        // 箭頭位置
        if ((*positiony >=50 || *positiony <= 600) && *positionx == 940)
            *arrowL_y = *positiony;

        else 
            *arrowL_y = 800;
}