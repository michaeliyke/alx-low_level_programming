The hash-bang directive '#!' is actually processed by the kernel: when a file starts with 0x23, 0x21 (which is #!) the kernel will interpret what follows as the path to executable and attempt to run. The message from Dennis Ritchie that introduced '#!' in Research Unix, Jan 1980