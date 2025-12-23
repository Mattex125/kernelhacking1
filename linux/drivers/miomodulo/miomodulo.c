#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */

#define DRIVER_AUTHOR "gonzales <p@dirac.org>"
#define DRIVER_DESC   "A internal modulo"

static int __init init_hello_4(void)
{
    	*(volatile uint8_t*)(uintptr_t)0x1 = 0xE0;
	printk(KERN_INFO "hello i'm modulo interno ");
	printk(KERN_INFO "adesso sono cambiato\n");
	return 0;
}

static void __exit cleanup_hello_4(void)
{
	printk(KERN_INFO "Goodbye, world from interno\n");
}

module_init(init_hello_4);
module_exit(cleanup_hello_4);

/*  
 *  You can use strings, like this:
 */

/* 
 * Get rid of taint message by declaring code as GPL. 
 */
MODULE_LICENSE("GPL");

/*
 * Or with defines, like this:
 */
MODULE_AUTHOR(DRIVER_AUTHOR);	/* Who wrote this module? */
MODULE_DESCRIPTION(DRIVER_DESC);	/* What does this module do */
