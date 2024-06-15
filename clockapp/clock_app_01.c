#include<stdio.h>
#include<windows.h>

int main(){
    int a, b, c, n;
    char e, t;
    float d = 0.00, f;
    printf("Clock App\n");
    printf("Input 1 for stopwatch and 2 for timer: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    printf(">stopwatch selected\n");
    printf("Input 1 to start and 2 to quit: ");
    scanf("%d", &b);
    printf("---------------------------\n");
    if(b == 1) {
        do
        {
            printf("Time elapsed: %fs\n", d);
            Sleep(15.625);
            d+=0.015625;

        } while (d < 99999999);
        
            /*note for me - make dat writing something stops this 
            loop nd switch back to the option where 
            u choose timer and stopwatch;*/
        }
    else if(b == 2) {
        printf("Quitting...\n");
        Sleep(500);
    }
    else{
        printf("Invalid choice\n");
        Sleep(500);
    }
    break;
    case 2:
    printf(">Timer Selected: \n");
    printf("Enter 1 to start and 2 to quit: ");
    scanf("%d", &c);
    if(c == 1) {
        printf("Enter time for the timer (in seconds): ");
        scanf("%f", &f);
        printf("---------------------\n");
        do
        {
            printf("Time Left: %fs\n", f);
            Sleep(15.625);
            f-=0.015625;
        } while (f > 0);
        printf("\033[1;31m");  //for red colour
        printf(">Time Up !<\n");
        printf("\033[0m");    //for default white colour
        Sleep(1000);
        }
    else if(c == 2) {
        printf("quitting...\n");
        Sleep(500);
    }        
    break;
    }
    printf("------------------------\nProgram Terminated\n------------------------\n");
    Sleep(999999);
    return 0;
    }
    
    
