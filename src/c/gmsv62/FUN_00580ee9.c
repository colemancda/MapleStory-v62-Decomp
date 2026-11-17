/* FUN_00580ee9 - 0x00580ee9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00580ee9(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  int *extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  bool bVar6;
  undefined4 uVar7;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_184;
  int iStack_180;
  int iStack_17c;
  int *piStack_178;
  undefined4 *puStack_174;
  int *piStack_170;
  int *piStack_16c;
  int *piStack_168;
  int iStack_164;
  int iStack_160;
  undefined1 *puStack_15c;
  int *piStack_158;
  int *piStack_154;
  int iStack_150;
  int iStack_14c;
  undefined *puStack_148;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x88);
  *(int *)(unaff_EBP + -0x48) = extraout_ECX;
  if (iVar2 != 0) {
    FUN_00434e38();
    *(undefined4 *)(extraout_ECX + 0x88) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 1;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x6c) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x74) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0xc0) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -0xb8) = 0xffffff;
  *(undefined4 *)(unaff_EBP + -0xac) = 0x40;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e196();
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 8))();
  puStack_148 = (undefined *)0xff;
  iStack_14c = 1;
  piStack_154 = &iStack_150;
  *(int **)(unaff_EBP + -0x10) = &iStack_150;
  *(undefined4 *)(extraout_ECX + 0x8c) = 0;
  piStack_158 = (int *)0x581148;
  FUN_004489f5();
  piStack_154 = (int *)0x6f;
  piStack_158 = (int *)0x6a;
  puStack_15c = (undefined1 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_160 = 0x58115b;
  iStack_160 = FUN_004489f5();
  *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_15c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_164 = 0x58116b;
  FUN_0048bccf();
  iStack_160 = 0x53c;
  iStack_164 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_168 = (int *)0x58117f;
  FUN_00679d86();
  iStack_160 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_164 = 0x58118b;
  iStack_164 = FUN_00411641();
  piStack_168 = (int *)(unaff_EBP + -0x18);
  piStack_16c = (int *)0x581195;
  puVar3 = (undefined4 *)FUN_0042e3f0();
  puStack_148 = (undefined *)0x5811a5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x90),
             (IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    puStack_148 = (undefined *)0x5811c1;
    FUN_00403384();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00412600();
  FUN_005827ab();
  puStack_148 = (undefined *)0x5811e3;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_148 = (undefined *)0x5811f0;
  FUN_00403191();
  puStack_148 = (undefined *)0x0;
  iStack_14c = unaff_EBP + -0x44;
  iStack_150 = unaff_EBP + -0x28;
  puStack_15c = (undefined1 *)&piStack_154;
  *(int ***)(unaff_EBP + -0x10) = &piStack_154;
  piStack_158 = (int *)0x53d;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_160 = 0x581213;
  piStack_154 = extraout_ECX_00;
  FUN_00679e4e();
  piStack_158 = (int *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_15c = (undefined1 *)0x581220;
  FUN_00405a1d();
  puStack_15c = (undefined1 *)0x581227;
  FUN_00402660();
  puStack_15c = (undefined1 *)0x58122e;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_14c = 0x581239;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  puStack_148 = (undefined *)0x58124b;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    puStack_148 = (undefined *)0x58125c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_148 = (undefined *)0x581269;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_148 = (undefined *)0x581276;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_148 = (undefined *)0x581283;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_148 = (undefined *)0x58128e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_148 = (undefined *)0x58129b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_148 = (undefined *)0x5812a6;
    FUN_00878dfb();
  }
  puStack_148 = (undefined *)0x5812b2;
  FUN_00581b6b();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if ((*(char **)(unaff_EBP + -0x54) != (char *)0x0) && (**(char **)(unaff_EBP + -0x54) != '\0')) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_14c = unaff_EBP + -0x18;
    puStack_148 = &DAT_00965868;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_150 = 0x5812e0;
    FUN_00434e21();
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    puStack_148 = (undefined *)0x5812ef;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_148 = (undefined *)0x581303;
      FUN_00434e38();
    }
    puStack_148 = (undefined *)0x58130d;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_148 = (undefined *)0x58131a;
    FUN_00403191();
    bVar6 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (bVar6) {
      puStack_148 = (undefined *)0x581330;
      FUN_00878dfb();
    }
    puStack_148 = (undefined *)(unaff_EBP + -0x28);
    iStack_14c = 1;
    iStack_150 = 0x78;
    piStack_154 = (int *)0xbb;
    piStack_158 = (int *)0xffffff88;
    puStack_15c = (undefined1 *)0xffffffef;
    iStack_160 = unaff_EBP + -0x14;
    iStack_164 = 0x581354;
    puVar3 = (undefined4 *)FUN_0042a39f();
    puStack_148 = (undefined *)0x581363;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5b0),
               (IBinding *)*puVar3);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_148 = (undefined *)0x581378;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_148 = (undefined *)0x581383;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_148 = (undefined *)0x581390;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_148 = (undefined *)0x58139b;
      FUN_00878dfb();
    }
    puStack_148 = (undefined *)0x5813a6;
    puVar3 = (undefined4 *)FUN_004489f5();
    puStack_148 = (undefined *)*puVar3;
    iStack_14c = 0x5813b3;
    FUN_0040ee87();
    iVar2 = *(int *)(extraout_ECX + 0x5b0);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (iVar2 == 0) {
      puStack_148 = (undefined *)0x5813c6;
      FUN_00878dfb();
    }
    iStack_150 = *(int *)(unaff_EBP + -0x28);
    iStack_14c = *(undefined4 *)(unaff_EBP + -0x24);
    piStack_154 = *(int **)(*(int *)(unaff_EBP + -0x48) + 0x5b0);
    iVar2 = *piStack_154;
    puStack_148 = *(undefined **)(unaff_EBP + -0x20);
    *(int **)(unaff_EBP + -0x14) = piStack_154;
    piStack_158 = (int *)0x5813e5;
    iVar2 = (**(code **)(iVar2 + 100))();
    if (iVar2 < 0) {
      piStack_158 = (int *)&DAT_00963de8;
      puStack_15c = *(undefined1 **)(unaff_EBP + -0x14);
      iStack_164 = 0x5813f7;
      iStack_160 = iVar2;
      FUN_00878e09();
    }
    piStack_158 = (int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_15c = (undefined1 *)0x581404;
    piStack_158 = (int *)FUN_00402bc3();
    if ((int)piStack_158 < 0) {
      puStack_15c = (undefined1 *)0x58140f;
      FUN_00878dfb();
    }
    piStack_158 = *(int **)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (piStack_158 != (int *)0x0) {
      puStack_15c = (undefined1 *)0x581420;
      (**(code **)(*piStack_158 + 8))();
    }
    iVar2 = *(int *)(unaff_EBP + -0x48);
    piStack_158 = (int *)(unaff_EBP + -0x14);
    puStack_15c = (undefined1 *)0x58142e;
    puVar3 = (undefined4 *)FUN_004489f5();
    puStack_15c = (undefined1 *)*puVar3;
    piStack_158 = (int *)0x1;
    iStack_160 = 0x58143b;
    FUN_0040ee87();
    iVar2 = *(int *)(iVar2 + 0x5b0);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    if (iVar2 == 0) {
      piStack_158 = (int *)0x80004003;
      puStack_15c = (undefined1 *)0x581458;
      FUN_00878dfb();
    }
    iStack_164 = *(undefined4 *)(unaff_EBP + -0x28);
    iStack_160 = *(undefined4 *)(unaff_EBP + -0x24);
    piStack_168 = *(int **)(*(int *)(unaff_EBP + -0x48) + 0x5b0);
    iVar2 = *piStack_168;
    puStack_15c = *(undefined1 **)(unaff_EBP + -0x20);
    *(int **)(unaff_EBP + -0x30) = piStack_168;
    piStack_158 = *(int **)(unaff_EBP + -0x1c);
    piStack_16c = (int *)0x58147a;
    iVar2 = (**(code **)(iVar2 + 0xfc))();
    if (iVar2 < 0) {
      piStack_16c = (int *)&DAT_00963df8;
      piStack_170 = *(int **)(unaff_EBP + -0x30);
      piStack_178 = (int *)0x58148c;
      puStack_174 = (undefined4 *)iVar2;
      FUN_00878e09();
    }
    piStack_16c = (int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    piStack_170 = (int *)0x581499;
    piStack_16c = (int *)FUN_00402bc3();
    if ((int)piStack_16c < 0) {
      piStack_170 = (int *)0x5814a4;
      FUN_00878dfb();
    }
    piStack_16c = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (piStack_16c != (int *)0x0) {
      piStack_170 = (int *)0x5814b5;
      (**(code **)(*piStack_16c + 8))();
    }
    piVar5 = (int *)(*(int *)(unaff_EBP + -0x48) + 0x5b0);
    if (*(int *)(*(int *)(unaff_EBP + -0x48) + 0x5b0) == 0) {
      piStack_16c = (int *)0x80004003;
      piStack_170 = (int *)0x5814d1;
      FUN_00878dfb();
    }
    piVar1 = (int *)*piVar5;
    piStack_16c = (int *)0xffffffff;
    puStack_174 = (undefined4 *)0x5814de;
    piStack_170 = piVar1;
    iStack_17c = (**(code **)(*piVar1 + 0xe0))();
    if (iStack_17c < 0) {
      puStack_174 = (undefined4 *)&DAT_00963df8;
      iStack_180 = 0x5814ee;
      piStack_178 = piVar1;
      FUN_00878e09();
    }
    puStack_174 = (undefined4 *)0x3;
    piStack_178 = (int *)0x0;
    iStack_17c = 0x5814fe;
    FUN_004031b7();
    iVar2 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (iVar2 == 0) {
      puStack_174 = (undefined4 *)0x80004003;
      piStack_178 = (int *)0x581510;
      FUN_00878dfb();
    }
    puStack_174 = (undefined4 *)(unaff_EBP + -0x94);
    piStack_178 = (int *)(unaff_EBP + -0x2c);
    iStack_17c = 0x581524;
    FUN_00425067();
    puStack_174 = (undefined4 *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    piStack_178 = (int *)0x581534;
    puStack_174 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_174 < 0) {
      piStack_178 = (int *)0x58153f;
      FUN_00878dfb();
    }
    puStack_174 = &DAT_00980690;
    piStack_178 = (int *)0x581548;
    FUN_00403191();
    puStack_174 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_178 = (int *)0x581558;
    FUN_00403191();
    puStack_174 = (undefined4 *)0x0;
    piStack_178 = (int *)0x0;
    iStack_17c = unaff_EBP + -0x74;
    iStack_180 = unaff_EBP + -0x84;
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_184;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_17c = 0x5815a8;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x30) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    if (iVar2 != 0) {
      puStack_174 = (undefined4 *)(unaff_EBP + -0x30);
      piStack_178 = (int *)0x5815be;
      puStack_174 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_174 < 0) && (puStack_174 != (undefined4 *)0x80004002)) {
        piStack_178 = (int *)0x5815cf;
        FUN_00878dfb();
      }
    }
    puStack_174 = (undefined4 *)(unaff_EBP + -0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    piStack_178 = (int *)0x5815df;
    puStack_174 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_174 < 0) {
      piStack_178 = (int *)0x5815ea;
      FUN_00878dfb();
    }
    puStack_174 = (undefined4 *)(unaff_EBP + -0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    piStack_178 = (int *)0x5815fa;
    puStack_174 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_174 < 0) {
      piStack_178 = (int *)0x581605;
      FUN_00878dfb();
    }
    puStack_174 = (undefined4 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    piStack_178 = (int *)0x581612;
    puStack_174 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_174 < 0) {
      piStack_178 = (int *)0x58161d;
      FUN_00878dfb();
    }
    puStack_174 = (undefined4 *)0x3;
    piStack_178 = (int *)0xff;
    iStack_17c = 0x58162c;
    FUN_004031b7();
    piVar5 = *(int **)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    if (piVar5 == (int *)0x0) {
      puStack_174 = (undefined4 *)0x80004003;
      piStack_178 = (int *)0x581641;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x2c);
    }
    iVar2 = *piVar5;
    uStack_184 = *(undefined4 *)(unaff_EBP + -0x4c);
    iStack_180 = *(undefined4 *)(unaff_EBP + -0x28);
    iStack_17c = *(undefined4 *)(unaff_EBP + -0x24);
    piStack_178 = *(int **)(unaff_EBP + -0x20);
    *(int **)(unaff_EBP + -0x14) = piVar5;
    puStack_174 = *(undefined4 **)(unaff_EBP + -0x1c);
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      iStack_198 = *(int *)(unaff_EBP + -0x14);
      iStack_1a0 = 0x581675;
      iStack_19c = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_198 = 0x581682;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_198 = 0x58168d;
      FUN_00878dfb();
    }
    iStack_198 = 0x581696;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_198 = 0x5816a3;
    FUN_00403191();
    iStack_198 = unaff_EBP + -0x28;
    iStack_1a0 = unaff_EBP + -0x14;
    iStack_19c = 5;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_19c = 0x5816c7;
    iStack_19c = FUN_00449749();
    *(int **)(unaff_EBP + -0x10) = &iStack_1a0;
    FUN_00679e4e(&iStack_1a0,0xf79);
    uVar7 = 0x13;
    uVar4 = 0x42;
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    FUN_004115d9(0x42,0x13);
    FUN_00448e3a(uVar4,uVar7);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_198 = 0x581708;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_198 = 0x581715;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_198 = 0x581720;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_198 = 0x58172d;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_198 = 0x581738;
      FUN_00878dfb();
    }
    iStack_198 = 0x581744;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iStack_198 = unaff_EBP + -0x28;
    iStack_19c = 0x58174e;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_198 = 0x58175a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_198 = 0x581764;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_198 = unaff_EBP + -0x44;
    iStack_19c = 0x58176e;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_198 = 0x58177a;
      FUN_00878dfb();
    }
    iStack_198 = unaff_EBP + -0x44;
    iStack_1a0 = unaff_EBP + -0x14;
    iStack_19c = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iStack_19c = 0x58179e;
    iStack_19c = FUN_00449749();
    iStack_1a0 = 0x5817a7;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + -0x10) = &iStack_1a0;
    FUN_00448a17(uVar4);
    uVar7 = 0x25;
    uVar4 = 0x42;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_004115d9(0x42,0x25);
    FUN_00448e3a(uVar4,uVar7);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_198 = 0x5817db;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_198 = 0x5817e8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_198 = 0x5817f3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_198 = 0x581800;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_198 = 0x58180b;
      FUN_00878dfb();
    }
    iStack_198 = 0x581811;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iStack_198 = unaff_EBP + -0x28;
    iStack_19c = 0x58181b;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_198 = 0x581827;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    iStack_198 = 0x581837;
    iStack_19c = FUN_00449713();
    *(int **)(unaff_EBP + -0x10) = &iStack_198;
    iStack_1a0 = 0x581843;
    FUN_00448a17();
    iStack_1a0 = unaff_EBP + -0x14;
    iStack_19c = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_19c = 0x58185f;
    FUN_0044974c();
    iStack_19c = 0x581866;
    uVar4 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_198 = 0x58187a;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_198 = 0x581887;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_198 = 0x581892;
      FUN_00878dfb();
    }
    iStack_198 = 0x581898;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_198 = unaff_EBP + -0x44;
    iStack_19c = 0x5818a2;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_198 = 0x5818ae;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iStack_198 = 0x5818b8;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iStack_198 = unaff_EBP + -0x28;
    iStack_19c = 0x5818c2;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_198 = 0x5818ce;
      FUN_00878dfb();
    }
    iStack_198 = unaff_EBP + -0x28;
    iStack_1a0 = unaff_EBP + -0x14;
    iStack_19c = 5;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_19c = 0x5818f2;
    iStack_19c = FUN_00449749();
    *(int **)(unaff_EBP + -0x50) = &iStack_1a0;
    FUN_00679e4e(&iStack_1a0,0xf7a);
    uVar4 = 0x25;
    iVar2 = *(int *)(unaff_EBP + -0x10) + 0x42;
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_004115d9(iVar2,0x25);
    FUN_00448e3a(iVar2,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_198 = 0x581933;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iStack_198 = 0x581940;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_198 = 0x58194b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_198 = 0x581958;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_198 = 0x581963;
      FUN_00878dfb();
    }
    iStack_198 = 0x581969;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_198 = unaff_EBP + -0x44;
    iStack_19c = 0x581973;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_198 = 0x58197f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_198 = 0x581989;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iStack_198 = unaff_EBP + -0x28;
    iStack_19c = 0x581993;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_198 = 0x58199f;
      FUN_00878dfb();
    }
    iStack_198 = unaff_EBP + -0x28;
    iStack_1a0 = unaff_EBP + -0x10;
    iStack_19c = 5;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iStack_19c = 0x5819c3;
    iStack_19c = FUN_00449749();
    *(int **)(unaff_EBP + -0x50) = &iStack_1a0;
    FUN_00679e4e(&iStack_1a0,0xf7b);
    uVar7 = 0x37;
    uVar4 = 0x42;
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    FUN_004115d9(0x42,0x37);
    FUN_00448e3a(uVar4,uVar7);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_198 = 0x5819ff;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_198 = 0x581a0c;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_198 = 0x581a17;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_198 = 0x581a24;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_198 = 0x581a2f;
      FUN_00878dfb();
    }
    iStack_198 = 0x581a35;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_198 = unaff_EBP + -0x44;
    iStack_19c = 0x581a3f;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_198 = 0x581a4b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_198 = 0x581a55;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iStack_198 = unaff_EBP + -0x28;
    iStack_19c = 0x581a5f;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_198 = 0x581a6b;
      FUN_00878dfb();
    }
    iStack_198 = unaff_EBP + -0x28;
    iStack_1a0 = unaff_EBP + -0x10;
    iStack_19c = 5;
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    iStack_14c = 0x581a8f;
    iStack_14c = FUN_00449749();
    *(int **)(unaff_EBP + -0x50) = &iStack_150;
    piStack_154 = (int *)0xf7c;
    puStack_15c = (undefined1 *)0x581aa3;
    piStack_158 = &iStack_150;
    iStack_150 = extraout_ECX_01;
    FUN_00679e4e();
    piStack_154 = (int *)0x49;
    piStack_158 = (int *)0x42;
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    puStack_15c = (undefined1 *)0x581ab3;
    FUN_004115d9();
    puStack_15c = (undefined1 *)0x581aba;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      puStack_148 = (undefined *)0x581acb;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    puStack_148 = (undefined *)0x581ad8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_148 = (undefined *)0x581ae3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    puStack_148 = (undefined *)0x581af0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_148 = (undefined *)0x581afb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
      puStack_148 = (undefined *)0x581b0c;
      (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      puStack_148 = (undefined *)0x581b1d;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_00414ebb();
  }
  FUN_00584f21();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


