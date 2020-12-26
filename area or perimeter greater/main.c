/* Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length = 5
and breadth = 4 is greater than its perimeter
Author Majid Mujahid Hussain dated 24/December/2020 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int area, perimeter, length, breadth;
    printf("Hello world!\n");

    printf("\n Please enter the length of the rectangle: \n");
    scanf("%d", &length);
    printf("\n Please enter the breadth of the rectangle: \n");
    scanf("%d", &breadth);

    //calculating the area of the rectangle.
    area = length * breadth;
    //printf("\n The area of the of the rectangle is equal to : %d \n", area);

    //calculating the perimeter of the rectangle
    perimeter = 2 * (length + breadth);
   // printf("\n The perimeter of the rectangle is equal to : %d \n", perimeter);

    //calculating if the area id greater than that of the perimeter.
    if(area > perimeter)
    {
        printf("\n The area of the rectangle '%d' is greater than the perimeter of the rectangle '%d'\n ", area , perimeter);
    }
    else
    {
            printf("\n The area of the rectangle '%d' is smaller than the perimeter of the rectangle '%d'\n ", area , perimeter);

    }
    return 0;
}
