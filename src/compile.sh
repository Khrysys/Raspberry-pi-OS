pwd
arm-none-eabi-gcc \ -mfloat-abi=hard \ -mfpu=vfp \ -march=armv6zk \ -mtune=arm1176jzf-s \ main.c -o main.elf