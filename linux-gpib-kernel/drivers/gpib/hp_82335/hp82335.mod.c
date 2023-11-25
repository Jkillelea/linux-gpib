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
	{ 0xc1514a3b, "free_irq" },
	{ 0xf59c4114, "tms9914_line_status" },
	{ 0xec119222, "tms9914_iomem_write_byte" },
	{ 0x7927ac95, "tms9914_return_to_local" },
	{ 0x1c0d723f, "tms9914_interrupt_have_status" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a0548bf, "tms9914_go_to_standby" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xac227e6b, "tms9914_take_control" },
	{ 0xc350a9e4, "tms9914_interface_clear" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe42383f7, "gpib_register_driver" },
	{ 0x51bf11b5, "tms9914_command" },
	{ 0x5e2ff7b, "tms9914_serial_poll_response" },
	{ 0x4178baee, "tms9914_remote_enable" },
	{ 0x3a36729b, "tms9914_secondary_address" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9fef51c3, "tms9914_board_reset" },
	{ 0xde80cd09, "ioremap" },
	{ 0x43a7850c, "tms9914_serial_poll_status" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1e8260f2, "tms9914_update_status" },
	{ 0xa18f093f, "tms9914_write" },
	{ 0x82a1b5a0, "tms9914_parallel_poll_configure" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x350d469e, "tms9914_iomem_read_byte" },
	{ 0x1bba760c, "tms9914_parallel_poll" },
	{ 0x888d662d, "tms9914_t1_delay" },
	{ 0xa895aa59, "gpib_unregister_driver" },
	{ 0x72a19c34, "tms9914_parallel_poll_response" },
	{ 0x315c9f9e, "tms9914_primary_address" },
	{ 0x3b9c6024, "tms9914_read" },
	{ 0x8064d125, "tms9914_enable_eos" },
	{ 0xe98c5572, "tms9914_online" },
	{ 0x2be7be63, "tms9914_disable_eos" },
	{ 0xd07ae855, "kmalloc_trace" },
	{ 0x77358855, "iomem_resource" },
	{ 0x86892d74, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0xe61927d8, "tms9914_request_system_control" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "tms9914,gpib_common");


MODULE_INFO(srcversion, "B820B283399C88D119C3AD3");
