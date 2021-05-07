#include "TXLib.h"

void DrawSun ();
void DrawSnegovik (int x, int y);
void DrawElka ();
void DrawRaketa (int x, int y, double sizeX, double sizeY, COLORREF color);
void DrawDelta (int x, int y);
void DrawDom (int x, int y, double sizeX, double sizeY, COLORREF color, double roofL, double roofR);

int main ()
    {
    txCreateWindow (1000, 600);

    DrawSun ();
    DrawSnegovik (600, 550);
    DrawSnegovik (800, 550);
    DrawElka ();
    DrawRaketa (300, 300, 0.5, 0.5, TX_RED);
    DrawRaketa (340, 300, 1, 1, TX_YELLOW);
    DrawRaketa (300, 300, -0.3, -0.3, TX_GREEN);
    DrawRaketa (420, 300, 2, 1, TX_YELLOW);
    DrawDelta (500, 150);
    DrawDelta (120, 100);
    DrawDelta (250, 70);
    DrawDelta (370, 100);
    DrawDom (200, 450, 1, 1, TX_GREEN, 0, 0);

    return 0;
    }

void DrawSun ()
    {
    txSetColor (TX_RED);
    txLine (700, 50, 700, 150);
    txLine (700, 50, 550, 100);
    txLine (700, 50, 800, 100);
    txLine (550, 50, 800, 50);
    txCircle (700, 50, 50);
    }

void DrawSnegovik (int x, int y)
    {
    txSetColor (TX_YELLOW, 5);
    txCircle (x, y,     50);
    txSetColor (TX_BLUE, 5);
    txCircle (x, y-80,  30);
    txSetColor (TX_GREEN, 5);
    txCircle (x, y-130, 20);
    txSetColor (TX_RED, 3);
    txCircle (x, y-130,  5);
    txLine (x-30, y-80, x-80, y-80);
    txLine (x+30, y-80, x+80, y-80);
    }

void DrawElka ()
    {
    txSetColor (TX_GREEN, 3);
    txLine (500, 400, 500, 600);
    txLine (500, 400, 490, 450);
    txLine (500, 400, 510, 450);
    txLine (510, 450, 490, 450);
    txLine (520, 500, 480, 500);
    txLine (520, 500, 500, 450);
    txLine (480, 500, 500, 450);
    txLine (500, 500, 460, 550);
    txLine (500, 500, 540, 550);
    txLine (460, 550, 540, 550);
    }

void DrawRaketa (int x, int y, double sizeX, double sizeY, COLORREF color)
    {
    txSetColor (color);
    txLine (x, y, x, y+ 300*sizeY);
    txLine (x, y, x- 10*sizeX, y+ 20*sizeY);
    txLine (x, y, x+ 10*sizeX, y+ 20*sizeY);
    txLine (x- 10*sizeX, y+  20*sizeY, x- 10*sizeX, y+ 300*sizeY);
    txLine (x+ 10*sizeX, y+  20*sizeY, x+ 10*sizeX, y+ 300*sizeY);
    txLine (x- 10*sizeX, y+ 200*sizeY, x- 20*sizeX, y+ 300*sizeY);
    txLine (x+ 10*sizeX, y+ 200*sizeY, x+ 20*sizeX, y+ 300*sizeY);
    }

void DrawDelta (int x, int y)
    {
    txSetColor (TX_RED);
    txLine (x, y, x-100, y-50);
    txLine (x, y, x-100, y+50);
    txLine (x, y, x-70, y);
    txLine (x-100, y-50, x-70, y);
    txLine (x-100, y+50, x-70, y);
    txCircle (x, y, 10);
    txCircle (x-100, y-50, 10);
    txCircle (x-100, y+50, 10);
    }

void DrawDom (int x, int y, double sizeX, double sizeY, COLORREF color, double roofL, double roofR)
    {
    txSetColor (TX_GREEN, 3);
    txLine (150, 600, 250, 600);
    txLine (150, 600, 150, 500);
    txLine (250, 600, 250, 500);
    txLine (150, 500, 250, 500);
    txLine (150, 500, 200, 450);
    txLine (250, 500, 200, 450);
    txCircle (200, 475, 5);
    txCircle (170, 540, 10);
    txCircle (230, 540, 10);
    }





