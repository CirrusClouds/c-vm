#ifndef INTERP_H
#define INTERP_H

#include "token.h"
#include "label.h"
#include "trace.h"
#include "parser.h"

#define STACK_LENGTH 100

enum __ProgramStatus {
  PROG_SUCCESS,
  RUNTIME_ERR
};

typedef enum __ProgramStatus ProgramStatus;

char* registerName(int reg);

void print_program(TokenList* program);

ProgramStatus run_program(TokenList* program, LbList* labels, Ring* trace);

#endif
