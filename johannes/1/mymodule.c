#include <linux/module.h>
#include <linux/init.h>

/* meta information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Johannes 4 Gnu/linux");
MODULE_DESCRIPTION("A hello world LKM");

static int __init ModuleInit(void){
  printk("Hello, Kernel\n");
  return 0;
}

static void __exit ModuleExit(void){
  printk("bye Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
