Wind River SBC8548e Board Support Package
=========================================

Build Instructions
------------------

Use the following steps to configure a platform project for this BSP with
Wind River Linux LTS 17:

    $ git clone --branch WRLINUX_10_17_LTS /path/to/wrlinux-x
    $ ./wrlinux-x/setup.sh --distro wrlinux --dl-layers --accept-eula yes
    $ . environment-setup-x86_64-wrlinuxsdk-linux
    $ . oe-init-build-env
    $ bitbake-layers add-layer /path/to/wrl-sbc8548-bsp/
    $ echo "MACHINE = \"wrs-sbc8548\"" >> conf/local.conf

Build the platform with:

    $ bitbake wrlinux-image-glibc-std

and finally, if required, build and install the SDK:

    $ bitbake -c populate_sdk wrlinux-image-glibc-std
    $ cd tmp-glibc/deploy/sdk/
    $ ./wrlinux-10.17.41.6-glibc-x86_64-wrs_sbc8548-wrlinux-image-glibc-std-sdk.sh

See the User Guide for SDK usage instructions.
