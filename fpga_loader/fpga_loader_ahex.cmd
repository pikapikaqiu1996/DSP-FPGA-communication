debug\fpga_loader.out
-a
-memwidth  8
-boot              
-bootorg 0x90000400
-bootsection .boot_load 0x90000000

ROMS
{
    FLASH:  org = 0x90000000, len = 0x80000, romwidth = 8, files = {fpga_loader_ahex.hex}
}
