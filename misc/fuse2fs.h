#ifndef EDS3_FUSE2FS_H
#define EDS3_FUSE2FS_H

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

struct fuse2fs;

int mountExt4(int argc, char *argv[], jobject raio, void **fuseSession);

int fuse2fsResetCacheOnError(struct fuse2fs *ff, int resetCacheOnError);


#ifdef __cplusplus
}
#endif

#endif