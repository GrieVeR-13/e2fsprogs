#ifndef EDS3_FUSE2FS_H
#define EDS3_FUSE2FS_H

#include <jni.h>

int mountExt4(int argc, char *argv[], jobject raio, void **fuseSession);

int formatExt4(jobject raio, const char *device_name_descr, int argc, char *argv[]);

#endif