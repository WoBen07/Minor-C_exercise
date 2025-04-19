#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double string_to_double(const char *s, char **endp);
void test(const char *s, char **endp1, char **endp2);

int main()
{
	char *string1, *string2;
	char **endp1 = &string1, **endp2 = &string2;
	test("129", NULL, NULL);
	test("129", endp1, endp2);
	test("   129.34", endp1, endp2);
	test("856.97", endp1, endp2);
	test(".49", endp1, endp2);
	test("-.87", endp1, endp2);
	test("+76.9", endp1, endp2);
	test("-9943.0785", endp1, endp2);
	test("18.", endp1, endp2);
	test("0.", endp1, endp2);
	test("12.43Hallo", endp1, endp2);
	test("+", endp1, endp2);
	test(".", endp1, endp2);

	return 0;
}

double string_to_double(const char *s, char **endp)
{
	double value = 0.0;
	int i, sign = 1, decimal = 0;
	double divid = 1.0;
	while (*s == ' ') {
        	s++;
        }
	if (*s == '-') {
        	sign = -1;
        	s++;
    	} else if (*s == '+') {
        	s++;
    	}
	for (i = 0; s[i] != '\n'; i++)
	{
		if (isdigit(s[i]))
		{
			if (*s == '.')
			{
				decimal = 1;
			}else {
				if (decimal)
				{
					divid *= 10.0;
				}
				value = value * 10.0 + (s[i] - '0');
			}
		}else if (s[i] != '.' && !isdigit(s[i])) {
            		if (endp != NULL) {
                		**endp = s[i];
                		(*endp)++;
            		}
            		break;
		}
		s++;
	}
	value = sign * value / divid;
	printf("\nSchleife zueende\n");
	return value;
}

void test(const char *s, char **endp1, char **endp2)
{
	printf("Zahl: %lf, Rest: %s\n", strtod(s, endp1), (endp1 != NULL ? *endp1 : "NULL"));
	printf("Zahl: %lf, Rest: %s\n\n", string_to_double(s, endp2), (endp2 != NULL ? *endp2 : "NULL"));
}
