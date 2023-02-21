#include <stdint.h>
#include <stdbool.h>

typedef struct item {
	struct item *next;
	uint8_t Value;
} item_t;

item_t *lt_add(item_t *root, uint8_t val);
item_t *lt_remove(item_t *root, uint8_t val);
void lt_printall(item_t *root);