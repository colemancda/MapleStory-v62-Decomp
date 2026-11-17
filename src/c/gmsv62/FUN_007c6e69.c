/* FUN_007c6e69 - 0x007c6e69 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c6e69(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined1 *puVar11;
  int extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *extraout_ECX_02;
  undefined *puVar12;
  undefined1 *extraout_ECX_03;
  int unaff_EBP;
  bool bVar13;
  int *piStack_2bc;
  undefined4 *puStack_2b8;
  int *piStack_2b4;
  undefined1 *puStack_2b0;
  int *piStack_2ac;
  int aiStack_2a4 [5];
  undefined4 *puStack_290;
  int *piStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  int iStack_278;
  int *piStack_274;
  undefined *puStack_270;
  int *piStack_26c;
  undefined4 *puStack_268;
  int *piStack_264;
  undefined1 *puStack_260;
  int *piStack_25c;
  int aiStack_254 [4];
  int *piStack_244;
  undefined4 *puStack_240;
  int *piStack_23c;
  undefined *puStack_238;
  int *piStack_234;
  undefined *puStack_218;
  int *piStack_214;
  undefined4 uStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x3c) = extraout_ECX;
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX + 0x1e9c;
  iStack_1fc = 0x7c6e92;
  cVar2 = FUN_00433bfa();
  iVar3 = *(int *)(unaff_EBP + 8);
  if ((cVar2 == '\0') && (iVar3 == DAT_0097c020)) {
    *(undefined4 *)(extraout_ECX + 0x1e8c) = 0;
    iStack_1fc = 0x7c6eb3;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e90),
               (IBinding *)0x0);
    iStack_1fc = 0x7c6ebf;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e94),
               (IBinding *)0x0);
    iStack_1fc = 0x7c6ecb;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e98),
               (IBinding *)0x0);
    iStack_1fc = 0x7c6ed4;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x2c),
               (IBinding *)0x0);
    iStack_1fc = 0x7c6ee0;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1ea0),
               (IBinding *)0x0);
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x1e8c) = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_1fc = 0x7c6f05;
    DAT_0097c020 = iVar3;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_1fc = 0x7c6f14;
    FUN_00403191();
    iStack_1fc = 0;
    iStack_200 = unaff_EBP + -0x154;
    iStack_204 = unaff_EBP + -0x144;
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_208;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_214 = (int *)0x7c6f40;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_200 = 0x7c6f69;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xf8) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
    if (iVar3 != 0) {
      iStack_1fc = 0x7c6f8b;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_1fc = 0x7c6f9c;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_1fc = 0x7c6fac;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1fc = 0x7c6fb7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_1fc = 0x7c6fc7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1fc = 0x7c6fd2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_1fc = 0x7c6fe2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1fc = 0x7c6fed;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    iStack_1fc = unaff_EBP + 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_200 = 0x7c7004;
    puVar4 = (undefined4 *)FUN_00679d22();
    iStack_1fc = *puVar4;
    iStack_200 = unaff_EBP + -0x80;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_204 = 0x7c701d;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      iStack_1fc = 0x7c7034;
      FUN_00434e38();
    }
    iStack_1fc = 0;
    iStack_200 = 0xffffffff;
    iStack_204 = *(undefined4 *)(unaff_EBP + -0x80);
    uStack_208 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    piStack_214 = (int *)0x0;
    puStack_218 = (undefined *)0xffffffff;
    FUN_00449713();
    FUN_00456ad5();
    *(undefined ***)(unaff_EBP + 0xc) = &puStack_218;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_218 = (undefined *)0x7c709b;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xf4) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    if (iVar3 != 0) {
      piStack_214 = (int *)0x7c70b7;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_214 = (int *)0x7c70ca;
        FUN_00878dfb();
      }
    }
    puVar12 = (undefined *)(unaff_EBP + -0x184);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_214 = (int *)0x7c70e1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_214 = (int *)0x7c70ec;
      FUN_00878dfb();
      puVar12 = extraout_ECX_00;
    }
    piStack_214 = (int *)0x0;
    *(undefined ***)(unaff_EBP + 0xc) = &puStack_218;
    puStack_218 = puVar12;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_218 = (undefined *)0x7c7126;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x104) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar3 != 0) {
      piStack_214 = (int *)0x7c7142;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_214 = (int *)0x7c7150;
        FUN_00878dfb();
      }
    }
    puVar12 = (undefined *)(unaff_EBP + -0x1c4);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_214 = (int *)0x7c7160;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_214 = (int *)0x7c716b;
      FUN_00878dfb();
      puVar12 = extraout_ECX_01;
    }
    piStack_214 = (int *)0x0;
    *(undefined ***)(unaff_EBP + 0xc) = &puStack_218;
    puStack_218 = puVar12;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_218 = (undefined *)0x7c71a5;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x100) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
    if (iVar3 != 0) {
      piStack_214 = (int *)0x7c71c7;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_214 = (int *)0x7c71d5;
        FUN_00878dfb();
      }
    }
    puVar12 = (undefined *)(unaff_EBP + -0x164);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_214 = (int *)0x7c71e5;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_214 = (int *)0x7c71f0;
      FUN_00878dfb();
      puVar12 = extraout_ECX_02;
    }
    piStack_214 = (int *)0x0;
    *(undefined ***)(unaff_EBP + 0xc) = &puStack_218;
    puStack_218 = puVar12;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_218 = (undefined *)0x7c722a;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xfc) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
    if (iVar3 != 0) {
      piStack_214 = (int *)0x7c724c;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_214 = (int *)0x7c725a;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_214 = (int *)0x7c726a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_214 = (int *)0x7c7275;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_214 = (int *)0x7c7285;
      FUN_00878dfb();
    }
    uVar5 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    uVar5 = __ftol();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_214 = (int *)0x7c72af;
      FUN_00878dfb();
    }
    uVar5 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    uVar5 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_214 = (int *)0x7c72d9;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_214 = (int *)0x7c72e9;
      FUN_00878dfb();
    }
    piVar10 = (int *)(*(int *)(unaff_EBP + -0x3c) + 4);
    iVar3 = *piVar10;
    *(int **)(unaff_EBP + -0x20) = piVar10;
    piVar6 = (int *)(**(code **)(iVar3 + 0x10))();
    *(double *)(unaff_EBP + -0x74) = (double)*piVar6;
    uVar7 = FUN_0040e48b();
    *(uint *)(unaff_EBP + -0x14) = uVar7 >> 1;
    iVar3 = FUN_0040eea9();
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x14) - iVar3;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    uVar5 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x70) = uVar5;
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_214 = (int *)0x7c7345;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_214 = (int *)0x7c7359;
      FUN_00878dfb();
    }
    iVar3 = (**(code **)(*piVar10 + 0x10))();
    *(double *)(unaff_EBP + -0x60) = (double)*(int *)(iVar3 + 4);
    iVar3 = FUN_0040eed0();
    iVar8 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x38) = iVar8 - iVar3;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    iVar9 = __ftol();
    iVar3 = *(int *)(unaff_EBP + -0x3c);
    iVar8 = *(int *)(iVar3 + 0xd74);
    *(uint *)(unaff_EBP + -0x40) = -(uint)(iVar8 != 0) & iVar8 - 0xcU;
    piStack_214 = (int *)0x7c73bc;
    FUN_00403191();
    piStack_214 = *(int **)(unaff_EBP + -0x1c);
    puStack_218 = (undefined *)0x7c73c9;
    FUN_0040ee87();
    bVar13 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (bVar13) {
      piStack_214 = (int *)0x7c73df;
      FUN_00878dfb();
    }
    piStack_214 = (int *)(unaff_EBP + -0x58);
    puStack_218 = (undefined *)0x0;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x70) - *(int *)(unaff_EBP + 0xc) / 2;
    *(int *)(unaff_EBP + -0x5c) = iVar9 - *(int *)(unaff_EBP + -0x30) / 2;
    puVar4 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x1e90);
    piStack_214 = (int *)0x7c7430;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    piStack_214 = (int *)0x7c7445;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_214 = (int *)0x7c7450;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_214 = (int *)0x7c7460;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_214 = (int *)0x7c746b;
      FUN_00878dfb();
    }
    iVar3 = *(int *)p_Var1;
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 300);
    if (iVar3 == 0) {
      piStack_214 = (int *)0x7c748b;
      FUN_00878dfb();
    }
    piStack_214 = *(int **)p_Var1;
    iVar3 = *piStack_214;
    *(int **)(unaff_EBP + -0x70) = piStack_214;
    puStack_218 = (undefined *)0x7c74ad;
    iVar3 = (**(code **)(iVar3 + 0xb4))();
    if (iVar3 < 0) {
      puStack_218 = &DAT_00963df8;
      FUN_00878e09();
    }
    if (*(int *)p_Var1 == 0) {
      puStack_218 = (undefined *)0x80004003;
      FUN_00878dfb();
    }
    puStack_218 = (undefined *)0xffffffff;
    iVar3 = (**(code **)(**(int **)p_Var1 + 0xe0))();
    if (iVar3 < 0) {
      FUN_00878e09();
    }
    FUN_00403191();
    FUN_0040ee87();
    bVar13 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (bVar13) {
      FUN_00878dfb();
    }
    piStack_23c = (int *)(unaff_EBP + -0x34);
    piStack_234 = *(int **)(unaff_EBP + -0x5c);
    puStack_238 = *(undefined **)(unaff_EBP + -0x14);
    puStack_240 = (undefined4 *)0x7c7547;
    puVar4 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (*(int *)(unaff_EBP + -0x3c) + 0x1e94);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    iVar3 = *(int *)p_Var1;
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 300);
    if (iVar3 == 0) {
      FUN_00878dfb();
    }
    iVar3 = **(int **)p_Var1;
    *(int **)(unaff_EBP + -0x70) = *(int **)p_Var1;
    iVar3 = (**(code **)(iVar3 + 0xb4))();
    if (iVar3 < 0) {
      piStack_234 = (int *)0x7c75e9;
      FUN_00878e09();
    }
    if (*(int *)p_Var1 == 0) {
      FUN_00878dfb();
    }
    piVar10 = *(int **)p_Var1;
    iVar3 = (**(code **)(*piVar10 + 0xe0))();
    if (iVar3 < 0) {
      piStack_23c = (int *)0x7c7615;
      puStack_238 = (undefined *)iVar3;
      piStack_234 = piVar10;
      FUN_00878e09();
    }
    piStack_234 = (int *)0x7c7622;
    FUN_00403191();
    piStack_234 = *(int **)(unaff_EBP + -0x90);
    puStack_238 = (undefined *)0x7c7635;
    FUN_0040ee87();
    bVar13 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (bVar13) {
      piStack_234 = (int *)0x7c7647;
      FUN_00878dfb();
    }
    piStack_234 = (int *)(unaff_EBP + -0xa0);
    puStack_238 = (undefined *)0x0;
    piStack_23c = *(int **)(unaff_EBP + -0x30);
    aiStack_254[2] = unaff_EBP + -0x34;
    puStack_240 = *(undefined4 **)(unaff_EBP + 0xc);
    piStack_244 = *(int **)(unaff_EBP + -0x5c);
    aiStack_254[3] = *(undefined4 *)(unaff_EBP + -0x14);
    aiStack_254[1] = 0x7c766e;
    puVar4 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (*(int *)(unaff_EBP + -0x3c) + 0x1e98);
    piStack_234 = (int *)0x7c7680;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    piStack_234 = (int *)0x7c7698;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_234 = (int *)0x7c76a3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_234 = (int *)0x7c76b0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_234 = (int *)0x7c76bb;
      FUN_00878dfb();
    }
    if (*(int *)p_Var1 == 0) {
      piStack_234 = (int *)0x7c76c5;
      FUN_00878dfb();
    }
    piVar10 = *(int **)p_Var1;
    puStack_238 = (undefined *)0x7c76d5;
    piStack_234 = piVar10;
    iVar3 = (**(code **)(*piVar10 + 0xb4))();
    if (iVar3 < 0) {
      puStack_238 = &DAT_00963df8;
      piStack_244 = (int *)0x7c76e5;
      puStack_240 = (undefined4 *)iVar3;
      piStack_23c = piVar10;
      FUN_00878e09();
    }
    if (*(int *)p_Var1 == 0) {
      puStack_238 = (undefined *)0x80004003;
      piStack_23c = (int *)0x7c76f3;
      FUN_00878dfb();
    }
    piVar10 = *(int **)p_Var1;
    puStack_238 = (undefined *)0xffffffff;
    puStack_240 = (undefined4 *)0x7c7700;
    piStack_23c = piVar10;
    aiStack_254[3] = (**(code **)(*piVar10 + 0xe0))();
    if (aiStack_254[3] < 0) {
      puStack_240 = (undefined4 *)&DAT_00963df8;
      aiStack_254[2] = 0x7c7710;
      piStack_244 = piVar10;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    puStack_240 = (undefined4 *)0xd38;
    piStack_244 = (int *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    aiStack_254[3] = 0x7c772c;
    puVar4 = (undefined4 *)FUN_00679d22();
    piStack_244 = (int *)*puVar4;
    puStack_240 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    aiStack_254[3] = unaff_EBP + -0x78;
    aiStack_254[2] = 0x7c773f;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      puStack_240 = (undefined4 *)(*(int *)(unaff_EBP + 0xc) + -0xc);
      piStack_244 = (int *)0x7c7756;
      FUN_00434e38();
    }
    puStack_240 = &DAT_00980690;
    piStack_244 = (int *)0x7c7768;
    FUN_00403191();
    puStack_240 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    piStack_244 = (int *)0x7c7778;
    FUN_00403191();
    puStack_240 = (undefined4 *)0x0;
    piStack_244 = (int *)0x0;
    aiStack_254[3] = 0xffffffff;
    aiStack_254[2] = *(undefined4 *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    aiStack_254[1] = 0;
    aiStack_254[0] = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    piStack_25c = (int *)0x0;
    puStack_260 = (undefined1 *)(unaff_EBP + -0x134);
    piStack_264 = (int *)(unaff_EBP + -0xa0);
    puStack_268 = (undefined4 *)0xffffffff;
    puStack_270 = (undefined *)0x7c77b5;
    piStack_26c = aiStack_254;
    puStack_270 = (undefined *)FUN_00449713();
    piStack_274 = (int *)0x7c77bb;
    piStack_26c = (int *)FUN_00456ad5();
    *(undefined4 ***)(unaff_EBP + 0xc) = &puStack_268;
    puStack_270 = (undefined *)0x7c77c8;
    FUN_004033a1();
    piStack_26c = (int *)(unaff_EBP + -0x174);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    puStack_270 = (undefined *)0x7c77d8;
    FUN_00405a1d();
    puStack_270 = (undefined *)0x7c77df;
    FUN_00402660();
    puStack_270 = (undefined *)0x7c77e6;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    puStack_260 = (undefined1 *)0x7c77f1;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x34) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
    if (iVar3 != 0) {
      piStack_25c = (int *)0x7c780d;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_25c = (int *)0x7c7820;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    piStack_25c = (int *)0x7c7837;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_25c = (int *)0x7c7842;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    piStack_25c = (int *)0x7c7852;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_25c = (int *)0x7c785d;
      FUN_00878dfb();
    }
    puVar11 = (undefined1 *)(unaff_EBP + -0x134);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    piStack_25c = (int *)0x7c786d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_25c = (int *)0x7c7878;
      FUN_00878dfb();
      puVar11 = extraout_ECX_03;
    }
    piStack_25c = (int *)0x0;
    puStack_268 = &puStack_260;
    *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_260;
    piStack_264 = (int *)0xd75;
    piStack_26c = (int *)0x7c788d;
    puStack_260 = puVar11;
    FUN_00679e4e();
    piStack_264 = (int *)(unaff_EBP + -0x194);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_268 = (undefined4 *)0x7c78a3;
    FUN_0040263d();
    puStack_268 = (undefined4 *)0x7c78aa;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    puStack_260 = (undefined1 *)0x7c78b5;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x70) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    if (iVar3 != 0) {
      piStack_25c = (int *)0x7c78cb;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_25c = (int *)0x7c78d9;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    piStack_25c = (int *)0x7c78e9;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_25c = (int *)0x7c78f4;
      FUN_00878dfb();
    }
    FUN_0087a1b0();
    piStack_25c = (int *)0x0;
    piStack_264 = (int *)0x0;
    puStack_268 = (undefined4 *)0x7c7907;
    puStack_260 = (undefined1 *)aiStack_254;
    piStack_264 = (int *)FUN_00412335();
    *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_260;
    puStack_268 = (undefined4 *)0x7c7913;
    FUN_004033a1();
    piStack_264 = (int *)(unaff_EBP + -0xb0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    puStack_268 = (undefined4 *)0x7c7926;
    FUN_0040263d();
    puStack_268 = (undefined4 *)0x7c792d;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    puStack_260 = (undefined1 *)0x7c7938;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x14) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar3 != 0) {
      piStack_25c = (int *)0x7c794e;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_25c = (int *)0x7c795c;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    piStack_25c = (int *)0x7c796c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_25c = (int *)0x7c7977;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_25c = (int *)0x7c7987;
      FUN_00878dfb();
    }
    uVar5 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x60) = uVar5;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    uVar5 = __ftol();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_25c = (int *)0x7c79b1;
      FUN_00878dfb();
    }
    uVar5 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x60) = uVar5;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    uVar5 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_25c = (int *)0x7c79db;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_25c = (int *)0x7c79eb;
      FUN_00878dfb();
    }
    piVar10 = *(int **)(unaff_EBP + -0x20);
    piVar6 = (int *)(**(code **)(*piVar10 + 0x10))();
    *(double *)(unaff_EBP + -0x50) = (double)*piVar6;
    uVar7 = FUN_0040e48b();
    *(uint *)(unaff_EBP + -0x20) = uVar7 >> 1;
    iVar3 = FUN_0040eea9();
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) - iVar3;
    iVar3 = __ftol();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_25c = (int *)0x7c7a3d;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_25c = (int *)0x7c7a51;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
    iVar8 = (**(code **)(*piVar10 + 0x10))();
    *(double *)(unaff_EBP + -0x50) = (double)*(int *)(iVar8 + 4);
    iVar8 = FUN_0040eed0();
    iVar9 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x20) = iVar9 - iVar8;
    iVar8 = __ftol();
    piStack_25c = (int *)0x7c7a9b;
    FUN_00403191();
    piStack_25c = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    puStack_260 = (undefined1 *)0x7c7aaa;
    FUN_004031b7();
    bVar13 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    if (bVar13) {
      piStack_25c = (int *)0x7c7ac0;
      FUN_00878dfb();
    }
    piStack_25c = (int *)(unaff_EBP + -0x58);
    piStack_264 = *(int **)(unaff_EBP + -0x30);
    puStack_260 = (undefined1 *)0x0;
    puStack_268 = *(undefined4 **)(unaff_EBP + 0xc);
    piStack_26c = (int *)(iVar8 - (int)piStack_264 / 2);
    puStack_270 = (undefined *)(iVar3 - *(int *)(unaff_EBP + 0xc) / 2);
    piStack_274 = (int *)(unaff_EBP + -0x20);
    iStack_278 = 0x7c7af2;
    puVar4 = (undefined4 *)FUN_0042a39f();
    piStack_25c = (int *)0x7c7afc;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x2c),
               (IBinding *)*puVar4);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    piStack_25c = (int *)0x7c7b11;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_25c = (int *)0x7c7b1c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    piStack_25c = (int *)0x7c7b29;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_25c = (int *)0x7c7b34;
      FUN_00878dfb();
    }
    iVar3 = **(int **)(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 300);
    if (iVar3 == 0) {
      piStack_25c = (int *)0x7c7b57;
      FUN_00878dfb();
    }
    piVar10 = (int *)**(undefined4 **)(unaff_EBP + -0x2c);
    puStack_260 = (undefined1 *)0x7c7b79;
    piStack_25c = piVar10;
    puVar4 = (undefined4 *)(**(code **)(*piVar10 + 0xb4))();
    if ((int)puVar4 < 0) {
      puStack_260 = &DAT_00963df8;
      piStack_26c = (int *)0x7c7b89;
      puStack_268 = puVar4;
      piStack_264 = piVar10;
      FUN_00878e09();
    }
    piVar10 = *(int **)(unaff_EBP + -0x2c);
    if (*piVar10 == 0) {
      puStack_260 = (undefined1 *)0x80004003;
      piStack_264 = (int *)0x7c7b9a;
      FUN_00878dfb();
    }
    piVar10 = (int *)*piVar10;
    puStack_260 = (undefined1 *)0xffffffff;
    puStack_268 = (undefined4 *)0x7c7ba7;
    piStack_264 = piVar10;
    iVar3 = (**(code **)(*piVar10 + 0xe0))();
    if (iVar3 < 0) {
      puStack_268 = (undefined4 *)&DAT_00963df8;
      piStack_274 = (int *)0x7c7bb7;
      puStack_270 = (undefined *)iVar3;
      piStack_26c = piVar10;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x48) == 0) {
        puStack_268 = (undefined4 *)0x80004003;
        piStack_26c = (int *)0x7c7bd6;
        FUN_00878dfb();
      }
      puStack_268 = (undefined4 *)0x7c7bde;
      uVar7 = FUN_0040cf4d();
      if (uVar7 <= *(uint *)(unaff_EBP + 0xc)) break;
      puStack_268 = (undefined4 *)0x7c7bef;
      FUN_0087a1b0();
      piStack_26c = *(int **)(unaff_EBP + 0xc);
      puStack_270 = (undefined *)0x7c7bfa;
      puStack_268 = &piStack_264;
      piStack_26c = (int *)FUN_00412335();
      *(undefined4 ***)(unaff_EBP + -0x5c) = &puStack_268;
      puStack_270 = (undefined *)0x7c7c08;
      FUN_00402e8e();
      piStack_26c = (int *)(unaff_EBP + -0xe0);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      puStack_270 = (undefined *)0x7c7c1b;
      FUN_0040263d();
      puStack_270 = (undefined *)0x7c7c22;
      FUN_004048a4();
      puStack_268 = (undefined4 *)(unaff_EBP + -0xe0);
      piStack_26c = (int *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      puStack_270 = (undefined *)0x7c7c36;
      puStack_268 = (undefined4 *)FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      piStack_26c = (int *)0x7c7c45;
      puStack_268 = (undefined4 *)FUN_0041a485();
      if (((int)puStack_268 < 0) && (puStack_268 != (undefined4 *)0x80004002)) {
        piStack_26c = (int *)0x7c7c56;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      puStack_268 = (undefined4 *)0x7c7c62;
      FUN_004027b3();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_268 = (undefined4 *)0x80004003;
        piStack_26c = (int *)0x7c7c6d;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        puStack_268 = (undefined4 *)0x80004003;
        piStack_26c = (int *)0x7c7c78;
        FUN_00878dfb();
      }
      piVar10 = *(int **)(unaff_EBP + -0x28);
      puStack_268 = (undefined4 *)0x7c7c83;
      puStack_268 = (undefined4 *)FUN_0040e48b();
      puStack_270 = (undefined *)0x7c7c8a;
      piStack_26c = piVar10;
      iVar3 = (**(code **)(*piVar10 + 0x44))();
      if (iVar3 < 0) {
        puStack_270 = &DAT_00963cc8;
        uStack_27c = 0x7c7c9a;
        iStack_278 = iVar3;
        piStack_274 = piVar10;
        FUN_00878e09();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_270 = (undefined *)0x80004003;
        piStack_274 = (int *)0x7c7ca9;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        puStack_270 = (undefined *)0x80004003;
        piStack_274 = (int *)0x7c7cb8;
        FUN_00878dfb();
      }
      piVar10 = *(int **)(unaff_EBP + -0x28);
      puStack_270 = (undefined *)0x7c7cc3;
      puStack_270 = (undefined *)FUN_0040e53d();
      iStack_278 = 0x7c7cca;
      piStack_274 = piVar10;
      puStack_270 = (undefined *)(**(code **)(*piVar10 + 0x4c))();
      if ((int)puStack_270 < 0) {
        puStack_268 = (undefined4 *)&DAT_00963cc8;
        piStack_274 = (int *)0x7c7cda;
        piStack_26c = piVar10;
        FUN_00878e09();
      }
      puStack_268 = (undefined4 *)0x78;
      piStack_274 = (int *)&piStack_26c;
      *(int ***)(unaff_EBP + -0x5c) = &piStack_26c;
      puStack_270 = (undefined *)0x474;
      iStack_278 = 0x7c7cf2;
      FUN_00679e4e();
      puStack_270 = (undefined *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      piStack_274 = (int *)0x7c7d02;
      FUN_004115d9();
      piStack_274 = (int *)0x7c7d09;
      FUN_00404e7f();
      puStack_270 = (undefined *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      piStack_274 = (int *)0x7c7d1b;
      FUN_0040263d();
      piStack_274 = (int *)0x7c7d22;
      piStack_26c = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      puStack_270 = (undefined *)0x7c7d2c;
      piVar10 = (int *)FUN_00412550();
      puStack_270 = (undefined *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      piStack_274 = (int *)0x7c7d3e;
      puStack_268 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_268 < 0) {
        piStack_26c = (int *)0x7c7d4b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      puStack_268 = (undefined4 *)0x7c7d57;
      FUN_004027eb();
      puStack_268 = &DAT_00980690;
      piStack_26c = (int *)0x7c7d63;
      FUN_00403191();
      puStack_268 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      piStack_26c = (int *)0x7c7d73;
      FUN_00403191();
      puStack_268 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      piStack_26c = (int *)0x7c7d83;
      FUN_00403191();
      puStack_268 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      piStack_26c = (int *)0x7c7d93;
      FUN_00403191();
      puStack_268 = (undefined4 *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      puStack_270 = (undefined *)0x7c7da2;
      piStack_26c = piVar10;
      FUN_004031b7();
      iVar3 = **(int **)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      if (iVar3 == 0) {
        puStack_268 = (undefined4 *)0x80004003;
        piStack_26c = (int *)0x7c7db7;
        FUN_00878dfb();
      }
      puStack_268 = (undefined4 *)(unaff_EBP + -0xf0);
      piStack_26c = (int *)(unaff_EBP + -0xd0);
      puStack_270 = (undefined *)(unaff_EBP + -0xc0);
      piStack_274 = (int *)(unaff_EBP + -0x124);
      iStack_278 = unaff_EBP + -0x58;
      uStack_27c = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_280 = unaff_EBP + -0x114;
      uStack_284 = 0x7c7de8;
      FUN_004250ac();
      puStack_268 = (undefined4 *)(unaff_EBP + -0x114);
      piStack_26c = (int *)0x7c7df4;
      puStack_268 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_268 < 0) {
        piStack_26c = (int *)0x7c7dff;
        FUN_00878dfb();
      }
      puStack_268 = (undefined4 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      piStack_26c = (int *)0x7c7e0c;
      puStack_268 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_268 < 0) {
        piStack_26c = (int *)0x7c7e17;
        FUN_00878dfb();
      }
      puStack_268 = (undefined4 *)(unaff_EBP + -0x124);
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      piStack_26c = (int *)0x7c7e27;
      puStack_268 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_268 < 0) {
        piStack_26c = (int *)0x7c7e32;
        FUN_00878dfb();
      }
      puStack_268 = (undefined4 *)(unaff_EBP + -0xc0);
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      piStack_26c = (int *)0x7c7e42;
      puStack_268 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_268 < 0) {
        piStack_26c = (int *)0x7c7e4d;
        FUN_00878dfb();
      }
      puStack_268 = (undefined4 *)(unaff_EBP + -0xd0);
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      piStack_26c = (int *)0x7c7e5d;
      puStack_268 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_268 < 0) {
        piStack_26c = (int *)0x7c7e68;
        FUN_00878dfb();
      }
      puStack_268 = (undefined4 *)(unaff_EBP + -0xf0);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      piStack_26c = (int *)0x7c7e78;
      puStack_268 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_268 < 0) {
        piStack_26c = (int *)0x7c7e83;
        FUN_00878dfb();
      }
      puStack_268 = (undefined4 *)(unaff_EBP + -0xe0);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      piStack_26c = (int *)0x7c7e93;
      puStack_268 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_268 < 0) {
        piStack_26c = (int *)0x7c7e9e;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    }
    puStack_268 = &DAT_00980690;
    piStack_26c = (int *)0x7c7eb2;
    FUN_00403191();
    puStack_268 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    piStack_26c = (int *)0x7c7ec2;
    FUN_00403191();
    iVar3 = **(int **)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    if (iVar3 == 0) {
      puStack_268 = (undefined4 *)0x80004003;
      piStack_26c = (int *)0x7c7ed3;
      FUN_00878dfb();
    }
    piStack_28c = (int *)**(undefined4 **)(unaff_EBP + -0x2c);
    piStack_274 = *(int **)(unaff_EBP + -0xf0);
    puStack_270 = *(undefined **)(unaff_EBP + -0xec);
    iVar3 = *piStack_28c;
    piStack_26c = *(int **)(unaff_EBP + -0xe8);
    puStack_268 = *(undefined4 **)(unaff_EBP + -0xe4);
    uStack_284 = *(undefined4 *)(unaff_EBP + -0xe0);
    iStack_280 = *(undefined4 *)(unaff_EBP + -0xdc);
    uStack_27c = *(undefined4 *)(unaff_EBP + -0xd8);
    uStack_288 = 0x20;
    *(int **)(unaff_EBP + 0xc) = piStack_28c;
    iStack_278 = *(undefined4 *)(unaff_EBP + -0xd4);
    puStack_290 = (undefined4 *)0x7c7f04;
    iVar3 = (**(code **)(iVar3 + 0x110))();
    if (iVar3 < 0) {
      puStack_290 = (undefined4 *)&DAT_00963df8;
      aiStack_2a4[4] = *(undefined4 *)(unaff_EBP + 0xc);
      aiStack_2a4[2] = 0x7c7f16;
      aiStack_2a4[3] = iVar3;
      FUN_00878e09();
    }
    puStack_290 = (undefined4 *)(unaff_EBP + -0xe0);
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    aiStack_2a4[4] = 0x7c7f26;
    puStack_290 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_290 < 0) {
      aiStack_2a4[4] = 0x7c7f31;
      FUN_00878dfb();
    }
    puStack_290 = (undefined4 *)(unaff_EBP + -0xf0);
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    aiStack_2a4[4] = 0x7c7f41;
    puStack_290 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_290 < 0) {
      aiStack_2a4[4] = 0x7c7f4c;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
    puStack_290 = (undefined4 *)0xd39;
    aiStack_2a4[4] = unaff_EBP + 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    aiStack_2a4[3] = 0x7c7f66;
    puVar4 = (undefined4 *)FUN_00679d22();
    aiStack_2a4[4] = *puVar4;
    puStack_290 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    aiStack_2a4[3] = unaff_EBP + -0x7c;
    aiStack_2a4[2] = 0x7c7f79;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      puStack_290 = (undefined4 *)(*(int *)(unaff_EBP + 0xc) + -0xc);
      aiStack_2a4[4] = 0x7c7f90;
      FUN_00434e38();
    }
    puStack_290 = &DAT_00980690;
    aiStack_2a4[4] = 0x7c7fa2;
    FUN_00403191();
    puStack_290 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    aiStack_2a4[4] = 0x7c7fb2;
    FUN_00403191();
    puStack_290 = (undefined4 *)0x0;
    aiStack_2a4[4] = 0;
    aiStack_2a4[3] = 0xffffffff;
    aiStack_2a4[2] = *(undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    aiStack_2a4[1] = 0;
    aiStack_2a4[0] = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    piStack_2ac = (int *)0x0;
    puStack_2b0 = (undefined1 *)(unaff_EBP + -0xf0);
    piStack_2b4 = (int *)(unaff_EBP + -0xe0);
    puStack_2b8 = (undefined4 *)0xffffffff;
    piStack_2bc = aiStack_2a4;
    uVar5 = FUN_00449713();
    piStack_2bc = (int *)FUN_00456ad5(uVar5);
    *(undefined4 ***)(unaff_EBP + 8) = &puStack_2b8;
    FUN_004033a1();
    piStack_2bc = (int *)(unaff_EBP + -0x1b4);
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    puStack_2b0 = (undefined1 *)0x7c802b;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    if (iVar3 != 0) {
      piStack_2ac = (int *)0x7c8041;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_2ac = (int *)0x7c8052;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    piStack_2ac = (int *)0x7c8062;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_2ac = (int *)0x7c806d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    piStack_2ac = (int *)0x7c807d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_2ac = (int *)0x7c8088;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    piStack_2ac = (int *)0x7c8098;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_2ac = (int *)0x7c80a3;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x44) == 0) {
      piStack_2ac = (int *)0x7c8749;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x3c) + 0x1ea0),(IBinding *)0x0);
    }
    else {
      FUN_0087a1b0();
      piStack_2ac = (int *)0x0;
      piStack_2b4 = (int *)0x0;
      puStack_2b8 = (undefined4 *)0x7c80bf;
      puStack_2b0 = (undefined1 *)aiStack_2a4;
      piStack_2b4 = (int *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x5c) = &puStack_2b0;
      puStack_2b8 = (undefined4 *)0x7c80cb;
      FUN_004033a1();
      piStack_2b4 = (int *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      puStack_2b8 = (undefined4 *)0x7c80de;
      FUN_0040263d();
      puStack_2b8 = (undefined4 *)0x7c80e5;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      puStack_2b0 = (undefined1 *)0x7c80f0;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x14) = iVar3;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if (iVar3 != 0) {
        piStack_2ac = (int *)0x7c8106;
        iVar3 = FUN_0041a581();
        if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
          piStack_2ac = (int *)0x7c8117;
          FUN_00878dfb();
        }
      }
      piStack_2ac = (int *)0x7c8122;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 *(IBinding **)(unaff_EBP + 0xc));
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      piStack_2ac = (int *)0x7c813a;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_2ac = (int *)0x7c8145;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_2ac = (int *)0x7c8155;
        FUN_00878dfb();
      }
      uVar5 = FUN_0040e48b();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      uVar5 = __ftol();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_2ac = (int *)0x7c817f;
        FUN_00878dfb();
      }
      uVar5 = FUN_0040e53d();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      uVar5 = __ftol();
      *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_2ac = (int *)0x7c81a9;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_2ac = (int *)0x7c81b9;
        FUN_00878dfb();
      }
      piVar10 = (int *)(*(int *)(unaff_EBP + -0x3c) + 4);
      piVar6 = (int *)(**(code **)(*piVar10 + 0x10))();
      *(double *)(unaff_EBP + -0x50) = (double)*piVar6;
      uVar7 = FUN_0040e48b();
      *(uint *)(unaff_EBP + -0x14) = uVar7 >> 1;
      iVar3 = FUN_0040eea9();
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) - iVar3;
      iVar3 = __ftol();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_2ac = (int *)0x7c820e;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_2ac = (int *)0x7c8222;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x10);
      iVar8 = (**(code **)(*piVar10 + 0x10))();
      *(double *)(unaff_EBP + -0x50) = (double)*(int *)(iVar8 + 4);
      iVar8 = FUN_0040eed0();
      iVar9 = FUN_0040e53d();
      *(int *)(unaff_EBP + -0x14) = iVar9 - iVar8;
      iVar8 = __ftol();
      piStack_2ac = (int *)0x7c826f;
      FUN_00403191();
      piStack_2ac = (int *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      puStack_2b0 = (undefined1 *)0x7c8281;
      FUN_004031b7();
      bVar13 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      if (bVar13) {
        piStack_2ac = (int *)0x7c8297;
        FUN_00878dfb();
      }
      piStack_2ac = (int *)(unaff_EBP + -0xd0);
      piStack_2b4 = *(int **)(unaff_EBP + -0x30);
      puStack_2b0 = (undefined1 *)0x0;
      puStack_2b8 = *(undefined4 **)(unaff_EBP + 0xc);
      piStack_2bc = (int *)(iVar8 - (int)piStack_2b4 / 2);
      puVar4 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x14,iVar3 - *(int *)(unaff_EBP + 0xc) / 2);
      iVar3 = *(int *)(unaff_EBP + -0x3c);
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x1ea0);
      piStack_2ac = (int *)0x7c82e1;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      piStack_2ac = (int *)0x7c82f9;
      iVar8 = FUN_00402bc3();
      if (iVar8 < 0) {
        piStack_2ac = (int *)0x7c8304;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      piStack_2ac = (int *)0x7c8314;
      iVar8 = FUN_00402bc3();
      if (iVar8 < 0) {
        piStack_2ac = (int *)0x7c831f;
        FUN_00878dfb();
      }
      piVar10 = (int *)(iVar3 + 0x1e90);
      if (*piVar10 == 0) {
        piStack_2ac = (int *)0x7c8333;
        FUN_00878dfb();
      }
      iVar3 = *(int *)p_Var1;
      *(int *)(unaff_EBP + 0xc) = *piVar10;
      if (iVar3 == 0) {
        piStack_2ac = (int *)0x7c8346;
        FUN_00878dfb();
      }
      piVar10 = *(int **)p_Var1;
      FUN_004320e3();
      puStack_2b0 = (undefined1 *)0x7c835a;
      piStack_2ac = piVar10;
      puVar4 = (undefined4 *)(**(code **)(*piVar10 + 0xb4))();
      if ((int)puVar4 < 0) {
        puStack_2b0 = &DAT_00963df8;
        piStack_2bc = (int *)0x7c836a;
        puStack_2b8 = puVar4;
        piStack_2b4 = piVar10;
        FUN_00878e09();
      }
      if (*(int *)p_Var1 == 0) {
        puStack_2b0 = (undefined1 *)0x80004003;
        piStack_2b4 = (int *)0x7c8378;
        FUN_00878dfb();
      }
      piVar10 = *(int **)p_Var1;
      puStack_2b0 = (undefined1 *)0xffffffff;
      puStack_2b8 = (undefined4 *)0x7c8385;
      piStack_2b4 = piVar10;
      iVar3 = (**(code **)(*piVar10 + 0xe0))();
      if (iVar3 < 0) {
        puStack_2b8 = (undefined4 *)&DAT_00963df8;
        piStack_2bc = piVar10;
        FUN_00878e09(iVar3);
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x44) == 0) {
          puStack_2b8 = (undefined4 *)0x80004003;
          piStack_2bc = (int *)0x7c83af;
          FUN_00878dfb();
        }
        puStack_2b8 = (undefined4 *)0x7c83b7;
        uVar7 = FUN_0040cf4d();
        if (uVar7 <= *(uint *)(unaff_EBP + 0xc)) break;
        puStack_2b8 = (undefined4 *)0x7c83c8;
        FUN_0087a1b0();
        piStack_2bc = *(int **)(unaff_EBP + 0xc);
        puStack_2b8 = &piStack_2b4;
        piStack_2bc = (int *)FUN_00412335();
        *(undefined4 ***)(unaff_EBP + -0x40) = &puStack_2b8;
        FUN_00402e8e();
        piStack_2bc = (int *)(unaff_EBP + -0xb0);
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        FUN_0040263d();
        FUN_004048a4();
        puStack_2b8 = (undefined4 *)(unaff_EBP + -0xb0);
        piStack_2bc = (int *)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        puStack_2b8 = (undefined4 *)FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x54;
        piStack_2bc = (int *)0x7c841e;
        puStack_2b8 = (undefined4 *)FUN_0041a485();
        if (((int)puStack_2b8 < 0) && (puStack_2b8 != (undefined4 *)0x80004002)) {
          piStack_2bc = (int *)0x7c842f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        puStack_2b8 = (undefined4 *)0x7c843b;
        FUN_004027b3();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_2b8 = (undefined4 *)0x80004003;
          piStack_2bc = (int *)0x7c8446;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          puStack_2b8 = (undefined4 *)0x80004003;
          piStack_2bc = (int *)0x7c8451;
          FUN_00878dfb();
        }
        piVar10 = *(int **)(unaff_EBP + 8);
        puStack_2b8 = (undefined4 *)0x7c845c;
        puStack_2b8 = (undefined4 *)FUN_0040e48b();
        piStack_2bc = piVar10;
        iVar3 = (**(code **)(*piVar10 + 0x44))();
        if (iVar3 < 0) {
          FUN_00878e09(iVar3,piVar10,&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = *(int **)(unaff_EBP + 8);
        uVar5 = FUN_0040e53d();
        iVar3 = (**(code **)(*piVar10 + 0x4c))(piVar10,uVar5);
        if (iVar3 < 0) {
          puStack_2b8 = (undefined4 *)&DAT_00963cc8;
          piStack_2bc = piVar10;
          FUN_00878e09(iVar3);
        }
        puStack_2b8 = (undefined4 *)0x78;
        *(int ***)(unaff_EBP + -0x40) = &piStack_2bc;
        FUN_00679e4e(&piStack_2bc,0x474);
        iVar3 = unaff_EBP + -0x5c;
        *(undefined1 *)(unaff_EBP + -4) = 0x55;
        FUN_004115d9(iVar3);
        FUN_00404e7f(iVar3);
        iVar3 = unaff_EBP + -0x1d4;
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        FUN_0040263d(iVar3);
        piStack_2bc = (int *)FUN_004048a4(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x58;
        uVar5 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x40) = uVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        puStack_2b8 = (undefined4 *)FUN_00402bc3(unaff_EBP + -0x1d4);
        if ((int)puStack_2b8 < 0) {
          piStack_2bc = (int *)0x7c8525;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        puStack_2b8 = (undefined4 *)0x7c8531;
        FUN_004027eb();
        puStack_2b8 = &DAT_00980690;
        piStack_2bc = (int *)0x7c8542;
        FUN_00403191();
        puStack_2b8 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        piStack_2bc = (int *)0x7c854f;
        FUN_00403191();
        puStack_2b8 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x5a;
        piStack_2bc = (int *)0x7c855f;
        FUN_00403191();
        puStack_2b8 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        piStack_2bc = (int *)0x7c856f;
        FUN_00403191();
        puStack_2b8 = (undefined4 *)0x3;
        piStack_2bc = *(int **)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 0x5c;
        FUN_004031b7();
        iVar3 = *(int *)p_Var1;
        *(undefined1 *)(unaff_EBP + -4) = 0x5d;
        if (iVar3 == 0) {
          puStack_2b8 = (undefined4 *)0x80004003;
          piStack_2bc = (int *)0x7c8595;
          FUN_00878dfb();
        }
        puStack_2b8 = (undefined4 *)(unaff_EBP + -0x114);
        piStack_2bc = (int *)(unaff_EBP + -0x58);
        FUN_004250ac(unaff_EBP + -500,*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0xd0,
                     unaff_EBP + -0xc0,unaff_EBP + -0x124);
        puStack_2b8 = (undefined4 *)(unaff_EBP + -500);
        piStack_2bc = (int *)0x7c85d2;
        puStack_2b8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2b8 < 0) {
          piStack_2bc = (int *)0x7c85dd;
          FUN_00878dfb();
        }
        puStack_2b8 = (undefined4 *)(unaff_EBP + -0xd0);
        *(undefined1 *)(unaff_EBP + -4) = 0x5c;
        piStack_2bc = (int *)0x7c85ed;
        puStack_2b8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2b8 < 0) {
          piStack_2bc = (int *)0x7c85f8;
          FUN_00878dfb();
        }
        puStack_2b8 = (undefined4 *)(unaff_EBP + -0xc0);
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        piStack_2bc = (int *)0x7c8608;
        puStack_2b8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2b8 < 0) {
          piStack_2bc = (int *)0x7c8613;
          FUN_00878dfb();
        }
        puStack_2b8 = (undefined4 *)(unaff_EBP + -0x124);
        *(undefined1 *)(unaff_EBP + -4) = 0x5a;
        piStack_2bc = (int *)0x7c8623;
        puStack_2b8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2b8 < 0) {
          piStack_2bc = (int *)0x7c862e;
          FUN_00878dfb();
        }
        puStack_2b8 = (undefined4 *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        piStack_2bc = (int *)0x7c863b;
        puStack_2b8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2b8 < 0) {
          piStack_2bc = (int *)0x7c8646;
          FUN_00878dfb();
        }
        puStack_2b8 = (undefined4 *)(unaff_EBP + -0x114);
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        piStack_2bc = (int *)0x7c8656;
        puStack_2b8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2b8 < 0) {
          piStack_2bc = (int *)0x7c8661;
          FUN_00878dfb();
        }
        puStack_2b8 = (undefined4 *)(unaff_EBP + -0xb0);
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        piStack_2bc = (int *)0x7c8671;
        puStack_2b8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2b8 < 0) {
          piStack_2bc = (int *)0x7c867c;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
      }
      puStack_2b8 = &DAT_00980690;
      piStack_2bc = (int *)0x7c8694;
      FUN_00403191();
      puStack_2b8 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      piStack_2bc = (int *)0x7c86a8;
      FUN_00403191();
      iVar3 = *(int *)p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      if (iVar3 == 0) {
        puStack_2b8 = (undefined4 *)0x80004003;
        piStack_2bc = (int *)0x7c86b6;
        FUN_00878dfb();
      }
      piVar10 = *(int **)p_Var1;
      iVar3 = *piVar10;
      piStack_2bc = *(int **)(unaff_EBP + -0x10c);
      puStack_2b8 = *(undefined4 **)(unaff_EBP + -0x108);
      *(int **)(unaff_EBP + 0xc) = piVar10;
      puVar11 = (undefined1 *)
                (**(code **)(iVar3 + 0x110))
                          (piVar10,0x20,*(undefined4 *)(unaff_EBP + -0xb0),
                           *(undefined4 *)(unaff_EBP + -0xac),*(undefined4 *)(unaff_EBP + -0xa8),
                           *(undefined4 *)(unaff_EBP + -0xa4),*(undefined4 *)(unaff_EBP + -0x114),
                           *(undefined4 *)(unaff_EBP + -0x110));
      if ((int)puVar11 < 0) {
        piStack_2ac = *(int **)(unaff_EBP + 0xc);
        piStack_2b4 = (int *)0x7c86f6;
        puStack_2b0 = puVar11;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      piStack_2ac = (int *)0x7c8706;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_2ac = (int *)0x7c8711;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      piStack_2ac = (int *)0x7c8721;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_2ac = (int *)0x7c872c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      FUN_004125e6();
    }
    uVar5 = FUN_007d1e08();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 0x1eb8) = uVar5;
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    if (*(int *)(unaff_EBP + -0x7c) != 0) {
      piStack_2ac = (int *)0x7c8773;
      FUN_00434e38();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_2ac = (int *)0x7c878d;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
      piStack_2ac = (int *)0x7c879e;
      (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    if (*(int **)(unaff_EBP + -0x84) != (int *)0x0) {
      piStack_2ac = (int *)0x7c87b2;
      (**(code **)(**(int **)(unaff_EBP + -0x84) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      piStack_2ac = (int *)0x7c87c6;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int **)(unaff_EBP + -0x90) != (int *)0x0) {
      piStack_2ac = (int *)0x7c87db;
      (**(code **)(**(int **)(unaff_EBP + -0x90) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int **)(unaff_EBP + -0x88) != (int *)0x0) {
      piStack_2ac = (int *)0x7c87ef;
      (**(code **)(**(int **)(unaff_EBP + -0x88) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      piStack_2ac = (int *)0x7c8800;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int **)(unaff_EBP + -0x6c) != (int *)0x0) {
      piStack_2ac = (int *)0x7c8811;
      (**(code **)(**(int **)(unaff_EBP + -0x6c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x80) != 0) {
      piStack_2ac = (int *)0x7c8825;
      FUN_00434e38();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x8c) != (int *)0x0) {
      piStack_2ac = (int *)0x7c883a;
      (**(code **)(**(int **)(unaff_EBP + -0x8c) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


