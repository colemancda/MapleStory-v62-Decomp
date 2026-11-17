/* FUN_006eff8c - 0x006eff8c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006eff8c(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00789e42(0x12,0,0xffffffff,0xffffffff,0,0,0);
  DAT_00979274 = -(uint)(extraout_ECX + 0x15e != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15e] = 0;
  extraout_ECX[0x160] = 0;
  extraout_ECX[0x162] = 0;
  extraout_ECX[0x164] = 0;
  extraout_ECX[0x169] = 0;
  extraout_ECX[0x16a] = 0;
  extraout_ECX[0x16c] = 0;
  extraout_ECX[0x16e] = 0;
  extraout_ECX[0x171] = 0;
  extraout_ECX[0x172] = 0;
  extraout_ECX[0x173] = 0;
  extraout_ECX[0x178] = 0;
  extraout_ECX[0x179] = 0;
  extraout_ECX[0x17a] = 0;
  extraout_ECX[0x17b] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0087b2f0(extraout_ECX + 0x17c,4,8,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0074b9b2();
  extraout_ECX[0x2be] = 0;
  extraout_ECX[0x2bf] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  extraout_ECX[0x2c0] = 8000;
  *extraout_ECX = &PTR_LAB_008f0370;
  extraout_ECX[1] = &PTR_FUN_008f0324;
  extraout_ECX[2] = &PTR_FUN_008f0320;
  extraout_ECX[0x2c1] = 0;
  extraout_ECX[0x2c2] = 0;
  puVar1 = extraout_ECX + 0x2c5;
  iVar2 = 2;
  do {
    puVar1[-2] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0081420c(0xffffffba,0xffffffd8,0xa2,0x80,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


