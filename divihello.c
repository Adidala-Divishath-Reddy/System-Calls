#include<linux/syscalls.h>
#include<linux/kernel.h>

SYSCALL_DEFINE0(divihello)
{
    printk("Hiii!! Welcome! I am Divishath \n");
    return 0;
}