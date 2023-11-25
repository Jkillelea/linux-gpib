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

SYMBOL_CRC(nec7210_command, 0xb6493984, "");
SYMBOL_CRC(nec7210_board_reset, 0xc5ef1c13, "");
SYMBOL_CRC(nec7210_board_online, 0x4ebbbf01, "");
SYMBOL_CRC(nec7210_ioport_read_byte, 0x5b4eb6c7, "");
SYMBOL_CRC(nec7210_ioport_write_byte, 0x9e45d2bd, "");
SYMBOL_CRC(nec7210_iomem_read_byte, 0xd270e0d2, "");
SYMBOL_CRC(nec7210_iomem_write_byte, 0xdbc67765, "");
SYMBOL_CRC(nec7210_locking_ioport_read_byte, 0x630728a4, "");
SYMBOL_CRC(nec7210_locking_ioport_write_byte, 0x30c200dc, "");
SYMBOL_CRC(nec7210_locking_iomem_read_byte, 0x432c4770, "");
SYMBOL_CRC(nec7210_locking_iomem_write_byte, 0x8d7e5c8d, "");
SYMBOL_CRC(nec7210_read, 0xf51c7461, "");
SYMBOL_CRC(nec7210_enable_eos, 0xf353c913, "");
SYMBOL_CRC(nec7210_disable_eos, 0x0fa3f115, "");
SYMBOL_CRC(nec7210_serial_poll_response, 0x69cd83c7, "");
SYMBOL_CRC(nec7210_serial_poll_status, 0x92a0c54f, "");
SYMBOL_CRC(nec7210_parallel_poll_configure, 0x9cf430f7, "");
SYMBOL_CRC(nec7210_parallel_poll_response, 0xa6646d79, "");
SYMBOL_CRC(nec7210_parallel_poll, 0xe9e84628, "");
SYMBOL_CRC(nec7210_primary_address, 0x19d421b5, "");
SYMBOL_CRC(nec7210_secondary_address, 0x5b1ca646, "");
SYMBOL_CRC(nec7210_update_status, 0x16f5bdc1, "");
SYMBOL_CRC(nec7210_set_reg_bits, 0x778ad7ed, "");
SYMBOL_CRC(nec7210_set_handshake_mode, 0x84327174, "");
SYMBOL_CRC(nec7210_read_data_in, 0xd79f9189, "");
SYMBOL_CRC(nec7210_write, 0x35eed61e, "");
SYMBOL_CRC(nec7210_t1_delay, 0xfb907561, "");
SYMBOL_CRC(nec7210_request_system_control, 0x3a1df12c, "");
SYMBOL_CRC(nec7210_take_control, 0xe771896a, "");
SYMBOL_CRC(nec7210_go_to_standby, 0x25a9909d, "");
SYMBOL_CRC(nec7210_interface_clear, 0xde8fccaa, "");
SYMBOL_CRC(nec7210_remote_enable, 0x8c2d7771, "");
SYMBOL_CRC(nec7210_release_rfd_holdoff, 0x559e84ef, "");
SYMBOL_CRC(nec7210_return_to_local, 0x00f9fec5, "");
SYMBOL_CRC(nec7210_interrupt, 0x69ec83a4, "");
SYMBOL_CRC(nec7210_interrupt_have_status, 0x5bd1a6f8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92540fbf, "finish_wait" },
	{ 0xc7f2fe14, "pcpu_hot" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xa19b956, "__stack_chk_fail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x378b5d8d, "push_gpib_event" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "gpib_common");


MODULE_INFO(srcversion, "2AF28C30B2C1C720025C818");
