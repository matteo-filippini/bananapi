#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
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
	{ 0xa4f08e42, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x3516accc, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xb0f66f73, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x4509001e, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9122ae4e, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xe361a9b, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_sub_return) },
	{ 0x66c74370, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0x2f3857e2, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x99ffd62e, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0x36e20d60, __VMLINUX_SYMBOL_STR(uncached_logk) },
	{ 0x3b034d97, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x32e05d0e, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x7b6646bb, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xc217d50d, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xaef3d6c8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x572d0104, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0xa3a45005, __VMLINUX_SYMBOL_STR(__get_task_comm) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1dff8c66, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0xc3f3ecb9, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x78d18db, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb61997e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xd67364f7, __VMLINUX_SYMBOL_STR(eventfd_ctx_fdget) },
	{ 0xd702e480, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xfadf2436, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0x5216395b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc86bad0e, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xca6ad534, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf24b3dfe, __VMLINUX_SYMBOL_STR(__ioremap) },
	{ 0x9a308014, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0xf698f2a3, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x741a07ab, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x95a47194, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x9e8b1b3a, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_add_return) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xece6d05a, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x1cbe748a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa0ddbd2f, __VMLINUX_SYMBOL_STR(cpu_hwcaps) },
	{ 0x6a5bc380, __VMLINUX_SYMBOL_STR(cpu_hwcap_keys) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xe50cf6a7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3ec95163, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0x5f2375da, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x90b65e4c, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x14f2bf27, __VMLINUX_SYMBOL_STR(zap_vma_ptes) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ff38e46, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x373cae0c, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x45a55ec8, __VMLINUX_SYMBOL_STR(__iounmap) },
	{ 0x5541fddd, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0x5ce1738b, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa22c64f4, __VMLINUX_SYMBOL_STR(task_active_pid_ns) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8de8658d, __VMLINUX_SYMBOL_STR(rtk_bus_sync) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x941f2aaa, __VMLINUX_SYMBOL_STR(eventfd_ctx_put) },
	{ 0xec909da6, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xb38ee7b4, __VMLINUX_SYMBOL_STR(arm64_const_caps_ready) },
	{ 0x1ff996d3, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x3897c133, __VMLINUX_SYMBOL_STR(get_user_pages_fast) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "069B6D0F6AE12073F4EAF5D");
