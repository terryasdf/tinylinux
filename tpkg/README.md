__TPKG: Tiny Package Manager for TinyLinux__

Making a very small package manager is also one of the sub-goals of the project.

  A lot of linux system building tutorials out there teaches you how to build a entirely functioning Linux base system but the
task of installing new packages / managing dependencies is a very painful problem and it soon makes using these hand-crafted
systems very unpractical since the user will spend too much time taking care of the system rather than working efficiently.

  So besides constructing a minimal linux system, I will also be making a package manager using C from scratch in order to
tackle this annoying problem.

__Functions of tpkg:__
- install packages from an online repo
- remove packages from the local system
- update all installed packages on the local system
- sync the local package database with the newest one in the online repo

tpkg is still under heavy development and might contain a lot of bugs, which might cause harm to the data on your system.  
