#pragma once

#include <common/types.h>
#include <common/utsname.h>

#define STACK_SIZE	8388608

void *process_alloc_stack();
void process_set_stack_base(void *base);
void *process_get_stack_base();

pid_t sys_getpid();
pid_t sys_getppid();
int setpgid(pid_t pid, pid_t pgid);
pid_t sys_getpgid(pid_t pid);
pid_t sys_getpgrp();

uid_t sys_getuid();
gid_t sys_getgid();
uid_t sys_geteuid();
gid_t sys_getegid();

void sys_exit(int status);
void sys_exit_group(int status);
int sys_oldolduname(struct oldold_utsname *buf);
int sys_olduname(struct old_utsname *buf);
int sys_uname(struct utsname *buf);

int sys_time(int *r);
