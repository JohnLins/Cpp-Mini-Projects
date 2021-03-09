#include "raylib.h"
int main(void)
{
  
    const int screenWidth = 1000;
    const int screenHeight = 1000;
  
    
    float rings = 5.0;
    float slices = 5.0;
  
    InitWindow(screenWidth, screenHeight, "Sphere");

   
    Camera3D camera = { 0 };
    camera.position = (Vector3){ 10.0f, 10.0f, 10.0f };
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };      
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };           
    camera.fovy = 45.0f;                               
    camera.type = CAMERA_PERSPECTIVE;                 
              

    SetCameraMode(camera, CAMERA_FREE); 
    

    SetTargetFPS(60);   
   
    while (!WindowShouldClose())        
    {
        
        UpdateCamera(&camera);     
        if (IsKeyDown('Z')) camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };
    

        BeginDrawing();

        ClearBackground(GREEN);

        BeginMode3D(camera);

        
        
        rings+=0.01;
        slices+=0.01;
        
      
        DrawSphereWires((Vector3){0.0f, 0.0f, 0.0f}, 20.0f, (int)rings, (int)slices, BLUE);

        EndMode3D();

          

        EndDrawing();
    }
    

    
    CloseWindow();              


    return 0;
}
