#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbd606d92, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xdcef272, __VMLINUX_SYMBOL_STR(gasket_sysfs_get_device_data) },
	{ 0x4509001e, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xced9ce6a, __VMLINUX_SYMBOL_STR(gasket_register_device) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xc225208c, __VMLINUX_SYMBOL_STR(gasket_page_table_num_entries) },
	{ 0x60738aee, __VMLINUX_SYMBOL_STR(gasket_pci_remove_device) },
	{ 0x66c74370, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x36e20d60, __VMLINUX_SYMBOL_STR(uncached_logk) },
	{ 0xd21852aa, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x176839d2, __VMLINUX_SYMBOL_STR(gasket_sysfs_put_device_data) },
	{ 0xdbe48a3b, __VMLINUX_SYMBOL_STR(gasket_sysfs_get_attr) },
	{ 0x3adc63d6, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x64af6747, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xaef3d6c8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc146d08, __VMLINUX_SYMBOL_STR(pci_bus_assign_resources) },
	{ 0xffffef46, __VMLINUX_SYMBOL_STR(gasket_enable_device) },
	{ 0x50dd0313, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x6bb0ef78, __VMLINUX_SYMBOL_STR(kernel_param_unlock) },
	{ 0x544cad5d, __VMLINUX_SYMBOL_STR(gasket_reset_nolock) },
	{ 0xc3f3ecb9, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf97c1fe2, __VMLINUX_SYMBOL_STR(gasket_pci_add_device) },
	{ 0x5216395b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7214f434, __VMLINUX_SYMBOL_STR(gasket_sysfs_create_entries) },
	{ 0x7b90bc44, __VMLINUX_SYMBOL_STR(gasket_unregister_device) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x91db7b14, __VMLINUX_SYMBOL_STR(kernel_param_lock) },
	{ 0x38c3d415, __VMLINUX_SYMBOL_STR(gasket_page_table_num_active_pages) },
	{ 0x75090002, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x1328f978, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe50cf6a7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5f2375da, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2db0a1c4, __VMLINUX_SYMBOL_STR(gasket_sysfs_put_attr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd43fd4fd, __VMLINUX_SYMBOL_STR(gasket_disable_device) },
	{ 0xe6191427, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x3610da79, __VMLINUX_SYMBOL_STR(gasket_wait_with_reschedule) },
	{ 0x5ce1738b, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x259e74d, __VMLINUX_SYMBOL_STR(pci_enable_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gasket";

MODULE_ALIAS("pci:v00001AC1d0000089Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "508A8A34D57322CEA287D17");
