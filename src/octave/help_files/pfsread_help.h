"DEPRECIATED! Use pfsopen/pfsget/pfsclose instead\n"
"Read selected PFS channels from stdin.\n"
"\n"
"usage: [C1 C2 ...] = pfsread( fileName, c1n, c2n, ...);\n"
"  fileName - name of the file to read, or \"stdin\" for standard input\n"
"  c1n - name of the first channel\n"
"  c2n - name of the second channel\n"
"  C1  - matrix with the first channel\n"
"  C2  - matrix with the second channel\n"
"\n"  
"Channel names are case sensitive\n"
"\n"
"Returns \"EOF\" strings instead of matrices if there are no more frames. Note the function can read multiple frames only from the stdin"
;
