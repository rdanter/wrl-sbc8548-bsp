# Wind River SBC8548e

# Currently, only the standard kernel is supported
TARGET_SUPPORTED_KTYPES_wrs-sbc8548 = "standard"

# We don't have a BSP-specific branch in the repository
KBRANCH_DEFAULT_standard_wrs-sbc8548 = "standard/base"

# PowerPC boards need a device tree
KERNEL_DEVICETREE_wrs-sbc8548 = "sbc8548.dtb"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
SRC_URI += "file://wrs-sbc8548-standard.scc"
SRC_URI += "file://wrs-sbc8548-standard.cfg"
SRC_URI += "file://0001-PowerPC-sbc8548-fix-reboot-failed.patch"
