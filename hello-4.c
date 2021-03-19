/**
 * @file hello-4.c
 * @author your name (you@domain.com)
 * @brief Demonstrates module documentation
 * @version 0.1
 * @date 2021-03-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define DRIVER_AUTHOR "Bilal Kahraman <l1117062@std.yildiz.edu.tr>"
#define DRIVER_DESC "A sample driver"

static int __init init_hello_4(void){
    printk(KERN_INFO "Hello, world 4\n");
    return 0;
}

static void __exit cleanup_hello_4(void){
    printk(KERN_INFO "Goodbye, world 4\n");
}

module_init(init_hello_4);
module_exit(cleanup_hello_4);

/**
 * @brief You can use strings, like this:
 * 
 */
/**
 * Get rid of taint message by declarin code as GPL
 */

MODULE_LICENSE("GPL");
/**
 * Or with defines, like this:
 * 
 */

MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

/**
 * @brief This module uses /dev/testdevice. The MODULE_Supported
 * macro might be used in the future to help automatic configuration
 * of modules, but is currently ubused other than for documentation purposes.
 * 
 */

MODULE_SUPPORTED_DEVICE("testdevice");