/**
 * @file hello-1.c
 * @author your name (you@domain.com)
 * @brief The simples kernel module
 * @version 0.1
 * @date 2021-03-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<linux/module.h>
#include<linux/kernel.h>

int init_module(void){
    printk(KERN_INFO "Hello world 1.\n");
    /**
     * @brief A non 0 return means init_module failed; module cant be loaded
     * 
     */
    return 0;
}

void clean_module(void){
    printk(KERN_INFO "Hello world 1.\n");
}