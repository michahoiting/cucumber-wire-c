//
//  wire-server.c
//  wire-server
//
//  Created by Itamar on 10/5/14.
//  Copyright (c) 2014 InContext. All rights reserved.
//

#include <stdio.h>

#ifndef __WIRE_SERVER_H__
#include "wire-server.h"
#endif

#define kVersion "0.0.0.0"

int wire_server(int port, int verbose)
{
	printf("wire_server %s\n", kVersion);
	return(0);
}
