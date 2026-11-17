/* FUN_006771e0 - 0x006771e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006771e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iStack_28 = 0xd5d;
    iStack_2c = unaff_EBP + 8;
    uStack_30 = 0x677212;
    iStack_28 = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_2c = 0x67721f;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    uVar3 = 100;
    if (*(int *)(unaff_EBP + 8) < 0x65) {
      uVar3 = *(undefined4 *)(unaff_EBP + 8);
    }
    iStack_28 = 0xd5c;
    iStack_2c = unaff_EBP + -0x14;
    uStack_30 = 0x677245;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_28 = *(undefined4 *)(unaff_EBP + 0xc);
    uStack_34 = *puVar1;
    uStack_30 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_38 = unaff_EBP + -0x10;
    iStack_2c = uVar3;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  iStack_28 = 0x67726a;
  FUN_00414ebb();
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  *(int **)(unaff_EBP + 8) = &iStack_38;
  FUN_00450368(unaff_EBP + -0x10);
  iVar2 = FUN_007db791();
  if (iVar2 == 6) {
    iStack_28 = 0;
    iStack_2c = 0;
    uStack_30 = 0x3c;
    uStack_34 = 0x67729e;
    FUN_0060142b();
    iStack_28 = 0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_2c = 0x6772ac;
    FUN_00457cda();
    iStack_28 = unaff_EBP + -0x24;
    iStack_2c = 0x6772bb;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_28 = 0x6772c6;
    FUN_0045ebca();
  }
  else {
    *(undefined4 *)(extraout_ECX + 0xb4) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_28 = 0x6772d2;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


