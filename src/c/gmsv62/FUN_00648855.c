/* FUN_00648855 - 0x00648855 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00648855(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  uint uVar7;
  int unaff_EBP;
  int iVar8;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(extraout_ECX + 0xe0);
  if (-1 < (int)uVar1) {
    piVar2 = (int *)(extraout_ECX + 0xc0);
    if (*(int *)(*(int *)(extraout_ECX + 0x94) + 0x3c) == 0) {
      piVar2 = (int *)(extraout_ECX + 0xbc);
    }
    if (*piVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(*piVar2 + -4);
    }
    if ((uVar1 < uVar7) && (*(int *)(extraout_ECX + 0xec) == 0)) {
      iVar6 = *(int *)(*(int *)(extraout_ECX + 0x94) + 0x3c);
      *(int *)(unaff_EBP + -0x18) = iVar6;
      piVar2 = (int *)(extraout_ECX + 0xc0);
      if (iVar6 == 0) {
        piVar2 = (int *)(extraout_ECX + 0xbc);
      }
      iVar8 = uVar1 * 0x40 + *piVar2;
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      iStack_3c = 0x6488d7;
      iStack_3c = FUN_0045e2eb();
      iStack_40 = 0x6488dd;
      iVar3 = FUN_00537942();
      iVar6 = iStack_3c;
      if ((iVar3 == 0) && (*(int *)(iVar8 + 0x30) < 2)) {
        iStack_3c = 0x341;
        iStack_40 = unaff_EBP + -0x14;
        uStack_44 = 0x6488fa;
        puVar4 = (undefined4 *)FUN_00679d22();
        iStack_3c = *(undefined4 *)(iVar8 + 0x28);
        uStack_44 = *puVar4;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_40 = 1;
        uStack_48 = 0x64890c;
        uVar5 = FUN_006493a6();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
        iStack_3c = 0x64891b;
        FUN_00414ebb();
        if ((*(int *)(unaff_EBP + -0x10) < 1) ||
           (*(int *)(iVar8 + 0x28) < *(int *)(unaff_EBP + -0x10))) goto LAB_00648aba;
      }
      else {
        iStack_3c = 0;
        iStack_40 = 0;
        uStack_44 = 0;
        uStack_48 = 0;
        uStack_4c = iVar6;
        *(undefined4 **)(unaff_EBP + -0x14) = &uStack_4c;
        FUN_00679d22(&uStack_4c,0x340);
        iVar6 = FUN_007db791();
        if (iVar6 != 6) goto LAB_00648aba;
      }
      iStack_3c = 0x648964;
      iStack_3c = FUN_0045e2eb();
      iStack_40 = *(undefined4 *)(iVar8 + 0x18);
      uStack_44 = 0x64896f;
      iVar6 = FUN_0064953a();
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar8 + 0x18);
      }
      iStack_3c = unaff_EBP + -0x28;
      *(longlong *)(unaff_EBP + -0x20) = (longlong)iVar6 * (longlong)*(int *)(unaff_EBP + -0x10);
      iStack_40 = 0x64898e;
      iVar6 = FUN_00455c59();
      iStack_3c = *(undefined4 *)(*(int *)(iVar6 + 4) + 0xad);
      iStack_40 = *(int *)(iVar6 + 4) + 0xa5;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      uStack_44 = 0x6489a5;
      uVar5 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        iStack_3c = 0;
        iStack_40 = 0x6489be;
        FUN_0045e7c2();
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
      if ((-1 < *(int *)(unaff_EBP + -0x1c)) &&
         ((0 < *(int *)(unaff_EBP + -0x1c) || (*(int *)(unaff_EBP + -0x20) != 0)))) {
        iVar6 = (int)*(uint *)(unaff_EBP + -0x14) >> 0x1f;
        if ((*(int *)(unaff_EBP + -0x1c) <= iVar6) &&
           ((*(int *)(unaff_EBP + -0x1c) < iVar6 ||
            (*(uint *)(unaff_EBP + -0x20) <= *(uint *)(unaff_EBP + -0x14))))) {
          iStack_3c = 0;
          iStack_40 = 0;
          uStack_44 = 0x39;
          uStack_48 = 0x6489fc;
          FUN_0060142b();
          iStack_3c = 0;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          iStack_40 = 0x648a0d;
          FUN_00457cda();
          iStack_3c = *(int *)(extraout_ECX + 0xe0);
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            iStack_3c = *(int *)(*(int *)(extraout_ECX + 0xc4) + iStack_3c * 4);
          }
          iStack_40 = 0x648a2b;
          FUN_0045d247();
          iStack_3c = 0x648a32;
          iStack_3c = FUN_0045e2eb();
          iStack_40 = 0x648a3b;
          FUN_00457d37();
          iStack_3c = *(undefined4 *)(unaff_EBP + -0x10);
          iStack_40 = 0x648a46;
          FUN_0045d247();
          iStack_3c = *(undefined4 *)(iVar8 + 0x18);
          iStack_40 = 0x648a51;
          FUN_00457d37();
          iStack_3c = unaff_EBP + -0x38;
          iStack_40 = 0x648a60;
          FUN_004751b2();
          *(undefined4 *)(extraout_ECX + 0xec) = 1;
          iStack_3c = 0x648a6d;
          iStack_40 = FUN_0045e2eb();
          iStack_40 = iStack_40 / 1000000;
          iStack_3c = extraout_ECX + 0xd0;
          *(int *)(extraout_ECX + 0xe8) = iStack_40;
          uStack_44 = 0x648a8a;
          FUN_00646c88();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iStack_3c = 0x648a96;
          FUN_0045ebca();
          goto LAB_00648aba;
        }
      }
      iStack_3c = 0;
      iStack_40 = 0;
      uStack_44 = 0;
      uStack_48 = 0;
      uStack_4c = 0;
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_4c;
      FUN_00679d22(&uStack_4c,0x116);
      FUN_007db3ad();
    }
  }
LAB_00648aba:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


