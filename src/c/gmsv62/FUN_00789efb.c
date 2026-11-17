/* FUN_00789efb - 0x00789efb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00789efb(void)

{
  int iVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_14 = 0x789f18;
  FUN_008140e5();
  extraout_ECX[0x1a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_14 = 0x789f27;
  FUN_0074b9b2();
  extraout_ECX[0x15d] = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  *(undefined1 **)(unaff_EBP + -0x14) = auStack_1c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *extraout_ECX = &PTR_FUN_008f17a8;
  extraout_ECX[1] = &PTR_FUN_008f175c;
  extraout_ECX[2] = &PTR_FUN_008f1758;
  FUN_004059fd(unaff_EBP + 0x10);
  FUN_008163ca();
  extraout_ECX[0x155] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x156] = *(undefined4 *)(unaff_EBP + 0xc);
  if (extraout_ECX[0x18] == 0) {
    uStack_14 = 0x80004003;
    uStack_18 = 0x789f7e;
    FUN_00878dfb();
  }
  uStack_14 = 0x789f86;
  iVar2 = FUN_0040e48b();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  extraout_ECX[0x157] = iVar2 + -0x14;
  extraout_ECX[0x158] = 8;
  extraout_ECX[0x159] = 0;
  if (iVar1 != 0) {
    uStack_14 = 0x789fab;
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


