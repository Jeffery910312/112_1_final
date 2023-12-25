#include "header.h"
void initial_src()
{
    al_init();
    al_init_primitives_addon();//程式繪圖的初始化
    al_init_image_addon();
    //安裝鍵盤以及滑鼠功能//這下面絕對不要放在al_init之上
    al_install_mouse();
    al_install_keyboard();
    al_install_audio();
    al_init_acodec_addon();
    al_reserve_samples(9);
}
void initial_array(struct barrier barrier[144])
{
    int i;
    for (i=0;i<144;i++)
    {
        barrier[i].initial_x=0;
        barrier[i].initial_y=0;
    }

}