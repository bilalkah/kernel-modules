/**
 * @file hello-2.c
 * @author your name (you@domain.com)
 * @brief hello-2.c - Demostrating the module_init() and module_exit() macros.
 * This is preferred over using init_module() and cleanup_module().
 * @version 0.1
 * @date 2021-03-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_2_init(void){
    printk(KERN_INFO "Hello, world 2\n");
    return 0;
}

static void __exit hello_2_exit(void){
    printk(KERN_INFO "Goodbye, world 2\n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);