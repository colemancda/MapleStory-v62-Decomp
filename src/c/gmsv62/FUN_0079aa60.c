/* FUN_0079aa60 - 0x0079aa60 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0079aa60(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
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
  iVar6 = *(int *)(extraout_ECX + 0x524);
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  if (iVar6 == 0) {
    iStack_54 = 0x79aa8f;
    iVar3 = FUN_0079ba1a();
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    iVar6 = extraout_ECX;
    if ((*(byte *)(unaff_EBP + 8) & 2) == 0) {
      iStack_54 = 0x79aaa1;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x14),(IBinding *)0x0);
    }
    else if (*(int *)(iVar3 + 0x14) == 0) {
      puVar5 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      uVar2 = puVar5[1];
      *(undefined4 *)(unaff_EBP + -0x34) = *puVar5;
      *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iStack_54 = unaff_EBP + -0x28;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_58 = 0x79aade;
      puVar5 = (undefined4 *)FUN_00679d86();
      iStack_58 = *puVar5;
      iStack_54 = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_5c = 0x79aaef;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        iStack_54 = 0x79ab05;
        FUN_00403384();
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iStack_54 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_58 = 0x79ab19;
      puVar5 = (undefined4 *)FUN_00679d86();
      iStack_58 = *puVar5;
      iStack_54 = unaff_EBP + -0x18;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_5c = 0x79ab2a;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        iStack_54 = 0x79ab41;
        FUN_00403384();
      }
      iStack_54 = 0x79ab4e;
      puVar5 = (undefined4 *)FUN_00486ada();
      iStack_54 = *puVar5;
      iStack_58 = 0x79ab5b;
      FUN_0040ee87();
      piStack_60 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piStack_60 == (int *)0x0) {
        iStack_54 = 0x79ab70;
        FUN_00878dfb();
        piStack_60 = *(int **)(unaff_EBP + -0x18);
      }
      iVar6 = *piStack_60;
      iStack_5c = *(int *)(unaff_EBP + -0x4c);
      iStack_58 = *(int *)(unaff_EBP + -0x48);
      iStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + -0x28) = piStack_60;
      puStack_64 = (undefined *)0x79ab88;
      iVar6 = (**(code **)(iVar6 + 100))();
      if (iVar6 < 0) {
        puStack_64 = &DAT_00963de8;
        iStack_68 = *(int *)(unaff_EBP + -0x28);
        FUN_00878e09();
      }
      puStack_64 = (undefined *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_68 = 0x79aba7;
      puStack_64 = (undefined *)FUN_00402bc3();
      if ((int)puStack_64 < 0) {
        iStack_68 = 0x79abb2;
        FUN_00878dfb();
      }
      puStack_64 = (undefined *)0x79abba;
      FUN_004125d9();
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      puStack_64 = (undefined *)0x3b1;
      iStack_68 = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00679d86();
      puStack_64 = (undefined *)0x0;
      iStack_68 = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        puStack_64 = (undefined *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
        iStack_68 = 0x79abfc;
        FUN_00403384();
      }
      puStack_64 = (undefined *)(unaff_EBP + -0x28);
      iStack_68 = 0x79ac09;
      piVar4 = (int *)FUN_00486ada();
      iStack_68 = *piVar4;
      puStack_64 = (undefined *)0x1;
      FUN_0040ee87();
      piVar4 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar4 == (int *)0x0) {
        puStack_64 = (undefined *)0x80004003;
        iStack_68 = 0x79ac2b;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x14);
      }
      iVar6 = *piVar4;
      iStack_68 = *(int *)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + -0x2c) = piVar4;
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
      *(undefined4 *)(unaff_EBP + -0x2c) = *puVar5;
      *(undefined4 **)(unaff_EBP + -0x28) = puVar5;
      iVar6 = (**(code **)(*(int *)(unaff_EBP + -0x2c) + 0x40))();
      if (iVar6 < 0) {
        FUN_00878e09();
      }
      piVar4 = *(int **)(unaff_EBP + -0x10);
      if (piVar4 == (int *)0x0) {
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iVar6 = *piVar4;
      *(int **)(unaff_EBP + -0x2c) = piVar4;
      iVar6 = (**(code **)(iVar6 + 0x98))();
      if (iVar6 < 0) {
        FUN_00878e09();
      }
      piVar4 = *(int **)(unaff_EBP + -0x10);
      if (piVar4 == (int *)0x0) {
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iVar6 = *piVar4;
      *(int **)(unaff_EBP + -0x2c) = piVar4;
      iStack_bc = (**(code **)(iVar6 + 0x98))();
      if (iStack_bc < 0) {
        iStack_b8 = *(undefined4 *)(unaff_EBP + -0x2c);
        iStack_c0 = 0x79ad4f;
        FUN_00878e09();
      }
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      iStack_b8 = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_bc = 0x79ad69;
      puVar5 = (undefined4 *)FUN_00679d86();
      iStack_b8 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_bc = unaff_EBP + -0x20;
      iStack_c0 = 0x79ad7c;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar6 = extraout_ECX_00;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        iVar6 = *(int *)(unaff_EBP + -0x2c) + -0xc;
        iStack_b8 = 0x79ad93;
        FUN_00403384();
      }
      iStack_b8 = 0xff;
      iStack_bc = 0xc00614a4;
      *(int **)(unaff_EBP + -0x28) = &iStack_c0;
      uStack_c4 = 0;
      uStack_c8 = 0x79adab;
      iStack_c0 = iVar6;
      FUN_00424e0a();
      uStack_c4 = 0;
      uStack_c8 = 0;
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_cc;
      FUN_00433bdf(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      uVar2 = FUN_00411641(0);
      puVar5 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x2c,uVar2);
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x1c) + 0x14);
      iStack_b8 = 0x79ade5;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
      FUN_00412600();
      iStack_b8 = 0x79adfb;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_b8 = 0x79ae08;
      FUN_00403191();
      iVar6 = *(int *)p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (iVar6 == 0) {
        iStack_b8 = 0x79ae1a;
        FUN_00878dfb();
      }
      piVar4 = *(int **)p_Var1;
      iStack_c0 = *(int *)(unaff_EBP + -0x3c);
      iStack_bc = *(undefined4 *)(unaff_EBP + -0x38);
      iVar6 = *piVar4;
      iStack_b8 = *(undefined4 *)(unaff_EBP + -0x34);
      uStack_cc = *(undefined4 *)(unaff_EBP + -0x48);
      uStack_c8 = *(undefined4 *)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + -0x2c) = piVar4;
      uStack_c4 = *(undefined4 *)(unaff_EBP + -0x40);
      iVar6 = (**(code **)(iVar6 + 0x110))(piVar4,0x20,*(undefined4 *)(unaff_EBP + -0x4c));
      if (iVar6 < 0) {
        iStack_54 = *(undefined4 *)(unaff_EBP + -0x2c);
        iStack_5c = 0x79ae54;
        iStack_58 = iVar6;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_54 = 0x79ae61;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_54 = 0x79ae6c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_54 = 0x79ae79;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_54 = 0x79ae84;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        iStack_54 = 0x79ae98;
        FUN_00403384();
      }
      FUN_004125d9();
      FUN_004125d9();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      iVar6 = *(int *)(unaff_EBP + -0x24);
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x18;
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x1c) + 0x14)
    ;
    iStack_54 = 0x79aecc;
    iVar3 = FUN_0079b949();
    *(int *)(unaff_EBP + -0x20) = iVar3;
    *(int *)(unaff_EBP + -0x2c) = iVar3 + 0x14;
    if ((*(byte *)(unaff_EBP + 8) & 1) == 0) {
      iStack_54 = 0x79b1e1;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)0x0);
      iStack_54 = 0x79b1ea;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x2c),
                 (IBinding *)0x0);
    }
    else {
      if (*(int *)p_Var1 == 0) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        iStack_54 = unaff_EBP + -0x2c;
        *(undefined4 *)(unaff_EBP + -4) = 0x10;
        iStack_58 = 0x79af04;
        puVar5 = (undefined4 *)FUN_00679d86();
        iStack_54 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_58 = unaff_EBP + 8;
        iStack_5c = 0x79af17;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iVar3 = extraout_ECX_01;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          iVar3 = *(int *)(unaff_EBP + -0x2c) + -0xc;
          iStack_54 = 0x79af2e;
          FUN_00403384();
        }
        iStack_54 = 0xff;
        iStack_58 = 3;
        piStack_60 = (int *)(iVar6 + 0xd3c);
        *(int **)(unaff_EBP + -0x30) = &iStack_5c;
        puStack_64 = (undefined *)0x79af49;
        iStack_5c = iVar3;
        FUN_0041160e();
        piStack_60 = (int *)0x0;
        puStack_64 = (undefined *)0x0;
        *(int **)(unaff_EBP + -0x28) = &iStack_68;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_00486ada();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        FUN_0043f900();
        FUN_00411641();
        puVar5 = (undefined4 *)FUN_0042e3f0();
        iStack_54 = 0x79af8d;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
        if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
          iStack_54 = 0x79af9a;
          (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
        }
        iStack_54 = 0x79afa8;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iStack_54 = 0x79afb5;
        FUN_00403191();
        iVar6 = *(int *)p_Var1;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (iVar6 == 0) {
          iStack_54 = 0x79afc7;
          FUN_00878dfb();
        }
        iStack_5c = *(int *)(unaff_EBP + -0x3c);
        iStack_58 = *(int *)(unaff_EBP + -0x38);
        iVar6 = **(int **)p_Var1;
        iStack_54 = *(undefined4 *)(unaff_EBP + -0x34);
        iStack_68 = *(int *)(unaff_EBP + -0x48);
        puStack_64 = *(undefined **)(unaff_EBP + -0x44);
        *(int **)(unaff_EBP + -0x2c) = *(int **)p_Var1;
        piStack_60 = *(int **)(unaff_EBP + -0x40);
        iVar6 = (**(code **)(iVar6 + 0x110))();
        if (iVar6 < 0) {
          iStack_54 = *(undefined4 *)(unaff_EBP + -0x2c);
          iStack_5c = 0x79b001;
          iStack_58 = iVar6;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iStack_54 = 0x79b00e;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          iStack_54 = 0x79b019;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_54 = 0x79b026;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          iStack_54 = 0x79b031;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0xc) = 0;
        FUN_00402676();
        iVar3 = *(int *)(unaff_EBP + -0x20);
      }
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x14);
      if (*(int *)(iVar3 + 0x14) == 0) {
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        iStack_54 = unaff_EBP + 8;
        *(undefined4 *)(unaff_EBP + -4) = 0x16;
        iStack_58 = 0x79b06f;
        puVar5 = (undefined4 *)FUN_00679d86();
        iStack_54 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        iStack_58 = unaff_EBP + -0x24;
        iStack_5c = 0x79b082;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_00402676();
        iStack_54 = 0xff;
        iStack_58 = 3;
        piStack_60 = (int *)(*(int *)(unaff_EBP + 0xc) + 0xd3c);
        *(int **)(unaff_EBP + 0x10) = &iStack_5c;
        puStack_64 = (undefined *)0x79b0ae;
        FUN_0041160e();
        piStack_60 = (int *)0x0;
        puStack_64 = (undefined *)0x0;
        *(int **)(unaff_EBP + 8) = &iStack_68;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        FUN_00486ada();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_0043f900();
        FUN_00411641();
        puVar5 = (undefined4 *)FUN_0042e3f0();
        iStack_54 = 0x79b0f2;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
        if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
          iStack_54 = 0x79b0ff;
          (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
        }
        iStack_54 = 0x79b10b;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
        iStack_54 = unaff_EBP + -0x4c;
        iStack_58 = 0x79b119;
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          iStack_54 = 0x79b125;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        iStack_54 = 0x79b12f;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
        iStack_54 = unaff_EBP + -0x3c;
        iStack_58 = 0x79b13d;
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          iStack_54 = 0x79b149;
          FUN_00878dfb();
        }
        iVar6 = *(int *)p_Var1;
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        if (iVar6 == 0) {
          iStack_54 = 0x79b15b;
          FUN_00878dfb();
        }
        iStack_5c = *(int *)(unaff_EBP + -0x4c);
        iStack_58 = *(int *)(unaff_EBP + -0x48);
        iVar6 = **(int **)p_Var1;
        iStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
        iStack_68 = *(int *)(unaff_EBP + -0x38);
        puStack_64 = *(undefined **)(unaff_EBP + -0x34);
        *(int **)(unaff_EBP + 0xc) = *(int **)p_Var1;
        piStack_60 = *(int **)(unaff_EBP + -0x30);
        iVar6 = (**(code **)(iVar6 + 0x110))();
        if (iVar6 < 0) {
          iStack_54 = *(undefined4 *)(unaff_EBP + 0xc);
          iStack_5c = 0x79b195;
          iStack_58 = iVar6;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        iStack_54 = 0x79b1a2;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          iStack_54 = 0x79b1ad;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iStack_54 = 0x79b1ba;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          iStack_54 = 0x79b1c5;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0xc) = 0;
        FUN_00402676();
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


