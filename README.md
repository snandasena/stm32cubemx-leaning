### [How to config STM32CubeMX Project in CLion(Linux) and Debug with QEMU](https://youtu.be/8izwlijcXDw)

#### Step 01:- Install required dependencies

```
Install STM32Cube init code generator for Linux  - https://www.st.com/en/development-tools/stm32cubemx.html#overview

This tool needs Python2 dev dependencies. If you got any issues, please run the following command in the Linux terminal
sudo apt install python2-minimal

Install SMT32CubeIDE -
sudo sh ./st-stm32cubeide_1.9.0_12015_20220302_0855_amd64.deb_bundle.sh


Install the xPack QEMU Arm binaries - https://xpack.github.io/qemu-arm/install/

Install xpm - https://xpack.github.io/xpm/install

Install ARM cross compiler - sudo apt install gcc-arm-none-eabi    

```

#### Step 02:- CLion tools and plugging configurations

```
Install QEMU debugger plugging ( Not necessarily) 

Install PlatformIO plugging( This plugging has included STM32CubeMX)

STM32CubeMX CLion tools config

```

#### Step 03:-  Create a STM32CubeMX Project and configure it with CLion


#### Step 04:- Configure QEMU for debugging in CLion

```bash 
${HOME}/.local/xPacks/@xpack-dev-tools/qemu-arm/6.2.0-2.1/.content/bin/qemu-system-gnuarmeclipse --board STM32F4-Discovery \
--mcu STM32F407VG --gdb tcp::1234 -d unimp,guest_errors  --image  ./cmake-build-debug/test_embedded_project.elf

```
