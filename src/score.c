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