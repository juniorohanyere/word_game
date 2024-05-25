#ifndef __MAIN_H
#define __MAIN_H

/**
 * struct data_s - data structure to store position of letters within a given
 *		   array
 *
 * @row: row
 * @col: column
*/

typedef struct data_s
{
	char *row;
	char *col;
} data_t;

char *pos(int num);
int get_pos(char **array, char *str, int num, int pstn);
char *get_result(data_t data, char **row, char **col);

#endif	/* __MAIN_H */
