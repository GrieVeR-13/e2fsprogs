#ifndef EDS3_FUSE2FS_H
#define EDS3_FUSE2FS_H

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

struct fuse2fs;

int mountExt4(int argc, char *argv[], jobject raio, void **fuseSession);

int fuse2fsSetCacheMode(struct fuse2fs *ff, int mode);


#ifdef __cplusplus
}
#endif

#endif