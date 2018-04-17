#!/bin/bash
# this script is indirectly invoked by init to setup some ANSI color codes
# so that the echo commands can output some colorful text.

# NOTE: the content of the script should also be copied into /etc/profile in
# order to make these color codes available to user-space programs (such as
# shells started on the TTYs)

RED="$(echo -e '\033[1;31m')"
GREEN="$(echo -e '\033[1;32m')"
YELLOW="$(echo -e '\033[1;33m')"
BLUE="$(echo -e '\033[1;34m')"
MAGENTA="$(echo -e '\033[1;35m')"
CYAN="$(echo -e '\033[1;36m')"
WHITE="$(echo -e '\033[1;37m')"

NC="$(echo -e '\033[0m')"
