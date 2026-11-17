/* FUN_005f9225 - 0x005f9225 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f9225(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_004245d2((undefined4 *)(extraout_ECX + 0xad0),8);
  uVar1 = FUN_0042452b();
  uVar1 = uVar1 & 0xff;
  FUN_005fcf1e(*(undefined4 *)(extraout_ECX + 0xad0),*(undefined4 *)(extraout_ECX + 0xad4),uVar1);
  if (*(uint *)(extraout_ECX + 0xa94) == uVar1) {
    *(int *)(extraout_ECX + 0xad8) = *(int *)(extraout_ECX + 0xad8) + 1;
    *(undefined4 *)(extraout_ECX + 0xa9c) = 0;
  }
  else {
    *(undefined4 *)(extraout_ECX + 0xa9c) = 1;
  }
  *(undefined4 *)(extraout_ECX + 0x700) = 0;
  *(undefined4 *)(extraout_ECX + 0x708) = 0;
  *(undefined4 *)(extraout_ECX + 0xab8) = 30000;
  FUN_008161f1(0);
  if (uVar1 == 1) {
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x623);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x624);
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
  }
  FUN_007d40d5(*puVar2,100);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


