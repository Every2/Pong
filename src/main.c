#include <raylib.h>

int main() {
    const int width = 800;
    const int height = 600;

    InitWindow(width, height, "Pong");

    SetTargetFPS(60);

    Rectangle player = {150, 250, 20, 120};

    while (!WindowShouldClose()) {
        if (IsKeyDown(KEY_S)) player.y += 3.0f;
        else if (IsKeyDown(KEY_W)) player.y -= 3.0f;
        BeginDrawing();
        ClearBackground(BLACK);
        DrawLine(400, 0, 400, height, WHITE);  
        DrawCircle(400, 300, 7.0, WHITE);
        DrawRectangleRec(player, WHITE);
        DrawRectangle(630, 250, 20, 120, WHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
