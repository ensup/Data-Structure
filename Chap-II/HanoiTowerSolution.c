#include <stdio.h>

void HanoiTowerMV(int num, char from, char by, char to){
    if(num == 1)
        printf("원반 1을 %c에서 %c로 이동\n",from,to);
    else{
        HanoiTowerMV(num-1,from,to,by);
        printf("원반 %d을(를) %c에서 %c로 이동\n",num, from,to);
        HanoiTowerMV(num-1,by,from,to);
    }
}
int main(void)
{
    HanoiTowerMV(3,'A','B','C');

    return 0;
}
