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
	{ 0x2e6c9f5a, "usb_submit_urb" },
	{ 0xe2964344, "__wake_up" },
	{ 0x914ccc00, "usb_register_driver" },
	{ 0xe42383f7, "gpib_register_driver" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa895aa59, "gpib_unregister_driver" },
	{ 0x21d81531, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x65363f79, "usb_get_dev" },
	{ 0x86892d74, "kmalloc_caches" },
	{ 0xd07ae855, "kmalloc_trace" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcf51c597, "usb_put_dev" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7b0c27e0, "usb_kill_urb" },
	{ 0xef31351c, "usb_alloc_urb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xef07e8e1, "usb_free_urb" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x8ad352c7, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa19b956, "__stack_chk_fail" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc7f2fe14, "pcpu_hot" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1f1dca63, "gpib_match_device_path" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5eec1563, "_dev_info" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0xcf2a6966, "up" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "gpib_common");

MODULE_ALIAS("usb:v0957p0107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0957p0718d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "327B0821DC1243C8BBED9AD");
