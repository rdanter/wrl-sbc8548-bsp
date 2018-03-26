#@TYPE: Machine inc.
#@NAME: Wind River SBC8548e configuration settings

# Use the standard kernel
PREFERRED_PROVIDER_virtual/kernel_wrs-sbc8548 = "linux-yocto"

# The 8548e has an E500v2 PowerPC core
DEFAULTTUNE = "ppce500v2"
require conf/machine/include/tune-ppce500v2.inc

MACHINE_FEATURES = "powerpc pci"

# The bootloader is U-Boot, we need a uImage file
KERNEL_IMAGETYPE = "uImage"

# Use the first (top) serial port for a console
SERIAL_CONSOLE = "115200 ttyS0"

# Generate a tar archive of the rootfs by default
IMAGE_FSTYPES ?= "tar.bz2"
