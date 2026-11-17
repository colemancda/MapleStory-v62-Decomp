/* ptr_00430074 - 0x00430074 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ptr_00430074(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int unaff_EBX;
  int unaff_EBP;
  float10 fVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int *piStack_14;
  int *piStack_10;
  
  FUN_00878e09();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  iVar5 = *(int *)(unaff_EBX + 0x2c) - *(int *)(unaff_EBX + 0x24);
  iVar1 = *(int *)(unaff_EBX + 0x28) - *(int *)(unaff_EBX + 0x20);
  *(int *)(unaff_EBP + -0x1c) = iVar5;
  *(int *)(unaff_EBP + -0x14) = iVar5 * iVar5 + iVar1 * iVar1;
  *(int *)(unaff_EBP + -0x18) = iVar1;
  fVar6 = (float10)FUN_0087af44();
  *(double *)(unaff_EBP + -0x24) = (double)fVar6;
  if (fVar6 <= (float10)_DAT_008e8a80) {
    FUN_004125d9();
    uVar2 = 1;
  }
  else {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    piStack_10 = (int *)0x43012e;
    FUN_0087af10();
    iVar1 = (**(code **)(*piVar4 + 0x80))();
    if (iVar1 < 0) {
      iStack_18 = 0x430157;
      piStack_14 = (int *)iVar1;
      piStack_10 = piVar4;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBX + 8) = 0;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_10 = (int *)0x430167;
      FUN_00878dfb();
    }
    fVar6 = (float10)FUN_0042fae2();
    iVar1 = extraout_ECX;
    if ((float10)_DAT_008e8ac8 < fVar6) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_10 = (int *)0x430187;
        FUN_00878dfb();
      }
      fVar6 = (float10)FUN_0042fae2();
      iVar1 = extraout_ECX_00;
      if (fVar6 < (float10)_DAT_008e8ac0) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_10 = (int *)0x4301a5;
          FUN_00878dfb();
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_10 = (int *)0x4301b0;
            FUN_00878dfb();
          }
        }
        piVar4 = *(int **)(unaff_EBP + -0x10);
        fVar6 = (float10)FUN_0042fae2();
        piStack_10 = SUB84((double)(fVar6 - (float10)_DAT_008e8ab8),0);
        iStack_18 = 0x4301ce;
        piStack_14 = piVar4;
        piStack_14 = (int *)(**(code **)(*piVar4 + 0x80))();
        iVar1 = extraout_ECX_01;
        if ((int)piStack_14 < 0) {
          iStack_18 = 0x4301de;
          piStack_10 = piVar4;
          FUN_00878e09();
          iVar1 = extraout_ECX_02;
        }
        *(undefined4 *)(unaff_EBX + 8) = 1;
      }
    }
    piStack_10 = (int *)0xff;
    piStack_14 = *(int **)(unaff_EBX + 0x34);
    *(int **)(unaff_EBP + -0x20) = &iStack_18;
    uStack_1c = 0;
    uStack_20 = 0x4301fc;
    iStack_18 = iVar1;
    FUN_00424e0a();
    uStack_1c = 0;
    uStack_20 = 0;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_24;
    uStack_24 = extraout_ECX_03;
    FUN_00433bdf(unaff_EBP + -0x10);
    uVar2 = FUN_004091f9(0);
    puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x1c,uVar2);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBX + 4);
    piStack_10 = (int *)0x43022f;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
    FUN_00412600();
    if (*(int *)(unaff_EBX + 8) != 0) {
      if (*(int *)this == 0) {
        piStack_10 = (int *)0x43024c;
        FUN_00878dfb();
      }
      piStack_10 = (int *)0x430257;
      piVar4 = (int *)FUN_0042fb5e();
      iVar1 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar1 == 0) {
        piStack_10 = (int *)0x43026c;
        FUN_00878dfb();
      }
      uVar2 = FUN_00424ee1();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
      FUN_004125d9();
      if (*(int *)this == 0) {
        piStack_10 = (int *)0x430291;
        FUN_00878dfb();
      }
      piStack_10 = (int *)0x43029c;
      piVar4 = (int *)FUN_0042fb5e();
      iVar1 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (iVar1 == 0) {
        piStack_10 = (int *)0x4302b1;
        FUN_00878dfb();
      }
      uVar2 = FUN_00424f08();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
      FUN_004125d9();
      piStack_10 = (int *)0x4302d5;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_10 = (int *)0x4302e2;
      FUN_00403191();
      iVar1 = *(int *)this;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (iVar1 == 0) {
        piStack_10 = (int *)0x4302f5;
        FUN_00878dfb();
      }
      if (*(int *)this == 0) {
        piStack_10 = (int *)0x430305;
        FUN_00878dfb();
      }
      piStack_10 = (int *)0x430312;
      piVar4 = (int *)FUN_0042fb5e();
      iVar1 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (iVar1 == 0) {
        piStack_10 = (int *)0x430327;
        FUN_00878dfb();
      }
      piVar4 = (int *)*piVar4;
      *(int **)(unaff_EBP + -0x14) = piVar4;
      iVar1 = FUN_0042fb0a();
      iStack_18 = *(int *)(unaff_EBP + -0x4c);
      piStack_14 = *(int **)(unaff_EBP + -0x48);
      piStack_10 = *(int **)(unaff_EBP + -0x44);
      uStack_24 = *(undefined4 *)(unaff_EBP + -0x38);
      uStack_20 = *(undefined4 *)(unaff_EBP + -0x34);
      uStack_1c = *(undefined4 *)(unaff_EBP + -0x30);
      iVar1 = (**(code **)(*piVar4 + 0x90))
                        (*(undefined4 *)(unaff_EBP + -0x14),iVar1 + *(int *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c));
      if (iVar1 < 0) {
        piStack_10 = *(int **)(unaff_EBP + -0x14);
        iStack_18 = 0x43036f;
        piStack_14 = (int *)iVar1;
        FUN_00878e09();
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_10 = (int *)0x430384;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_10 = (int *)0x43038f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_10 = (int *)0x43039c;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_10 = (int *)0x4303a7;
        FUN_00878dfb();
      }
      piStack_10 = (int *)0x4303b5;
      FUN_00424aee();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_10 = (int *)0x4303c2;
      FUN_00424aee();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_10 = (int *)0x4303d4;
      FUN_00424e27();
      piStack_10 = (int *)0x4303db;
      uVar2 = FUN_0042bc90();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
      piStack_10 = (int *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_14 = (int *)0x4303f1;
      FUN_00424e27();
      piStack_14 = (int *)0x4303f8;
      piStack_14 = (int *)FUN_0042fb34();
      iStack_18 = 0x430400;
      FUN_00424e27();
      iStack_18 = 0x430407;
      iStack_18 = FUN_0042fb0a();
      iStack_18 = -iStack_18;
      uStack_1c = 0x430412;
      FUN_00424df4();
      uStack_1c = 0x430419;
      FUN_00424f2f();
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_10 = (int *)0x43042e;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_10 = (int *)0x430439;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_10 = (int *)0x430446;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_10 = (int *)0x430451;
        FUN_00878dfb();
      }
    }
    piStack_10 = (int *)0x430461;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_10 = (int *)0x43046e;
    FUN_00424aee();
    piStack_10 = (int *)(unaff_EBP + -0x4c);
    piStack_14 = (int *)0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_18 = 0x430484;
    FUN_00424e27();
    iStack_18 = 0x43048b;
    FUN_00425139();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_10 = (int *)0x430498;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_10 = (int *)0x4304a3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_10 = (int *)0x4304b0;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_10 = (int *)0x4304bb;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004125d9();
    if (*(int *)(unaff_EBX + 0x3c) != 0) {
      piStack_10 = (int *)0x4304d7;
      FUN_00433270();
    }
    uVar2 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


