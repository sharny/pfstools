"Open pfs stream for reading or writing. pfs is an interchange format for high dynamic range images (see http://pfstools.sourceforge.net).\n"
"\n"
"usage: pfs_struct = pfsopen( fileName );\n"
"       pfs_struct = pfsopen( fileName, rows, columns );\n"
"       pfs_struct = pfsopen( fileName, [ rows columns ] );\n"
"       \n"
"  fileName - name of the file to read or write. \"stdin\" or \"stdout\" for standard input and output\n"
"  rows - height of images to write\n"
"  columns - width of images to write\n"
"\n"
"The first usage of pfsopen opens pfs stream for reading; the second and third for writing. Use pfsget or pfsput to read or write frames or single images. You must close pfs stream with pfsclose. The stream will not be closed when pfs_struct is deleted (for example with 'clear pfs_struct').\n"
"\n"
"pfs_struct is a structure that contains the following fields:\n"
"  EOF - set to 1 if there are no more frames; 0 otherwise\n"
"  FH - file handle of the file. For internal pruposes, do not use\n"
"  MODE - file open mode: R - for reading, W - for writing\n"
"  columns, rows - dimensions of each channel in the stream\n"
"  channels - structure that contains channels represented as real matrices\n"
"  tags - structure that contains tags represented as strings\n"
"  channelTags - structure that contains a structure for each channel, which contains tags. The format of the latter structure is the same as for 'tags' field.\n"
"  \n"
;
