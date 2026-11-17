/* FUN_00617b68 - 0x00617b68 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00617b68(void)

{
  uint uVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_34;
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  uStack_18 = 0x617b7e;
  uVar1 = FUN_006162f6();
  if ((uVar1 & 0x100) != 0) {
    uStack_18 = *(undefined4 *)(unaff_EBP + 8);
    iStack_1c = unaff_EBP + -0x10;
    uStack_20 = 0x617b96;
    FUN_00617c1b();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0'))
    {
      uStack_18 = 0;
      iStack_1c = 0;
      uStack_20 = *(undefined4 *)(*(int *)(extraout_ECX + 0x78) + 0x14);
      iStack_30 = extraout_ECX + 0x80;
      uStack_24 = 0x3ea;
      uStack_28 = 5000;
      *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
      iStack_34 = 0x617bca;
      FUN_00433bdf();
      iStack_34 = extraout_ECX + 0x114;
      *(int **)(unaff_EBP + -0x14) = &iStack_30;
      FUN_0041160e();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_34 = 0x617be8;
      uVar2 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_34;
      FUN_00448a17(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0046c293();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_18 = 0x617c0b;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


