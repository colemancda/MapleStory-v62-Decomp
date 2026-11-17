/* FUN_004584ae - 0x004584ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004584ae(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x18) != 0) goto LAB_00458681;
  iStack_38 = *(undefined4 *)(unaff_EBP + 8);
  iStack_3c = unaff_EBP + -0x24;
  iStack_40 = 0x4584dd;
  FUN_0084a5e4();
  iVar3 = *(int *)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_38 = 0x4584f3;
    FUN_0045e46f();
    goto LAB_00458681;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(iVar3 + 0x20) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    iStack_38 = extraout_ECX_00;
LAB_00458507:
    if (5 < *(int *)(extraout_ECX + 0x490)) {
      *(undefined4 **)(unaff_EBP + 8) = &uStack_48;
      uVar4 = 0x1fb;
      uStack_48 = iStack_38;
      goto LAB_00458523;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_38 = 0x1f8;
    iStack_3c = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_40 = 0x4585bd;
    puVar2 = (undefined4 *)FUN_00679d22();
    iStack_38 = *(undefined4 *)(iVar3 + 0x20);
    iStack_3c = *puVar2;
    iStack_40 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_44 = 0x4585d0;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_38 = 0x4585df;
    FUN_00414ebb();
    iStack_38 = unaff_EBP + -0x10;
    iStack_3c = 3;
    iStack_44 = unaff_EBP + -0x14;
    *(int **)(unaff_EBP + -0x1c) = &iStack_40;
    uStack_48 = 0x4585f4;
    iStack_40 = extraout_ECX_01;
    FUN_00450368();
    iStack_44 = 0x4585f9;
    iVar3 = FUN_0045828d();
    if (iVar3 == 1) {
      iStack_38 = 0;
      iStack_3c = 0;
      iStack_40 = 0xc6;
      iStack_44 = 0x458612;
      FUN_0060142b();
      iStack_38 = 8;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_3c = 0x458620;
      uVar4 = FUN_00457cda();
      iStack_38 = CONCAT31((int3)((uint)uVar4 >> 8),*(int *)(unaff_EBP + -0x10) == 2);
      iStack_3c = 0x458630;
      FUN_00457cda();
      iStack_38 = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_3c = 0x45863b;
      FUN_00457d37();
      iStack_38 = *(undefined4 *)(unaff_EBP + 8);
      iStack_3c = 0x458646;
      FUN_00457d37();
      iStack_38 = unaff_EBP + -0x34;
      iStack_3c = 0x458655;
      FUN_004751b2();
      *(undefined4 *)(extraout_ECX + 0x18) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_38 = 0x458664;
      FUN_0045ebca();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_38 = 0x45866f;
    FUN_00414ebb();
  }
  else {
    iStack_38 = *(undefined4 *)(extraout_ECX + 0x24);
    iStack_3c = extraout_ECX + 0x1c;
    iStack_40 = 0x458547;
    iVar3 = FUN_00413367();
    if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x20) <= iVar3) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
    }
    iStack_38 = *(undefined4 *)(extraout_ECX + 0x30);
    iStack_3c = extraout_ECX + 0x28;
    iStack_40 = 0x458561;
    iVar3 = FUN_00413367();
    if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x20) <= iVar3) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
    }
    iStack_38 = *(undefined4 *)(extraout_ECX + 0x3c);
    iStack_3c = extraout_ECX + 0x34;
    iStack_40 = 0x45857b;
    iVar1 = FUN_00413367();
    iVar3 = *(int *)(unaff_EBP + -0x20);
    if (*(int *)(iVar3 + 0x20) <= iVar1) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
    }
    if (*(int *)(unaff_EBP + -0x10) != 0) goto LAB_00458507;
    uStack_48 = iStack_38;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_48;
    uVar4 = 0x224;
LAB_00458523:
    iStack_38 = 0;
    iStack_3c = 0;
    iStack_40 = 0;
    iStack_44 = 0;
    FUN_00679d22(&uStack_48,uVar4);
    FUN_007db3ad();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    iStack_38 = 0;
    iStack_3c = 0x458681;
    FUN_0045e794();
  }
LAB_00458681:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


