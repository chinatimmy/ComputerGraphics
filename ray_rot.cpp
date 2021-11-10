#include "screen.h"
#include "math.h"

int main(int argc, char* argv[])
{
    G screen;
    float rad = 0;
    float a[2] = {0.0,0.5};
    float height = 100;
    float width = 100;
    
    while(true) {
        for(int j = 0; j < 640; j+=width ) 
            for(int k = 0; k < 480; k+=height) 
                for(int i = 0; i < 100; i++) {
                    
                    int x = (int)(a[1]*i) + j;
                    int y = (int)(a[0]*i) + k;
                    
                    screen.drawpixel(x,y); 
                }
        rad+=0.005;
        //a[0] = sin(rad);
        a[1] = cos(rad);

        screen.update(); 
        screen.input();
        screen.clearpixels();
        
        SDL_Delay(16);
        
    }
        
    

    return 0;
}
