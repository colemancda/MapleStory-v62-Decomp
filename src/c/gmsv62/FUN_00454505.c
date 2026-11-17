/* FUN_00454505 - 0x00454505 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00454505(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0045ce85();
  extraout_ECX[6] = 0;
  extraout_ECX[0x10] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x122] = 0;
  extraout_ECX[0x123] = 0xffffffff;
  extraout_ECX[0x124] = 0;
  extraout_ECX[0x125] = 0;
  extraout_ECX[0x126] = 0;
  extraout_ECX[0x131] = 0;
  extraout_ECX[0x133] = 0;
  extraout_ECX[0x134] = 0;
  extraout_ECX[0x136] = 0;
  extraout_ECX[0x137] = 0;
  extraout_ECX[0x13a] = 0;
  extraout_ECX[0x13f] = 0;
  extraout_ECX[0x143] = 1;
  extraout_ECX[0x144] = 0;
  extraout_ECX[0x147] = 0;
  extraout_ECX[0x148] = 0;
  extraout_ECX[0x149] = 0;
  extraout_ECX[0x145] = &PTR_FUN_008e908c;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004546bb();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_004548cd();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_004549e4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00454c26();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00454d27();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_008140e5();
  extraout_ECX[0x709] = &PTR_FUN_008e9058;
  extraout_ECX[0x70a] = &PTR_LAB_008e900c;
  extraout_ECX[0x70b] = &PTR_FUN_008e9008;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00454e7c();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00454b6b();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  *extraout_ECX = &PTR_LAB_008e8ffc;
  extraout_ECX[1] = &PTR_FUN_008e8fb0;
  extraout_ECX[2] = &PTR_FUN_008e8fac;
  extraout_ECX[3] = &PTR_FUN_008e8fa8;
  iVar1 = FUN_0084a1e4();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
    *(undefined4 *)(unaff_EBP + 8) = 0x22000006;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + 8,&DAT_008f7260);
  }
  FUN_0045c52f(*(undefined4 *)(unaff_EBP + 8));
  uVar2 = FUN_0042452b();
  extraout_ECX[0x13d] = uVar2 & 0xff;
  uVar3 = FUN_0042459a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x13e] = uVar3;
  return extraout_ECX;
}


