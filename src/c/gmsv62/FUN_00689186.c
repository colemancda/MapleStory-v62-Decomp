/* FUN_00689186 - 0x00689186 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00689186(void)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_b0;
  undefined *puStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 *puStack_80;
  int *piStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  iStack_5c = 0x6891aa;
  FUN_00486ada();
  FUN_004125d9();
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = FUN_0042452b();
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_5c = unaff_EBP + -0x18;
  iStack_60 = 0x6891e4;
  iVar5 = FUN_0068a1b0();
  if (iVar5 == 0) {
    FUN_0068a11b();
    **(uint **)(unaff_EBP + -0x30) = uVar3 & 0xff;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 8) = *(undefined4 *)(unaff_EBP + -0x18);
    iVar5 = *(int *)(unaff_EBP + -0x30);
    sVar2 = FUN_00424561();
    *(int *)(iVar5 + 0xc) = (int)sVar2;
    iVar5 = *(int *)(unaff_EBP + -0x30);
    sVar2 = FUN_00424561();
    *(int *)(iVar5 + 0x10) = (int)sVar2;
    iStack_5c = unaff_EBP + -0x1c;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iStack_60 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) + -5;
    uStack_64 = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0xc);
    uStack_68 = 0x6896b1;
    iVar5 = FUN_00861327();
    *(int *)(unaff_EBP + 8) = iVar5;
    if (iVar5 == 0) {
      iStack_5c = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0xc);
      iStack_60 = 0x6896cc;
      uVar4 = FUN_00861416();
      *(undefined4 *)(unaff_EBP + 8) = uVar4;
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x10);
    }
    if (**(int **)(unaff_EBP + -0x30) == 0) {
      iStack_5c = 0xff;
      iStack_60 = 0x6896f1;
      iVar5 = FUN_004f0b6f();
      iStack_60 = iVar5 * 30000 + -0x3fffb1df;
      *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_64;
      uStack_68 = 0;
      uStack_6c = 0x689709;
      FUN_00424e0a();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      uStack_68 = 0x689715;
      iVar5 = FUN_0068a0e8();
      uStack_68 = *(undefined4 *)(iVar5 + 0x10);
      uStack_6c = 0x689720;
      iVar5 = FUN_0068a0e8();
      uStack_6c = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_70;
      uStack_74 = 0;
      iStack_78 = 0x68972f;
      FUN_00424dd7();
      uStack_74 = 0xa63;
      iStack_78 = unaff_EBP + -0x24;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_7c = (int *)0x689746;
      FUN_00679d86();
      uStack_74 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_78 = 0x689752;
      iStack_78 = FUN_00411641();
      piStack_7c = (int *)(unaff_EBP + 8);
      puStack_80 = (undefined4 *)0x68975c;
      puVar6 = (undefined4 *)FUN_0042e3f0();
      iStack_5c = 0x68976c;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x30) + 0x14),(IBinding *)*puVar6);
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        iStack_5c = 0x689779;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      iVar5 = *(int *)(unaff_EBP + -0x30);
      uVar4 = (*DAT_0097b704)();
      *(undefined4 *)(iVar5 + 0x1c) = uVar4;
      iStack_5c = 0x68979c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
      iStack_5c = unaff_EBP + -0x54;
      iStack_60 = 0x6897ab;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        iStack_5c = 0x6897b7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_5c = 0x6897c1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      iStack_5c = unaff_EBP + -0x44;
      iStack_60 = 0x6897cb;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        iStack_5c = 0x6897d7;
        FUN_00878dfb();
      }
      iVar5 = *(int *)(unaff_EBP + -0x30);
      iVar1 = *(int *)(iVar5 + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (iVar1 == 0) {
        iStack_5c = 0x6897f0;
        FUN_00878dfb();
      }
      piStack_7c = *(int **)(iVar5 + 0x14);
      uStack_64 = *(undefined4 *)(unaff_EBP + -0x54);
      iStack_60 = *(undefined4 *)(unaff_EBP + -0x50);
      iVar5 = *piStack_7c;
      iStack_5c = *(undefined4 *)(unaff_EBP + -0x4c);
      uStack_74 = *(undefined4 *)(unaff_EBP + -0x44);
      uStack_70 = *(undefined4 *)(unaff_EBP + -0x40);
      uStack_6c = *(undefined4 *)(unaff_EBP + -0x3c);
      iStack_78 = 0;
      *(int **)(unaff_EBP + 8) = piStack_7c;
      uStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
      puStack_80 = (undefined4 *)0x689817;
      iVar5 = (**(code **)(iVar5 + 0x110))();
      if (iVar5 < 0) {
        puStack_ac = &DAT_00963df8;
        iStack_b0 = *(int *)(unaff_EBP + 8);
        FUN_00878e09(iVar5);
      }
      puStack_ac = (undefined *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_b0 = 0x689836;
      puStack_ac = (undefined *)FUN_00402bc3();
      if ((int)puStack_ac < 0) {
        iStack_b0 = 0x689841;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_ac = (undefined *)(unaff_EBP + -0x54);
    }
    else {
      iStack_5c = 0xff;
      iStack_60 = 0x68985a;
      iVar5 = FUN_004f0b6f();
      iStack_60 = iVar5 * 30000 + -0x3fffb1df;
      *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_64;
      uStack_68 = 0;
      uStack_6c = 0x689872;
      FUN_00424e0a();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      uStack_68 = 0x68987e;
      iVar5 = FUN_0068a0e8();
      uStack_68 = *(undefined4 *)(iVar5 + 0x10);
      uStack_6c = 0x689889;
      iVar5 = FUN_0068a0e8();
      uStack_6c = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_70;
      uStack_74 = 0;
      iStack_78 = 0x689898;
      FUN_00424dd7();
      uStack_74 = 0xa61;
      iStack_78 = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_7c = (int *)0x6898b1;
      FUN_00679d86();
      uStack_74 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_78 = 0x6898bd;
      iStack_78 = FUN_00411641();
      piStack_7c = (int *)(unaff_EBP + -0x20);
      puStack_80 = (undefined4 *)0x6898c7;
      piVar7 = (int *)FUN_0042e3f0();
      iVar5 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0x14);
      iVar1 = *piVar7;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      *(int *)(unaff_EBP + -0x24) = iVar5;
      if (iVar5 != iVar1) {
        *(int *)(*(int *)(unaff_EBP + -0x30) + 0x14) = iVar1;
        FUN_00424ed4();
        if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
          iStack_5c = 0x6898f4;
          (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        iStack_5c = 0x689905;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      iStack_5c = 0xff;
      iStack_60 = 0x68991a;
      iVar5 = FUN_004f0b6f();
      iStack_60 = iVar5 * 30000 + -0x3fffb1e0;
      *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_64;
      uStack_68 = 0;
      uStack_6c = 0x689932;
      FUN_00424e0a();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      uStack_68 = 0x68993e;
      iVar5 = FUN_0068a0e8();
      uStack_68 = *(undefined4 *)(iVar5 + 0x10);
      uStack_6c = 0x689949;
      iVar5 = FUN_0068a0e8();
      uStack_6c = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_70;
      uStack_74 = 0;
      iStack_78 = 0x689958;
      FUN_00424dd7();
      uStack_74 = 0xa62;
      iStack_78 = unaff_EBP + -0x24;
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      piStack_7c = (int *)0x68996c;
      FUN_00679d86();
      uStack_74 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_78 = 0x689978;
      iStack_78 = FUN_00411641();
      piStack_7c = (int *)(unaff_EBP + 8);
      puStack_80 = (undefined4 *)0x689982;
      puVar6 = (undefined4 *)FUN_0042e3f0();
      iStack_5c = 0x689992;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x30) + 0x18),(IBinding *)*puVar6);
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        iStack_5c = 0x68999f;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      iStack_5c = 0x6899b6;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      iStack_5c = unaff_EBP + -0x44;
      iStack_60 = 0x6899c5;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        iStack_5c = 0x6899d1;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iStack_5c = 0x6899db;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
      iStack_5c = unaff_EBP + -0x54;
      iStack_60 = 0x6899e5;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        iStack_5c = 0x6899f1;
        FUN_00878dfb();
      }
      iVar5 = *(int *)(unaff_EBP + -0x30);
      iVar1 = *(int *)(iVar5 + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      if (iVar1 == 0) {
        iStack_5c = 0x689a0a;
        FUN_00878dfb();
      }
      piStack_7c = *(int **)(iVar5 + 0x14);
      uStack_64 = *(undefined4 *)(unaff_EBP + -0x44);
      iStack_60 = *(undefined4 *)(unaff_EBP + -0x40);
      iVar5 = *piStack_7c;
      iStack_5c = *(undefined4 *)(unaff_EBP + -0x3c);
      uStack_74 = *(undefined4 *)(unaff_EBP + -0x54);
      uStack_70 = *(undefined4 *)(unaff_EBP + -0x50);
      uStack_6c = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_78 = 0x20;
      *(int **)(unaff_EBP + 8) = piStack_7c;
      uStack_68 = *(undefined4 *)(unaff_EBP + -0x48);
      puStack_80 = (undefined4 *)0x689a32;
      iVar5 = (**(code **)(iVar5 + 0x110))();
      if (iVar5 < 0) {
        puStack_ac = &DAT_00963df8;
        iStack_b0 = *(int *)(unaff_EBP + 8);
        FUN_00878e09(iVar5);
      }
      puStack_ac = (undefined *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iStack_b0 = 0x689a51;
      puStack_ac = (undefined *)FUN_00402bc3();
      if ((int)puStack_ac < 0) {
        iStack_b0 = 0x689a5c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_ac = (undefined *)(unaff_EBP + -0x44);
    }
    iStack_b0 = 0x689a68;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_b0 = 0x689a73;
      puStack_ac = (undefined *)iVar5;
      FUN_00878dfb();
      puStack_ac = (undefined *)extraout_ECX_00;
    }
    *(int **)(unaff_EBP + 8) = &iStack_b0;
    iStack_b0 = (int)puStack_ac;
    puStack_ac = (undefined *)*(undefined4 *)(unaff_EBP + -0x30);
    FUN_0068a14e();
    FUN_00689ab0();
  }
  else {
    iStack_5c = unaff_EBP + -0x14;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_60 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) + -5;
    uStack_64 = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0xc);
    uStack_68 = 0x689210;
    iVar5 = FUN_00861327();
    *(int *)(unaff_EBP + -0x10) = iVar5;
    piVar7 = *(int **)(unaff_EBP + -0x30);
    if (iVar5 == 0) {
      iStack_5c = piVar7[3];
      iStack_60 = 0x68922b;
      uVar4 = FUN_00861416();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
      piVar7 = *(int **)(unaff_EBP + -0x30);
      *(int *)(unaff_EBP + -0x14) = piVar7[4];
    }
    if (*piVar7 == 0) {
      iStack_5c = 0xff;
      iStack_60 = 0x68924e;
      iVar5 = FUN_004f0b6f();
      iStack_60 = iVar5 * 30000 + -0x3fffb1df;
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_64;
      uStack_68 = 0;
      uStack_6c = 0x689266;
      FUN_00424e0a();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_68 = 0x689272;
      iVar5 = FUN_0068a0e8();
      uStack_68 = *(undefined4 *)(iVar5 + 0x10);
      uStack_6c = 0x68927d;
      iVar5 = FUN_0068a0e8();
      uStack_6c = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_70;
      uStack_74 = 0;
      iStack_78 = 0x68928c;
      FUN_00424dd7();
      uStack_74 = 0xa61;
      iStack_78 = unaff_EBP + -0x24;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_7c = (int *)0x6892a5;
      FUN_00679d86();
      uStack_74 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_78 = 0x6892b1;
      iStack_78 = FUN_00411641();
      piStack_7c = (int *)(unaff_EBP + -0x20);
      puStack_80 = (undefined4 *)0x6892bb;
      puVar6 = (undefined4 *)FUN_0042e3f0();
      iStack_5c = 0x6892cb;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x30) + 0x14),(IBinding *)*puVar6);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        iStack_5c = 0x6892e6;
        FUN_00403384();
      }
      iStack_5c = 0xff;
      iStack_60 = 0x6892f1;
      iVar5 = FUN_004f0b6f();
      iStack_60 = iVar5 * 30000 + -0x3fffb1e0;
      *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_64;
      uStack_68 = 0;
      uStack_6c = 0x689309;
      FUN_00424e0a();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_68 = 0x689315;
      iVar5 = FUN_0068a0e8();
      uStack_68 = *(undefined4 *)(iVar5 + 0x10);
      uStack_6c = 0x689320;
      iVar5 = FUN_0068a0e8();
      uStack_6c = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_70;
      uStack_74 = 0;
      iStack_78 = 0x68932f;
      FUN_00424dd7();
      uStack_74 = 0xa62;
      iStack_78 = unaff_EBP + -0x20;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_7c = (int *)0x689343;
      FUN_00679d86();
      uStack_74 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_78 = 0x68934f;
      iStack_78 = FUN_00411641();
      piStack_7c = (int *)(unaff_EBP + -0x24);
      puStack_80 = (undefined4 *)0x689359;
      puVar6 = (undefined4 *)FUN_0042e3f0();
      iStack_5c = 0x689369;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x30) + 0x18),(IBinding *)*puVar6);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        iStack_5c = 0x689384;
        FUN_00403384();
      }
      iStack_5c = 0x689393;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_5c = 0x6893a0;
      FUN_00403191();
      iVar5 = *(int *)(unaff_EBP + -0x30);
      iVar1 = *(int *)(iVar5 + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (iVar1 == 0) {
        iStack_5c = 0x6893b9;
        FUN_00878dfb();
      }
      piStack_7c = *(int **)(iVar5 + 0x14);
      uStack_64 = *(undefined4 *)(unaff_EBP + -0x44);
      iStack_60 = *(undefined4 *)(unaff_EBP + -0x40);
      iVar5 = *piStack_7c;
      iStack_5c = *(undefined4 *)(unaff_EBP + -0x3c);
      uStack_74 = *(undefined4 *)(unaff_EBP + -0x54);
      uStack_70 = *(undefined4 *)(unaff_EBP + -0x50);
      uStack_6c = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_78 = 0x20;
      *(int **)(unaff_EBP + -0x24) = piStack_7c;
      uStack_68 = *(undefined4 *)(unaff_EBP + -0x48);
      puStack_80 = (undefined4 *)0x6893e1;
      iVar5 = (**(code **)(iVar5 + 0x110))();
      if (iVar5 < 0) {
        puStack_80 = (undefined4 *)&DAT_00963df8;
        uStack_84 = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_8c = 0x6893f3;
        iStack_88 = iVar5;
        FUN_00878e09();
      }
      puStack_80 = (undefined4 *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      uStack_84 = 0x689400;
      puStack_80 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_80 < 0) {
        uStack_84 = 0x68940b;
        FUN_00878dfb();
      }
      puStack_80 = (undefined4 *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_84 = 0x689417;
      puStack_80 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_80 < 0) {
        uStack_84 = 0x689422;
        FUN_00878dfb();
      }
      **(undefined4 **)(unaff_EBP + -0x30) = 1;
    }
    else {
      iStack_5c = 0x689438;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar7 + 6),(IBinding *)0x0);
      iStack_5c = 0xff;
      iStack_60 = 0x689446;
      iVar5 = FUN_004f0b6f();
      iStack_60 = iVar5 * 30000 + -0x3fffb1df;
      *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_64;
      uStack_68 = 0;
      uStack_6c = 0x68945e;
      FUN_00424e0a();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_68 = 0x68946a;
      iVar5 = FUN_0068a0e8();
      uStack_68 = *(undefined4 *)(iVar5 + 0x10);
      uStack_6c = 0x689475;
      iVar5 = FUN_0068a0e8();
      uStack_6c = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_70;
      uStack_74 = 0;
      iStack_78 = 0x689484;
      FUN_00424dd7();
      uStack_74 = 0xa63;
      iStack_78 = unaff_EBP + -0x20;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_7c = (int *)0x68949b;
      FUN_00679d86();
      uStack_74 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_78 = 0x6894a7;
      iStack_78 = FUN_00411641();
      piStack_7c = (int *)(unaff_EBP + -0x24);
      puStack_80 = (undefined4 *)0x6894b1;
      puVar6 = (undefined4 *)FUN_0042e3f0();
      iStack_5c = 0x6894c1;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x30) + 0x14),(IBinding *)*puVar6);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      iVar5 = *(int *)(unaff_EBP + -0x30);
      uVar4 = (*DAT_0097b704)();
      *(undefined4 *)(iVar5 + 0x1c) = uVar4;
      iStack_5c = 0x6894ee;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_5c = 0x6894fb;
      FUN_00403191();
      iVar5 = *(int *)(unaff_EBP + -0x30);
      iVar1 = *(int *)(iVar5 + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (iVar1 == 0) {
        iStack_5c = 0x689514;
        FUN_00878dfb();
      }
      piStack_7c = *(int **)(iVar5 + 0x14);
      uStack_64 = *(undefined4 *)(unaff_EBP + -0x44);
      iStack_60 = *(undefined4 *)(unaff_EBP + -0x40);
      iVar5 = *piStack_7c;
      iStack_5c = *(undefined4 *)(unaff_EBP + -0x3c);
      uStack_74 = *(undefined4 *)(unaff_EBP + -0x54);
      uStack_70 = *(undefined4 *)(unaff_EBP + -0x50);
      uStack_6c = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_78 = 0;
      *(int **)(unaff_EBP + -0x24) = piStack_7c;
      uStack_68 = *(undefined4 *)(unaff_EBP + -0x48);
      puStack_80 = (undefined4 *)0x68953b;
      iVar5 = (**(code **)(iVar5 + 0x110))();
      if (iVar5 < 0) {
        puStack_80 = (undefined4 *)&DAT_00963df8;
        uStack_84 = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_8c = 0x68954d;
        iStack_88 = iVar5;
        FUN_00878e09();
      }
      puStack_80 = (undefined4 *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      uStack_84 = 0x68955a;
      puStack_80 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_80 < 0) {
        uStack_84 = 0x689565;
        FUN_00878dfb();
      }
      puStack_80 = (undefined4 *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_84 = 0x689571;
      puStack_80 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_80 < 0) {
        uStack_84 = 0x68957c;
        FUN_00878dfb();
      }
    }
    iVar5 = *(int *)(unaff_EBP + -0x30);
    puStack_80 = (undefined4 *)0x689587;
    sVar2 = FUN_00424561();
    *(int *)(iVar5 + 0xc) = (int)sVar2;
    iVar5 = *(int *)(unaff_EBP + -0x30);
    puStack_80 = (undefined4 *)0x689598;
    sVar2 = FUN_00424561();
    *(int *)(iVar5 + 0x10) = (int)sVar2;
    puStack_80 = &DAT_00980690;
    uStack_84 = 0x6895ac;
    FUN_00403191();
    puStack_80 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uStack_84 = 0x6895b9;
    FUN_00403191();
    iVar5 = *(int *)(unaff_EBP + -0x30);
    iVar1 = *(int *)(iVar5 + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    *(int *)(unaff_EBP + 8) = iVar5;
    if (iVar1 == 0) {
      puStack_80 = (undefined4 *)0x80004003;
      uStack_84 = 0x6895d7;
      FUN_00878dfb();
    }
    piStack_a8 = *(int **)(iVar5 + 0x14);
    uStack_a0 = *(undefined4 *)(iVar5 + 0x10);
    uStack_8c = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_88 = *(int *)(unaff_EBP + -0x40);
    uStack_84 = *(undefined4 *)(unaff_EBP + -0x3c);
    puStack_80 = *(undefined4 **)(unaff_EBP + -0x38);
    uStack_9c = *(undefined4 *)(unaff_EBP + -0x54);
    uStack_98 = *(undefined4 *)(unaff_EBP + -0x50);
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0xc);
    uStack_a4 = *(undefined4 *)(unaff_EBP + 8);
    iVar5 = *piStack_a8;
    uStack_94 = *(undefined4 *)(unaff_EBP + -0x4c);
    *(int **)(unaff_EBP + -0x24) = piStack_a8;
    uStack_90 = *(undefined4 *)(unaff_EBP + -0x48);
    puStack_ac = (undefined *)0x68960d;
    iVar5 = (**(code **)(iVar5 + 0x90))();
    if (iVar5 < 0) {
      puStack_ac = &DAT_00963de8;
      iStack_b0 = *(int *)(unaff_EBP + -0x24);
      FUN_00878e09(iVar5);
    }
    puStack_ac = (undefined *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_b0 = 0x68962c;
    puStack_ac = (undefined *)FUN_00402bc3();
    if ((int)puStack_ac < 0) {
      iStack_b0 = 0x689637;
      FUN_00878dfb();
    }
    puStack_ac = (undefined *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_b0 = 0x689643;
    puStack_ac = (undefined *)FUN_00402bc3();
    if ((int)puStack_ac < 0) {
      iStack_b0 = 0x689652;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_ac = (undefined *)0x0;
    iStack_b0 = 0x689a9f;
    FUN_0068a181();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


