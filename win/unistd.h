#ifndef _UNISTD_H
#define _UNISTD_H

extern int optind,opterr,optopt;
extern char *optarg;
int getopt(int argc, char *const argv[], const char *options);

#endif // _UNISTD_H
