/* FUN_00615619 - 0x00615619 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00615619(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  FUN_00879bb8();
  uStack_10 = 0;
  uStack_14 = 0;
  uStack_18 = *(undefined4 *)(*(int *)(extraout_ECX + 0x78) + 0x14);
  iStack_28 = extraout_ECX + 0x80;
  uStack_1c = 0x3ea;
  uStack_20 = 5000;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_24;
  iStack_2c = 0x61564e;
  FUN_00433bdf();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_2c = extraout_ECX + 0x114;
  *(int **)(unaff_EBP + -0x14) = &iStack_28;
  FUN_0041160e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_2c = 0x615670;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + 8) = &iStack_2c;
  FUN_00448a17(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0046c293();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


