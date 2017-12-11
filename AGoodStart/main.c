//
//  main.c
//  AGoodStart
//
//  Created by Grady Jenkins on 12/8/17.
//  Copyright © 2017 Grady. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int remainingAngle(int side1, int side2)
{
    int result = (180 - (side1 + side2));
    return result;
}

int main(int argc, const char * argv[])
{
    float angle1 = 30.0;
    float angle2 = 60.0;
    float angle3 = remainingAngle(angle1, angle2);
    printf("The third angle is %.2f\n", angle3);
    return EXIT_SUCCESS;
}
