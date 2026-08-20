#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{        0, "linux_bde_create" },
	{        0, "lkbde_dev_instid_get" },
	{ 0x78b887ed, "vsprintf" },
	{ 0x8d8713a7, "param_ops_ulong" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x57cef20a, "proc_create" },
	{ 0x92540fbf, "finish_wait" },
	{        0, "lkbde_get_dma_info" },
	{ 0xedc03953, "iounmap" },
	{        0, "lkbde_get_dev_phys_hi" },
	{ 0x42c78e3b, "seq_lseek" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf3ee8cf8, "const_pcpu_hot" },
	{ 0x424cf61e, "seq_vprintf" },
	{ 0xfe487975, "init_wait_entry" },
	{        0, "lkbde_dev_state_get" },
	{ 0xde80cd09, "ioremap" },
	{        0, "linux_bde_destroy" },
	{        0, "lkbde_irq_mask_get" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4ecbcf5c, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{        0, "lkbde_irq_mask_set" },
	{        0, "lkbde_get_dev_virt" },
	{ 0x559728e9, "__register_chrdev" },
	{ 0x92cd853c, "remove_proc_entry" },
	{ 0xaa40fac6, "single_release" },
	{        0, "lkbde_get_dev_phys" },
	{ 0x754d539c, "strlen" },
	{ 0x3f363990, "param_ops_int" },
	{ 0x2b7dc433, "single_open" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{        0, "lkbde_get_dev_resource" },
	{        0, "lkbde_dev_instid_set" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x16d960c0, "module_layout" },
};

MODULE_INFO(depends, "linux-kernel-bde");

