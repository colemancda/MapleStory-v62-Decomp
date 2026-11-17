/* FUN_00698cca - 0x00698cca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00698cca(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0087b2f0(extraout_ECX + 0xdd,8,8,&LAB_00576ee2,FUN_0044976a);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0xed,4,8,FUN_00483ba7,FUN_00414ebb);
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0xf6] = 2;
  extraout_ECX[0xf7] = uVar1;
  extraout_ECX[0xf8] = 0;
  extraout_ECX[0xf9] = 0;
  extraout_ECX[0xfa] = 0;
  extraout_ECX[0xfb] = 0;
  extraout_ECX[0xfc] = 0;
  extraout_ECX[0xfd] = 0;
  extraout_ECX[0xfe] = 0;
  extraout_ECX[0x100] = 0;
  extraout_ECX[0x102] = 0;
  extraout_ECX[0x104] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  *extraout_ECX = &PTR_FUN_008eedd0;
  extraout_ECX[1] = &PTR_FUN_008eed84;
  extraout_ECX[2] = &PTR_FUN_008eed80;
  FUN_004245d2(extraout_ECX + 0x1d,0x300);
  uVar2 = FUN_0042452b();
  extraout_ECX[0xf5] = uVar2 & 0xff;
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x72f);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


