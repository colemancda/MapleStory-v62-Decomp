/* FUN_005e8fdd - 0x005e8fdd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005e8fdd(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_00560122();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x21] = 0;
  iVar2 = *(int *)(unaff_EBP + 8);
  extraout_ECX[0x28] = 0xffffffff;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x26] = iVar2;
  extraout_ECX[0x27] = 0;
  iVar2 = *(int *)(iVar2 + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + -4);
  }
  extraout_ECX[0x2b] = 0;
  FUN_005ee831(iVar2 + 2,unaff_EBP + -0xd);
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2d] = 0;
  extraout_ECX[0x2e] = 0;
  extraout_ECX[0x2f] = 0;
  extraout_ECX[0x30] = 0;
  extraout_ECX[0x31] = 0;
  extraout_ECX[0x33] = 0xffffffff;
  extraout_ECX[0x32] = 3;
  extraout_ECX[0x35] = 0;
  extraout_ECX[0x36] = 0;
  extraout_ECX[0x37] = 0;
  extraout_ECX[0x38] = 0;
  extraout_ECX[0x39] = 0;
  extraout_ECX[0x3a] = 0;
  extraout_ECX[0x3b] = 0;
  extraout_ECX[0x3c] = 0;
  extraout_ECX[0x3d] = 0;
  extraout_ECX[0x3e] = 0;
  extraout_ECX[0x3f] = 0;
  extraout_ECX[0x40] = 0;
  extraout_ECX[0x43] = 0;
  extraout_ECX[0x45] = 0;
  extraout_ECX[0x49] = 1;
  extraout_ECX[0x4b] = 0;
  *extraout_ECX = &PTR_FUN_008eccc0;
  extraout_ECX[1] = &PTR_LAB_008ecc9c;
  extraout_ECX[2] = &PTR_FUN_008ecc98;
  uVar1 = *(undefined4 *)extraout_ECX[0x26];
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0062adf0(uVar1,extraout_ECX + 0x2d);
  iVar2 = unaff_EBP + -0x24;
  FUN_00429303(iVar2);
  FUN_004f0de4(iVar2);
  FUN_005f55c7(*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
               *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


