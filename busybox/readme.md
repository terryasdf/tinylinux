# "src" directory:
- "busybox.tar.gz" contains the original busybox package from upstream.
- "busybox-build.tar.gz" contains the edited configuration used to build busybox.
**NOTE:** Please change the path pointing to the directory holding the sanitized kernel
headers to the path appropriate on your local machine. 
The flag inside the *.config* file is called **CONFIG_EXTRA_CFLAGS=**

# "compiled" directory
- contains the compiled binary of busybox. Currently, all binaries are statically linked with musl-libc
