#
#  Makefile for Gasket framework and dependent drivers.
#

#obj-m	+= gasket.o
#obj-m	+= apex.o

obj-$(CONFIG_GASKET)	+= gasket.o
obj-$(CONFIG_APEX)	+= apex.o


gasket-objs	:= gasket_core.o gasket_ioctl.o gasket_interrupt.o gasket_page_table.o gasket_sysfs.o
apex-objs	:= apex_driver.o
