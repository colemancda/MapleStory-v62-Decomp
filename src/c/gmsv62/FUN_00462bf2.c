/* FUN_00462bf2 - 0x00462bf2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00462bf2(void)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_ECX;
  int iVar6;
  int iVar7;
  int unaff_EBP;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  FUN_00879bb8();
  uStack_28 = 0x462c0c;
  uVar2 = FUN_0042452b();
  uVar2 = uVar2 & 0xff;
  uStack_28 = unaff_EBP + -0xd;
  iVar7 = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_30 = 0x462c21;
  uStack_2c = uVar2;
  FUN_00465810();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (uVar2 != 0) {
    uStack_28 = uVar2 * 0x37;
    uStack_2c = *(uint *)(unaff_EBP + -0x18);
    iStack_30 = 0x462c39;
    FUN_004245d2();
    if (uVar2 != 0) {
      *(int *)(unaff_EBP + -0x24) = extraout_ECX + 0x488;
      *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x940;
      *(uint *)(unaff_EBP + -0x20) = uVar2;
      do {
        uStack_28 = 0xffffffff;
        uStack_2c = 0x462c5c;
        puVar3 = (undefined4 *)FUN_00465774();
        puVar4 = (undefined4 *)(iVar7 + *(int *)(unaff_EBP + -0x18));
        for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
        *(undefined2 *)puVar3 = *(undefined2 *)puVar4;
        uStack_28 = 0;
        *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar4 + 2);
        uStack_2c = 0x462c76;
        FUN_008161f1();
        uStack_28 = 0;
        uStack_2c = 0x462c80;
        FUN_00489a0e();
        iVar7 = iVar7 + 0x37;
        piVar5 = (int *)(unaff_EBP + -0x20);
        *piVar5 = *piVar5 + -1;
      } while (*piVar5 != 0);
    }
  }
  uStack_28 = 0x462c92;
  uVar1 = FUN_00424561();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (uVar1 == 0) {
    uStack_28 = 0x21e;
    uStack_2c = unaff_EBP + 8;
    iStack_30 = 0x462cb7;
    puVar4 = (undefined4 *)FUN_00679d22();
    uStack_28 = *puVar4;
    uStack_2c = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_30 = 0x462cc6;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    uStack_28 = 0xd2a;
    uStack_2c = unaff_EBP + 8;
    iStack_30 = 0x462ce6;
    piVar5 = (int *)FUN_00679d22();
    uStack_2c = *piVar5;
    iStack_30 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_34 = 0x462cf7;
    uStack_28 = (uint)uVar1;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  uStack_28 = 0x462d06;
  FUN_00414ebb();
  uStack_28 = 0;
  uStack_2c = 1;
  iStack_30 = 0;
  uStack_34 = 0x4d5;
  iStack_38 = unaff_EBP + 8;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_34 = 0x462d25;
  uStack_34 = FUN_00411641();
  *(int **)(unaff_EBP + -0x24) = &iStack_38;
  FUN_00450368(unaff_EBP + -0x14);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_28 = 0x462d49;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_28 = 0x462d55;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_28 = 0x462d61;
  FUN_0045f6a5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


