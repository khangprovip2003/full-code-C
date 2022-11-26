#include <stdio.h>
#include <math.h>

void main()
{
    int length, width;
    for(length=1;length<100;length++){
        for(width=1;width<100;width++){
            if(length==width*2 && length*width==(length+width)*2){
                printf("Length: %d\n", length);
                printf("Width: %d", width);
            }
        }
    }
}
