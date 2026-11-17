/* FUN_00617c64 - 0x00617c64 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00617c64(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  iStack_1c = unaff_EBP + -0x10;
  uStack_20 = 0x617c81;
  FUN_00617d04();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')) {
    iStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = *(undefined4 *)(*(int *)(extraout_ECX + 0x78) + 0x14);
    iStack_34 = extraout_ECX + 0x80;
    uStack_28 = 0x3ea;
    uStack_2c = 5000;
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_30;
    iStack_38 = 0x617cb5;
    FUN_00433bdf();
    iStack_38 = extraout_ECX + 0x114;
    *(int **)(unaff_EBP + -0x18) = &iStack_34;
    FUN_0041160e();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_38 = 0x617cd3;
    uVar1 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_38;
    FUN_00448a17(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0046c293();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_1c = 0x617cf6;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


