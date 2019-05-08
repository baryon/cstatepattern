// C State Pattern
// Author: lilong@gmail.com (Long Li) http://www.bbshare.com
//
// This file is a part of the sample of State Pattern in C.
// The use and distribution terms for this software are covered by the
// MIT License 1.0 (http://www.opensource.org/licenses/mit-license.php)

#include <stdlib.h>
#include "openapi.h"
#include "statepattern.h"

static struct Context* _context;
#define CALL(fun, context) if( 0 != fun ) fun(context)

void init()
{
	_context = (struct Context*)malloc( sizeof( struct Context ));


	red(_context);
}

void push()
{
	CALL(_context->state->push, _context);
}

void pull()
{
	CALL(_context->state->pull, _context);
}

enum COLOR color()
{
	return _context->state->getColor(_context);
}

void release()
{
	if( 0 != _context->state->release)
	{
		free(_context);
		_context = 0;
	}
}


