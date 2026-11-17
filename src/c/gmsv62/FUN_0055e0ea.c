/* FUN_0055e0ea - 0x0055e0ea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0055e0ea(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  uStack_14 = 0x55e102;
  FUN_004bc8b4();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x20] = 0xffffffff;
  extraout_ECX[0x21] = 0xffffffff;
  extraout_ECX[0x1e] = uVar1;
  extraout_ECX[0x1f] = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x23] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_14 = 0x55e136;
  FUN_0074b9b2();
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x161] = 0;
  extraout_ECX[0x163] = 0;
  extraout_ECX[0x165] = 0;
  extraout_ECX[0x167] = 0;
  extraout_ECX[0x168] = 0;
  extraout_ECX[0x169] = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_1c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *extraout_ECX = &PTR_FUN_008ebb70;
  extraout_ECX[1] = &PTR_LAB_008ebb24;
  extraout_ECX[2] = &PTR_FUN_008ebb20;
  FUN_00679e4e(&uStack_1c,0xb23);
  FUN_008163ca();
  if (extraout_ECX[0x18] == 0) {
    uStack_14 = 0x80004003;
    uStack_18 = 0x55e1a6;
    FUN_00878dfb();
  }
  uStack_14 = 0x55e1ae;
  iVar2 = FUN_0040e48b();
  if (extraout_ECX[0x18] == 0) {
    uStack_14 = 0x80004003;
    uStack_18 = 0x55e1bf;
    FUN_00878dfb();
  }
  uStack_14 = 0x55e1c7;
  iVar3 = FUN_0040e53d();
  uStack_14 = 1;
  uStack_18 = 0;
  uStack_1c = 1;
  FUN_0081420c(800U - iVar2 >> 1,600U - iVar3 >> 1,iVar2,iVar3,10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


