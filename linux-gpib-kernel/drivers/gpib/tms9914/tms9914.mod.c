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

SYMBOL_CRC(tms9914_command, 0x51bf11b5, "");
SYMBOL_CRC(tms9914_board_reset, 0x9fef51c3, "_gpl");
SYMBOL_CRC(tms9914_online, 0xe98c5572, "_gpl");
SYMBOL_CRC(tms9914_ioport_read_byte, 0x72aafeb4, "_gpl");
SYMBOL_CRC(tms9914_ioport_write_byte, 0xa45179f0, "_gpl");
SYMBOL_CRC(tms9914_iomem_read_byte, 0x350d469e, "_gpl");
SYMBOL_CRC(tms9914_iomem_write_byte, 0xec119222, "_gpl");
SYMBOL_CRC(tms9914_read, 0x3b9c6024, "");
SYMBOL_CRC(tms9914_enable_eos, 0x8064d125, "");
SYMBOL_CRC(tms9914_disable_eos, 0x2be7be63, "");
SYMBOL_CRC(tms9914_serial_poll_response, 0x05e2ff7b, "");
SYMBOL_CRC(tms9914_serial_poll_status, 0x43a7850c, "");
SYMBOL_CRC(tms9914_parallel_poll, 0x1bba760c, "");
SYMBOL_CRC(tms9914_parallel_poll_configure, 0x82a1b5a0, "");
SYMBOL_CRC(tms9914_parallel_poll_response, 0x72a19c34, "");
SYMBOL_CRC(tms9914_primary_address, 0x315c9f9e, "");
SYMBOL_CRC(tms9914_secondary_address, 0x3a36729b, "");
SYMBOL_CRC(tms9914_update_status, 0x1e8260f2, "");
SYMBOL_CRC(tms9914_line_status, 0xf59c4114, "");
SYMBOL_CRC(tms9914_write, 0xa18f093f, "");
SYMBOL_CRC(tms9914_t1_delay, 0x888d662d, "_gpl");
SYMBOL_CRC(tms9914_request_system_control, 0xe61927d8, "_gpl");
SYMBOL_CRC(tms9914_take_control, 0xac227e6b, "_gpl");
SYMBOL_CRC(tms9914_take_control_workaround, 0xf88d22ee, "_gpl");
SYMBOL_CRC(tms9914_go_to_standby, 0x9a0548bf, "_gpl");
SYMBOL_CRC(tms9914_interface_clear, 0xc350a9e4, "_gpl");
SYMBOL_CRC(tms9914_remote_enable, 0x4178baee, "_gpl");
SYMBOL_CRC(tms9914_return_to_local, 0x7927ac95, "_gpl");
SYMBOL_CRC(tms9914_set_holdoff_mode, 0xe309d453, "_gpl");
SYMBOL_CRC(tms9914_release_holdoff, 0xea3547b1, "_gpl");
SYMBOL_CRC(tms9914_interrupt, 0xa3e0f344, "");
SYMBOL_CRC(tms9914_interrupt_have_status, 0x1c0d723f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xa19b956, "__stack_chk_fail" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x378b5d8d, "push_gpib_event" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "gpib_common");


MODULE_INFO(srcversion, "45EB0F098B53ABAE616A556");
