/* FUN_0045af91 - 0x0045af91 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045af91(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  int *piStack_64;
  int *piStack_60;
  undefined *puStack_5c;
  int *piStack_58;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 4);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb0;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  if (iVar4 != 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 0x18) == 0) {
      piStack_58 = (int *)0x45afc9;
      cVar2 = FUN_00434f2c();
      if (cVar2 != '\0') goto LAB_0045b2e5;
    }
    piStack_58 = (int *)0x45afdc;
    FUN_00402e8e();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if ((*(short **)(unaff_EBP + 8) != (short *)0x0) && (**(short **)(unaff_EBP + 8) != 0)) {
      piStack_58 = (int *)0x45b005;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_58 = (int *)0x45b012;
      FUN_00403191();
      piStack_58 = (int *)0x0;
      puStack_5c = (undefined *)(unaff_EBP + -0x40);
      piStack_60 = (int *)(unaff_EBP + -0x30);
      *(int ***)(unaff_EBP + -0x20) = &piStack_64;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_64 = extraout_ECX_00;
      FUN_004059fd(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00402660();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00404a02(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_5c = (undefined *)0x45b056;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 8) = uVar3;
      piStack_58 = (int *)0x45b065;
      iVar4 = FUN_00438b9b();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        piStack_58 = (int *)0x45b078;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_58 = (int *)0x45b085;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_58 = (int *)0x45b090;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_58 = (int *)0x45b09d;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_58 = (int *)0x45b0a8;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_58 = (int *)0x45b0b5;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_58 = (int *)0x45b0c0;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + 0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_58 = (int *)0x45b0d9;
    cVar2 = FUN_0045e2cc();
    iVar4 = extraout_ECX;
    if (cVar2 == '\0') {
      piStack_58 = (int *)0x45b0ea;
      FUN_00403191();
      piStack_58 = (int *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_5c = (undefined *)0x45b0f9;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        piStack_58 = (int *)0x45b10c;
        FUN_00878dfb();
      }
      piStack_58 = (int *)(unaff_EBP + -0x40);
      puStack_5c = (undefined *)(unaff_EBP + 8);
      piStack_60 = (int *)0x45b120;
      puVar5 = (undefined4 *)FUN_00433fe6();
      piStack_58 = (int *)0x45b12a;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0x18),
                 (IBinding *)*puVar5);
      FUN_00434c6b();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_58 = (int *)0x45b13f;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_58 = (int *)0x45b14a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_58 = (int *)0x45b157;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_58 = (int *)0x45b162;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0x18) == 0) {
        piStack_58 = (int *)0x45b171;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(unaff_EBP + 0x18);
      puStack_5c = (undefined *)0x45b17c;
      piStack_58 = piVar1;
      piVar7 = (int *)(**(code **)(*piVar1 + 0x2c))();
      if ((int)piVar7 < 0) {
        puStack_5c = &DAT_009640b0;
        piStack_64 = piVar7;
        piStack_60 = piVar1;
        FUN_00878e09();
      }
      if (*(int *)(unaff_EBP + 0x18) == 0) {
        puStack_5c = (undefined *)0x80004003;
        piStack_60 = (int *)0x45b19d;
        FUN_00878dfb();
      }
      puStack_5c = *(undefined **)(unaff_EBP + 0x14);
      piStack_60 = *(int **)(extraout_ECX + 8);
      piVar1 = *(int **)(unaff_EBP + 0x18);
      piStack_64 = piVar1;
      iVar6 = (**(code **)(*piVar1 + 0x30))();
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,piVar1,&DAT_009640b0);
      }
      if (*(int *)(extraout_ECX + 0xc) == 0) {
        if (*(int *)(unaff_EBP + 0x18) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = *(int **)(unaff_EBP + 0x18);
        iVar6 = (**(code **)(*piVar1 + 0x14))
                          (piVar1,(-(uint)(*(int *)(unaff_EBP + 0xc) != 0) & 0xfffffffe) + 1);
        if (iVar6 < 0) {
          piStack_60 = (int *)0x45b1f4;
          puStack_5c = (undefined *)iVar6;
          piStack_58 = piVar1;
          FUN_00878e09();
        }
      }
      else {
        piVar1 = *(int **)(extraout_ECX + 0xc);
        iVar4 = (**(code **)(*piVar1 + 0x24))
                          (piVar1,(-(uint)(*(int *)(unaff_EBP + 0xc) != 0) & 0xfffffffe) + 1);
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,piVar1,&DAT_009640b0);
        }
        FUN_0040ee87(*(undefined4 *)(unaff_EBP + 0x18),1);
        iVar4 = *(int *)(extraout_ECX + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = *(int **)(extraout_ECX + 0xc);
        iVar4 = (**(code **)(*piVar1 + 0x1c))
                          (piVar1,*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                           *(undefined4 *)(unaff_EBP + -0x34));
        if (iVar4 < 0) {
          piStack_60 = (int *)0x45b260;
          puStack_5c = (undefined *)iVar4;
          piStack_58 = piVar1;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_58 = (int *)0x45b26d;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          piStack_58 = (int *)0x45b278;
          FUN_00878dfb();
        }
        iVar4 = *(int *)(unaff_EBP + -0x1c);
      }
    }
    piStack_58 = (int *)0x45b287;
    cVar2 = FUN_0045e00e();
    if (cVar2 == '\0') {
      if (*(int *)(iVar4 + 0xc) == 0) {
        piStack_58 = (int *)0x45b29a;
        FUN_00878dfb();
      }
      iVar6 = FUN_00434262();
      FUN_0045dff8();
      piStack_58 = (int *)-iVar6;
      puStack_5c = (undefined *)0x45b2b7;
      FUN_0045b30e();
    }
    piStack_58 = (int *)0x45b2c1;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0xc),
               *(IBinding **)(unaff_EBP + 0x18));
    piStack_58 = (int *)0x45b2cd;
    FUN_0045b2fc();
    FUN_00434c6b();
    FUN_00434c51();
    FUN_00402fa6();
  }
LAB_0045b2e5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


