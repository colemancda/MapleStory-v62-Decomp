/* FUN_00458ea3 - 0x00458ea3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00458ea3(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int extraout_ECX_07;
  undefined4 extraout_ECX_08;
  int unaff_EBP;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    iStack_48 = 0x99;
    iStack_4c = 0x458ec6;
    FUN_00464f0d();
    goto LAB_004592d1;
  }
  if (*(int *)(extraout_ECX + 0x18) != 0) goto LAB_004592d1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_48 = *(undefined4 *)(unaff_EBP + 8);
  iStack_4c = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_50 = 0x458ef3;
  FUN_0084a5e4();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    iStack_48 = 0x458f0a;
    iVar1 = FUN_0045e2eb();
    *(int *)(unaff_EBP + -0x24) = iVar1;
    if (iVar1 == 0x1b7f23) {
      iStack_48 = 0;
      iStack_4c = 0;
      uStack_50 = 0;
      iStack_54 = 0;
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_58;
      iStack_5c = 0x202;
      uStack_58 = extraout_ECX_00;
      FUN_00679d22(&uStack_58);
      iStack_5c = 0x458f35;
      iVar1 = FUN_007db791();
      if (iVar1 != 6) goto LAB_0045903f;
    }
    iStack_48 = *(undefined4 *)(unaff_EBP + -0x24);
    iStack_4c = unaff_EBP + -0x20;
    uStack_50 = 0x458f53;
    FUN_0045a1d8();
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0x20);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    *(int *)(unaff_EBP + -0x28) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 2;
      iVar1 = extraout_ECX_01;
    }
    else {
      iStack_48 = *(undefined4 *)(extraout_ECX + 0x24);
      iStack_4c = extraout_ECX + 0x1c;
      uStack_50 = 0x458f73;
      iVar1 = FUN_00413367();
      if (*(int *)(unaff_EBP + -0x28) <= iVar1) {
        *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 1;
      }
      iStack_48 = *(undefined4 *)(extraout_ECX + 0x30);
      iStack_4c = extraout_ECX + 0x28;
      uStack_50 = 0x458f8a;
      iVar1 = FUN_00413367();
      if (*(int *)(unaff_EBP + -0x28) <= iVar1) {
        *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 2;
      }
      iStack_48 = *(undefined4 *)(extraout_ECX + 0x3c);
      iStack_4c = extraout_ECX + 0x34;
      uStack_50 = 0x458fa1;
      iVar2 = FUN_00413367();
      iVar1 = iStack_48;
      if (*(int *)(unaff_EBP + -0x28) <= iVar2) {
        *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 4;
      }
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      if (((*(int *)(unaff_EBP + -0x24) == 5400000) || (*(int *)(unaff_EBP + -0x24) == 0x5269a8)) ||
         (*(int *)(unaff_EBP + -0x24) == 5200000)) {
        iStack_48 = *(undefined4 *)(extraout_ECX + 0x3c);
        iStack_4c = extraout_ECX + 0x34;
        *(undefined4 *)(unaff_EBP + -0x18) = 4;
        uStack_50 = 0x459005;
        iVar2 = FUN_00413367();
        iVar1 = iStack_48;
        if (iVar2 < *(int *)(unaff_EBP + -0x28)) {
          iStack_48 = 0;
          iStack_4c = 0;
          uStack_50 = 0;
          iStack_54 = 0;
          uStack_58 = iVar1;
          *(undefined4 **)(unaff_EBP + 8) = &uStack_58;
          iStack_5c = -1;
          FUN_0045f0f3(s_You_don_t_have_enough_Nexon_Game_009643cc);
          goto LAB_00459022;
        }
      }
      iStack_48 = 0;
      iStack_4c = *(undefined4 *)(unaff_EBP + -0x24);
      uStack_50 = 0x459088;
      iVar1 = FUN_0045d395();
      if (iVar1 == 0) {
LAB_004590f3:
        iStack_48 = unaff_EBP + -0x14;
        iStack_4c = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_50 = 0x459101;
        iVar1 = FUN_0045870a();
        uVar3 = extraout_ECX_03;
        if (iVar1 == 0) {
          iStack_48 = 0x239;
          iStack_4c = unaff_EBP + -0x28;
          uStack_50 = 0x459119;
          iStack_48 = FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_4c = 0x459126;
          iVar1 = FUN_0045ec92();
          if (iVar1 == 0) {
LAB_00459151:
            *(undefined1 *)(unaff_EBP + -0xd) = 0;
          }
          else {
            iStack_48 = 0;
            iStack_4c = 0;
            uStack_50 = 0;
            iStack_54 = 0;
            *(undefined4 **)(unaff_EBP + -0x24) = &uStack_58;
            iStack_5c = 0x239;
            uStack_58 = extraout_ECX_04;
            FUN_00679d22(&uStack_58);
            iStack_5c = 0x459146;
            iVar1 = FUN_007db3ad();
            *(undefined1 *)(unaff_EBP + -0xd) = 1;
            if (iVar1 == 0) goto LAB_00459151;
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_48 = 0x459160;
          FUN_00414ebb();
          if (*(char *)(unaff_EBP + -0xd) == '\0') {
            iStack_48 = 0;
            iStack_4c = 0;
            uStack_50 = 0;
            iStack_54 = 0;
            iStack_5c = unaff_EBP + -0x14;
            *(undefined4 **)(unaff_EBP + -0x24) = &uStack_58;
            uStack_58 = extraout_ECX_05;
            FUN_00450368();
            iStack_5c = 0x45917d;
            iVar1 = FUN_007db791();
            uVar3 = extraout_ECX_06;
            if (iVar1 == 6) goto LAB_004591a2;
          }
LAB_00459185:
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_48 = 0x459191;
          FUN_00414ebb();
          goto LAB_00459191;
        }
LAB_004591a2:
        iStack_48 = 0;
        iStack_54 = unaff_EBP + -0x34;
        *(undefined4 **)(unaff_EBP + -0x24) = &uStack_50;
        uStack_58 = 0x4591b3;
        uStack_50 = uVar3;
        iStack_4c = uVar3;
        FUN_0045e0ed();
        iStack_54 = unaff_EBP + -0x18;
        uStack_58 = 0;
        *(int **)(unaff_EBP + -0x2c) = &iStack_5c;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_5c = extraout_ECX_07;
        FUN_00679d22(&iStack_5c,0x207);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar1 = FUN_004592e2();
        if (iVar1 == 1) {
          iStack_48 = 0x4591f1;
          iVar1 = FUN_0045e2eb();
          if (((iVar1 == 0x4fa6a0) && (*(int *)(unaff_EBP + -0x18) == 1)) &&
             (*(int *)(extraout_ECX + 0x4f8) < 0x1e)) {
            iStack_48 = 0;
            iStack_4c = 0;
            uStack_50 = 0;
            iStack_54 = 0;
            *(undefined4 **)(unaff_EBP + 8) = &uStack_58;
            iStack_5c = -1;
            uStack_58 = extraout_ECX_08;
            FUN_0045f0f3(s_You_must_have_at_least_one_chara_00964368);
            iStack_5c = 0x459221;
            FUN_007db3ad();
          }
          else {
            iStack_48 = 0;
            iStack_4c = 0;
            uStack_50 = 0xc6;
            iStack_54 = 0x459235;
            FUN_0060142b();
            iStack_48 = 3;
            *(undefined1 *)(unaff_EBP + -4) = 6;
            iStack_4c = 0x459243;
            uVar3 = FUN_00457cda();
            iStack_48 = CONCAT31((int3)((uint)uVar3 >> 8),*(int *)(unaff_EBP + -0x18) == 2);
            iStack_4c = 0x459253;
            FUN_00457cda();
            iStack_48 = *(undefined4 *)(unaff_EBP + -0x18);
            iStack_4c = 0x45925e;
            FUN_00457d37();
            iStack_48 = *(undefined4 *)(unaff_EBP + 8);
            iStack_4c = 0x459269;
            FUN_00457d37();
            iStack_48 = unaff_EBP + -0x44;
            iStack_4c = 0x459278;
            FUN_004751b2();
            *(undefined4 *)(extraout_ECX + 0x18) = 1;
            if (*(int *)(extraout_ECX + 0x500) == 9) {
              *(undefined4 *)(extraout_ECX + 0x4c4) = *(undefined4 *)(unaff_EBP + 8);
            }
            *(undefined1 *)(unaff_EBP + -4) = 3;
            iStack_48 = 0x459299;
            FUN_0045ebca();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_48 = 0x4592a5;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x30) != 0) {
          iStack_48 = 0;
          iStack_4c = 0x4592b7;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
        }
      }
      else {
        iStack_48 = 0;
        iStack_4c = 0;
        uStack_50 = 0;
        iStack_54 = 0;
        uStack_58 = extraout_ECX_02;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_58;
          iStack_5c = 0x200;
          FUN_00679d22(&uStack_58);
          iStack_5c = 0x4590e7;
          iVar1 = FUN_007db791();
          if (iVar1 == 6) goto LAB_004590f3;
          goto LAB_00459185;
        }
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_58;
        iStack_5c = 0xb4f;
        FUN_00679d22(&uStack_58);
        iStack_5c = 0x4590ad;
        iVar1 = FUN_007db3ad();
        if (iVar1 == 0) goto LAB_004590f3;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          iStack_48 = *(int *)(unaff_EBP + -0x20) + -0xc;
          iStack_4c = 0x4590cc;
          FUN_00434e38();
        }
LAB_00459191:
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_48 = 0x45919d;
        FUN_0045e46f();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_48 = 0x4592c5;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_48 = 0x4592d1;
      FUN_00414ebb();
      goto LAB_004592d1;
    }
    iStack_48 = 0;
    iStack_4c = 0;
    uStack_50 = 0;
    iStack_54 = 0;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_58;
    iStack_5c = 0x224;
    uStack_58 = iVar1;
    FUN_00679d22(&uStack_58);
LAB_00459022:
    iStack_5c = 0x459027;
    FUN_007db3ad();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_48 = *(int *)(unaff_EBP + -0x20) + -0xc;
      iStack_4c = 0x45903e;
      FUN_00434e38();
    }
  }
LAB_0045903f:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_48 = 0x45904b;
  FUN_0045e46f();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    iStack_48 = *(int *)(unaff_EBP + -0x14) + -0xc;
    iStack_4c = 0x45905e;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    iStack_48 = *(int *)(unaff_EBP + -0x1c) + -0xc;
    iStack_4c = 0x459077;
    FUN_00434e38();
  }
LAB_004592d1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


