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
	{ 0x25a9909d, "nec7210_go_to_standby" },
	{ 0x3a1df12c, "nec7210_request_system_control" },
	{ 0xde8fccaa, "nec7210_interface_clear" },
	{ 0x8c2d7771, "nec7210_remote_enable" },
	{ 0xf353c913, "nec7210_enable_eos" },
	{ 0xfa3f115, "nec7210_disable_eos" },
	{ 0x16f5bdc1, "nec7210_update_status" },
	{ 0x19d421b5, "nec7210_primary_address" },
	{ 0x5b1ca646, "nec7210_secondary_address" },
	{ 0xe9e84628, "nec7210_parallel_poll" },
	{ 0x9cf430f7, "nec7210_parallel_poll_configure" },
	{ 0xa6646d79, "nec7210_parallel_poll_response" },
	{ 0x92a0c54f, "nec7210_serial_poll_status" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb907561, "nec7210_t1_delay" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xde6c83c2, "__platform_driver_register" },
	{ 0x35b7289, "__pci_register_driver" },
	{ 0xe42383f7, "gpib_register_driver" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa895aa59, "gpib_unregister_driver" },
	{ 0x5d8b5b72, "pci_unregister_driver" },
	{ 0x64c56e5a, "platform_driver_unregister" },
	{ 0x1f1dca63, "gpib_match_device_path" },
	{ 0x701a8d08, "_dev_notice" },
	{ 0xc5ef1c13, "nec7210_board_reset" },
	{ 0xedc03953, "iounmap" },
	{ 0xb560f28, "pci_release_regions" },
	{ 0xad9e8d10, "pci_dev_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x71fdaea, "dma_release_channel" },
	{ 0x77358855, "iomem_resource" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xc7f2fe14, "pcpu_hot" },
	{ 0x778ad7ed, "nec7210_set_reg_bits" },
	{ 0x5bd1a6f8, "nec7210_interrupt_have_status" },
	{ 0xe2964344, "__wake_up" },
	{ 0x378b5d8d, "push_gpib_event" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1dcc18f3, "dma_map_page_attrs" },
	{ 0xbe8d5277, "dma_unmap_page_attrs" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x2e3c434b, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x5f0caf0d, "_dev_err" },
	{ 0x86892d74, "kmalloc_caches" },
	{ 0xd07ae855, "kmalloc_trace" },
	{ 0x84327174, "nec7210_set_handshake_mode" },
	{ 0x4ebbbf01, "nec7210_board_online" },
	{ 0x62fdcd8d, "driver_find_device" },
	{ 0xc831e422, "platform_get_resource_byname" },
	{ 0x85bd1608, "__request_region" },
	{ 0xde80cd09, "ioremap" },
	{ 0x5eec1563, "_dev_info" },
	{ 0xa9245a62, "platform_get_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x484e5396, "dma_request_chan" },
	{ 0x2955190b, "gpib_pci_get_device" },
	{ 0x84f5e0d0, "pci_enable_device" },
	{ 0x4896ad3, "pci_request_regions" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa19b956, "__stack_chk_fail" },
	{ 0xf51c7461, "nec7210_read" },
	{ 0x35eed61e, "nec7210_write" },
	{ 0xb6493984, "nec7210_command" },
	{ 0xe771896a, "nec7210_take_control" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "nec7210,gpib_common");

MODULE_ALIAS("pci:v0000FFFFd00000000sv00000000sd00000000bc*sc*i*");
MODULE_ALIAS("of:N*T*Cfmhess,fmh_gpib_core");
MODULE_ALIAS("of:N*T*Cfmhess,fmh_gpib_coreC*");

MODULE_INFO(srcversion, "CB513FB6302D331C5867549");
