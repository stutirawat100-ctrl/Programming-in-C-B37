/* LAB-3.1
Q3 WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.      */

#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;                    // Declaration
    float area;
    
    // User to enter sides of a triangle
    printf("Enter first point coordinates: ");
    scanf("%d",&x1);
    scanf("%d",&y1);
    
    printf("Enter second point coordinates: ");
    scanf("%d",&x2);
    scanf("%d",&y2);

    printf("Enter third point coordinates: ");
    scanf("%d",&x3);
    scanf("%d",&y3);

    // Chech if all three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
    area = (0.5)*(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    if(area==0)
        printf("All three points are collinear. \n ");
    else
        printf("All three points are not collinear. \n ");

    return 0;
}                                                   // END of program

