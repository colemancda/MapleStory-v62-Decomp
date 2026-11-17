/* FUN_0079b1fe - 0x0079b1fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0079b1fe(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_68;
  undefined *puStack_64;
  int *piStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  uVar4 = *(uint *)(unaff_EBP + 8) & 2;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(uint *)(unaff_EBP + -0x2c) = uVar4;
  iVar6 = extraout_ECX;
  if ((uVar4 != 0) && (*(int *)(extraout_ECX + 0x179c) == 0)) {
    puVar5 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    uVar8 = puVar5[1];
    *(undefined4 *)(unaff_EBP + -0x34) = *puVar5;
    *(undefined4 *)(unaff_EBP + -0x30) = uVar8;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_54 = unaff_EBP + -0x24;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_58 = 0x79b260;
    puVar5 = (undefined4 *)FUN_00679d86();
    iStack_58 = *puVar5;
    iStack_54 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_5c = 0x79b271;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_54 = 0x79b287;
      FUN_00403384();
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iStack_54 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_58 = 0x79b29f;
    puVar5 = (undefined4 *)FUN_00679d86();
    iStack_58 = *puVar5;
    iStack_54 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_5c = 0x79b2b0;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_54 = 0x79b2c7;
      FUN_00403384();
    }
    iStack_54 = 0x79b2d3;
    puVar5 = (undefined4 *)FUN_00486ada();
    iStack_54 = *puVar5;
    iStack_58 = 0x79b2e0;
    FUN_0040ee87();
    piStack_60 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (piStack_60 == (int *)0x0) {
      iStack_54 = 0x79b2f5;
      FUN_00878dfb();
      piStack_60 = *(int **)(unaff_EBP + -0x1c);
    }
    iVar6 = *piStack_60;
    iStack_5c = *(int *)(unaff_EBP + -0x4c);
    iStack_58 = *(int *)(unaff_EBP + -0x48);
    iStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
    *(int **)(unaff_EBP + -0x24) = piStack_60;
    puStack_64 = (undefined *)0x79b30d;
    iVar6 = (**(code **)(iVar6 + 100))();
    if (iVar6 < 0) {
      puStack_64 = &DAT_00963de8;
      iStack_68 = *(int *)(unaff_EBP + -0x24);
      FUN_00878e09();
    }
    puStack_64 = (undefined *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_68 = 0x79b32c;
    puStack_64 = (undefined *)FUN_00402bc3();
    if ((int)puStack_64 < 0) {
      iStack_68 = 0x79b337;
      FUN_00878dfb();
    }
    puStack_64 = (undefined *)0x79b33f;
    FUN_004125d9();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    puStack_64 = (undefined *)0x3b1;
    iStack_68 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00679d86();
    puStack_64 = (undefined *)0x0;
    iStack_68 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      puStack_64 = (undefined *)(*(int *)(unaff_EBP + -0x28) + -0xc);
      iStack_68 = 0x79b381;
      FUN_00403384();
    }
    puStack_64 = (undefined *)(unaff_EBP + -0x24);
    iStack_68 = 0x79b38e;
    piVar7 = (int *)FUN_00486ada();
    iStack_68 = *piVar7;
    puStack_64 = (undefined *)0x1;
    FUN_0040ee87();
    piVar7 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (piVar7 == (int *)0x0) {
      puStack_64 = (undefined *)0x80004003;
      iStack_68 = 0x79b3b0;
      FUN_00878dfb();
      piVar7 = *(int **)(unaff_EBP + -0x18);
    }
    iVar6 = *piVar7;
    iStack_68 = *(int *)(unaff_EBP + -0x44);
    *(int **)(unaff_EBP + -0x28) = piVar7;
    puStack_64 = *(undefined **)(unaff_EBP + -0x40);
    iVar6 = (**(code **)(iVar6 + 100))();
    if (iVar6 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004125d9();
    (**(code **)(*(int *)(*(int *)(unaff_EBP + 0xc) + 4) + 0x10))();
    puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00878dfb();
      puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -0x28) = *puVar5;
    *(undefined4 **)(unaff_EBP + -0x24) = puVar5;
    iVar6 = (**(code **)(*(int *)(unaff_EBP + -0x28) + 0x40))();
    if (iVar6 < 0) {
      FUN_00878e09();
    }
    piVar7 = *(int **)(unaff_EBP + -0x10);
    if (piVar7 == (int *)0x0) {
      FUN_00878dfb();
      piVar7 = *(int **)(unaff_EBP + -0x10);
    }
    iVar6 = *piVar7;
    *(int **)(unaff_EBP + -0x28) = piVar7;
    iVar6 = (**(code **)(iVar6 + 0x98))();
    if (iVar6 < 0) {
      FUN_00878e09();
    }
    piVar7 = *(int **)(unaff_EBP + -0x10);
    if (piVar7 == (int *)0x0) {
      FUN_00878dfb();
      piVar7 = *(int **)(unaff_EBP + -0x10);
    }
    iVar6 = *piVar7;
    *(int **)(unaff_EBP + -0x28) = piVar7;
    iStack_bc = (**(code **)(iVar6 + 0x98))();
    if (iStack_bc < 0) {
      iStack_b8 = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_c0 = 0x79b4d4;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    iStack_b8 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_bc = 0x79b4ee;
    puVar5 = (undefined4 *)FUN_00679d86();
    iStack_b8 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_bc = unaff_EBP + -0x20;
    iStack_c0 = 0x79b501;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar6 = extraout_ECX_00;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      iVar6 = *(int *)(unaff_EBP + -0x28) + -0xc;
      iStack_b8 = 0x79b518;
      FUN_00403384();
    }
    iStack_b8 = 0xff;
    iStack_bc = 0xc00614a4;
    *(int **)(unaff_EBP + -0x24) = &iStack_c0;
    uStack_c4 = 0;
    uStack_c8 = 0x79b530;
    iStack_c0 = iVar6;
    FUN_00424e0a();
    uStack_c4 = 0;
    uStack_c8 = 0;
    *(undefined4 **)(unaff_EBP + -0x30) = &uStack_cc;
    FUN_00433bdf(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    uVar8 = FUN_00411641(0);
    puVar5 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x28,uVar8);
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (*(int *)(unaff_EBP + -0x14) + 0x179c);
    iStack_b8 = 0x79b56d;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
    FUN_00412600();
    iStack_b8 = 0x79b583;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_b8 = 0x79b590;
    FUN_00403191();
    iVar6 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (iVar6 == 0) {
      iStack_b8 = 0x79b5a2;
      FUN_00878dfb();
    }
    piVar7 = *(int **)p_Var1;
    iStack_c0 = *(int *)(unaff_EBP + -0x3c);
    iStack_bc = *(undefined4 *)(unaff_EBP + -0x38);
    iVar6 = *piVar7;
    iStack_b8 = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_cc = *(undefined4 *)(unaff_EBP + -0x48);
    uStack_c8 = *(undefined4 *)(unaff_EBP + -0x44);
    *(int **)(unaff_EBP + -0x28) = piVar7;
    uStack_c4 = *(undefined4 *)(unaff_EBP + -0x40);
    iVar6 = (**(code **)(iVar6 + 0x110))(piVar7,0x20,*(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar6 < 0) {
      iStack_54 = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_5c = 0x79b5dc;
      iStack_58 = iVar6;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_54 = 0x79b5e9;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_54 = 0x79b5f4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_54 = 0x79b601;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_54 = 0x79b60c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_54 = 0x79b620;
      FUN_00403384();
    }
    FUN_004125d9();
    FUN_004125d9();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004125d9();
    iVar6 = *(int *)(unaff_EBP + -0x14);
  }
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    iStack_54 = 0x79b651;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar6 + 0x179c),(IBinding *)0x0);
  }
  uVar4 = *(uint *)(unaff_EBP + 8) & 1;
  *(uint *)(unaff_EBP + -0x28) = uVar4;
  if (uVar4 != 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    iStack_54 = unaff_EBP + -0x2c;
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    iStack_58 = 0x79b67d;
    puVar5 = (undefined4 *)FUN_00679d86();
    iStack_54 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_58 = unaff_EBP + 8;
    iStack_5c = 0x79b690;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar9 = extraout_ECX_01;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      iVar9 = *(int *)(unaff_EBP + -0x2c) + -0xc;
      iStack_54 = 0x79b6a7;
      FUN_00403384();
    }
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar6 + 0x17a0);
    if (*(int *)(iVar6 + 0x17a0) == 0) {
      iStack_54 = 0xff;
      iStack_58 = 3;
      piStack_60 = (int *)(iVar6 + 0xd3c);
      *(int **)(unaff_EBP + -0x30) = &iStack_5c;
      puStack_64 = (undefined *)0x79b6d4;
      iStack_5c = iVar9;
      FUN_0041160e();
      piStack_60 = (int *)0x0;
      puStack_64 = (undefined *)0x0;
      *(int **)(unaff_EBP + -0x2c) = &iStack_68;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00486ada();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_0043f900();
      FUN_00411641();
      puVar5 = (undefined4 *)FUN_0042e3f0();
      iStack_54 = 0x79b718;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
      FUN_00412600();
      iStack_54 = 0x79b72e;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_54 = 0x79b73b;
      FUN_00403191();
      iVar6 = *(int *)p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (iVar6 == 0) {
        iStack_54 = 0x79b74d;
        FUN_00878dfb();
      }
      iStack_5c = *(int *)(unaff_EBP + -0x3c);
      iStack_58 = *(int *)(unaff_EBP + -0x38);
      iVar6 = **(int **)p_Var1;
      iStack_54 = *(undefined4 *)(unaff_EBP + -0x34);
      iStack_68 = *(int *)(unaff_EBP + -0x48);
      puStack_64 = *(undefined **)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + 0x10) = *(int **)p_Var1;
      piStack_60 = *(int **)(unaff_EBP + -0x40);
      iVar6 = (**(code **)(iVar6 + 0x110))();
      if (iVar6 < 0) {
        iStack_54 = *(undefined4 *)(unaff_EBP + 0x10);
        iStack_5c = 0x79b787;
        iStack_58 = iVar6;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_54 = 0x79b794;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_54 = 0x79b79f;
        FUN_00878dfb();
      }
      iVar9 = unaff_EBP + -0x3c;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_54 = 0x79b7ac;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_54 = 0x79b7b7;
        FUN_00878dfb();
        iVar9 = extraout_ECX_02;
      }
      iVar6 = *(int *)(unaff_EBP + -0x14);
    }
    iVar2 = *(int *)(unaff_EBP + 0xc);
    iVar3 = *(int *)(iVar2 + 0x17a0);
    *(int *)(unaff_EBP + 0x10) = iVar2 + 0x17a0;
    if (iVar3 == 0) {
      iStack_54 = 0xff;
      iStack_58 = 3;
      piStack_60 = (int *)(iVar2 + 0xd3c);
      *(int **)(unaff_EBP + -0x30) = &iStack_5c;
      puStack_64 = (undefined *)0x79b7ec;
      iStack_5c = iVar9;
      FUN_0041160e();
      piStack_60 = (int *)0x0;
      puStack_64 = (undefined *)0x0;
      *(int **)(unaff_EBP + -0x24) = &iStack_68;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_00486ada();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_0043f900();
      FUN_00411641();
      puVar5 = (undefined4 *)FUN_0042e3f0();
      iStack_54 = 0x79b831;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 0x10),
                 (IBinding *)*puVar5);
      if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
        iStack_54 = 0x79b83e;
        (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      }
      iStack_54 = 0x79b84a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      iStack_54 = unaff_EBP + -0x4c;
      iStack_58 = 0x79b859;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        iStack_54 = 0x79b865;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_54 = 0x79b86f;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      iStack_54 = unaff_EBP + -0x3c;
      iStack_58 = 0x79b879;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        iStack_54 = 0x79b885;
        FUN_00878dfb();
      }
      piVar7 = *(int **)(unaff_EBP + 0x10);
      iVar6 = *piVar7;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (iVar6 == 0) {
        iStack_54 = 0x79b89a;
        FUN_00878dfb();
      }
      piVar7 = (int *)*piVar7;
      iStack_5c = *(int *)(unaff_EBP + -0x4c);
      iStack_58 = *(int *)(unaff_EBP + -0x48);
      iVar6 = *piVar7;
      iStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
      iStack_68 = *(int *)(unaff_EBP + -0x38);
      puStack_64 = *(undefined **)(unaff_EBP + -0x34);
      *(int **)(unaff_EBP + 0x10) = piVar7;
      piStack_60 = *(int **)(unaff_EBP + -0x30);
      iVar6 = (**(code **)(iVar6 + 0x110))();
      if (iVar6 < 0) {
        iStack_54 = *(undefined4 *)(unaff_EBP + 0x10);
        iStack_5c = 0x79b8d4;
        iStack_58 = iVar6;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_54 = 0x79b8e1;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_54 = 0x79b8ec;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_54 = 0x79b8f9;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_54 = 0x79b904;
        FUN_00878dfb();
      }
      iVar6 = *(int *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    iStack_54 = 0x79b92c;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar6 + 0x17a0),(IBinding *)0x0);
    iStack_54 = 0x79b938;
    FUN_0051548c();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


