#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct travel_agency_drivers
{
    char *name;
    int driving_lisense_number;
    char route;
    float distance;
} d1, d2, d3;

int main()
{
    printf("enter the details of first driver:\n");

    printf("enter the name of driver 1:");
    scanf("%s", &d1.name);

    printf("enter the driving_lisense_number of driver 1:");
    scanf("%s", &d1.driving_lisense_number);

    printf("enter the route of driver 1:");
    scanf("%s", &d1.route);

    printf("enter the distance travelled by driver 1:");
    scanf("%s", &d1.distance);

    printf("enter the details of second driver:\n");

    printf("enter the name of driver 2:");
    scanf("%s", &d2.name);

    printf("enter the driving_lisense_number of driver 2:");
    scanf("%s", &d2.driving_lisense_number);

    printf("enter the route of driver 2:");
    scanf("%s", &d2.route);

    printf("enter the distance travelled by driver 2:");
    scanf("%s", &d2.distance);

    printf("enter the details of third driver:\n");

    printf("enter the name of driver 3:");
    scanf("%s", &d3.name);

    printf("enter the driving_lisense_number of driver 3:");
    scanf("%s", &d3.driving_lisense_number);

    printf("enter the route of driver 3:");
    scanf("%s", &d3.route);

    printf("enter the distance travelled by driver 3:");
    scanf("%s", &d3.distance);

    printf("*****printing the information of all three drivers*****\n");

    printf("for driver no. 1:\n name is %s", d1.name);
    printf("driving lisense number is %s", d1.driving_lisense_number);
    printf("route is %s", d1.route);
    printf("distance travelled is %d", d1.distance);

    printf("for driver no. 2:\n name is %s", d2.name);
    printf("driving lisense number is %s", d2.driving_lisense_number);
    printf("route is %s", d2.route);
    printf("distance travelled is %d", d2.distance);

    printf("for driver no. 3:\n name is %s", d3.name);
    printf("driving lisense number is %s", d3.driving_lisense_number);
    printf("route is %s", d3.route);
    printf("distance travelled is %d", d3.distance);

    return 0;
}