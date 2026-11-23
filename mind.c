#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "repositories/mind_musics.h"
#include "repositories/mind_abreg.h"

int main() {

    char username[50];
    printf("Welcome to the Mind Reader. Please enter a username before continuing: ");
    scanf("%49s", username);

    FILE *file = fopen("username.log", "w");
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }

    fprintf(file, "%s\n", username);
    fclose(file);

    printf("Now that I identified you, let's start with quick questions.\n");
    system("timeout /t 7 >nul");
    system("cls");

    const char *emotion = "";

    char country[18];
    char sad_momQ[4];
    char okayQ[6];
    char list_rockQ[6];
    char relate_momQ[6];
    char som_FUHAQ[6];
    char calmQ[6];

    printf("\n");
    printf("Where do you come from (country): ");
    scanf("%17s", country);

    printf("\n");
    printf("Have you had a sad moment today (yes or no): ");
    scanf("%3s", sad_momQ);

    if (strcmp(sad_momQ, "yes") == 0)
    {
        emotion = sad;
        system("timeout /t 2 >nul");

        printf("Are you okay (yes or no): ");
        scanf("%5s", okayQ);

        if (strcmp(okayQ, "no") == 0)
        {
            emotion = sad;
            system("cls");
            printf("%s", emotion);
            system("timeout /t 6 >nul");
            printf("%s", sadness);
            system("timeout /t 10 >nul");
            printf("Quitting.");
            return 0;
        }
        else if (strcmp(okayQ, "yes") == 0)
        {
            emotion = happy;
        }
    }

    printf("\n");
    printf("Do you listen to rock (yes or no): ");
    scanf("%5s", list_rockQ);

    if (strcmp(list_rockQ, "yes") == 0)
    {
        emotion = energetic;
        system("cls");
        printf("%s", emotion);
        system("timeout /t 6 >nul");
        printf("%s", energeticness);
        system("timeout /t 10 >nul");
        return 0;
    }

    printf("\n");
    printf("Have you been through relationship moments, like smacks, love... (yes or no): ");
    scanf("%5s", relate_momQ);

    if (strcmp(relate_momQ, "yes") == 0)
    {
        emotion = romantic;
        system("cls");
        printf("%s", emotion);
        system("timeout /t 6 >nul");
        printf("%s", romanticness);
        system("timeout /t 10 >nul");
        return 0;
    }

    printf("\n");
    printf("Have you been through something funny, or something that improved your amusement (yes or no): ");
    scanf("%5s", som_FUHAQ);

    if (strcmp(som_FUHAQ, "yes") == 0)
    {
        emotion = happy;
        system("cls");
        printf("%s", emotion);
        system("timeout /t 6 >nul");
        printf("%s", happiness);
        system("timeout /t 10 >nul");
        return 0;
    }

    printf("\n");
    printf("Are you sitting somewhere with no noises, or are you comfortable on your chair or listening to music and working, or something that literally makes you have less tension, low cortisol (yes or no): ");
    scanf("%5s", calmQ);

    if (strcmp(calmQ, "yes") == 0)
    {
        emotion = calm;
        system("cls");
        printf("%s", emotion);
        system("timeout /t 6 >nul");
        printf("%s", calmness);
        system("timeout /t 10 >nul");
        return 0;
    }

    printf("Sorry, the Emotion Reader didn't find your emotion. Please try again on a different version, or a more advanced version of the Emotion Reader. If there's a bug, please contact us on GitHub by leaving a note.\n");

    system("timeout /t 15 >nul");

    return 0;
}