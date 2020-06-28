#ifndef _SERVER_H_
#define _SERVER_H_

#include <time.h>
#include "base.h"

typedef struct {
	char *key;
	char *value;
} two_strings;

typedef enum { CONFIG_UNSET, CONFIG_DOCUMENT_ROOT } config_var_t;

int config_read(server *srv, const char *fn);
int config_set_defaults(server *srv);
buffer *config_get_value_buffer(server *srv, connection *con, config_var_t field);

time_t steady_time(time_t *t);
#endif
