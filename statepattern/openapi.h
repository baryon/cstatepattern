// C State Pattern
// Author: lilong@gmail.com (Long Li) http://www.bbshare.com
//
// This file is a part of the sample of State Pattern in C.
// The use and distribution terms for this software are covered by the
// MIT License 1.0 (http://www.opensource.org/licenses/mit-license.php)

#ifndef _OPENAPI_
#define _OPENAPI_

enum COLOR
{
	RED,
	BLUE,
	GREEN,
	BLACK
};

void init();
void push();
void pull();
enum COLOR color();
void release();

#endif