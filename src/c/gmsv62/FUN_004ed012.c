/* FUN_004ed012 - 0x004ed012 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ed012(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  undefined4 uStack_208;
  int iStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  int iStack_1f8;
  undefined1 *puStack_1f4;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 *puStack_1e0;
  undefined1 *puStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  undefined4 *puStack_1c8;
  undefined1 *puStack_1c4;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined4 *puStack_1b0;
  undefined1 *puStack_1ac;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined4 *puStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int iStack_188;
  int iStack_184;
  undefined4 *puStack_180;
  int *piStack_17c;
  undefined *puStack_178;
  int *piStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x38) = extraout_ECX;
  iVar2 = DAT_00979268;
  if (*(int *)(unaff_EBP + 0x14) < 1) {
    iStack_168 = 0x4ed03b;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1ac),
               (IBinding *)0x0);
    goto LAB_004ee394;
  }
  bVar7 = DAT_00979268 != 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  if (bVar7) {
    *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar2 + 0x1c);
  }
  iStack_168 = 0x4ed063;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_168 = 0x4ed072;
  FUN_00403191();
  iStack_168 = 0;
  iStack_16c = unaff_EBP + -0xe0;
  iStack_170 = unaff_EBP + -0xf0;
  piStack_17c = (int *)&piStack_174;
  *(int ***)(unaff_EBP + -0x1c) = &piStack_174;
  puStack_178 = (undefined *)0xc8d;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_180 = (undefined4 *)0x4ed09e;
  FUN_00679e4e();
  puStack_178 = (undefined *)(unaff_EBP + -0x120);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_17c = (int *)0x4ed0ae;
  FUN_00405a1d();
  piStack_17c = (int *)0x4ed0b5;
  FUN_00402660();
  piStack_17c = (int *)0x4ed0bc;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_16c = 0x4ed0c7;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0xc0) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    iStack_168 = 0x4ed0e3;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_168 = 0x4ed0f4;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_168 = 0x4ed104;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed10f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_168 = 0x4ed11f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed12a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_168 = 0x4ed13a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed145;
    FUN_00878dfb();
  }
  iStack_168 = 0x4ed151;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_168 = 0x4ed15e;
  FUN_00403191();
  iStack_168 = 0;
  iStack_16c = unaff_EBP + -0xac;
  iStack_170 = unaff_EBP + -0x7c;
  piStack_17c = (int *)&piStack_174;
  *(int ***)(unaff_EBP + -0x1c) = &piStack_174;
  puStack_178 = (undefined *)0xc8e;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_180 = (undefined4 *)0x4ed182;
  FUN_00679e4e();
  puStack_178 = (undefined *)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_17c = (int *)0x4ed192;
  FUN_00405a1d();
  piStack_17c = (int *)0x4ed199;
  FUN_00402660();
  piStack_17c = (int *)0x4ed1a0;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_16c = 0x4ed1ab;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    iStack_168 = 0x4ed1c1;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_168 = 0x4ed1d2;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_168 = 0x4ed1e2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed1ed;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_168 = 0x4ed1fa;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed205;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_168 = 0x4ed215;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed220;
    FUN_00878dfb();
  }
  iStack_168 = 0x4ed22c;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_168 = 0x4ed23c;
  FUN_00403191();
  iStack_168 = 0;
  iStack_16c = unaff_EBP + -0x8c;
  iStack_170 = unaff_EBP + -0xbc;
  piStack_17c = (int *)&piStack_174;
  *(int ***)(unaff_EBP + -0x1c) = &piStack_174;
  puStack_178 = (undefined *)0xc8f;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_180 = (undefined4 *)0x4ed263;
  FUN_00679e4e();
  puStack_178 = (undefined *)(unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_17c = (int *)0x4ed273;
  FUN_00405a1d();
  piStack_17c = (int *)0x4ed27a;
  FUN_00402660();
  piStack_17c = (int *)0x4ed281;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_16c = 0x4ed28c;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  if (iVar2 != 0) {
    iStack_168 = 0x4ed2a2;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_168 = 0x4ed2b3;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_168 = 0x4ed2c3;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed2ce;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_168 = 0x4ed2de;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed2e9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_168 = 0x4ed2f9;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed304;
    FUN_00878dfb();
  }
  iStack_168 = 0x4ed30d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_168 = 0x4ed31d;
  FUN_00403191();
  iStack_168 = 0;
  iStack_16c = unaff_EBP + -0x7c;
  iStack_170 = unaff_EBP + -0xac;
  piStack_17c = (int *)&piStack_174;
  *(int ***)(unaff_EBP + -0x1c) = &piStack_174;
  puStack_178 = (undefined *)0xc90;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_180 = (undefined4 *)0x4ed341;
  FUN_00679e4e();
  puStack_178 = (undefined *)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_17c = (int *)0x4ed351;
  FUN_00405a1d();
  piStack_17c = (int *)0x4ed358;
  FUN_00402660();
  piStack_17c = (int *)0x4ed35f;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_16c = 0x4ed36a;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  if (iVar2 != 0) {
    iStack_168 = 0x4ed380;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_168 = 0x4ed391;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_168 = 0x4ed3a1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed3ac;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_168 = 0x4ed3bc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed3c7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_168 = 0x4ed3d4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed3df;
    FUN_00878dfb();
  }
  iStack_168 = 0x4ed3eb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_168 = 0x4ed3fb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_168 = 0x4ed40e;
    FUN_00878dfb();
  }
  if (DAT_0097c1ac == 0) {
    iStack_168 = 0x4ed420;
    FUN_00878dfb();
  }
  iStack_168 = unaff_EBP + -0x8c;
  iStack_16c = 0xc00614a4;
  iStack_170 = 0x4ed441;
  iStack_170 = FUN_0040e53d();
  piStack_174 = (int *)(800 - *(int *)(unaff_EBP + -0x40));
  puStack_178 = (undefined *)0x0;
  piStack_17c = *(int **)(unaff_EBP + -0x40);
  puStack_180 = (undefined4 *)(unaff_EBP + -0x24);
  iStack_184 = 0x4ed45a;
  puVar3 = (undefined4 *)FUN_0042a39f();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x38) + 0x1ac);
  iStack_168 = 0x4ed46c;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_168 = 0x4ed484;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed48f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_168 = 0x4ed49f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_168 = 0x4ed4aa;
    FUN_00878dfb();
  }
  iStack_168 = 0x4ed4b9;
  puVar3 = (undefined4 *)FUN_00485656();
  iStack_168 = *puVar3;
  iStack_16c = 0x4ed4c9;
  FUN_0040ee87();
  iVar2 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (iVar2 == 0) {
    iStack_168 = 0x4ed4db;
    FUN_00878dfb();
  }
  iStack_170 = *(undefined4 *)(unaff_EBP + -0x8c);
  iStack_16c = *(undefined4 *)(unaff_EBP + -0x88);
  piStack_174 = *(int **)(*(int *)(unaff_EBP + -0x38) + 0x1ac);
  iVar2 = *piStack_174;
  iStack_168 = *(undefined4 *)(unaff_EBP + -0x84);
  *(int **)(unaff_EBP + -0x24) = piStack_174;
  puStack_178 = (undefined *)0x4ed4fd;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    puStack_178 = &DAT_00963de8;
    piStack_17c = *(int **)(unaff_EBP + -0x24);
    iStack_184 = 0x4ed50f;
    puStack_180 = (undefined4 *)iVar2;
    FUN_00878e09();
  }
  puStack_178 = (undefined *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  piStack_17c = (int *)0x4ed51f;
  puStack_178 = (undefined *)FUN_00402bc3();
  if ((int)puStack_178 < 0) {
    piStack_17c = (int *)0x4ed52c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_178 = (undefined *)0x4ed538;
  FUN_004125d9();
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x38) + 0x1ac);
  if (*(int *)(*(int *)(unaff_EBP + -0x38) + 0x1ac) == 0) {
    puStack_178 = (undefined *)0x80004003;
    piStack_17c = (int *)0x4ed553;
    FUN_00878dfb();
  }
  piStack_17c = (int *)*piVar5;
  iVar2 = *piStack_17c;
  puStack_178 = (undefined *)0xffffffff;
  *(int **)(unaff_EBP + -0x1c) = piStack_17c;
  puStack_180 = (undefined4 *)0x4ed563;
  iStack_188 = (**(code **)(iVar2 + 0xe0))();
  if (iStack_188 < 0) {
    puStack_180 = (undefined4 *)&DAT_00963df8;
    iStack_184 = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_18c = 0x4ed575;
    FUN_00878e09();
  }
  puStack_180 = (undefined4 *)0x3;
  iStack_184 = 0;
  iStack_188 = 0x4ed583;
  FUN_004031b7();
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (iVar2 == 0) {
    puStack_180 = (undefined4 *)0x80004003;
    iStack_184 = 0x4ed595;
    FUN_00878dfb();
  }
  puStack_180 = (undefined4 *)(unaff_EBP + -0x8c);
  iStack_184 = unaff_EBP + -0x14;
  iStack_188 = 0x4ed5a7;
  FUN_00425067();
  puStack_180 = (undefined4 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_184 = 0x4ed5b7;
  puStack_180 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_180 < 0) {
    iStack_184 = 0x4ed5c2;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  puStack_180 = (undefined4 *)0xc91;
  iStack_184 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_188 = 0x4ed5de;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_184 = *puVar3;
  puStack_180 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_188 = unaff_EBP + -0x50;
  uStack_18c = 0x4ed5f1;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    puStack_180 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    iStack_184 = 0x4ed608;
    FUN_00434e38();
  }
  puStack_180 = &DAT_00980690;
  iStack_184 = 0x4ed615;
  FUN_00403191();
  puStack_180 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_184 = 0x4ed625;
  FUN_00403191();
  puStack_180 = (undefined4 *)0x0;
  iStack_184 = 0;
  iStack_188 = 0xffffffff;
  uStack_18c = *(undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  uStack_190 = 0;
  uStack_194 = 0;
  puStack_198 = (undefined4 *)0x4ed638;
  (*DAT_0097b4c8)();
  puStack_198 = (undefined4 *)0x4ed645;
  FUN_0087a1b0();
  puStack_198 = (undefined4 *)0x0;
  iStack_19c = 0;
  iStack_1a0 = unaff_EBP + -0xac;
  iStack_1a4 = unaff_EBP + -0xbc;
  uStack_1a8 = 0xffffffff;
  puStack_1b0 = (undefined4 *)0x4ed662;
  puStack_1ac = (undefined1 *)&uStack_194;
  puStack_1b0 = (undefined4 *)FUN_00449713();
  uStack_1b4 = 0x4ed668;
  puStack_1ac = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_1a8;
  puStack_1b0 = (undefined4 *)0x4ed675;
  FUN_004033a1();
  puStack_1ac = (undefined1 *)(unaff_EBP + -0x150);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  puStack_1b0 = (undefined4 *)0x4ed685;
  FUN_00405a1d();
  puStack_1b0 = (undefined4 *)0x4ed68c;
  FUN_00402660();
  puStack_1b0 = (undefined4 *)0x4ed693;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_1a0 = 0x4ed69e;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar2 != 0) {
    puStack_198 = (undefined4 *)(unaff_EBP + -0x1c);
    iStack_19c = 0x4ed6b4;
    puStack_198 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_198 < 0) && (puStack_198 != (undefined4 *)0x80004002)) {
      iStack_19c = 0x4ed6c5;
      FUN_00878dfb();
    }
  }
  puStack_198 = (undefined4 *)(unaff_EBP + -0x150);
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  iStack_19c = 0x4ed6d5;
  puStack_198 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_198 < 0) {
    iStack_19c = 0x4ed6e0;
    FUN_00878dfb();
  }
  puStack_198 = (undefined4 *)(unaff_EBP + -0xbc);
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  iStack_19c = 0x4ed6f0;
  puStack_198 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_198 < 0) {
    iStack_19c = 0x4ed6fb;
    FUN_00878dfb();
  }
  puStack_198 = (undefined4 *)(unaff_EBP + -0xac);
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_19c = 0x4ed70b;
  puStack_198 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_198 < 0) {
    iStack_19c = 0x4ed716;
    FUN_00878dfb();
  }
  puStack_198 = (undefined4 *)0x0;
  iStack_19c = 0x4ed71f;
  cVar1 = FUN_004115ef();
  if (cVar1 == '\0') {
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      puStack_198 = (undefined4 *)0x80004003;
      iStack_19c = 0x4ed732;
      FUN_00878dfb();
    }
    puStack_198 = (undefined4 *)0x4ed73a;
    uVar4 = FUN_0040e48b();
    iVar2 = *(int *)(unaff_EBP + -0x20);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0x1b0) = uVar4;
    if (iVar2 == 0) {
      puStack_198 = (undefined4 *)0x80004003;
      iStack_19c = 0x4ed752;
      FUN_00878dfb();
    }
    puStack_198 = (undefined4 *)0x4ed75a;
    uVar4 = FUN_0040e53d();
    puStack_198 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0x1b4) = uVar4;
    iStack_19c = 0x4ed76b;
    iVar2 = FUN_005d90ec();
    puStack_198 = (undefined4 *)(iVar2 + 0x30);
    iStack_19c = 0x4ed77e;
    FUN_00414f8b();
  }
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  puStack_198 = (undefined4 *)0xc92;
  iStack_19c = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  iStack_1a0 = 0x4ed798;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_19c = *puVar3;
  puStack_198 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_1a0 = unaff_EBP + -0x58;
  iStack_1a4 = 0x4ed7ab;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  if (*(int *)(unaff_EBP + 8) != 0) {
    puStack_198 = (undefined4 *)(*(int *)(unaff_EBP + 8) + -0xc);
    iStack_19c = 0x4ed7c2;
    FUN_00434e38();
  }
  puStack_198 = (undefined4 *)0xc93;
  iStack_19c = unaff_EBP + 8;
  iStack_1a0 = 0x4ed7d3;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_19c = *puVar3;
  puStack_198 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iStack_1a0 = unaff_EBP + -0x4c;
  iStack_1a4 = 0x4ed7e6;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  if (*(int *)(unaff_EBP + 8) != 0) {
    puStack_198 = (undefined4 *)(*(int *)(unaff_EBP + 8) + -0xc);
    iStack_19c = 0x4ed7fd;
    FUN_00434e38();
  }
  puStack_198 = &DAT_00980690;
  iStack_19c = 0x4ed807;
  FUN_00403191();
  puStack_198 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iStack_19c = 0x4ed814;
  FUN_00403191();
  puStack_198 = (undefined4 *)0x0;
  iStack_19c = 0;
  iStack_1a0 = 0xffffffff;
  iStack_1a4 = *(undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  uStack_1a8 = 0;
  puStack_1ac = (undefined1 *)0x0;
  puStack_1b0 = (undefined4 *)0x4ed827;
  (*DAT_0097b4c8)();
  puStack_1b0 = (undefined4 *)0x4ed834;
  FUN_0087a1b0();
  puStack_1b0 = (undefined4 *)0x0;
  uStack_1b4 = 0;
  iStack_1b8 = unaff_EBP + -0x34;
  iStack_1bc = unaff_EBP + -0x7c;
  uStack_1c0 = 0xffffffff;
  puStack_1c8 = (undefined4 *)0x4ed84b;
  puStack_1c4 = (undefined1 *)&puStack_1ac;
  puStack_1c8 = (undefined4 *)FUN_00449713();
  iStack_1cc = 0x4ed851;
  puStack_1c4 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_1c0;
  puStack_1c8 = (undefined4 *)0x4ed85e;
  FUN_004033a1();
  puStack_1c4 = (undefined1 *)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  puStack_1c8 = (undefined4 *)0x4ed86e;
  FUN_00405a1d();
  puStack_1c8 = (undefined4 *)0x4ed875;
  FUN_00402660();
  puStack_1c8 = (undefined4 *)0x4ed87c;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  iStack_1b8 = 0x4ed887;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  if (iVar2 != 0) {
    puStack_1b0 = (undefined4 *)(unaff_EBP + 8);
    uStack_1b4 = 0x4ed89d;
    puStack_1b0 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_1b0 < 0) && (puStack_1b0 != (undefined4 *)0x80004002)) {
      uStack_1b4 = 0x4ed8ae;
      FUN_00878dfb();
    }
  }
  puStack_1b0 = (undefined4 *)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  uStack_1b4 = 0x4ed8be;
  puStack_1b0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1b0 < 0) {
    uStack_1b4 = 0x4ed8c9;
    FUN_00878dfb();
  }
  puStack_1b0 = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  uStack_1b4 = 0x4ed8d6;
  puStack_1b0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1b0 < 0) {
    uStack_1b4 = 0x4ed8e1;
    FUN_00878dfb();
  }
  puStack_1b0 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  uStack_1b4 = 0x4ed8ee;
  puStack_1b0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1b0 < 0) {
    uStack_1b4 = 0x4ed8f9;
    FUN_00878dfb();
  }
  puStack_1b0 = &DAT_00980690;
  uStack_1b4 = 0x4ed905;
  FUN_00403191();
  puStack_1b0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  uStack_1b4 = 0x4ed915;
  FUN_00403191();
  puStack_1b0 = (undefined4 *)0x0;
  uStack_1b4 = 0;
  iStack_1b8 = 0xffffffff;
  iStack_1bc = *(undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  uStack_1c0 = 0;
  puStack_1c4 = (undefined1 *)0x0;
  puStack_1c8 = (undefined4 *)0x4ed928;
  (*DAT_0097b4c8)();
  puStack_1c8 = (undefined4 *)0x4ed935;
  FUN_0087a1b0();
  puStack_1c8 = (undefined4 *)0x0;
  iStack_1cc = 0;
  iStack_1d0 = unaff_EBP + -0x100;
  iStack_1d4 = unaff_EBP + -0x110;
  uStack_1d8 = 0xffffffff;
  puStack_1e0 = (undefined4 *)0x4ed952;
  puStack_1dc = (undefined1 *)&puStack_1c4;
  puStack_1e0 = (undefined4 *)FUN_00449713();
  uStack_1e4 = 0x4ed958;
  puStack_1dc = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + 8) = &uStack_1d8;
  puStack_1e0 = (undefined4 *)0x4ed965;
  FUN_004033a1();
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x130);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_1e0 = (undefined4 *)0x4ed975;
  FUN_00405a1d();
  puStack_1e0 = (undefined4 *)0x4ed97c;
  FUN_00402660();
  puStack_1e0 = (undefined4 *)0x4ed983;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  iStack_1d0 = 0x4ed98e;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  if (iVar2 != 0) {
    puStack_1c8 = (undefined4 *)(unaff_EBP + -0x24);
    iStack_1cc = 0x4ed9a4;
    puStack_1c8 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_1c8 < 0) && (puStack_1c8 != (undefined4 *)0x80004002)) {
      iStack_1cc = 0x4ed9b5;
      FUN_00878dfb();
    }
  }
  puStack_1c8 = (undefined4 *)(unaff_EBP + -0x130);
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  iStack_1cc = 0x4ed9c5;
  puStack_1c8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c8 < 0) {
    iStack_1cc = 0x4ed9d0;
    FUN_00878dfb();
  }
  puStack_1c8 = (undefined4 *)(unaff_EBP + -0x110);
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  iStack_1cc = 0x4ed9e0;
  puStack_1c8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c8 < 0) {
    iStack_1cc = 0x4ed9eb;
    FUN_00878dfb();
  }
  puStack_1c8 = (undefined4 *)(unaff_EBP + -0x100);
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_1cc = 0x4ed9fb;
  puStack_1c8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c8 < 0) {
    iStack_1cc = 0x4eda06;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  puStack_1c8 = (undefined4 *)0xc92;
  iStack_1cc = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  iStack_1d0 = 0x4eda20;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_1cc = *puVar3;
  puStack_1c8 = *(undefined4 **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  iStack_1d0 = unaff_EBP + -0x44;
  iStack_1d4 = 0x4eda33;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  if (*(int *)(unaff_EBP + 8) != 0) {
    puStack_1c8 = (undefined4 *)(*(int *)(unaff_EBP + 8) + -0xc);
    iStack_1cc = 0x4eda4a;
    FUN_00434e38();
  }
  puStack_1c8 = (undefined4 *)0xc93;
  iStack_1cc = unaff_EBP + 8;
  iStack_1d0 = 0x4eda5b;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_1cc = *puVar3;
  puStack_1c8 = *(undefined4 **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  iStack_1d0 = unaff_EBP + -0x5c;
  iStack_1d4 = 0x4eda6e;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  if (*(int *)(unaff_EBP + 8) != 0) {
    puStack_1c8 = (undefined4 *)(*(int *)(unaff_EBP + 8) + -0xc);
    iStack_1cc = 0x4eda85;
    FUN_00434e38();
  }
  puStack_1c8 = &DAT_00980690;
  iStack_1cc = 0x4eda8f;
  FUN_00403191();
  puStack_1c8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  iStack_1cc = 0x4eda9c;
  FUN_00403191();
  puStack_1c8 = (undefined4 *)0x0;
  iStack_1cc = 0;
  iStack_1d0 = 0xffffffff;
  iStack_1d4 = *(undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  uStack_1d8 = 0;
  puStack_1dc = (undefined1 *)0x0;
  puStack_1e0 = (undefined4 *)0x4edab1;
  (*DAT_0097b4c8)();
  puStack_1e0 = (undefined4 *)0x4edabe;
  FUN_0087a1b0();
  puStack_1e0 = (undefined4 *)0x0;
  uStack_1e4 = 0;
  iStack_1e8 = unaff_EBP + -0x7c;
  iStack_1ec = unaff_EBP + -0x34;
  uStack_1f0 = 0xffffffff;
  iStack_1f8 = 0x4edad4;
  puStack_1f4 = (undefined1 *)&puStack_1dc;
  iStack_1f8 = FUN_00449713();
  uStack_1fc = 0x4edada;
  puStack_1f4 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_1f0;
  iStack_1f8 = 0x4edae7;
  FUN_004033a1();
  puStack_1f4 = (undefined1 *)(unaff_EBP + -0x140);
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  iStack_1f8 = 0x4edaf7;
  FUN_00405a1d();
  iStack_1f8 = 0x4edafe;
  FUN_00402660();
  iStack_1f8 = 0x4edb05;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  iStack_1e8 = 0x4edb10;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  if (iVar2 != 0) {
    puStack_1e0 = (undefined4 *)(unaff_EBP + 8);
    uStack_1e4 = 0x4edb26;
    puStack_1e0 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_1e0 < 0) && (puStack_1e0 != (undefined4 *)0x80004002)) {
      uStack_1e4 = 0x4edb37;
      FUN_00878dfb();
    }
  }
  puStack_1e0 = (undefined4 *)(unaff_EBP + -0x140);
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  uStack_1e4 = 0x4edb47;
  puStack_1e0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1e0 < 0) {
    uStack_1e4 = 0x4edb52;
    FUN_00878dfb();
  }
  puStack_1e0 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  uStack_1e4 = 0x4edb5f;
  puStack_1e0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1e0 < 0) {
    uStack_1e4 = 0x4edb6a;
    FUN_00878dfb();
  }
  puStack_1e0 = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  uStack_1e4 = 0x4edb77;
  puStack_1e0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1e0 < 0) {
    uStack_1e4 = 0x4edb82;
    FUN_00878dfb();
  }
  puStack_1e0 = &DAT_00980690;
  uStack_1e4 = 0x4edb8e;
  FUN_00403191();
  puStack_1e0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  uStack_1e4 = 0x4edb9e;
  FUN_00403191();
  puStack_1e0 = (undefined4 *)0x0;
  uStack_1e4 = 0;
  iStack_1e8 = 0xffffffff;
  iStack_1ec = *(undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  uStack_1f0 = 0;
  puStack_1f4 = (undefined1 *)0x0;
  iStack_1f8 = 0x4edbb0;
  (*DAT_0097b4c8)();
  iStack_1f8 = 0x4edbbd;
  FUN_0087a1b0();
  iStack_1f8 = 0;
  uStack_1fc = 0;
  iStack_200 = unaff_EBP + -0x9c;
  iStack_204 = unaff_EBP + -0xd0;
  uStack_208 = 0xffffffff;
  uVar4 = FUN_00449713(&puStack_1f4);
  uVar4 = FUN_00456ad5(uVar4);
  *(undefined4 **)(unaff_EBP + 8) = &uStack_208;
  FUN_004033a1(uVar4);
  iVar2 = unaff_EBP + -0x160;
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  iStack_200 = 0x4edc15;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  if (iVar2 != 0) {
    iStack_1f8 = unaff_EBP + -0x3c;
    uStack_1fc = 0x4edc2b;
    iStack_1f8 = FUN_0041a581();
    if ((iStack_1f8 < 0) && (iStack_1f8 != -0x7fffbffe)) {
      uStack_1fc = 0x4edc3c;
      FUN_00878dfb();
    }
  }
  iStack_1f8 = unaff_EBP + -0x160;
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  uStack_1fc = 0x4edc4c;
  iStack_1f8 = FUN_00402bc3();
  if (iStack_1f8 < 0) {
    uStack_1fc = 0x4edc57;
    FUN_00878dfb();
  }
  iStack_1f8 = unaff_EBP + -0xd0;
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  uStack_1fc = 0x4edc67;
  iStack_1f8 = FUN_00402bc3();
  if (iStack_1f8 < 0) {
    uStack_1fc = 0x4edc72;
    FUN_00878dfb();
  }
  iStack_1f8 = unaff_EBP + -0x9c;
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  uStack_1fc = 0x4edc82;
  iStack_1f8 = FUN_00402bc3();
  if (iStack_1f8 < 0) {
    uStack_1fc = 0x4edc8d;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_1f8 = 0x80004003;
    uStack_1fc = 0x4edc9c;
    FUN_00878dfb();
  }
  iStack_1f8 = 0x4edca4;
  iVar2 = FUN_0040e48b();
  *(int *)(unaff_EBP + 0xc) = (0x319 - *(int *)(unaff_EBP + -0x40)) - iVar2;
  iStack_1f8 = 0x4edcbf;
  uVar4 = __ftol();
  iStack_1f8 = 3;
  uStack_1fc = 0xff;
  *(undefined4 *)(unaff_EBP + 0x10) = uVar4;
  iStack_200 = 0x4edcd2;
  FUN_004031b7();
  piVar5 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  if (piVar5 == (int *)0x0) {
    iStack_1f8 = 0x80004003;
    uStack_1fc = 0x4edce7;
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + -0x14);
  }
  iVar2 = *piVar5;
  uStack_208 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_204 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_200 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_1fc = *(undefined4 *)(unaff_EBP + -0x2c);
  *(int **)(unaff_EBP + 8) = piVar5;
  iStack_1f8 = *(undefined4 *)(unaff_EBP + -0x28);
  iVar2 = (**(code **)(iVar2 + 0x80))(piVar5,0,0);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004031b7(0xff,3);
  piVar5 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x5a;
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar5 = *(int **)(unaff_EBP + -0x14);
  }
  iVar2 = *piVar5;
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar5,5,6,*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x5b;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(unaff_EBP + -0x14);
  *(int **)(unaff_EBP + 8) = piVar5;
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x18);
  uVar4 = FUN_0040e48b();
  iVar2 = (**(code **)(*piVar5 + 0x80))
                    (*(undefined4 *)(unaff_EBP + 8),uVar4,0,*(undefined4 *)(unaff_EBP + 0x14),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (0 < *(int *)(unaff_EBP + 0xc)) {
    do {
      FUN_004031b7(0xff,3);
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        FUN_00878dfb(0x80004003);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar5 = *(int **)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x60);
      iVar2 = FUN_0040e48b();
      iVar6 = FUN_0040e48b();
      iVar2 = (**(code **)(*piVar5 + 0x80))
                        (piVar5,iVar6 + *(int *)(unaff_EBP + 8) + iVar2,0,
                         *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar5,&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0xc));
  }
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x68);
  iVar2 = FUN_0040e48b();
  iVar6 = FUN_0040e48b();
  iVar2 = (**(code **)(*piVar5 + 0x80))
                    (piVar5,iVar6 + *(int *)(unaff_EBP + 8) + iVar2,0,
                     *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar5,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x5e;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x48);
  iVar2 = FUN_0040e48b();
  iVar2 = (**(code **)(*piVar5 + 0x80))
                    (piVar5,iVar2 + 3,4,*(undefined4 *)(unaff_EBP + 8),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar5,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (*(int *)(unaff_EBP + 0x10) < 1) {
LAB_004ee0d3:
    FUN_004031b7(0xff,3);
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x54);
    iVar2 = FUN_0040e48b();
    iVar2 = (**(code **)(*piVar5 + 0x80))
                      (piVar5,iVar2 + 3,4,*(undefined4 *)(unaff_EBP + 0x14),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar5,&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x56;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  else {
    do {
      FUN_004031b7(0xff,3);
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        FUN_00878dfb(0x80004003);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar5 = *(int **)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -100);
      iVar2 = FUN_0040e48b();
      iVar6 = FUN_0040e48b();
      iVar2 = (**(code **)(*piVar5 + 0x80))
                        (piVar5,iVar6 + *(int *)(unaff_EBP + 8) + iVar2,4,
                         *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar5,&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x10));
    if (*(int *)(unaff_EBP + 8) == 0) goto LAB_004ee0d3;
  }
  if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0xc)) {
    do {
      FUN_004031b7(0xff,3);
      *(undefined1 *)(unaff_EBP + -4) = 0x61;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        FUN_00878dfb(0x80004003);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar5 = *(int **)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x6c);
      iVar2 = FUN_0040e48b();
      iVar6 = FUN_0040e48b();
      iVar2 = (**(code **)(*piVar5 + 0x80))
                        (piVar5,iVar6 + *(int *)(unaff_EBP + 8) + iVar2,4,
                         *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar5,&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0xc));
  }
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x62;
  puVar3 = (undefined4 *)(unaff_EBP + -0x48);
  if (*(int *)(unaff_EBP + 0x10) != *(int *)(unaff_EBP + 0xc)) {
    puVar3 = (undefined4 *)(unaff_EBP + -0x54);
  }
  *(undefined4 *)(unaff_EBP + 0xc) = *puVar3;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(unaff_EBP + -0x14);
  iVar2 = FUN_0040e48b();
  iVar6 = FUN_0040e48b();
  iVar2 = (**(code **)(*piVar5 + 0x80))
                    (piVar5,iVar6 + *(int *)(unaff_EBP + 8) + iVar2,4,
                     *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar5,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004125e6();
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x5c) + -0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x44) + -0xc);
  }
  FUN_004125e6();
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x4c) + -0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x58) + -0xc);
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x50) + -0xc);
  }
  FUN_004125e6();
  FUN_004125e6();
  FUN_004125e6();
  piVar5 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  piVar5 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
LAB_004ee394:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


