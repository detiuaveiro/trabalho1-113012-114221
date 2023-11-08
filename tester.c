
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
    Image img3 = ImageLoad("original.pgm");
    uint8 x;
    uint8 x1;
    int o;
    for(long u=0;u<ImageHeight(img);u++){
        for (long y=0;y<ImageWidth(img);y++) {
            if(!(ImageGetPixel(img, y,u) == ImageGetPixel(img2,y,u))){
                printf("%d|%d||1%d|2%d/o%d\n",u,y,ImageGetPixel(img, y,u),
                ImageGetPixel(img2,y,u),ImageGetPixel(img3, y,u));
            }
        }
    }
    printf("%d",(uint8)(ImageGetPixel(img3, 150,2)*0.33));
    printf("\\%d",(ImageGetPixel(img, 150,2))==ImageGetPixel(img2, 150,2));
    ImageDestroy(&img);
    ImageDestroy(&img2);
    ImageDestroy(&img3);
    printf("f");
}
//bri copy