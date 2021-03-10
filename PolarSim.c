#include "raylib.h"
#include <math.h>

void DrawFrac();

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    const float radius = 5.0;
    float theta = 0.0;

    InitWindow(screenWidth, screenHeight, "Polar");

  
    Camera camera = { 0 };
    camera.position = (Vector3){ 0.0f, 10.0f, 0.0f };
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 45.0f;
    camera.type = CAMERA_PERSPECTIVE;

 
    SetCameraMode(camera, CAMERA_FREE); 

    SetTargetFPS(60);          
    while (!WindowShouldClose())        
    {
        UpdateCamera(&camera); 

        BeginDrawing();

            ClearBackground(RAYWHITE);

            BeginMode3D(camera);

                   
    
                theta += 0.001;
        
                DrawCircle3D((Vector3){ radius * cosf(theta), 0.0f, radius * sinf(theta)}, 1.0, (Vector3){1, 0, 0 }, 90.0f, (Color){200, 100, 100, 100});

            EndMode3D();


        EndDrawing();
    }

    CloseWindow();  

    return 0;
}

















