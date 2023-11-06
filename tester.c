
#include <assert.h>
#include <errno.h>
#include <error.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "image8bit.h"


int main(){
    ImageInit();
    Image img = ImageLoad("bri.pgm");
    Image img2 = ImageLoad("bricopy.pgm");
    uint8 x;
    uint8 x1;
    int o;
    for(long u;u<ImageHeight(img);u++){
        for (long y;y<ImageWidth(img);y++) {
            if(ImageGetPixel(img, y,u) != ImageGetPixel(img2,y,u)){
                printf("%d|%d||%d|%d\n",y,u,ImageGetPixel(img, y,u),ImageGetPixel(img2,y,u));
            }
        }
    }
    ImageDestroy(&img);
    ImageDestroy(&img2);
    printf("f");
}
//bri copy