#ifndef __S_HASH_TABLE__
#define __S_HASH_TABLE__

typedef void (*SHashTableDestroyFunc) (const char *key, void *value, void *user_data);

typedef struct {
} SHashTable;

SHashTable *s_hash_table_create();

void s_hash_table_destroy(SHashTable *table);
#endif /* __S_HASH_TABLE__ */
