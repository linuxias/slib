#include <stdlib.h>

#include "s_hash_table.h"
#include "s_macro.h"

typedef struct {
	char *key;
	void *value;
} PrivateHashTable;

SHashTable *s_hash_table_create()
{
	SHashTable *table = NULL;

	table = (SHashTable *)calloc(1, sizeof(SHashTable));
	if S_UNLIKELY (table == NULL)
		return NULL;

	return table;
}

void s_hash_table_destroy(SHashTable *table)
{
	if (table)
		free(table);
}

SHashTable *s_hash_table_add(SHashTable *table, const char *key, void *value)
{
	return NULL;
}
