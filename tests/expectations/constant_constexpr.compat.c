#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define CONSTANT_FLOAT32 312.292

#define CONSTANT_I64 216

#define DELIMITER ':'

#define LEFTCURLY '{'

typedef struct {
  int32_t x;
} Foo;

#define SomeFoo (Foo){ .x = 99 }
