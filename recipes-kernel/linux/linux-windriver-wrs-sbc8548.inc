# Wind River SBC8548e

TARGET_SUPPORTED_KTYPES_wrs-sbc8548 = "standard"

#KBRANCH_DEFAULT_standard_wrs-sbc8548 = "standard/${KMACHINE}"
KBRANCH_DEFAULT_standard_wrs-sbc8548 = "standard/base"

KERNEL_DEVICETREE_wrs-sbc8548 = "sbc8548.dtb"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
SRC_URI += "file://wrs-sbc8548-standard.scc"
SRC_URI += "file://wrs-sbc8548-standard.cfg"
