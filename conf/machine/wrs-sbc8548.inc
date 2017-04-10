#@TYPE: Machine inc.
#@NAME: wrs-sbc8548 layer

DEFAULTTUNE = "ppce500v2"
require conf/machine/include/tune-ppce500v2.inc

MACHINE_FEATURES = "powerpc pci ext3"

KERNEL_IMAGETYPE = "uImage"

SERIAL_CONSOLE = "115200 ttyS0"

IMAGE_FSTYPES ?= "tar.bz2"

