/*
 * Realtek Semiconductor Corp.
 *
 * utils/rts_utils.c
 *
 * Copyright (C) 2014      Ming Qian<ming_qian@realsil.com.cn>
 */

#include <unistd.h> 
#include <stdio.h>
#include <stdlib.h>
#include "dlfw.h"

int main(int argc, char *argv[])
{
	int c;	
	char *file_name;
	char *dev_name;
	
	if (argc < 2) 
		fprintf(stderr, "need argument: <file_name> \n");
		
	c = getopt(argc, argv, "d:");

	if (c != -1)
		dev_name = optarg;
	else
		dev_name = "/dev/video0";

	file_name = argv[1];

	return rts_download_fw(dev_name, file_name, 0, 0);
}


