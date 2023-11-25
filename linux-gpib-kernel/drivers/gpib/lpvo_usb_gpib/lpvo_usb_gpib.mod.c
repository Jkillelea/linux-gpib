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
	{ 0xe2964344, "__wake_up" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x7b0c27e0, "usb_kill_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x914ccc00, "usb_register_driver" },
	{ 0x21d81531, "usb_deregister" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xef31351c, "usb_alloc_urb" },
	{ 0xff12de57, "usb_alloc_coherent" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbba258ad, "usb_anchor_urb" },
	{ 0xef07e8e1, "usb_free_urb" },
	{ 0x3bc2a688, "usb_unanchor_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa19b956, "__stack_chk_fail" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x4f53d0f7, "get_current_tty" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa916b694, "strnlen" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc3f7dc24, "usb_find_interface" },
	{ 0xeadbe8e6, "usb_autopm_get_interface" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f97199b, "usb_autopm_put_interface" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xcf51c597, "usb_put_dev" },
	{ 0xa895aa59, "gpib_unregister_driver" },
	{ 0x8d4844b8, "usb_deregister_dev" },
	{ 0x5eec1563, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x86892d74, "kmalloc_caches" },
	{ 0xd07ae855, "kmalloc_trace" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x65363f79, "usb_get_dev" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xfebb13fa, "kobject_get_path" },
	{ 0x40fe35a3, "usb_register_dev" },
	{ 0x8ad352c7, "usb_control_msg" },
	{ 0xe42383f7, "gpib_register_driver" },
	{ 0x754d539c, "strlen" },
	{ 0xc7f2fe14, "pcpu_hot" },
	{ 0x1f1dca63, "gpib_match_device_path" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x20aaf694, "noop_llseek" },
	{ 0x30bfc2c, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x2e6c9f5a, "usb_submit_urb" },
	{ 0x5f0caf0d, "_dev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb041f92d, "usb_free_coherent" },
	{ 0xcf2a6966, "up" },
	{ 0x122c3a7e, "_printk" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "gpib_common");

MODULE_ALIAS("usb:v0403p6001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "12EC46C76914750FCD9BDFF");
