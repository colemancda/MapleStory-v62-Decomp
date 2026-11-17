/* ptr_0046e1d3 - 0x0046e1d3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0046e1d3(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5,
                 IBinding *param_6)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int *unaff_EBX;
  int unaff_EBP;
  uint uVar8;
  bool bVar9;
  
  FUN_004250ac();
  param_6 = (IBinding *)(unaff_EBP + -0xa0);
  param_5 = (int *)0x46e1e4;
  param_6 = (IBinding *)FUN_00402bc3();
  if ((int)param_6 < (int)unaff_EBX) {
    param_5 = (int *)0x46e1ef;
    FUN_00878dfb();
  }
  param_6 = (IBinding *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  param_5 = (int *)0x46e1fc;
  param_6 = (IBinding *)FUN_00402bc3();
  if ((int)param_6 < (int)unaff_EBX) {
    param_5 = (int *)0x46e207;
    FUN_00878dfb();
  }
  param_6 = (IBinding *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  param_5 = (int *)0x46e214;
  param_6 = (IBinding *)FUN_00402bc3();
  if ((int)param_6 < (int)unaff_EBX) {
    param_5 = (int *)0x46e21f;
    FUN_00878dfb();
  }
  param_6 = (IBinding *)(unaff_EBP + -0xe0);
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  param_5 = (int *)0x46e22f;
  param_6 = (IBinding *)FUN_00402bc3();
  if ((int)param_6 < (int)unaff_EBX) {
    param_5 = (int *)0x46e23a;
    FUN_00878dfb();
  }
  param_6 = (IBinding *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  param_5 = (int *)0x46e24a;
  param_6 = (IBinding *)FUN_00402bc3();
  if ((int)param_6 < (int)unaff_EBX) {
    param_5 = (int *)0x46e255;
    FUN_00878dfb();
  }
  param_6 = (IBinding *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  param_5 = (int *)0x46e262;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    param_5 = (int *)0x46e26d;
    param_6 = (IBinding *)iVar2;
    FUN_00878dfb();
    param_6 = (IBinding *)extraout_ECX;
  }
  if (*(int *)(unaff_EBP + 8) == 5) {
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0x00000010;
    param_3 = 0x68f;
    param_4 = (int)param_6;
    FUN_00679e4e();
    param_3 = unaff_EBP + -0xa0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    param_4 = 0x46e2b6;
    piVar3 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x74) = piVar3;
    *(int **)(unaff_EBP + -0x38) = unaff_EBX;
    if (piVar3 != unaff_EBX) {
      param_6 = (IBinding *)(unaff_EBP + -0x74);
      param_5 = (int *)0x46e2cc;
      param_6 = (IBinding *)FUN_0041a581();
      if (((int)param_6 < (int)unaff_EBX) && (param_6 != (IBinding *)0x80004002)) {
        param_5 = (int *)0x46e2dd;
        FUN_00878dfb();
      }
    }
    param_6 = (IBinding *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    param_5 = (int *)0x46e2ed;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      param_5 = (int *)0x46e2f8;
      param_6 = (IBinding *)iVar2;
      FUN_00878dfb();
      param_6 = (IBinding *)extraout_ECX_00;
    }
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0x00000010;
    param_3 = 0x55d;
    param_4 = (int)param_6;
    FUN_00679e4e();
    param_3 = unaff_EBP + -0x144;
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    param_4 = 0x46e332;
    piVar3 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x7c) = piVar3;
    *(int **)(unaff_EBP + 0x28) = unaff_EBX;
    if (piVar3 != unaff_EBX) {
      param_6 = (IBinding *)(unaff_EBP + -0x7c);
      param_5 = (int *)0x46e348;
      param_6 = (IBinding *)FUN_0041a581();
      if (((int)param_6 < (int)unaff_EBX) && (param_6 != (IBinding *)0x80004002)) {
        param_5 = (int *)0x46e359;
        FUN_00878dfb();
      }
    }
    param_6 = (IBinding *)(unaff_EBP + -0x144);
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    param_5 = (int *)0x46e369;
    param_6 = (IBinding *)FUN_00402bc3();
    if ((int)param_6 < (int)unaff_EBX) {
      param_5 = (int *)0x46e374;
      FUN_00878dfb();
    }
    param_6 = (IBinding *)&DAT_00980690;
    param_5 = (int *)0x46e381;
    FUN_00403191();
    param_6 = (IBinding *)0x3;
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    param_4 = 0x46e390;
    FUN_004031b7();
    bVar9 = DAT_0097c1ac == unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x61;
    if (bVar9) {
      param_6 = (IBinding *)0x80004003;
      param_5 = (int *)0x46e3a6;
      FUN_00878dfb();
    }
    param_6 = (IBinding *)(unaff_EBP + -0x2c);
    param_5 = (int *)(unaff_EBP + -0x68);
    puVar4 = (undefined4 *)FUN_0042a39f();
    param_6 = (IBinding *)*puVar4;
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0x10)
    ;
    param_5 = (int *)0x46e3d1;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,param_6);
    param_6 = *(IBinding **)(unaff_EBP + 0x20);
    if (param_6 != (IBinding *)unaff_EBX) {
      param_5 = (int *)0x46e3de;
      (**(code **)(*(int *)param_6 + 8))();
    }
    param_6 = (IBinding *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    param_5 = (int *)0x46e3eb;
    param_6 = (IBinding *)FUN_00402bc3();
    if ((int)param_6 < (int)unaff_EBX) {
      param_5 = (int *)0x46e3f6;
      FUN_00878dfb();
    }
    param_6 = (IBinding *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    param_5 = (int *)0x46e403;
    param_6 = (IBinding *)FUN_00402bc3();
    if ((int)param_6 < (int)unaff_EBX) {
      param_5 = (int *)0x46e40e;
      FUN_00878dfb();
    }
    param_6 = (IBinding *)0x1;
    param_5 = *(int **)(unaff_EBP + 0x14);
    param_4 = 0x46e41b;
    FUN_0040ee87();
    piVar3 = *(int **)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    if (piVar3 == unaff_EBX) {
      param_6 = (IBinding *)0x80004003;
      param_5 = (int *)0x46e42d;
      FUN_00878dfb();
    }
    param_3 = *(undefined4 *)(unaff_EBP + -0x68);
    param_4 = *(int *)(unaff_EBP + -100);
    piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x10);
    iVar2 = *piVar3;
    param_5 = *(int **)(unaff_EBP + -0x60);
    *(int **)(unaff_EBP + 0x20) = piVar3;
    param_6 = *(IBinding **)(unaff_EBP + -0x5c);
    iVar2 = (**(code **)(iVar2 + 100))();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    puVar4 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x10);
    if (*(int **)(*(int *)(unaff_EBP + -0x18) + 0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    iVar2 = (**(code **)(*(int *)*puVar4 + 0xe0))();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 99;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 100;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    FUN_00403191();
    piVar3 = (int *)*puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    if (piVar3 == unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_004250ac(unaff_EBP + -0x120,*(undefined4 *)(unaff_EBP + -0x38));
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 100;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 99;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    FUN_004031b7();
    bVar9 = DAT_0097c1ac == unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x69;
    if (bVar9) {
      FUN_00878dfb();
    }
    puVar4 = (undefined4 *)FUN_0042a39f(unaff_EBP + 0x20,unaff_EBX,unaff_EBX);
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0x14)
    ;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
    if (*(int **)(unaff_EBP + 0x20) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_0040ee87();
    piVar3 = *(int **)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x6a;
    if (piVar3 == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x14);
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + 0x20) = piVar3;
    iVar2 = (**(code **)(iVar2 + 100))();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 0x20),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x68);
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb(iVar2);
    }
    piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x14);
    puVar4 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
    *(undefined4 **)(unaff_EBP + 0x18) = puVar4;
    if (piVar3 == unaff_EBX) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*puVar4;
    iVar2 = (**(code **)(*piVar3 + 0xe0))(piVar3,0xffffffff);
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
    iVar2 = FUN_00402e32(unaff_EBP + -0x90,&DAT_00980690);
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    FUN_00403191(&DAT_00980690);
    piVar3 = (int *)*puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    if (piVar3 == unaff_EBX) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004250ac(unaff_EBP + -0x120,*(undefined4 *)(unaff_EBP + 0x28),unaff_EBP + -0x68,
                 unaff_EBP + -0x2c,unaff_EBP + -0x58,unaff_EBP + -0xe0,unaff_EBP + -0x90);
    iVar2 = FUN_00402bc3(unaff_EBP + -0x120);
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x68);
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    iVar2 = FUN_00402bc3(unaff_EBP + -0xe0);
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x90);
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb(iVar2);
    }
    uVar8 = -(uint)(*(int *)(unaff_EBP + 0x14) != 0) & *(int *)(unaff_EBP + 0x14) - 0xcU;
    iVar2 = *(int *)(uVar8 + 0x128);
    *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(uVar8 + 300);
    puVar4 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x10);
    piVar3 = (int *)*puVar4;
    *(undefined4 **)(unaff_EBP + 0x20) = puVar4;
    if (piVar3 == unaff_EBX) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)**(undefined4 **)(unaff_EBP + 0x20);
    iVar6 = *piVar3;
    *(int **)(unaff_EBP + 0x20) = piVar3;
    iVar2 = (**(code **)(iVar6 + 0xb4))
                      (piVar3,(iVar2 * 3000 - *(int *)(unaff_EBP + 0x24)) * 10 + -0x3fff8ad4);
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 0x20),&DAT_00963df8);
    }
    puVar4 = *(undefined4 **)(unaff_EBP + 0x18);
    piVar3 = (int *)*puVar4;
    iVar2 = *(int *)(uVar8 + 0x128);
    *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(uVar8 + 300);
    if (piVar3 == unaff_EBX) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*puVar4;
    iVar2 = (**(code **)(*piVar3 + 0xb4))
                      (piVar3,((iVar2 * 3000 - *(int *)(unaff_EBP + 0x20)) + -0x6665aaf) * 10);
    if (iVar2 < (int)unaff_EBX) {
      param_6 = (IBinding *)&DAT_00963df8;
      param_3 = 0x46e8de;
      param_4 = iVar2;
      param_5 = piVar3;
      FUN_00878e09();
    }
    if (*(int **)(unaff_EBP + -0x70) != unaff_EBX) {
      param_6 = (IBinding *)(unaff_EBP + -0x90);
      param_5 = (int *)0x46e8f4;
      VariantInit((VARIANTARG *)param_6);
      param_5 = (int *)(unaff_EBP + -0x90);
      param_6 = (IBinding *)&DAT_00980690;
      param_4 = 0x46e905;
      param_6 = (IBinding *)FUN_00402e32();
      if ((int)param_6 < (int)unaff_EBX) {
        param_5 = (int *)0x46e911;
        FUN_00878dfb();
      }
      param_6 = (IBinding *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 0x70;
      param_4 = 0x46e920;
      FUN_004031b7();
      bVar9 = DAT_0097c1ac == unaff_EBX;
      *(undefined1 *)(unaff_EBP + -4) = 0x71;
      if (bVar9) {
        param_6 = (IBinding *)0x80004003;
        param_5 = (int *)0x46e936;
        FUN_00878dfb();
      }
      param_6 = (IBinding *)(unaff_EBP + -0x90);
      param_5 = (int *)(unaff_EBP + -0x68);
      puVar4 = (undefined4 *)FUN_0042a39f();
      param_6 = (IBinding *)*puVar4;
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x18) + 0x18);
      param_5 = (int *)0x46e964;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,param_6);
      param_6 = *(IBinding **)(unaff_EBP + 0x20);
      if (param_6 != (IBinding *)unaff_EBX) {
        param_5 = (int *)0x46e971;
        (**(code **)(*(int *)param_6 + 8))();
      }
      param_6 = (IBinding *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x70;
      param_5 = (int *)0x46e97e;
      param_6 = (IBinding *)FUN_00402bc3();
      if ((int)param_6 < (int)unaff_EBX) {
        param_5 = (int *)0x46e989;
        FUN_00878dfb();
      }
      param_6 = (IBinding *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      param_5 = (int *)0x46e999;
      param_6 = (IBinding *)FUN_00402bc3();
      if ((int)param_6 < (int)unaff_EBX) {
        param_5 = (int *)0x46e9a4;
        FUN_00878dfb();
      }
      param_6 = *(IBinding **)(unaff_EBP + 0x14);
      *(undefined2 *)(unaff_EBP + -0x90) = 0xd;
      *(IBinding **)(unaff_EBP + -0x88) = param_6;
      param_5 = (int *)0x46e9bc;
      (**(code **)(*(int *)param_6 + 4))();
      piVar3 = *(int **)p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 0x72;
      if (piVar3 == unaff_EBX) {
        param_5 = (int *)0x80004003;
        param_4 = 0x46e9ce;
        FUN_00878dfb();
      }
      param_3 = *(undefined4 *)(unaff_EBP + -0x8c);
      piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      iVar2 = *piVar3;
      param_4 = *(int *)(unaff_EBP + -0x88);
      *(int **)(unaff_EBP + 0x20) = piVar3;
      param_5 = *(int **)(unaff_EBP + -0x84);
      iVar2 = (**(code **)(iVar2 + 100))();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      puVar4 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x18);
      *(undefined4 **)(unaff_EBP + 0x18) = puVar4;
      if (piVar3 == unaff_EBX) {
        FUN_00878dfb();
      }
      iVar2 = (**(code **)(*(int *)*puVar4 + 0xe0))();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      iVar2 = *(int *)(unaff_EBP + -0x18);
      if (*(int **)(iVar2 + 0x10) == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar3 = (int *)*puVar4;
      *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(iVar2 + 0x10);
      if (piVar3 == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar3 = (int *)*puVar4;
      FUN_004320e3();
      iVar2 = (**(code **)(*piVar3 + 0xb4))();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878e09(iVar2);
      }
      *(int **)(unaff_EBP + 0x24) = unaff_EBX;
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      *(int **)(unaff_EBP + 0x20) = unaff_EBX;
      while( true ) {
        if (*(int **)(unaff_EBP + -0x70) == unaff_EBX) {
          FUN_00878dfb();
        }
        uVar8 = FUN_0040cf4d();
        if (uVar8 <= *(uint *)(unaff_EBP + 0x20)) break;
        FUN_0087a1b0();
        FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x30) = &stack0xfffffff0;
        FUN_00402e8e();
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x76;
        iVar2 = FUN_0041a485();
        if ((iVar2 < (int)unaff_EBX) && (iVar2 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        if (*(int **)(unaff_EBP + -0xb8) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0xb8) + 8))();
        }
        *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffffec;
        FUN_00679e4e(&stack0xffffffec,0x474);
        iVar2 = unaff_EBP + -0xc0;
        *(undefined1 *)(unaff_EBP + -4) = 0x77;
        FUN_004115d9(iVar2);
        FUN_00404e7f(iVar2);
        iVar2 = unaff_EBP + -0x120;
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0x7a;
        uVar5 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0xcc) = uVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x120);
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        if (*(int **)(unaff_EBP + -0xc0) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0xc0) + 8))();
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
        iVar2 = FUN_00402e32();
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        iVar2 = FUN_00402e32();
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
        iVar2 = FUN_00402e32();
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
        iVar2 = FUN_00402e32();
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        FUN_004031b7();
        piVar3 = (int *)**(undefined4 **)(unaff_EBP + 0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        if (piVar3 == unaff_EBX) {
          FUN_00878dfb();
        }
        FUN_004250ac(unaff_EBP + -0x134,*(undefined4 *)(unaff_EBP + 0x24),unaff_EBP + -0x68,
                     unaff_EBP + -0x90,unaff_EBP + -0xe0);
        iVar2 = FUN_00402bc3();
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        iVar2 = FUN_00402bc3();
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        iVar2 = FUN_00402bc3();
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        iVar2 = FUN_00402bc3();
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        iVar2 = FUN_00402bc3();
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        iVar2 = FUN_00402bc3();
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        iVar2 = FUN_00402bc3();
        if (iVar2 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
      iVar2 = FUN_00402e32();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x80;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      iVar2 = FUN_00402e32();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      piVar3 = (int *)**(undefined4 **)(unaff_EBP + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x81;
      if (piVar3 == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + 0x20) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x110))
                        (piVar3,0x20,*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x58),
                         *(undefined4 *)(unaff_EBP + -0x54));
      if (iVar2 < (int)unaff_EBX) {
        param_6 = (IBinding *)&DAT_00963df8;
        param_5 = *(int **)(unaff_EBP + 0x20);
        param_3 = 0x46ee0b;
        param_4 = iVar2;
        FUN_00878e09();
      }
      param_6 = (IBinding *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x80;
      param_5 = (int *)0x46ee18;
      param_6 = (IBinding *)FUN_00402bc3();
      if ((int)param_6 < (int)unaff_EBX) {
        param_5 = (int *)0x46ee23;
        FUN_00878dfb();
      }
      param_6 = (IBinding *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      param_5 = (int *)0x46ee30;
      param_6 = (IBinding *)FUN_00402bc3();
      if ((int)param_6 < (int)unaff_EBX) {
        param_5 = (int *)0x46ee3b;
        FUN_00878dfb();
      }
      param_6 = *(IBinding **)(unaff_EBP + 0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      if (param_6 != (IBinding *)unaff_EBX) {
        param_5 = (int *)0x46ee4c;
        (**(code **)(*(int *)param_6 + 8))();
      }
    }
    param_6 = *(IBinding **)(unaff_EBP + 0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    if (param_6 != (IBinding *)unaff_EBX) {
      param_5 = (int *)0x46ee5d;
      (**(code **)(*(int *)param_6 + 8))();
    }
    param_6 = *(IBinding **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (param_6 != (IBinding *)unaff_EBX) {
      param_5 = (int *)0x46ee6e;
      (**(code **)(*(int *)param_6 + 8))();
    }
  }
  param_5 = (int *)(unaff_EBP + -0x80);
  param_6 = (IBinding *)0x1;
  param_4 = 0x46ee79;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  if (*(int **)(unaff_EBP + 0xc) == unaff_EBX) {
    param_5 = (int *)0x0;
  }
  else {
    param_5 = (int *)**(int **)(unaff_EBP + 0xc);
  }
  param_6 = (IBinding *)0xffffffff;
  *(int **)(unaff_EBP + -0x48) = unaff_EBX;
  param_4 = 0x46ee9a;
  FUN_004184ca();
  *(int **)(*(int *)(unaff_EBP + -0x18) + 0x58) = unaff_EBX;
  param_6 = (IBinding *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  param_5 = (int *)0x46eeb0;
  VariantInit((VARIANTARG *)param_6);
  param_5 = (int *)(unaff_EBP + -0x2c);
  param_6 = (IBinding *)&DAT_00980690;
  param_4 = 0x46eebf;
  param_6 = (IBinding *)FUN_00402e32();
  if ((int)param_6 < (int)unaff_EBX) {
    param_5 = (int *)0x46eecb;
    FUN_00878dfb();
  }
  param_6 = (IBinding *)(unaff_EBP + -0x2c);
  param_5 = (int *)0x64;
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  param_4 = 0x46eedd;
  param_3 = FUN_00411641();
  *(undefined1 **)(unaff_EBP + 0x20) = &stack0x00000010;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  param_3 = 0x46eef5;
  FUN_0044974c();
  param_3 = 0x46eefc;
  uVar5 = FUN_0047077a();
  *(undefined4 *)(unaff_EBP + 0x20) = uVar5;
  param_6 = (IBinding *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  param_5 = (int *)0x46ef0c;
  param_6 = (IBinding *)FUN_00402bc3();
  if ((int)param_6 < (int)unaff_EBX) {
    param_5 = (int *)0x46ef17;
    FUN_00878dfb();
  }
  param_6 = *(IBinding **)(unaff_EBP + 0x20);
  param_5 = (int *)(unaff_EBP + -0xf4);
  param_4 = 0x46ef29;
  FUN_0046fcad();
  param_6 = (IBinding *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  param_5 = (int *)0x46ef33;
  VariantInit((VARIANTARG *)param_6);
  param_5 = (int *)(unaff_EBP + -0x2c);
  param_6 = (IBinding *)&DAT_00980690;
  param_4 = 0x46ef3d;
  param_6 = (IBinding *)FUN_00402e32();
  if ((int)param_6 < (int)unaff_EBX) {
    param_5 = (int *)0x46ef49;
    FUN_00878dfb();
  }
  param_6 = (IBinding *)0x3;
  param_5 = (int *)0xff;
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  param_4 = 0x46ef5f;
  FUN_004031b7();
  param_6 = (IBinding *)(unaff_EBP + -0x2c);
  param_5 = (int *)(unaff_EBP + -0xf0);
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  param_4 = 0x46ef76;
  param_4 = FUN_00449749();
  param_3 = 0x46ef82;
  FUN_00411641();
  *(undefined1 **)(unaff_EBP + 0x18) = &stack0x0000000c;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + -0x44) + 8;
  FUN_004115d9();
  FUN_00448e3a();
  param_6 = (IBinding *)(unaff_EBP + -0xf0);
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  param_5 = (int *)0x46efc2;
  param_6 = (IBinding *)FUN_00402bc3();
  if ((int)param_6 < (int)unaff_EBX) {
    param_5 = (int *)0x46efcd;
    FUN_00878dfb();
  }
  param_6 = (IBinding *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  param_5 = (int *)0x46efda;
  param_6 = (IBinding *)FUN_00402bc3();
  if ((int)param_6 < (int)unaff_EBX) {
    param_5 = (int *)0x46efe5;
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + -0x48) == unaff_EBX) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)(*(int **)(unaff_EBP + -0x48))[-1] >> 1;
  }
  if (*(int *)(unaff_EBP + 0x20) < (int)uVar8) {
    param_6 = (IBinding *)0xffffffff;
    param_5 = *(int **)(unaff_EBP + 0x20);
    param_4 = unaff_EBP + 0x20;
    param_3 = 0x46f00f;
    param_6 = (IBinding *)FUN_0046fc90();
    *(undefined1 *)(unaff_EBP + -4) = 0x8a;
    param_5 = (int *)0x46f01c;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    param_6 = (IBinding *)0x46f028;
    FUN_00402676();
    param_6 = (IBinding *)0x64;
    param_4 = unaff_EBP + -0x80;
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0x00000014;
    param_3 = 0x46f039;
    FUN_0046fcc9();
    param_4 = unaff_EBP + -0x48;
    param_3 = 0x46f042;
    uVar5 = FUN_007d381d();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x58) = uVar5;
    param_6 = (IBinding *)(unaff_EBP + -0x2c);
    param_5 = (int *)0x46f051;
    VariantInit((VARIANTARG *)param_6);
    param_5 = (int *)(unaff_EBP + -0x2c);
    param_6 = (IBinding *)&DAT_00980690;
    param_4 = 0x46f05b;
    param_6 = (IBinding *)FUN_00402e32();
    if ((int)param_6 < (int)unaff_EBX) {
      param_5 = (int *)0x46f067;
      FUN_00878dfb();
    }
    param_6 = (IBinding *)0x3;
    param_5 = (int *)0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    param_4 = 0x46f07d;
    FUN_004031b7();
    param_6 = (IBinding *)(unaff_EBP + -0x2c);
    param_5 = (int *)(unaff_EBP + -0xf0);
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    param_4 = 0x46f094;
    param_4 = FUN_00449749();
    param_3 = 0x46f09d;
    FUN_00411641();
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0x0000000c;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    FUN_004115d9();
    FUN_00448e3a();
    param_6 = (IBinding *)(unaff_EBP + -0xf0);
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    param_5 = (int *)0x46f0d6;
    param_6 = (IBinding *)FUN_00402bc3();
    if ((int)param_6 < (int)unaff_EBX) {
      param_5 = (int *)0x46f0e1;
      FUN_00878dfb();
    }
    param_6 = (IBinding *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    param_5 = (int *)0x46f0ee;
    param_6 = (IBinding *)FUN_00402bc3();
    if ((int)param_6 < (int)unaff_EBX) {
      param_5 = (int *)0x46f0f9;
      FUN_00878dfb();
    }
  }
  if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
    param_6 = (IBinding *)0x80004003;
    param_5 = (int *)0x46f108;
    FUN_00878dfb();
  }
  param_6 = (IBinding *)0x46f110;
  iVar6 = FUN_0040e48b();
  piVar3 = *(int **)(unaff_EBP + -0x1c);
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar2 + 0x48) = iVar6 / -2;
  if (piVar3 == unaff_EBX) {
    param_6 = (IBinding *)0x80004003;
    param_5 = (int *)0x46f12b;
    FUN_00878dfb();
  }
  param_6 = (IBinding *)0x46f133;
  iVar7 = FUN_0040e53d();
  param_6 = *(IBinding **)(unaff_EBP + 0x10);
  iVar6 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar2 + 0x4c) = -iVar7;
  if (((iVar6 == 4) && ((int)unaff_EBX < *(int *)(unaff_EBP + 0x1c))) ||
     (*(int *)(unaff_EBP + 8) == 5)) {
    *(int *)(iVar2 + 0x4c) = -iVar7 + 7 + (int)param_6;
  }
  param_5 = (int *)0x46f15b;
  FUN_0046f8b1();
  *(undefined4 *)(iVar2 + 0x54) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  param_6 = (IBinding *)0x46f171;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  param_6 = (IBinding *)0x46f17d;
  FUN_00402676();
  param_6 = *(IBinding **)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f18e;
    (**(code **)(*(int *)param_6 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  param_6 = (IBinding *)0x46f19d;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  param_6 = (IBinding *)0x46f1ac;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  param_6 = (IBinding *)0x46f1b8;
  FUN_00414ebb();
  param_6 = *(IBinding **)(unaff_EBP + -0xbc);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f1cc;
    (**(code **)(*(int *)param_6 + 8))();
  }
  param_6 = *(IBinding **)(unaff_EBP + -0xc4);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f1e0;
    (**(code **)(*(int *)param_6 + 8))();
  }
  param_6 = *(IBinding **)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f1f1;
    (**(code **)(*(int *)param_6 + 8))();
  }
  param_6 = *(IBinding **)(unaff_EBP + -200);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f205;
    (**(code **)(*(int *)param_6 + 8))();
  }
  param_6 = *(IBinding **)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f219;
    (**(code **)(*(int *)param_6 + 8))();
  }
  param_6 = *(IBinding **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f22a;
    (**(code **)(*(int *)param_6 + 8))();
  }
  param_6 = *(IBinding **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f23b;
    (**(code **)(*(int *)param_6 + 8))();
  }
  param_6 = *(IBinding **)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f24c;
    (**(code **)(*(int *)param_6 + 8))();
  }
  param_6 = *(IBinding **)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f25d;
    (**(code **)(*(int *)param_6 + 8))();
  }
  param_6 = *(IBinding **)(unaff_EBP + -0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f271;
    (**(code **)(*(int *)param_6 + 8))();
  }
  param_6 = *(IBinding **)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (param_6 != (IBinding *)unaff_EBX) {
    param_5 = (int *)0x46f282;
    (**(code **)(*(int *)param_6 + 8))();
  }
  if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
    param_6 = (IBinding *)0x46f28e;
    FUN_004030b1();
  }
  param_6 = (IBinding *)0x46f296;
  FUN_004115a0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


