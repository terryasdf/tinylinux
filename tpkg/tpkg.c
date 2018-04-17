#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum sourcetype
{
	dir_src,
	net_src
};

char helpmsg[] =
"\ntpkg: a tiny package manager for TinyLinux \n"
"usage: tpkg -irsuh <pkg_name>\n"
"options: \n"
" -i installs the package <pkg_name> \n"
" -r removes the package <pkg_name> \n"
" -s syncs the local package database to the newest one in the online repo \n"
" -u updates all locally installed package to the newest version available \n"
" -h prints this manual and exits \n\0";

struct
{
	int srctype;
	char srcurl[256];
	char srcdir[256];
}config;

void stripTag(char *p, int size)
{
	for(int i=0; i<size; i++)
		if(p[i] == ':')
			p[i] = '\0';
}

int main(int argc, char *argv[])
{
	if(argc == 1)	// no arguments supplied
	{
		printf("%s\n", helpmsg);
		return 0;


	FILE *cfg = fopen("test.cfg", "r");	// read the config file
	if(cfg == NULL)
	{
		printf("Error opening configuration file!\n");
		exit(-1);
	}
	fscanf(cfg, "%s", config.srcurl);
	printf("%s  EOF val: %d\n", config.srcurl, EOF);

	// read the config file
	char data[512];
	while(fscanf(cfg, "%511s", data) != EOF)
	{
		stripTag(data, 512);
		if(strcmp(data, "srctype") == 0)
		{
			int t;
			fscanf(cfg, "%d", t);
			if(t != 0 || t != 1)
			{
				printf("Error: srctype must be 0 or 1\n");
				fclose(cfg);	// close the file
				exit(-1);
			}
			config.srctype = t;
		}
		else if(strcmp(data, "srcurl") == 0)
		{
			fscanf(cfg, "%255s", config.srcurl);
		}
		else
		{
			printf("Error: bad config file!\n");
			fclose(cfg);	// close the file
			exit(-1);
		}
	}
	fclose(cfg);	// close the file
	return 0;
}
