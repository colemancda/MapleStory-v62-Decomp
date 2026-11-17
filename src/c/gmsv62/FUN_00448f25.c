/* FUN_00448f25 - 0x00448f25 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448f25(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_100;
  undefined4 *puStack_fc;
  int *piStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 *puStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 *puStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *puStack_78;
  
  FUN_00879bb8();
  puStack_78 = (undefined4 *)0xe1;
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  uStack_7c = 0x448f42;
  uVar1 = FUN_0087a90a();
  puStack_78 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  uStack_7c = 0x448f54;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_78 = &DAT_00980690;
  uStack_7c = 0x448f61;
  FUN_00403191();
  puStack_78 = (undefined4 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_7c = 0x448f71;
  piStack_a0 = (int *)FUN_004489f5();
  iVar2 = *piStack_a0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    puStack_78 = (undefined4 *)0x80004003;
    uStack_7c = 0x448f86;
    FUN_00878dfb();
  }
  piStack_a0 = (int *)*piStack_a0;
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x50);
  iVar2 = *piStack_a0;
  uStack_7c = *(undefined4 *)(unaff_EBP + -0x4c);
  puStack_78 = *(undefined4 **)(unaff_EBP + -0x48);
  uStack_94 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_90 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_98 = 0;
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_9c = 800;
  *(int **)(unaff_EBP + -0x14) = piStack_a0;
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_a4 = (undefined4 *)0x448fb3;
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    puStack_a4 = (undefined4 *)&DAT_00963de8;
    iStack_a8 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_b0 = 0x448fc5;
    iStack_ac = iVar2;
    FUN_00878e09();
  }
  puStack_a4 = (undefined4 *)0x448fcd;
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x44);
  iStack_a8 = 0x448fda;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    iStack_a8 = 0x448fe5;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x54);
  iStack_a8 = 0x448ff2;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    iStack_a8 = 0x448ffd;
    FUN_00878dfb();
  }
  puStack_a4 = &DAT_00980690;
  iStack_a8 = 0x449006;
  FUN_00403191();
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  iStack_a8 = 0x449018;
  piVar3 = (int *)FUN_004489f5();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    puStack_a4 = (undefined4 *)0x80004003;
    iStack_a8 = 0x44902d;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)0x449034;
  iStack_a8 = FUN_0042a378();
  iStack_a8 = iStack_a8 + *(int *)(unaff_EBP + -0x1c);
  puStack_a4 = (undefined4 *)0x3;
  iStack_ac = 0x449041;
  FUN_004031b7();
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a8 = 0x449051;
  piStack_cc = (int *)FUN_004489f5();
  iVar2 = *piStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    puStack_a4 = (undefined4 *)0x80004003;
    iStack_a8 = 0x449066;
    FUN_00878dfb();
  }
  piStack_cc = (int *)*piStack_cc;
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_ac = *(undefined4 *)(unaff_EBP + -0x40);
  iVar2 = *piStack_cc;
  iStack_a8 = *(undefined4 *)(unaff_EBP + -0x3c);
  puStack_a4 = *(undefined4 **)(unaff_EBP + -0x38);
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_bc = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_c4 = 0;
  uStack_b8 = *(undefined4 *)(unaff_EBP + -0x4c);
  uStack_c8 = 0x23f;
  *(int **)(unaff_EBP + -0x20) = piStack_cc;
  uStack_b4 = *(undefined4 *)(unaff_EBP + -0x48);
  puStack_d0 = (undefined4 *)0x449093;
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    puStack_d0 = (undefined4 *)&DAT_00963de8;
    uStack_d8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x20),iVar2);
    uStack_dc = 0x4490a5;
    FUN_00878e09();
  }
  puStack_d0 = (undefined4 *)0x4490ad;
  FUN_00412600();
  puStack_d0 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_d8 = (double)CONCAT44(0x4490ba,(undefined4)uStack_d8);
  puStack_d0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d0 < 0) {
    uStack_d8 = (double)CONCAT44(0x4490c5,(undefined4)uStack_d8);
    FUN_00878dfb();
  }
  puStack_d0 = (undefined4 *)0x4490cd;
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_d0 = (undefined4 *)(unaff_EBP + -0x44);
  uStack_d8 = (double)CONCAT44(0x4490da,(undefined4)uStack_d8);
  puStack_d0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d0 < 0) {
    uStack_d8 = (double)CONCAT44(0x4490e5,(undefined4)uStack_d8);
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(double *)(unaff_EBP + -0x34) = (double)*(int *)(unaff_EBP + -0x1c);
  do {
    puStack_d0 = &DAT_00980690;
    uStack_d8 = (double)CONCAT44(0x4490fb,(undefined4)uStack_d8);
    FUN_00403191();
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + -4) = 7;
    uStack_d8 = (double)CONCAT44(0x44910e,(undefined4)uStack_d8);
    piVar3 = (int *)FUN_004489f5();
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 == 0) {
      puStack_d0 = (undefined4 *)0x80004003;
      uStack_d8 = (double)CONCAT44(0x449123,(undefined4)uStack_d8);
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)0x44912a;
    iVar2 = FUN_0042a378();
    puStack_d0 = (undefined4 *)0x5;
    *(int *)(unaff_EBP + -0x24) = iVar2 + *(int *)(unaff_EBP + -0x1c);
    uStack_d8 = (double)*(int *)(unaff_EBP + -0x14) * *(double *)(unaff_EBP + -0x34) * _DAT_008e8d80
                + (double)*(int *)(unaff_EBP + -0x24);
    uStack_dc = 0x449150;
    FUN_00449446();
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_d8 = (double)CONCAT44(0x449160,(undefined4)uStack_d8);
    piVar3 = (int *)FUN_004489f5();
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar2 == 0) {
      puStack_d0 = (undefined4 *)0x80004003;
      uStack_d8 = (double)CONCAT44(0x449175,(undefined4)uStack_d8);
      FUN_00878dfb();
    }
    piStack_f8 = (int *)*piVar3;
    uStack_dc = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_d8 = *(double *)(unaff_EBP + -0x40);
    puStack_d0 = *(undefined4 **)(unaff_EBP + -0x38);
    uStack_ec = *(undefined4 *)(unaff_EBP + -0x54);
    uStack_e8 = *(undefined4 *)(unaff_EBP + -0x50);
    *(int *)(unaff_EBP + -0x24) = *piStack_f8;
    uStack_e4 = *(undefined4 *)(unaff_EBP + -0x4c);
    uStack_f0 = 0;
    uStack_e0 = *(undefined4 *)(unaff_EBP + -0x48);
    *(int **)(unaff_EBP + -0x20) = piStack_f8;
    iStack_f4 = (-(uint)(*(int *)(unaff_EBP + -0x14) % 2 != 0) & 10) - 5;
    puStack_fc = (undefined4 *)0x4491b7;
    iVar2 = (**(code **)(*(int *)(unaff_EBP + -0x24) + 0x94))();
    if (iVar2 < 0) {
      puStack_d0 = (undefined4 *)&DAT_00963de8;
      uStack_d8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x20),iVar2);
      uStack_dc = 0x4491c9;
      FUN_00878e09();
    }
    puStack_d0 = (undefined4 *)0x4491d1;
    FUN_00412600();
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_d8 = (double)CONCAT44(0x4491de,(undefined4)uStack_d8);
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      uStack_d8 = (double)CONCAT44(0x4491e9,(undefined4)uStack_d8);
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)0x4491f1;
    FUN_00412600();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x44);
    uStack_d8 = (double)CONCAT44(0x4491fe,(undefined4)uStack_d8);
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      uStack_d8 = (double)CONCAT44(0x449209,(undefined4)uStack_d8);
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  } while (*(int *)(unaff_EBP + -0x14) < 7);
  puStack_d0 = &DAT_00980690;
  uStack_d8 = (double)CONCAT44(0x44921f,(undefined4)uStack_d8);
  FUN_00403191();
  puStack_d0 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  uStack_d8 = (double)CONCAT44(0x44922f,(undefined4)uStack_d8);
  FUN_00403191();
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x250);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar2 == 0) {
    puStack_d0 = (undefined4 *)0x80004003;
    uStack_d8 = (double)CONCAT44(0x44924f,(undefined4)uStack_d8);
    FUN_00878dfb();
  }
  puStack_d0 = (undefined4 *)(unaff_EBP + -0x28);
  uStack_d8 = (double)CONCAT44(0x44925a,(undefined4)uStack_d8);
  piVar3 = (int *)FUN_004113e5();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar2 == 0) {
    puStack_d0 = (undefined4 *)0x80004003;
    uStack_d8 = (double)CONCAT44(0x44926f,(undefined4)uStack_d8);
    FUN_00878dfb();
  }
  piStack_f8 = (int *)*piVar3;
  uStack_dc = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_d8 = *(double *)(unaff_EBP + -0x40);
  iVar2 = *piStack_f8;
  puStack_d0 = *(undefined4 **)(unaff_EBP + -0x38);
  uStack_ec = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_e8 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x4c);
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_f0 = 0;
  iStack_f4 = 0;
  *(int **)(unaff_EBP + -0x2c) = piStack_f8;
  puStack_fc = (undefined4 *)0x449299;
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    puStack_fc = (undefined4 *)&DAT_00963de8;
    iStack_100 = *(int *)(unaff_EBP + -0x2c);
    FUN_00878e09(iVar2);
  }
  puStack_fc = (undefined4 *)0x4492b3;
  FUN_004125d9();
  puStack_fc = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_100 = 0x4492c0;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    iStack_100 = 0x4492cb;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_fc = (undefined4 *)(unaff_EBP + -0x44);
  iStack_100 = 0x4492d8;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    iStack_100 = 0x4492e3;
    FUN_00878dfb();
  }
  puStack_fc = &DAT_00980690;
  iStack_100 = 0x4492ec;
  FUN_00403191();
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x250);
  *(undefined4 *)(unaff_EBP + -4) = 0xe;
  if (iVar2 == 0) {
    puStack_fc = (undefined4 *)0x80004003;
    iStack_100 = 0x44930e;
    FUN_00878dfb();
  }
  puStack_fc = (undefined4 *)0x3;
  iStack_100 = 0x449317;
  iStack_100 = FUN_0042a378();
  iStack_100 = iStack_100 + 0x5dc;
  FUN_004295f1();
  puStack_fc = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_100 = 0x449334;
  FUN_00424e27();
  iStack_100 = 0x44933b;
  FUN_004113e5();
  puStack_fc = (undefined4 *)(unaff_EBP + -0x74);
  iStack_100 = unaff_EBP + -100;
  uVar6 = 0xff;
  uVar1 = 0xff;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00424df4(0xff,0xff);
  FUN_00424f2f(uVar1,uVar6);
  puStack_fc = (undefined4 *)0x449364;
  FUN_004125d9();
  puStack_fc = (undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_100 = 0x449371;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    iStack_100 = 0x44937c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_fc = (undefined4 *)(unaff_EBP + -0x74);
  iStack_100 = 0x449389;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    iStack_100 = 0x449394;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_fc = *(undefined4 **)(iVar2 + 0x240);
  iStack_100 = *(int *)(iVar2 + 0x23c);
  *(undefined4 *)(unaff_EBP + -4) = 0x11;
  FUN_00434e21(unaff_EBP + -0x18,s__s____s_s_s_s_00964168,*(undefined4 *)(iVar2 + 0x230),
               *(undefined4 *)(iVar2 + 0x234),*(undefined4 *)(iVar2 + 0x238));
  puStack_fc = (undefined4 *)0x1;
  iStack_100 = 0;
  uVar1 = FUN_00415015(0x400,1);
  FUN_00471777(uVar1);
  puStack_fc = (undefined4 *)0xffffffff;
  iStack_100 = 0x4493f4;
  FUN_004150c0();
  if (DAT_00978360 != 0) {
    *(int **)(unaff_EBP + -0x2c) = &iStack_100;
    puStack_fc = (undefined4 *)0x0;
    uVar1 = *(undefined4 *)(iVar2 + 0x220);
    uVar6 = *(undefined4 *)(iVar2 + 0x224);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uVar5 = 0x11;
    iStack_100 = extraout_ECX_00;
    uVar4 = FUN_00449713(0x11,uVar6,uVar1);
    FUN_00449784(uVar4);
    FUN_00743a59(uVar4,uVar5,uVar6,uVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_fc = (undefined4 *)0x449437;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


