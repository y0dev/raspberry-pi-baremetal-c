default:
	aarch64-none-elf-as -o start.o start.s
	aarch64-none-elf-gcc -c -o main.o main.c -I ./include
	aarch64-none-elf-gcc -T linker.ld -o kernel7.elf start.o main.o -ffreestanding -O2 -nostdlib -lgcc 
	# -lbluetooth
	aarch64-none-elf-objcopy kernel7.elf -O binary kernel7.img