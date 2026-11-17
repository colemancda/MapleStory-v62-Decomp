/* FUN_005b7d41 - 0x005b7d41 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b7d41(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar5;
  bool bVar6;
  int iStack_e8;
  int iStack_e4;
  undefined4 *puStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 *puStack_c8;
  int *piStack_c4;
  undefined *puStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined *puStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  if ((-1 < iVar2) && (iVar2 < *(int *)(extraout_ECX + 0x744))) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(int *)(unaff_EBP + -0x18) = iVar2 * 4;
    iVar4 = *(int *)(extraout_ECX + 0x204);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_9c = 0x5b7d8c;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar2 * 4 + iVar4),
               (IBinding *)0x0);
    iStack_9c = 0x5b7d9a;
    FUN_00403191();
    iStack_9c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_a0 = 0x5b7da9;
    FUN_004031b7();
    bVar6 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (bVar6) {
      iStack_9c = 0x5b7dbf;
      FUN_00878dfb();
    }
    iStack_9c = unaff_EBP + -0x44;
    uStack_a0 = 4;
    uStack_a4 = 0;
    piStack_a8 = (int *)0x0;
    puStack_ac = (undefined *)0x0;
    uStack_b0 = 0;
    iStack_b4 = unaff_EBP + -0x14;
    uStack_b8 = 0x5b7ddc;
    puVar1 = (undefined4 *)FUN_0042a39f();
    iStack_9c = 0x5b7dec;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x18) + *(int *)(extraout_ECX + 0x204)),(IBinding *)*puVar1);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_9c = 0x5b7e01;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_9c = 0x5b7e0c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_9c = 0x5b7e19;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_9c = 0x5b7e24;
      FUN_00878dfb();
    }
    iStack_9c = 0x5b7e2f;
    puVar1 = (undefined4 *)FUN_004489f5();
    iStack_9c = *puVar1;
    uStack_a0 = 0x5b7e3c;
    FUN_0040ee87();
    piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + *(int *)(extraout_ECX + 0x204));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*piVar5 == 0) {
      iStack_9c = 0x5b7e58;
      FUN_00878dfb();
    }
    piStack_a8 = (int *)*piVar5;
    iVar2 = *piStack_a8;
    uStack_a4 = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_a0 = *(undefined4 *)(unaff_EBP + -0x30);
    iStack_9c = *(undefined4 *)(unaff_EBP + -0x2c);
    *(int **)(unaff_EBP + -0x14) = piStack_a8;
    puStack_ac = (undefined *)0x5b7e6f;
    iVar2 = (**(code **)(iVar2 + 100))();
    if (iVar2 < 0) {
      puStack_ac = &DAT_00963de8;
      uStack_b0 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_b8 = 0x5b7e81;
      iStack_b4 = iVar2;
      FUN_00878e09();
    }
    puStack_ac = (undefined *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_b0 = 0x5b7e8e;
    puStack_ac = (undefined *)FUN_00402bc3();
    if ((int)puStack_ac < 0) {
      uStack_b0 = 0x5b7e99;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_ac = (undefined *)0x5b7ea5;
    FUN_00412600();
    iVar2 = *(int *)(unaff_EBP + -0x24);
    puStack_ac = (undefined *)(unaff_EBP + -0x14);
    uStack_b0 = 0x5b7eb3;
    puVar1 = (undefined4 *)FUN_004489f5();
    uStack_b0 = *puVar1;
    puStack_ac = (undefined *)0x1;
    iStack_b4 = 0x5b7ec0;
    FUN_0040ee87();
    piStack_bc = (int *)(*(int *)(unaff_EBP + -0x18) + *(int *)(iVar2 + 0x204));
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*piStack_bc == 0) {
      puStack_ac = (undefined *)0x80004003;
      uStack_b0 = 0x5b7edc;
      FUN_00878dfb();
    }
    piStack_bc = (int *)*piStack_bc;
    iVar2 = *piStack_bc;
    uStack_b8 = *(undefined4 *)(unaff_EBP + -0x34);
    iStack_b4 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_b0 = *(undefined4 *)(unaff_EBP + -0x2c);
    *(int **)(unaff_EBP + -0x10) = piStack_bc;
    puStack_ac = *(undefined **)(unaff_EBP + -0x28);
    puStack_c0 = (undefined *)0x5b7ef6;
    iVar2 = (**(code **)(iVar2 + 0xfc))();
    if (iVar2 < 0) {
      puStack_c0 = &DAT_00963df8;
      piStack_c4 = *(int **)(unaff_EBP + -0x10);
      iStack_cc = 0x5b7f08;
      puStack_c8 = (undefined4 *)iVar2;
      FUN_00878e09();
    }
    puStack_c0 = (undefined *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_c4 = (int *)0x5b7f15;
    puStack_c0 = (undefined *)FUN_00402bc3();
    if ((int)puStack_c0 < 0) {
      piStack_c4 = (int *)0x5b7f20;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_c0 = (undefined *)0x5b7f2c;
    FUN_00412600();
    iVar2 = *(int *)(unaff_EBP + -0x24);
    piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + *(int *)(iVar2 + 0x204));
    if (*piVar5 == 0) {
      puStack_c0 = (undefined *)0x80004003;
      piStack_c4 = (int *)0x5b7f47;
      FUN_00878dfb();
    }
    piStack_c4 = (int *)*piVar5;
    iVar4 = *piStack_c4;
    puStack_c0 = (undefined *)0xffffffff;
    *(int **)(unaff_EBP + -0x10) = piStack_c4;
    puStack_c8 = (undefined4 *)0x5b7f57;
    iStack_d0 = (**(code **)(iVar4 + 0xe0))();
    if (iStack_d0 < 0) {
      puStack_c8 = (undefined4 *)&DAT_00963df8;
      iStack_cc = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_d4 = 0x5b7f6b;
      FUN_00878e09();
    }
    puStack_c8 = (undefined4 *)0x3bc;
    iStack_cc = unaff_EBP + -0x10;
    iStack_d0 = 0x5b7f7e;
    puVar1 = (undefined4 *)FUN_00679d22();
    puStack_c8 = *(undefined4 **)(*(int *)(iVar2 + 0x200) + *(int *)(unaff_EBP + -0x18));
    iStack_cc = *puVar1;
    iStack_d0 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_d4 = 0x5b7f9a;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      puStack_c8 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
      iStack_cc = 0x5b7fb1;
      FUN_00434e38();
    }
    puStack_c8 = &DAT_00980690;
    iStack_cc = 0x5b7fbb;
    FUN_00403191();
    puStack_c8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_cc = 0x5b7fc8;
    FUN_00403191();
    puStack_c8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_cc = 0x5b7fd5;
    FUN_00403191();
    puStack_c8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_cc = 0x5b7fe2;
    FUN_00403191();
    puStack_c8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_cc = 0x5b7fef;
    FUN_00403191();
    puStack_c8 = (undefined4 *)0x0;
    iStack_cc = 0;
    iStack_d0 = 0xffffffff;
    uStack_d4 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_d8 = 0;
    uStack_dc = 0;
    puStack_e0 = (undefined4 *)0x5b8002;
    (*DAT_0097b4c8)();
    puStack_e0 = (undefined4 *)0x5b800f;
    FUN_0087a1b0();
    puStack_e0 = (undefined4 *)0x0;
    iStack_e4 = 0;
    iStack_e8 = -1;
    uVar3 = FUN_00449713(&uStack_dc);
    uVar3 = FUN_00456ad5(uVar3);
    *(int **)(unaff_EBP + -0x20) = &iStack_e8;
    FUN_004033a1(uVar3);
    iVar4 = unaff_EBP + -0x94;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0040263d(iVar4);
    FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_e8 = 0x5b8059;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x10) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar4 != 0) {
      puStack_e0 = (undefined4 *)(unaff_EBP + -0x10);
      iStack_e4 = 0x5b806f;
      puStack_e0 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_e0 < 0) && (puStack_e0 != (undefined4 *)0x80004002)) {
        iStack_e4 = 0x5b8080;
        FUN_00878dfb();
      }
    }
    iVar4 = *(int *)(*(int *)(unaff_EBP + -0x18) + *(int *)(iVar2 + 0x204));
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
    if (iVar4 == 0) {
      puStack_e0 = (undefined4 *)0x80004003;
      iStack_e4 = 0x5b80a2;
      FUN_00878dfb();
    }
    puStack_e0 = (undefined4 *)(unaff_EBP + -0x54);
    iStack_e4 = unaff_EBP + -100;
    iStack_e8 = unaff_EBP + -0x74;
    FUN_004250ac(unaff_EBP + -0x84,*(undefined4 *)(unaff_EBP + -0x20),unaff_EBP + -0x34,
                 unaff_EBP + -0x44);
    puStack_e0 = (undefined4 *)(unaff_EBP + -0x84);
    iStack_e4 = 0x5b80d5;
    puStack_e0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_e0 < 0) {
      iStack_e4 = 0x5b80e0;
      FUN_00878dfb();
    }
    puStack_e0 = (undefined4 *)0x5b80e8;
    FUN_004125e6();
    puStack_e0 = (undefined4 *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_e4 = 0x5b80f8;
    puStack_e0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_e0 < 0) {
      iStack_e4 = 0x5b8103;
      FUN_00878dfb();
    }
    puStack_e0 = (undefined4 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_e4 = 0x5b8110;
    puStack_e0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_e0 < 0) {
      iStack_e4 = 0x5b811b;
      FUN_00878dfb();
    }
    puStack_e0 = (undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_e4 = 0x5b8128;
    puStack_e0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_e0 < 0) {
      iStack_e4 = 0x5b8133;
      FUN_00878dfb();
    }
    puStack_e0 = (undefined4 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_e4 = 0x5b8140;
    puStack_e0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_e0 < 0) {
      iStack_e4 = 0x5b814b;
      FUN_00878dfb();
    }
    puStack_e0 = (undefined4 *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_e4 = 0x5b8158;
    puStack_e0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_e0 < 0) {
      iStack_e4 = 0x5b8163;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_e0 = (undefined4 *)(unaff_EBP + -0x54);
    iStack_e4 = 0x5b8170;
    puStack_e0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_e0 < 0) {
      iStack_e4 = 0x5b817b;
      FUN_00878dfb();
    }
    puStack_e0 = &DAT_00980690;
    iStack_e4 = 0x5b8184;
    FUN_00403191();
    puStack_e0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_e4 = 0x5b8191;
    FUN_00403191();
    iVar2 = *(int *)(iVar2 + 0x204);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(*(int *)(unaff_EBP + -0x18) + iVar2) == 0) {
      puStack_e0 = (undefined4 *)0x80004003;
      iStack_e4 = 0x5b81ad;
      FUN_00878dfb();
    }
    puStack_e0 = (undefined4 *)(unaff_EBP + -0x10);
    iStack_e4 = 0x5b81ba;
    piVar5 = (int *)FUN_0042bc90();
    iVar2 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (iVar2 == 0) {
      puStack_e0 = (undefined4 *)0x80004003;
      iStack_e4 = 0x5b81cf;
      FUN_00878dfb();
    }
    piVar5 = (int *)*piVar5;
    iStack_e8 = *(int *)(unaff_EBP + -0x60);
    iVar2 = *piVar5;
    iStack_e4 = *(undefined4 *)(unaff_EBP + -0x5c);
    puStack_e0 = *(undefined4 **)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x20) = piVar5;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar5,0xffffffcf,0x3e,*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -100));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iVar2 = FUN_00402e32(unaff_EBP + -0x44,&DAT_00980690);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_00403191(&DAT_00980690);
    iVar2 = *(int *)(unaff_EBP + -0x24);
    piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + *(int *)(iVar2 + 0x204));
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*piVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = (int *)*piVar5;
    iVar2 = (**(code **)(*piVar5 + 0x90))
                      (piVar5,(*(int *)(unaff_EBP + 8) % *(int *)(iVar2 + 0x7dc)) * 0x38 + 0x31 +
                              *(int *)(iVar2 + 0x7e0),
                       (*(int *)(unaff_EBP + 8) / *(int *)(iVar2 + 0x7dc)) * 0x43 +
                       *(int *)(iVar2 + 0x7e4),*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar5,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x1c) + -0xc);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


