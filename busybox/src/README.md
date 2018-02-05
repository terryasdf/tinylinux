This directory contains the source files used to build busybox.
The "busybox.tar.gz" file contains the original busybox package from upstream.
The "busybox" directory contains the edited configuration used to build busybox.

**NOTE:** Please change the path pointing to the directory holding the sanitized kernel
headers to the path appropriate on your local machine. 
The flag inside the *.config* file is called **CONFIG_EXTRA_CFLAGS=**
