#include "film.h"

int main(void)
{
        char *user_title = malloc(sizeof(char)*MAX_TITLE);
        float user_einnahmen = 0;
        int status = 0;
        Film a;
        while (status == 0)
        {
                printf("Bitte gib deinen Filmtitel ein: \n");
                scanf("%s", user_title);
                if (strlen(user_title) > 1 && strlen(user_title) < 56)
                {
                        status = 1;
                        break;
                }else {
                        printf("Der Titel war kleiner 2 oder groeßer 55!\n");
                }
                
        }   
        status = 0;
        while (status == 0)
        {
                printf("Bitte gib die Einnahmen ein: \n");
                scanf("%f", &user_einnahmen);
                if (user_einnahmen > 0)
                {
                        status = 1;
                        break;
                }else{
                        printf("Keine negativen Einnahmen!\n");
                }
                
        }
        status = 0;
        status = create_Film(&a, user_title, user_einnahmen);
        if (status != 0)
        {
                printf("Eingabe erfolgreich!\nDein Film:\n\n");
                print_movie(&a);
        }else {
                printf("Fehler beim anlegen des Films");
        }
        free(user_title);
        

        return 0;
}