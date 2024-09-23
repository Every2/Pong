#include <raylib.h>

#include "../include/lib.h"

int main() {
    const int width = 800;
    const int height = 600;

    InitWindow(width, height, "Pong");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawCircle(400, 300, 7.0, WHITE);
        DrawRectangle(150, 250, 20, 120, WHITE);
        DrawRectangle(630, 250, 20, 120, WHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
