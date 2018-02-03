
The TinyLinux project is aiming to build a very, very small Linux system (aiming at < 10MiB) for all sorts of usage, including things like embedded system development, distro building, studying the internals of a Linux system, etc.

Currently, the TinyLinux system has the following components inside:
  - Busybox 2.8 (Statically linked with musl-libc with sanitized kernel headers)
  - Linux Mainline Kernel 4.14 (bzImage, custom edition of "make tinyconfig")
  - Syslinux / Grub as bootloaders

Future versions of TinyLinux will be split into different systems with different purpose. Examples might be a system based on the type 1 bare-metal hypervisor Xen, or it could simply be an embedded system for Nano Pi or Raspberry Pi. Developing a lightweight package manager is also one of the goals of the project.

This project is still under heavy development. Please use the files/programs in this project at your own risk. 
  
-- Richard
