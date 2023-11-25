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
	{ 0xf51c7461, "nec7210_read" },
	{ 0x30c200dc, "nec7210_locking_ioport_write_byte" },
	{ 0x84f5e0d0, "pci_enable_device" },
	{ 0xa6646d79, "nec7210_parallel_poll_response" },
	{ 0xfb907561, "nec7210_t1_delay" },
	{ 0xad9e8d10, "pci_dev_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x35b7289, "__pci_register_driver" },
	{ 0x4896ad3, "pci_request_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa89e5fe5, "gpib_request_pseudo_irq" },
	{ 0x19d421b5, "nec7210_primary_address" },
	{ 0x3a1df12c, "nec7210_request_system_control" },
	{ 0xc5ef1c13, "nec7210_board_reset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5d8b5b72, "pci_unregister_driver" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe42383f7, "gpib_register_driver" },
	{ 0x1000e51, "schedule" },
	{ 0xa19b956, "__stack_chk_fail" },
	{ 0x35eed61e, "nec7210_write" },
	{ 0xfa3f115, "nec7210_disable_eos" },
	{ 0x5b1ca646, "nec7210_secondary_address" },
	{ 0xe771896a, "nec7210_take_control" },
	{ 0x4ebbbf01, "nec7210_board_online" },
	{ 0xd79f9189, "nec7210_read_data_in" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x630728a4, "nec7210_locking_ioport_read_byte" },
	{ 0x5bd1a6f8, "nec7210_interrupt_have_status" },
	{ 0x25a9909d, "nec7210_go_to_standby" },
	{ 0xde8fccaa, "nec7210_interface_clear" },
	{ 0x559e84ef, "nec7210_release_rfd_holdoff" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe9e84628, "nec7210_parallel_poll" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xeba0f5b2, "gpib_free_pseudo_irq" },
	{ 0x9cf430f7, "nec7210_parallel_poll_configure" },
	{ 0x2955190b, "gpib_pci_get_device" },
	{ 0xa895aa59, "gpib_unregister_driver" },
	{ 0xb560f28, "pci_release_regions" },
	{ 0x16f5bdc1, "nec7210_update_status" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xf353c913, "nec7210_enable_eos" },
	{ 0x92a0c54f, "nec7210_serial_poll_status" },
	{ 0x84327174, "nec7210_set_handshake_mode" },
	{ 0xd07ae855, "kmalloc_trace" },
	{ 0x778ad7ed, "nec7210_set_reg_bits" },
	{ 0x8c2d7771, "nec7210_remote_enable" },
	{ 0xb6493984, "nec7210_command" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x86892d74, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0x69cd83c7, "nec7210_serial_poll_response" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "nec7210,gpib_common");

MODULE_ALIAS("pci:v00001307d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000000Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008008d00003302sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1DBAEF6501EAB72645B8714");
