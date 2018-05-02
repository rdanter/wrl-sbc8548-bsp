Wind River SBC8548e Board Support Package
=========================================

**NOTE: The LTS 17 version of this BSP does not yet boot!**
Check out the WRL_8 or WRL_9 branches for a working version.

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

If you will build an SDK and plan to use it to build kernel modules then also
add `--templates feature/kernel-dev` when running `setup.sh` above.

Build the platform with:

    $ bitbake wrlinux-image-glibc-std

and finally, if required, build and install the SDK:

    $ bitbake -c populate_sdk wrlinux-image-glibc-std
    $ cd tmp-glibc/deploy/sdk/
    $ ./wrlinux-10.17.41.6-glibc-x86_64-wrs_sbc8548-wrlinux-image-glibc-std-sdk.sh

See the User Guide for SDK usage instructions.
