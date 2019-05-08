// C State Pattern
// Author: lilong@gmail.com (Long Li) http://www.bbshare.com
//
// This file is a part of the sample of State Pattern in C.
// The use and distribution terms for this software are covered by the
// MIT License 1.0 (http://www.opensource.org/licenses/mit-license.php)

#include "statepattern.h"

static void _push();
static void _pull();
static enum COLOR  _getColor();
static void _release();

static const enum COLOR _color = BLACK;
static struct State _state = { _push, _pull, _getColor, _release};
static struct Context* _context;

void black(struct Context* context)
{
	_context = context;
	_context->state = &_state;
}

static void _push()
{
	//go to blue
	Shift(blue, _context);
}

static void _pull()
{
	Shift(green, _context);
}

static enum COLOR  _getColor()
{
	return _color;
}

static void _release()
{
	//release resource
}

