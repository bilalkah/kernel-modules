/**
 * @file hello-3.c
 * @author your name (you@domain.com)
 * @brief Illustrating the __init, __initdata and __exit macros.
 * @version 0.1
 * @date 2021-03-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


static int hello3_data __initdata = 3;

static int __init hello_3_init(void){
    printk(KERN_INFO "Hello, world %d\n",hello3_data);
    return 0;
}
static void __exit hello_3_exit(void){
    printk(KERN_INFO "Goodbye, world 3\n");
}

module_init(hello_3_init);
module_exit(hello_3_exit);