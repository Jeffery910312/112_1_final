#include "header.h"

int StageChanged(int stage[40][40]) {
    static int previousStage[40][40] = {{0}}; // 保存上一次的 stage 数组
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
