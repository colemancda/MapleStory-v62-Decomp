/* FUN_00648ac9 - 0x00648ac9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00648ac9(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  int iVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(extraout_ECX + 0xe4);
  if ((int)uVar1 < 0) goto LAB_00648cd1;
  if (*(int *)(extraout_ECX + 0xcc) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(*(int *)(extraout_ECX + 0xcc) + -4);
  }
  if ((uVar2 <= uVar1) || (*(int *)(extraout_ECX + 0xec) != 0)) goto LAB_00648cd1;
  iVar7 = uVar1 * 0x40 + *(int *)(extraout_ECX + 0xcc);
  iVar4 = *(int *)(iVar7 + 0x38);
  *(int *)(unaff_EBP + -0x30) = iVar4;
  if (iVar4 != 0) {
    iStack_4c = 0x648b2d;
    InterlockedIncrement((LONG *)(iVar4 + 4));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_0045e2eb();
  uVar6 = *(undefined4 *)(iVar7 + 0xc);
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
  iVar4 = *(int *)(iVar7 + 0x2c);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(int *)(unaff_EBP + -0x28) = iVar3 / 1000000;
  if ((*(int **)(unaff_EBP + -0x30) == (int *)0x0) ||
     (iVar7 = (**(code **)(**(int **)(unaff_EBP + -0x30) + 4))(), iVar7 == 0)) {
    uVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_4c = 0x648b94;
    iVar7 = FUN_00537942();
    if (iVar7 == 0) {
      iStack_4c = unaff_EBP + -0x20;
      iStack_50 = 0x648bd8;
      piVar5 = (int *)FUN_00679d22();
      iStack_50 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_54 = 0x648be8;
      iStack_4c = iVar4;
      uVar6 = FUN_006493a6();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      if ((0 < *(int *)(unaff_EBP + -0x14)) && (*(int *)(unaff_EBP + -0x14) <= iVar4))
      goto LAB_00648c08;
    }
    else {
      iStack_4c = 0;
      iStack_50 = 0;
      uStack_54 = 0;
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_58;
      uStack_58 = uVar6;
      FUN_00679d22(&uStack_58,0x342);
      iVar4 = FUN_007db791();
      if (iVar4 == 6) {
LAB_00648c08:
        iStack_4c = 0x648c17;
        FUN_00455c59();
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          iStack_4c = 0x648c28;
          FUN_0045e7c2();
        }
        if (*(int *)(unaff_EBP + -0x30) != 0) {
          iStack_50 = unaff_EBP + -0x2c;
          iStack_4c = *(undefined4 *)(unaff_EBP + -0x28);
          uStack_54 = 0x648c42;
          iVar4 = FUN_00458c4f();
          *(bool *)(unaff_EBP + -0xd) = *(int *)(iVar4 + 4) != *(int *)(unaff_EBP + -0x30);
          if (*(int *)(unaff_EBP + -0x28) != 0) {
            iStack_4c = 0x648c5a;
            FUN_00449913();
            *(undefined4 *)(unaff_EBP + -0x28) = 0;
          }
          if (*(char *)(unaff_EBP + -0xd) == '\0') {
            iStack_4c = 0;
            iStack_50 = 0x39;
            uStack_54 = 0x648c6e;
            FUN_0060142b();
            *(undefined1 *)(unaff_EBP + -4) = 2;
            iStack_4c = 0x648c7e;
            FUN_00457cda();
            iStack_4c = 0x648c89;
            FUN_0045d247();
            iStack_4c = 0x648c94;
            FUN_00457d37();
            iStack_4c = 0x648c9f;
            FUN_0045d247();
            iStack_4c = 0x648cae;
            FUN_004751b2();
            *(undefined4 *)(extraout_ECX + 0xec) = 1;
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_0045ebca();
          }
        }
      }
    }
  }
  else {
    iStack_4c = 0;
    iStack_50 = 0;
    uStack_54 = 0;
    *(undefined4 **)(unaff_EBP + -0x28) = &uStack_58;
    uStack_58 = extraout_ECX_00;
    FUN_00679d22(&uStack_58,0xd12);
    FUN_007db3ad();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    iStack_4c = 0x648cd1;
    FUN_00449913();
  }
LAB_00648cd1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


