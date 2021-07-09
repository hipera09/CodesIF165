#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i,j, time=1;
    char t[15], R_Q[4], R_S[1];
    int Q[4][2], S[2][2], F[1][1];
    while(time<=8){
        scanf(" %c", &t[time]);
        time = time + 1;
        fflush(stdin);
    }
    for(i=0;i<=3;i++){
        for(j=0;j<=1;j++){
            scanf(" %i", &Q[i][j]);
            printf("Quartas de final %i: %c x %c\n", i+1, t[Q[i][0]], t[Q[i][1]]);
            fflush(stdin);
        }
    }
    for(i=0;i<=3;i++)  scanf(" &c", &R_Q[i]);
    fflush(stdin);

    if(R_Q[0] == 'A'){
        S[0][0] = Q[0][0];
    }
    else if(R_Q[0] == 'B'){
        S[0][0] = Q[0][1];
    }
    if(R_Q[1] == 'A'){
        S[0][1] = Q[1][0];
    }
    else if(R_Q[1] == 'B'){
        S[0][1] = Q[1][1];
    }

    if(R_Q[2] == 'A'){
        S[1][0] = Q[2][0];
    }
    else if(R_Q[2] == 'B'){
        S[1][0] = Q[2][1];
    }

    if(R_Q[3] == 'A'){
        S[1][1] = Q[3][0];
    }
    else if(R_Q[3] == 'B'){
        S[1][1] = Q[3][1];
    }
    for(i=0; i<=1;i++){
        for(j=0;j<=1;j++){
            printf("Semifinal %i: %c x %c", i+1, t[S[i][0]], t[S[i][1]]);
        }
    }
    for(i=0;i<=1;i++)   scanf(" %c", &R_S[i]);
    fflush(stdin);
    for(i=0;i<=1;i++){
        for(j=0;j<=1; j++){
            if(R_S[i] == 'X'){
                F[0][i] = S[i][0];
            }
            else if(R_S[i] == 'Y'){
                F[0][i] = S[i][1];
            }
        }
    }
    printf("Final: %c x %c", t[F[0][0]], t[F[0][1]]);
    return 0;    
}