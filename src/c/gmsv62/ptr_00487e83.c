/* ptr_00487e83 - 0x00487e83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00487e83(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined1 *extraout_ECX;
  int unaff_EBP;
  int unaff_EDI;
  int iVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  undefined1 auStack_4 [4];
  
  FUN_00878dfb();
  *(int *)(unaff_EBP + -0x60) = unaff_EDI;
  *(int *)(unaff_EBP + 0x14) = (6 - *(int *)(unaff_EBP + 0x14)) * 5000;
  if (*(int *)(unaff_EBP + -0x58) <= unaff_EDI) {
LAB_004892e5:
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0041a545();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x5c) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x5c) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  iVar3 = *(int *)(unaff_EBP + -0x38);
  do {
    iVar1 = _rand();
    *(int *)(unaff_EBP + -0x28) = iVar1 % 3;
    iVar1 = _rand();
    *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x28) * (iVar1 % 3) + 0xf;
    iVar1 = _rand();
    *(int *)(unaff_EBP + -0x28) = iVar1 % 0x168;
    iVar1 = _rand();
    *(int *)(unaff_EBP + -0xb4) = iVar1 % 3000 + 3000;
    if (*(int *)(unaff_EBP + -0x7c) == 0) {
      if (*(int *)(unaff_EBP + -0x4c) == 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x4c) + -4);
      }
      uVar2 = _rand();
      *(uint *)(unaff_EBP + -0x18) = uVar2 % *(uint *)(unaff_EBP + -0x18);
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    iVar1 = *(int *)(unaff_EBP + 0x10);
    if (iVar1 == 0) {
      iVar3 = _rand();
      iVar8 = iVar3 % 0xd4 + 0x18;
      *(int *)(unaff_EBP + -0x2c) = iVar8;
      iVar1 = _rand();
      iVar3 = iVar1 % 0xa5 + 0x28;
      *(int *)(unaff_EBP + -0x38) = iVar3;
      iVar4 = _rand();
      *(int *)(unaff_EBP + -0x34) = iVar4 % 200 + -100 + iVar8;
      iVar1 = iVar1 % 0xa5 + 0x7a;
LAB_00488134:
      *(int *)(unaff_EBP + -0x3c) = iVar1;
    }
    else {
      if (iVar1 == 1) {
        iVar3 = _rand();
        iVar8 = iVar3 % 0xd4 + 0x18;
        *(int *)(unaff_EBP + -0x2c) = iVar8;
        iVar1 = _rand();
        iVar3 = iVar1 % 0xa5 + 0x28;
        *(int *)(unaff_EBP + -0x38) = iVar3;
        iVar4 = _rand();
        *(int *)(unaff_EBP + -0x34) = iVar4 % 200 + -100 + iVar8;
        iVar1 = iVar1 % 0xa5 + -0x2a;
        goto LAB_00488134;
      }
      if (iVar1 == 2) {
        iVar1 = _rand();
        *(int *)(unaff_EBP + -0x2c) = iVar1 % 0xd4 + 0x18;
        iVar3 = _rand();
        iVar3 = iVar3 % 0xa5 + 0x28;
        *(int *)(unaff_EBP + -0x38) = iVar3;
        iVar1 = iVar1 % 0xd4 + -0x52;
LAB_004880ae:
        *(int *)(unaff_EBP + -0x34) = iVar1;
        iVar1 = _rand();
        iVar1 = iVar1 % 200 + -100 + iVar3;
        goto LAB_00488134;
      }
      if (iVar1 == 3) {
        iVar1 = _rand();
        *(int *)(unaff_EBP + -0x2c) = iVar1 % 0xd4 + 0x18;
        iVar3 = _rand();
        iVar3 = iVar3 % 0xa5 + 0x28;
        *(int *)(unaff_EBP + -0x38) = iVar3;
        iVar1 = iVar1 % 0xd4 + 0x82;
        goto LAB_004880ae;
      }
      if (iVar1 == 4) {
        iVar3 = _rand();
        *(int *)(unaff_EBP + -0x2c) = iVar3 % 0x14 + 0x78;
        iVar3 = _rand();
        *(double *)(unaff_EBP + -0x20) = (double)*(int *)(unaff_EBP + -0x28);
        iVar3 = iVar3 % 0x14 + 0xc3;
        *(int *)(unaff_EBP + -0x38) = iVar3;
        puStack_8 = (undefined1 *)0x48802b;
        FUN_0087ae74();
        puStack_8 = (undefined1 *)0x48803c;
        uVar6 = __ftol();
        *(undefined4 *)(unaff_EBP + -0x34) = uVar6;
        puStack_8 = (undefined1 *)0x48804a;
        FUN_0087adc4();
        puStack_8 = (undefined1 *)0x48804f;
        puStack_8 = (undefined1 *)__ftol();
        puStack_c = (undefined1 *)0x488055;
        iVar1 = FUN_0087a90a();
        iVar1 = iVar1 * 0xc4 + 0x28;
        goto LAB_00488134;
      }
      if (iVar1 == 5) {
        iVar3 = _rand();
        *(int *)(unaff_EBP + -0x2c) = iVar3 % 0x14 + 0x78;
        iVar3 = _rand();
        *(double *)(unaff_EBP + -0x20) = (double)*(int *)(unaff_EBP + -0x28);
        iVar3 = iVar3 % 0x14 + 0x70;
        *(int *)(unaff_EBP + -0x38) = iVar3;
        puStack_8 = (undefined1 *)0x487fbd;
        FUN_0087ae74();
        puStack_8 = (undefined1 *)0x487fce;
        uVar6 = __ftol();
        *(undefined4 *)(unaff_EBP + -0x34) = uVar6;
        puStack_8 = (undefined1 *)0x487fdc;
        FUN_0087adc4();
        iVar1 = __ftol();
        goto LAB_00488134;
      }
      if (iVar1 == 6) {
        iVar3 = _rand();
        *(int *)(unaff_EBP + -0x2c) = iVar3 % 0xd4 + 0x18;
        iVar3 = _rand();
        iVar3 = iVar3 % 0xa5 + 0x28;
        *(int *)(unaff_EBP + -0x38) = iVar3;
      }
    }
    puVar9 = (undefined1 *)0x0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int *)(unaff_EBP + -0x7c) == 0) {
      FUN_00403191();
      puStack_8 = (undefined1 *)0x488171;
      FUN_0040ee87();
      bVar10 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (bVar10) {
        FUN_00878dfb();
      }
      puStack_8 = (undefined1 *)0xc0061508;
      puStack_c = (undefined1 *)0x0;
      uStack_10 = 0;
      uStack_14 = 0;
      uStack_18 = 0;
      iStack_1c = unaff_EBP + -0xa4;
      uStack_20 = 0x4881b0;
      puVar5 = (undefined4 *)FUN_0042a39f();
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 (IBinding *)*puVar5);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      puStack_c = auStack_4;
      *(undefined1 **)(unaff_EBP + -0x1c) = auStack_4;
      puStack_8 = (undefined1 *)0x3b6;
      uStack_10 = 0x488216;
      FUN_00679e4e();
      puStack_8 = (undefined1 *)(unaff_EBP + -0xbc);
      puStack_c = *(undefined1 **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      uStack_10 = 0x48822c;
      FUN_0048bd86();
      puStack_c = (undefined1 *)0x488233;
      FUN_004115d9();
      puStack_c = (undefined1 *)0x48823a;
      FUN_00404e7f();
      puStack_8 = (undefined1 *)(unaff_EBP + -0x2dc);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_c = (undefined1 *)0x48824c;
      FUN_0040263d();
      puStack_c = (undefined1 *)0x488253;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      puStack_8 = (undefined1 *)0x48825d;
      uVar6 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x78) = uVar6;
      puStack_8 = (undefined1 *)(unaff_EBP + -0x2dc);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_c = (undefined1 *)0x488270;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_004027eb();
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb();
      }
      piVar7 = (int *)FUN_004113e5();
      iVar1 = *piVar7;
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      if (iVar1 == 0) {
        FUN_00878dfb();
      }
      piVar7 = (int *)*piVar7;
      puStack_c = *(undefined1 **)(unaff_EBP + -0x27c);
      puStack_8 = *(undefined1 **)(unaff_EBP + -0x278);
      iVar1 = *piVar7;
      iStack_1c = *(undefined4 *)(unaff_EBP + -0x11c);
      uStack_18 = *(undefined4 *)(unaff_EBP + -0x118);
      uStack_20 = 0;
      uStack_14 = *(undefined4 *)(unaff_EBP + -0x114);
      *(int **)(unaff_EBP + -0x18) = piVar7;
      uStack_10 = *(undefined4 *)(unaff_EBP + -0x110);
      iVar1 = (**(code **)(iVar1 + 0x90))(piVar7,*(undefined4 *)(unaff_EBP + -0x78));
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x11c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x27c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
    }
    else {
      while( true ) {
        FUN_0087a1b0();
        uStack_10 = 0x488380;
        puStack_c = puVar9;
        puStack_8 = &stack0x00000004;
        puStack_c = (undefined1 *)FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_8;
        uStack_10 = 0x48838c;
        FUN_004033a1();
        puStack_c = (undefined1 *)(unaff_EBP + -0x2cc);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        uStack_10 = 0x48839f;
        FUN_0040263d();
        uStack_10 = 0x4883a6;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        puStack_8 = (undefined1 *)0x4883b1;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0xcc) = iVar1;
        *(undefined4 *)(unaff_EBP + -0x54) = 0;
        if (((iVar1 != 0) && (iVar1 = FUN_00404b30(), iVar1 < 0)) && (iVar1 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x54) == 0) break;
        FUN_004027eb();
        puVar9 = puVar9 + 1;
      }
      FUN_004027eb();
      iVar1 = _rand();
      FUN_0087a1b0();
      uStack_10 = 0x488432;
      puStack_c = (undefined1 *)(iVar1 % (int)puVar9);
      puStack_8 = &stack0x00000004;
      puStack_c = (undefined1 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_8;
      uStack_10 = 0x48843e;
      FUN_004033a1();
      puStack_c = (undefined1 *)(unaff_EBP + -0x2ec);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      uStack_10 = 0x488451;
      FUN_0040263d();
      uStack_10 = 0x488458;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      puStack_8 = (undefined1 *)0x488463;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -200) = iVar1;
      *(undefined4 *)(unaff_EBP + -100) = 0;
      if (((iVar1 != 0) && (iVar1 = FUN_00404b30(), iVar1 < 0)) && (iVar1 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      puVar9 = (undefined1 *)(unaff_EBP + -0x2ec);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
        puVar9 = extraout_ECX;
      }
      puStack_8 = (undefined1 *)0xc0061508;
      *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_c;
      uStack_10 = 0;
      uStack_14 = 0x4884c2;
      puStack_c = puVar9;
      FUN_00424e0a();
      uStack_10 = 0;
      uStack_14 = 0;
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_18;
      iStack_1c = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      uStack_20 = 0x4884d4;
      FUN_00424dd7();
      iStack_1c = 0;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_20;
      FUN_00424dbc(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      puVar5 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x90);
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 (IBinding *)*puVar5);
      FUN_00412600();
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_00403191();
      piVar7 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (piVar7 == (int *)0x0) {
        FUN_00878dfb();
        piVar7 = *(int **)(unaff_EBP + -0x10);
      }
      puStack_c = *(undefined1 **)(unaff_EBP + -0x21c);
      puStack_8 = *(undefined1 **)(unaff_EBP + -0x218);
      iVar1 = *piVar7;
      iStack_1c = *(undefined4 *)(unaff_EBP + -0x13c);
      uStack_18 = *(undefined4 *)(unaff_EBP + -0x138);
      uStack_14 = *(undefined4 *)(unaff_EBP + -0x134);
      uStack_20 = 0x20;
      *(int **)(unaff_EBP + -0x18) = piVar7;
      uStack_10 = *(undefined4 *)(unaff_EBP + -0x130);
      iVar1 = (**(code **)(iVar1 + 0x110))(piVar7);
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x13c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x21c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      FUN_004027eb();
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0xb0,0x3b1);
    uVar6 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    FUN_00437222(uVar6,unaff_EBP + -0x24,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int *)(unaff_EBP + -0xb0) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0xb0) + -0xc);
    }
    puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x98,0x3b1);
    uVar6 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_00437222(uVar6,unaff_EBP + -0x40,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int *)(unaff_EBP + -0x98) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x98) + -0xc);
    }
    puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0xc0,0x3b1);
    uVar6 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    FUN_00437222(uVar6,unaff_EBP + -0x44,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int *)(unaff_EBP + -0xc0) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0xc0) + -0xc);
    }
    puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0xa0,0x3b1);
    uVar6 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    FUN_00437222(uVar6,unaff_EBP + -0x14,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int *)(unaff_EBP + -0xa0) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0xa0) + -0xc);
    }
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x40),1);
    piVar7 = *(int **)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    if (piVar7 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar7 = *(int **)(unaff_EBP + -0x44);
    }
    iVar1 = *piVar7;
    *(int **)(unaff_EBP + -0x18) = piVar7;
    iVar1 = (**(code **)(iVar1 + 100))
                      (piVar7,*(undefined4 *)(unaff_EBP + -0xdc),*(undefined4 *)(unaff_EBP + -0xd8),
                       *(undefined4 *)(unaff_EBP + -0xd4),*(undefined4 *)(unaff_EBP + -0xd0));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar1 = FUN_00402bc3(unaff_EBP + -0xdc);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    FUN_00403191(&DAT_00980690);
    puVar5 = *(undefined4 **)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00878dfb(0x80004003);
      puVar5 = *(undefined4 **)(unaff_EBP + -0x44);
    }
    *(undefined4 *)(unaff_EBP + -0x18) = *puVar5;
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar5;
    iVar1 = (**(code **)(*(int *)(unaff_EBP + -0x18) + 0x90))
                      (puVar5,*(int *)(unaff_EBP + -0x50) / 2,0,*(undefined4 *)(unaff_EBP + -0x2ac),
                       *(undefined4 *)(unaff_EBP + -0x2a8),*(undefined4 *)(unaff_EBP + -0x2a4),
                       *(undefined4 *)(unaff_EBP + -0x2a0),*(undefined4 *)(unaff_EBP + -0x17c),
                       *(undefined4 *)(unaff_EBP + -0x178),*(undefined4 *)(unaff_EBP + -0x174),
                       *(undefined4 *)(unaff_EBP + -0x170));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x2ac);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x17c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    FUN_00403191(&DAT_00980690);
    piVar7 = *(int **)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    if (piVar7 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar7 = *(int **)(unaff_EBP + -0x40);
    }
    iVar1 = *piVar7;
    *(int **)(unaff_EBP + -0x1c) = piVar7;
    iVar1 = (**(code **)(iVar1 + 0xa0))
                      (piVar7,(double)*(int *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x23c),*(undefined4 *)(unaff_EBP + -0x238),
                       *(undefined4 *)(unaff_EBP + -0x234),*(undefined4 *)(unaff_EBP + -0x230));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x23c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    FUN_004031b7(2000,3);
    piVar7 = *(int **)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (piVar7 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar7 = *(int **)(unaff_EBP + -0x40);
    }
    iVar1 = *piVar7;
    *(int **)(unaff_EBP + -0x1c) = piVar7;
    iVar1 = (**(code **)(iVar1 + 0xa0))
                      (piVar7,0,*(undefined4 *)(unaff_EBP + -0x19c),
                       *(undefined4 *)(unaff_EBP + -0x198),*(undefined4 *)(unaff_EBP + -0x194),
                       *(undefined4 *)(unaff_EBP + -400));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x19c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    if ((*(int *)(unaff_EBP + 0x10) == 4) || (*(int *)(unaff_EBP + 0x10) == 5)) {
      puVar5 = (undefined4 *)FUN_00485656(unaff_EBP + -0x8c);
      FUN_0040ee87(*puVar5,1);
      piVar7 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      if (piVar7 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar7 = *(int **)(unaff_EBP + -0x14);
      }
      iVar1 = *piVar7;
      *(int **)(unaff_EBP + -0x1c) = piVar7;
      iVar1 = (**(code **)(iVar1 + 100))
                        (piVar7,*(undefined4 *)(unaff_EBP + -0xec),
                         *(undefined4 *)(unaff_EBP + -0xe8),*(undefined4 *)(unaff_EBP + -0xe4),
                         *(undefined4 *)(unaff_EBP + -0xe0));
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      iVar1 = FUN_00402bc3(unaff_EBP + -0xec);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_004125d9();
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      FUN_00403191(&DAT_00980690);
      piVar7 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      if (piVar7 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar7 = *(int **)(unaff_EBP + -0x14);
      }
      iVar1 = *piVar7;
      *(int **)(unaff_EBP + -0x1c) = piVar7;
      iVar1 = (**(code **)(iVar1 + 0x90))
                        (piVar7,*(undefined4 *)(unaff_EBP + -0x2c),iVar3,
                         *(undefined4 *)(unaff_EBP + -0x10c),*(undefined4 *)(unaff_EBP + -0x108),
                         *(undefined4 *)(unaff_EBP + -0x104),*(undefined4 *)(unaff_EBP + -0x100),
                         *(undefined4 *)(unaff_EBP + -300),*(undefined4 *)(unaff_EBP + -0x128),
                         *(undefined4 *)(unaff_EBP + -0x124),*(undefined4 *)(unaff_EBP + -0x120));
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x10c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar1 = FUN_00402bc3(unaff_EBP + -300);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      FUN_004031b7(0,3);
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      puVar5 = (undefined4 *)FUN_00485656(unaff_EBP + -0x94);
      FUN_0040ee87(*puVar5,1);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      *(int *)(unaff_EBP + -0x28) = iVar3;
      if (*(int *)(unaff_EBP + -0x3c) <= iVar3) {
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x3c);
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x2c);
      if (*(int *)(unaff_EBP + -0x34) <= *(int *)(unaff_EBP + -0x2c)) {
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x34);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar7 = *(int **)(unaff_EBP + -0x14);
      uVar6 = FUN_0087a90a(*(int *)(unaff_EBP + -0x38) - *(int *)(unaff_EBP + -0x3c));
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
      uVar6 = FUN_0087a90a(*(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34));
      iVar3 = (**(code **)(*piVar7 + 0x9c))
                        (piVar7,*(undefined4 *)(unaff_EBP + -0x14c),
                         *(undefined4 *)(unaff_EBP + -0x148),*(undefined4 *)(unaff_EBP + -0x144),
                         *(undefined4 *)(unaff_EBP + -0x140),
                         (uint)(*(int *)(unaff_EBP + -0x34) < *(int *)(unaff_EBP + -0x2c)) +
                         *(int *)(unaff_EBP + -0x18),
                         (uint)(*(int *)(unaff_EBP + -0x3c) < *(int *)(unaff_EBP + -0x38)) +
                         *(int *)(unaff_EBP + -0x28),uVar6,*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x16c),*(undefined4 *)(unaff_EBP + -0x168),
                         *(undefined4 *)(unaff_EBP + -0x164),*(undefined4 *)(unaff_EBP + -0x160));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar7,&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x14c);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x16c);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
    }
    else {
      FUN_004031b7(0,3);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      puVar5 = (undefined4 *)FUN_00485656(unaff_EBP + -0xa8);
      FUN_0040ee87(*puVar5,1);
      piVar7 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      if (piVar7 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar7 = *(int **)(unaff_EBP + -0x24);
      }
      iVar1 = *(int *)(unaff_EBP + -0x50);
      iVar4 = *piVar7;
      *(int **)(unaff_EBP + -0x1c) = piVar7;
      iVar1 = (**(code **)(iVar4 + 0x9c))
                        (piVar7,*(undefined4 *)(unaff_EBP + -0x29c),
                         *(undefined4 *)(unaff_EBP + -0x298),*(undefined4 *)(unaff_EBP + -0x294),
                         *(undefined4 *)(unaff_EBP + -0x290),0x18 - iVar1,0x28 - iVar1,
                         iVar1 * 2 + 0xd4,iVar1 * 2 + 0xa5,*(undefined4 *)(unaff_EBP + -0x1bc),
                         *(undefined4 *)(unaff_EBP + -0x1b8),*(undefined4 *)(unaff_EBP + -0x1b4),
                         *(undefined4 *)(unaff_EBP + -0x1b0));
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x29c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x1bc);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      FUN_00403191(&DAT_00980690);
      piVar7 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      if (piVar7 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar7 = *(int **)(unaff_EBP + -0x24);
      }
      iVar1 = *piVar7;
      *(int **)(unaff_EBP + -0x1c) = piVar7;
      iVar3 = (**(code **)(iVar1 + 0x90))
                        (piVar7,*(undefined4 *)(unaff_EBP + -0x2c),iVar3,
                         *(undefined4 *)(unaff_EBP + -0x25c),*(undefined4 *)(unaff_EBP + -600),
                         *(undefined4 *)(unaff_EBP + -0x254),*(undefined4 *)(unaff_EBP + -0x250),
                         *(undefined4 *)(unaff_EBP + -0x1dc),*(undefined4 *)(unaff_EBP + -0x1d8),
                         *(undefined4 *)(unaff_EBP + -0x1d4),*(undefined4 *)(unaff_EBP + -0x1d0));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x25c);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x1dc);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x24),1);
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar7 = *(int **)(unaff_EBP + -0x14);
      iVar3 = (**(code **)(*piVar7 + 100))
                        (piVar7,*(undefined4 *)(unaff_EBP + -0x28c),
                         *(undefined4 *)(unaff_EBP + -0x288),*(undefined4 *)(unaff_EBP + -0x284),
                         *(undefined4 *)(unaff_EBP + -0x280));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar7,&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x28c);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar7 = *(int **)(unaff_EBP + -0x14);
      iVar3 = (**(code **)(*piVar7 + 0x98))
                        (piVar7,*(undefined4 *)(unaff_EBP + -0x44),100,100,
                         *(undefined4 *)(unaff_EBP + -0x84),5);
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar7,&DAT_00963de8);
      }
    }
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x14),1);
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar7 = (int *)FUN_0042fb5e(unaff_EBP + -0x9c);
    iVar3 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar7 = (int *)*piVar7;
    iVar3 = (**(code **)(*piVar7 + 100))
                      (piVar7,*(undefined4 *)(unaff_EBP + -0x18c),
                       *(undefined4 *)(unaff_EBP + -0x188),*(undefined4 *)(unaff_EBP + -0x184),
                       *(undefined4 *)(unaff_EBP + -0x180));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar7,&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x18c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    if ((*(int *)(unaff_EBP + -0x10) == 0) &&
       (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x10) == 0)) {
      FUN_00878dfb(0x80004003);
    }
    piVar7 = (int *)FUN_0042fb5e(unaff_EBP + -0x80);
    iVar3 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar7 = (int *)*piVar7;
    iVar3 = FUN_0042fb0a();
    iVar3 = (**(code **)(*piVar7 + 0x6c))(piVar7,iVar3 / -2);
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar7,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_004125d9();
    if ((*(int *)(unaff_EBP + -0x10) == 0) &&
       (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x10) == 0)) {
      FUN_00878dfb(0x80004003);
    }
    piVar7 = (int *)FUN_0042fb5e(unaff_EBP + -0xac);
    iVar3 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar7 = (int *)*piVar7;
    iVar3 = FUN_0042fb34();
    iVar3 = (**(code **)(*piVar7 + 0x74))(piVar7,iVar3 / -2);
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar7,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + 0xc) == 2) {
      iVar3 = _rand();
      FUN_004031b7(iVar3 % 3000 + 300,3);
      piVar7 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      if (piVar7 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar7 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar7;
      *(int **)(unaff_EBP + -0x1c) = piVar7;
      iVar3 = (**(code **)(iVar3 + 0xa0))
                        (piVar7,0,*(undefined4 *)(unaff_EBP + -0x1ac),
                         *(undefined4 *)(unaff_EBP + -0x1a8),*(undefined4 *)(unaff_EBP + -0x1a4),
                         *(undefined4 *)(unaff_EBP + -0x1a0));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x1ac);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xe0))
                      (*(int **)(unaff_EBP + -0x10),0x1ffffff);
    if (iVar3 < 0) {
      FUN_00878e09();
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar3 = FUN_0042a378();
    FUN_004031b7(iVar3 + *(int *)(unaff_EBP + -0xb4),3);
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    if (*(int *)(unaff_EBP + -0x50) < 0x65) {
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x78) + *(int *)(unaff_EBP + -0x50) * -2;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x28) = 0x32;
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar7 = (int *)FUN_004113e5(unaff_EBP + -0x48);
    iVar3 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    puVar9 = (undefined1 *)
             (**(code **)(*(int *)*piVar7 + 0x90))
                       ((int *)*piVar7,*(undefined4 *)(unaff_EBP + -0x28),0xff,
                        *(undefined4 *)(unaff_EBP + -0x1cc),*(undefined4 *)(unaff_EBP + -0x1c8),
                        *(undefined4 *)(unaff_EBP + -0x1c4),*(undefined4 *)(unaff_EBP + -0x1c0),
                        *(undefined4 *)(unaff_EBP + -0x1ec),*(undefined4 *)(unaff_EBP + -0x1e8),
                        *(undefined4 *)(unaff_EBP + -0x1e4),*(undefined4 *)(unaff_EBP + -0x1e0));
    if ((int)puVar9 < 0) {
      puStack_c = (undefined1 *)0x489081;
      puStack_8 = puVar9;
      FUN_00878e09();
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    if (-1 < *(int *)(unaff_EBP + 0x10)) {
      if (*(int *)(unaff_EBP + 0x10) < 4) {
        puStack_8 = (undefined1 *)0x4891c5;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x4c;
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          FUN_00878dfb();
        }
        FUN_0042a378();
        puStack_8 = (undefined1 *)0x4891fa;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          FUN_00878dfb();
        }
        puStack_c = *(undefined1 **)(unaff_EBP + -0x74);
        puStack_8 = *(undefined1 **)(unaff_EBP + -0x70);
        uStack_20 = *(undefined4 *)(unaff_EBP + -0x3c);
        iStack_1c = *(undefined4 *)(unaff_EBP + -0x24c);
        uStack_18 = *(undefined4 *)(unaff_EBP + -0x248);
        uStack_14 = *(undefined4 *)(unaff_EBP + -0x244);
        uStack_10 = *(undefined4 *)(unaff_EBP + -0x240);
        puVar9 = (undefined1 *)
                 (**(code **)(**(int **)(unaff_EBP + -0x24) + 0x90))
                           (*(int **)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x34));
        if ((int)puVar9 < 0) {
          puStack_c = (undefined1 *)0x48924b;
          puStack_8 = puVar9;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4c;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      }
      else {
        if (5 < *(int *)(unaff_EBP + 0x10)) goto LAB_0048927e;
        puStack_8 = (undefined1 *)0x4890ef;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x4e;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_00878dfb();
        }
        _rand();
        FUN_0042a378();
        puStack_8 = (undefined1 *)0x489138;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_00878dfb();
        }
        puStack_c = *(undefined1 **)(unaff_EBP + -0x22c);
        puStack_8 = *(undefined1 **)(unaff_EBP + -0x228);
        uStack_20 = *(undefined4 *)(unaff_EBP + -0x3c);
        iStack_1c = *(undefined4 *)(unaff_EBP + -0x20c);
        uStack_18 = *(undefined4 *)(unaff_EBP + -0x208);
        uStack_14 = *(undefined4 *)(unaff_EBP + -0x204);
        uStack_10 = *(undefined4 *)(unaff_EBP + -0x200);
        puVar9 = (undefined1 *)
                 (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x90))
                           (*(int **)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x34));
        if ((int)puVar9 < 0) {
          puStack_c = (undefined1 *)0x48918c;
          puStack_8 = puVar9;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4e;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      }
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
    }
LAB_0048927e:
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              (this,*(IBinding **)(unaff_EBP + -0x10));
    FUN_004125d9();
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + -0x60) + 1;
    if (*(int *)(unaff_EBP + -0x58) <= *(int *)(unaff_EBP + -0x60)) goto LAB_004892e5;
    iVar3 = *(int *)(unaff_EBP + -0x38);
  } while( true );
}


