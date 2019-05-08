// C State Pattern
// Author: lilong@gmail.com (Long Li) http://www.bbshare.com
//
// This file is a part of the sample of State Pattern in C.
// The use and distribution terms for this software are covered by the
// MIT License 1.0 (http://www.opensource.org/licenses/mit-license.php)

#include <stdio.h>

#include "statepattern.h"

int main(int argc, char* argv[])
{
	init();
	printf("%d\n", color()); //red=0

	push();
	printf("%d\n", color());//blue=1

	push();
	printf("%d\n", color());//green=2

	push();
	printf("%d\n", color());//black=3
	
	pull();
	printf("%d\n", color());//green=2
	
	pull();
	printf("%d\n", color());//blue=1

	push();
	printf("%d\n", color());//green=2

	pull();
	printf("%d\n", color());//blue=1

	push();
	printf("%d\n", color());//green=2

	push();
	printf("%d\n", color());//black=3

	release();

	return 0;
}

