#include "header.h"

int StageChanged(int stage[40][40]) {
    static int previousStage[40][40] = {{0}}; // 設一個previousStage來計算當前場上分數 
    int score = 0;
    for (int j = 0; j < 12; j++) {
        for (int i = 0; i < 12; i++) {
            if (stage[j][i] != previousStage[j][i]) {
                if(stage[j][i] == 1){
                    score = score + 1;
                }
                if(stage[j][i] == 2){
                    score = score + 2;
                }
                if(stage[j][i] == 3){
                    score = score + 3;
                }
            }
        }
    }
    return score; 
}
 
void ScoreDisplay(ALLEGRO_FONT *font,int score){
    char scoreText[10];
    snprintf(scoreText, sizeof(scoreText), "Score: %d", score);
    al_draw_text(font, al_map_rgb(240, 240, 240), 1045, 60, ALLEGRO_ALIGN_LEFT, scoreText);
}

void LevelDisplay(ALLEGRO_FONT *font,int level){
    char LevelText[10];
    snprintf(LevelText, sizeof(LevelText), "Level %d", level);
    al_draw_text(font, al_map_rgb(240, 240, 240), 1045, 355, ALLEGRO_ALIGN_LEFT, LevelText);
}

void BombTypeDisplay(ALLEGRO_FONT *font,int bombNum[3],struct ResourcePic Pic){

    int i;
    char BombNumText[10];
    al_draw_bitmap(Pic.bitmap3, 1045, 170, 0);
    al_draw_bitmap(Pic.bitmap4, 1045, 230, 0);
    al_draw_bitmap(Pic.bitmap5, 1045, 290, 0);
    for(i = 0 ;i < 3;i++){
        snprintf(BombNumText, sizeof(BombNumText), " x %d", bombNum[i]);
        al_draw_text(font, al_map_rgb(240, 240, 240), 1100, 175 + 60*i, ALLEGRO_ALIGN_LEFT, BombNumText);
    }

}