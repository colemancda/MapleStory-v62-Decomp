/* FUN_00616998 - 0x00616998 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00616998(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00879bb8();
  uStack_1c = 0;
  uStack_20 = 0;
  *(undefined4 *)(extraout_ECX + 0x1c0) = 1;
  uStack_24 = *(undefined4 *)(*(int *)(extraout_ECX + 0x78) + 0x14);
  uStack_28 = 0x3ea;
  uStack_2c = 0;
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_30;
  iStack_38 = 0x6169d6;
  puStack_34 = (undefined1 *)(extraout_ECX + 0x80);
  FUN_00433bdf();
  iStack_38 = extraout_ECX + 0x114;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_34;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_3c = 0x6169eb;
  FUN_0041160e();
  puStack_40 = (undefined1 *)&iStack_38;
  *(int **)(unaff_EBP + -0x18) = &iStack_38;
  uStack_3c = 0x1126;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_3c = 0x616a11;
  FUN_0046c293();
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  puStack_30 = (undefined1 *)0x0;
  puStack_34 = *(undefined1 **)(*(int *)(extraout_ECX + 0x78) + 0x10);
  iStack_38 = 0x3eb;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_3c;
  puStack_40 = (undefined1 *)(extraout_ECX + 0x80);
  FUN_00433bdf();
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_40;
  FUN_0041160e(extraout_ECX + 0x114);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar1 = FUN_00449713();
  FUN_00560272(uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


