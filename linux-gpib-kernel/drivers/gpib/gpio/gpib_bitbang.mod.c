#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa248ef6, "gpiod_get_value" },
	{ 0xd0692851, "gpiod_direction_output" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb3c031fb, "gpiod_set_value" },
	{ 0xe2964344, "__wake_up" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xe42383f7, "gpib_register_driver" },
	{ 0x15e4deb3, "gpiod_direction_input" },
	{ 0x8144df04, "gpiod_put" },
	{ 0xa895aa59, "gpib_unregister_driver" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa19b956, "__stack_chk_fail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x86892d74, "kmalloc_caches" },
	{ 0xd07ae855, "kmalloc_trace" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x7c8532bd, "gpio_to_desc" },
	{ 0x24911557, "gpiod_to_irq" },
	{ 0x30bfc2c, "param_ops_int" },
	{ 0xfe9616e6, "param_ops_charp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "gpib_common");


MODULE_INFO(srcversion, "EAF47267CABD48D8AFDA73B");
