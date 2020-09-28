#include<stdio.h>
#include<stdlib.h>
float Dxa[1002];
float Dya[1002];
float areaa[1002];
int main(){
    int i, T;
    float Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    float area;
    scanf("%d", &T);

    for(i=0; i<T; i++){
        scanf("%f %f %f %f %f %f", &Ax, &Ay, &Bx, &By, &Cx, &Cy);
        Dx = Ax + Cx - Bx;
        Dy = Ay + Cy - By;
        area = .5*(Ax*(By - Dy) + Bx*(Cy-Ay) + Cx*(Dy - By) + Dx*(Ay-Cy));
        Dxa[i] = Dx;
        Dya[i] = Dy;
        areaa[i] = abs(area);
    }
    for(i=0; i<T; i++){
        printf("Case %d: %d %d %d\n", i+1, (int)Dxa[i], (int)Dya[i], (int)areaa[i]);
    }

    return 0;
}