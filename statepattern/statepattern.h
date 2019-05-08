// C State Pattern
// Author: lilong@gmail.com (Long Li) http://www.bbshare.com
//
// This file is a part of the sample of State Pattern in C.
// The use and distribution terms for this software are covered by the
// MIT License 1.0 (http://www.opensource.org/licenses/mit-license.php)

#ifndef _STATEPATTERN_
#define _STATEPATTERN_

#include "openapi.h"

typedef void (*f_PUSH)();
typedef void (*f_PULL)();
typedef enum COLOR  (*f_GETCOLOR)();
typedef void (*f_RELEASE)();

struct State
{
	f_PUSH push;
	f_PULL pull;
	f_GETCOLOR getColor;
	f_RELEASE release;
};

struct Context;
struct Context
{
	struct State* state;
	int sharedValue;
	//... ...
};
typedef void (*costate)(struct Context* );

//state
void red(struct Context* );
void blue(struct Context* );
void green(struct Context* );
void black(struct Context* );

//shift state
#define  Shift(state, context) { ((costate)state)((struct Context*) context); }

#endif