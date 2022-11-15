#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_VERSION("4.15.0-133-GENERIC");

static int __init rickroll_init(void){
  printk(KERN_INFO "Rickroll module has been loaded\n");
  return 0;
}

static void __exit rickroll_exit(void){
  printk(KERN_INFO "Rickroll module has been unloaded\n");
  
}

module_init(rickroll_init);
module_exit(rickroll_exit);


