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

SYMBOL_CRC(gpib_register_driver, 0xe42383f7, "");
SYMBOL_CRC(gpib_unregister_driver, 0xa895aa59, "");
SYMBOL_CRC(gpib_pci_get_device, 0x2955190b, "");
SYMBOL_CRC(gpib_pci_get_subsys, 0x5f72a287, "");
SYMBOL_CRC(gpib_match_device_path, 0x1f1dca63, "");
SYMBOL_CRC(writeb_wrapper, 0x92df39db, "");
SYMBOL_CRC(readb_wrapper, 0x69279cb9, "");
SYMBOL_CRC(outb_wrapper, 0x881e5c01, "");
SYMBOL_CRC(inb_wrapper, 0x868fcdb4, "");
SYMBOL_CRC(writew_wrapper, 0xdebed785, "");
SYMBOL_CRC(readw_wrapper, 0xafe00970, "");
SYMBOL_CRC(outw_wrapper, 0xc47fb25f, "");
SYMBOL_CRC(inw_wrapper, 0x4048587d, "");
SYMBOL_CRC(gpib_request_pseudo_irq, 0xa89e5fe5, "");
SYMBOL_CRC(gpib_free_pseudo_irq, 0xeba0f5b2, "");
SYMBOL_CRC(push_gpib_event, 0x378b5d8d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6cf7f77, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeea3c1d8, "__class_create" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x31a64363, "pci_get_device" },
	{ 0x6a2dd7c, "class_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfebb13fa, "kobject_get_path" },
	{ 0xc7f2fe14, "pcpu_hot" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd67c2d24, "wake_up_process" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xa19b956, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5c7d5920, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5f0caf0d, "_dev_err" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6c333d48, "device_create" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x9f48059f, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfdee0a20, "pci_get_subsys" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5e69e2b0, "kthread_create_on_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x25f7aec2, "__register_chrdev" },
	{ 0x3e2bc4cf, "device_destroy" },
	{ 0xd07ae855, "kmalloc_trace" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x86892d74, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F5DBCAFD8A901CE5DE64CA3");
