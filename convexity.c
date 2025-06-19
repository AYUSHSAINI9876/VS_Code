#include <stdio.h>

typedef struct Point
{
    int x;
    int y;
} Point;

int main()
{
    int numPoints;
    printf("Enter the number of points in the polygon: ");
    scanf("%d", &numPoints);

    if (numPoints < 3)
    {
        printf("A polygon must have at least 3 points.\n");
        return 1;     
    }   

    int x, y;
    Point first, prev, current, next;    

    printf("Enter the coordinates of the first point (x y): ");
    scanf("%d %d", &x, &y);
    prev.x = x;
    prev.y = y;

    printf("Enter the coordinates of the second point (x y): ");
    scanf("%d %d", &x, &y);
    current.x = x;
    current.y = y;

    int direction = 0; // 0 for unknown, 1 for clockwise, -1 for counterclockwise
    int i;

    for (i = 2; i < numPoints; i++)
    {
        printf("Enter the coordinates of point %d (x y): ", i + 1);
        scanf("%d %d", &x, &y);
        next.x = x;  
        next.y = y;  

        int crossProduct = (current.x - prev.x) * (next.y - current.y) -
                           (current.y - prev.y) * (next.x - current.x);

        if (crossProduct > 0)
        {
            if (direction == 0)
            {
                direction = 1; // Set to clockwise
            }
            else if (direction == -1)
            {
                printf("The polygon is not convex.\n");
                return 0;
            }
        }
        else if (crossProduct < 0)
        {
            if (direction == 0)
            {
                direction = -1; // Set to counterclockwise
            }
            else if (direction == 1)
            {
                printf("The polygon is not convex.\n");
                return 0;
            }
        }

        prev = current;
        current = next;
    }

    // Check the last edge
    int crossProduct = (current.x - prev.x) * (first.y - current.y) -
                       (current.y - prev.y) * (first.x - current.x);

    if (crossProduct > 0 && direction != -1)
    {
        printf("The polygon is not convex.\n");
    }
    else if (crossProduct < 0 && direction != 1)
    {
        printf("The polygon is not convex.\n");
    }
    else
    {
        printf("The polygon is convex.\n");
    }

    return 0;
}
