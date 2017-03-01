#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

int __init _apple_init(void)
{
	printk("From Kernel\n");
	return 0;
}

void __exit _apple_exit(void)
{
}

module_init(_apple_init);
module_exit(_apple_exit);

MODULE_AUTHOR("WONHOYOO");
MODULE_DISCRIPTION("ME");
MODULE_LICENSE("GPL");

