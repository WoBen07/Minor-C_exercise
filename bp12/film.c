#include "film.h"


char *Film_get_title(Film *f)
{
        return (*f).Titel;
}

float *Film_get_einnahmen(Film *f)
{
        return &(*f).Einnahmen;
}

int film_check_title(char *title)
{
        if (strlen(title) > 1 && strlen(title) < 56)
        {
                return 1;
        }
        return 0;
}

int film_check_einnahmen(float *einnahmen)
{
        if (*einnahmen > 0)
        {
                return 1;
        }
        return 0;
}

int film_set_einnahmen(Film *f, float *einnahmen)
{
        if (film_check_einnahmen(einnahmen))
        {
                (*f).Einnahmen = *einnahmen;
                return 1;
        }
        return 0;
}

int film_set_title(Film *f, char *title)
{
        if (film_check_title(title))
        {
                strcpy((*f).Titel, title);
                return 1;
        }
        return 0;
}

int create_Film(Film *f, char *title, float einnahmen)
{
        int status1 = 0, status2 = 0;
        status1 = film_set_title(f, title);
        status2 = film_set_einnahmen(f, &einnahmen);
        if (status1 != 0 && status2 != 0)
        {
                return 1;
        }
        return 0;
}

void print_movie(Film *f)
{
        printf("**************\n");
        printf("Titel: %s\n", (*f).Titel);
        printf("Einnahmen: %f Euro\n\n", (*f).Einnahmen);
        printf("**************\n");

}