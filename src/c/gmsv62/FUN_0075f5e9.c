/* FUN_0075f5e9 - 0x0075f5e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075f5e9(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  uint uVar5;
  bool bVar6;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int *piStack_48;
  
  FUN_00879bb8();
  piStack_48 = *(int **)(unaff_EBP + 8);
  iStack_4c = 0x75f603;
  FUN_0081622a();
  piStack_48 = (int *)(unaff_EBP + 8);
  iStack_4c = 0x75f60e;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar4 = DAT_00978358;
  bVar6 = DAT_00978358 == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((bVar6) ||
     (iVar4 = *(int *)(*(int *)(iVar4 + 0x1744) + 4 + *(int *)(extraout_ECX + 0x9c) * 8),
     *(int *)(unaff_EBP + -0x14) = iVar4, iVar4 == 0)) {
    piStack_48 = (int *)0x75f642;
    FUN_004125e6();
  }
  else {
    iVar4 = *(int *)(extraout_ECX + 0x88);
    for (uVar5 = *(uint *)(iVar4 + 0x38);
        (((int)uVar5 < *(int *)(iVar4 + 0x38) + 6 &&
         (iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x7c), iVar1 != 0)) &&
        (uVar5 < *(uint *)(iVar1 + -4))); uVar5 = uVar5 + 1) {
      if (uVar5 == *(uint *)(extraout_ECX + 0x98)) {
        iVar4 = *(int *)(iVar4 + 0x38);
        piVar2 = *(int **)(unaff_EBP + 8);
        if (piVar2 == (int *)0x0) {
          piStack_48 = (int *)0x80004003;
          iStack_4c = 0x75f691;
          FUN_00878dfb();
          piVar2 = *(int **)(unaff_EBP + 8);
        }
        iVar1 = *piVar2;
        piStack_48 = (int *)0xff5b7b9e;
        iStack_4c = 0xd;
        iStack_50 = 0x8a;
        iStack_54 = (uVar5 - iVar4) * 0xe + 0x1e;
        *(int **)(unaff_EBP + -0x18) = piVar2;
        iStack_50 = (**(code **)(iVar1 + 0x8c))(piVar2,10);
        if (iStack_50 < 0) {
          iStack_4c = *(undefined4 *)(unaff_EBP + -0x18);
LAB_0075f717:
          piStack_48 = (int *)&DAT_00963cc8;
          iStack_54 = 0x75f71d;
          FUN_00878e09();
        }
      }
      else if (uVar5 == *(uint *)(extraout_ECX + 0x94)) {
        iVar4 = *(int *)(iVar4 + 0x38);
        piVar2 = *(int **)(unaff_EBP + 8);
        if (piVar2 == (int *)0x0) {
          piStack_48 = (int *)0x80004003;
          iStack_4c = 0x75f6e3;
          FUN_00878dfb();
          piVar2 = *(int **)(unaff_EBP + 8);
        }
        iVar1 = *piVar2;
        piStack_48 = (int *)0xffbbc9d9;
        iStack_4c = 0xd;
        iStack_50 = 0x8a;
        iStack_54 = (uVar5 - iVar4) * 0xe + 0x1e;
        *(int **)(unaff_EBP + -0x18) = piVar2;
        iStack_50 = (**(code **)(iVar1 + 0x8c))(piVar2,10);
        if (iStack_50 < 0) {
          iStack_4c = *(undefined4 *)(unaff_EBP + -0x18);
          goto LAB_0075f717;
        }
      }
      iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x7c);
      if (*(int *)(iVar4 + uVar5 * 4) == 0x7fffffff) {
        piStack_48 = (int *)0xe6a;
        iStack_4c = unaff_EBP + -0x1c;
        iStack_50 = 0x75f742;
        piStack_48 = (int *)FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_4c = 0x75f74f;
        FUN_00414f8b();
        iVar4 = *(int *)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else {
        piStack_48 = *(int **)(iVar4 + uVar5 * 4);
        iStack_4c = unaff_EBP + -0x20;
        iStack_50 = 0x75f769;
        piStack_48 = (int *)FUN_0045a1d8();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_4c = 0x75f776;
        FUN_00414f8b();
        iVar4 = *(int *)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      if (iVar4 != 0) {
        piStack_48 = (int *)(iVar4 + -0xc);
        iStack_4c = 0x75f78a;
        FUN_00434e38();
      }
      piStack_48 = (int *)0x0;
      iStack_4c = 0;
      iStack_50 = 0x75f797;
      FUN_0045ed72();
      iStack_4c = 0x75f79e;
      FUN_0045ee27();
      piStack_48 = &DAT_00980690;
      iStack_4c = 0x75f7ac;
      FUN_00403191();
      piStack_48 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_4c = 0x75f7b9;
      FUN_00403191();
      piStack_48 = (int *)(unaff_EBP + -0x44);
      iStack_4c = unaff_EBP + -0x34;
      iStack_54 = unaff_EBP + -0x24;
      iStack_50 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_50 = 0x75f7dd;
      iStack_50 = FUN_00449749();
      iStack_54 = 0x75f7e6;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_54;
      iStack_54 = extraout_ECX_00;
      FUN_00448a17(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_005afea1();
      iVar4 = FUN_005af3ee();
      iVar4 = (uVar5 - iVar4) * 0xe + 0x1e;
      uVar3 = 0xf;
      FUN_004115d9(0xf,iVar4);
      FUN_00448e3a(uVar3,iVar4);
      piStack_48 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piStack_48 != (int *)0x0) {
        iStack_4c = 0x75f835;
        (**(code **)(*piStack_48 + 8))();
      }
      piStack_48 = (int *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_4c = 0x75f842;
      piStack_48 = (int *)FUN_00402bc3();
      if ((int)piStack_48 < 0) {
        iStack_4c = 0x75f84d;
        FUN_00878dfb();
      }
      piStack_48 = (int *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_4c = 0x75f85a;
      piStack_48 = (int *)FUN_00402bc3();
      if ((int)piStack_48 < 0) {
        iStack_4c = 0x75f865;
        FUN_00878dfb();
      }
      iVar4 = *(int *)(extraout_ECX + 0x88);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_48 = (int *)0x75f87d;
    FUN_00414ebb();
    piStack_48 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_48 != (int *)0x0) {
      iStack_4c = 0x75f88e;
      (**(code **)(*piStack_48 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


