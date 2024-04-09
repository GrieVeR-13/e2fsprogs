#ifndef EDS3_FUSE2FS_H
#define EDS3_FUSE2FS_H

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

struct fuse2fs;

int mountExt4(int argc, char *argv[], jobject raio, void **fuseSession);

int fuse2fsSetCacheEnabled(struct fuse2fs *ff, int isEnabled);

int fuse2fsResetCacheOnError(struct fuse2fs *ff, int isEnabled);


#ifdef __cplusplus
}
#endif

#endif