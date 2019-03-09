#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/smp.h>


int init_module(void)
{
	printk(KERN_INFO "Lab 1: start.\n");

	printk(KERN_INFO "Begin");
	printk(KERN_INFO "End");

	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Lab 1: end.\n");
}
