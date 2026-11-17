/* FUN_00463ef7 - 0x00463ef7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00463ef7(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_00879bb8();
  iStack_28 = 8;
  iStack_2c = unaff_EBP + -0x24;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_30 = 0x463f1a;
  FUN_004245d2();
  uVar5 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar1 = (int *)(extraout_ECX + 0x488);
  *(undefined4 *)(unaff_EBP + 8) = 0;
  while( true ) {
    if ((*piVar1 == 0) || (*(uint *)(*piVar1 + -4) <= uVar5)) goto LAB_00463fcc;
    piVar2 = (int *)(*(int *)(unaff_EBP + 8) + *piVar1);
    if ((*piVar2 == *(int *)(unaff_EBP + -0x24)) && (piVar2[1] == *(int *)(unaff_EBP + -0x20)))
    break;
    uVar5 = uVar5 + 1;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x37;
  }
  iStack_28 = *(undefined4 *)(uVar5 * 0x37 + 0x10 + *piVar1);
  iStack_2c = unaff_EBP + -0x18;
  iStack_30 = 0x463f78;
  uVar3 = FUN_0045a1d8();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iStack_28 = 0xab8;
  iStack_2c = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_30 = 0x463f8f;
  puVar4 = (undefined4 *)FUN_00679d22();
  iStack_28 = **(undefined4 **)(unaff_EBP + 8);
  iStack_2c = *puVar4;
  iStack_30 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_34 = 0x463fa4;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_28 = 0x463fb3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_28 = 0x463fbf;
  FUN_00414ebb();
  iStack_28 = uVar5 * 0x37 + *piVar1;
  iStack_2c = 0x463fc9;
  FUN_004657d7();
LAB_00463fcc:
  iStack_28 = 0;
  iStack_2c = 0x463fdb;
  FUN_008161f1();
  iStack_28 = 1;
  iStack_2c = 0x463fe4;
  FUN_00489a0e();
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  uStack_34 = 0x4d5;
  iStack_38 = unaff_EBP + 8;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_34 = 0x464004;
  uStack_34 = FUN_00411641();
  *(int **)(unaff_EBP + -0x1c) = &iStack_38;
  FUN_00450368(unaff_EBP + -0x10);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_28 = 0x464028;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_28 = 0x464034;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


