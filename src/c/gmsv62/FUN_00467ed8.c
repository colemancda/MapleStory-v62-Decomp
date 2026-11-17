/* FUN_00467ed8 - 0x00467ed8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00467ed8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined1 *extraout_ECX_06;
  undefined1 *extraout_ECX_07;
  undefined1 *extraout_ECX_08;
  undefined1 *extraout_ECX_09;
  undefined1 *extraout_ECX_10;
  undefined1 *extraout_ECX_11;
  undefined1 *extraout_ECX_12;
  undefined1 *extraout_ECX_13;
  undefined1 *extraout_ECX_14;
  int unaff_EBP;
  undefined1 *puVar6;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  int *piStack_60;
  
  FUN_00879bb8();
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xa9b;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_68 = (undefined1 *)0x467f2b;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x467f37;
  FUN_00469862();
  puStack_64 = (undefined1 *)0x467f42;
  piStack_60 = (int *)uVar1;
  FUN_0045e3a0();
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x467f4f;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x467f5a;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xa9c;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_68 = (undefined1 *)0x467f8f;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x467f9b;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x467fab;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x467fb6;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_00;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xa9d;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_68 = (undefined1 *)0x467feb;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x467ff7;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x468007;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x468012;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_01;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xa9e;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_68 = (undefined1 *)0x468047;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x468053;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x24) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x468063;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x46806e;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_02;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xa9f;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_68 = (undefined1 *)0x4680a3;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x4680af;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x28) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x4680bf;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x4680ca;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_03;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xaa0;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_68 = (undefined1 *)0x4680ff;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x46810b;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x2c) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x46811b;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x468126;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_04;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xaa1;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_68 = (undefined1 *)0x46815b;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x468167;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x30) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x468177;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x468182;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_05;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xaa2;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_68 = (undefined1 *)0x4681b7;
  iVar2 = FUN_00412550();
  piStack_60 = (int *)0x4681c9;
  iVar3 = FUN_00469862();
  *(uint *)(iVar3 + 0x34) = (uint)(iVar2 != 0);
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x4681d9;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x4681e4;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_06;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xaa4;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_68 = (undefined1 *)0x468219;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x468225;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x38) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x468235;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x468240;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_07;
  }
  piStack_60 = (int *)0xffffffff;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xaa5;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_68 = (undefined1 *)0x468276;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x468282;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x3c) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x468292;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x46829d;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_08;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xaa6;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_68 = (undefined1 *)0x4682d2;
  iVar2 = FUN_00412550();
  piStack_60 = (int *)0x4682e4;
  iVar3 = FUN_00469862();
  *(uint *)(iVar3 + 0x40) = (uint)(iVar2 != 0);
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x4682f4;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x4682ff;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_09;
  }
  piStack_60 = (int *)0xffffffff;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xbf5;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_68 = (undefined1 *)0x468335;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x468341;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x44) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x468351;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x46835c;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_10;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xbf6;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_68 = (undefined1 *)0x468391;
  iVar2 = FUN_00412550();
  piStack_60 = (int *)0x4683a3;
  iVar3 = FUN_00469862();
  *(uint *)(iVar3 + 0x48) = (uint)(iVar2 != 0);
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x4683b3;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x4683be;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_11;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xbf7;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  puStack_68 = (undefined1 *)0x4683f3;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x4683ff;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x4c) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x46840f;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x46841a;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_12;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xbf8;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_68 = (undefined1 *)0x46844f;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x46845b;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x50) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x46846b;
  iVar2 = FUN_00402bc3();
  puStack_64 = (undefined1 *)piStack_60;
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x468476;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    puStack_64 = extraout_ECX_13;
  }
  piStack_60 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_64;
  puStack_68 = (undefined1 *)0xbf9;
  FUN_00679e4e(&puStack_64);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  puStack_64 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_68 = (undefined1 *)0x4684ab;
  uVar1 = FUN_00412550();
  piStack_60 = (int *)0x4684b7;
  iVar2 = FUN_00469862();
  *(undefined4 *)(iVar2 + 0x54) = uVar1;
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined1 *)0x4684c7;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    puStack_64 = (undefined1 *)0x4684d2;
    FUN_00878dfb();
  }
  *(undefined4 *)(*(int *)(unaff_EBP + 0x10) + 0x58) = 0;
  *(undefined4 *)(*(int *)(unaff_EBP + 0x10) + 100) =
       *(undefined4 *)(*(int *)(unaff_EBP + 0x10) + 0x20);
  piStack_60 = (int *)0x4684ec;
  iVar2 = FUN_0045e2eb();
  if (iVar2 / 10000 == 0x38e) {
    piStack_60 = (int *)0x468507;
    FUN_0087a1b0();
    piStack_60 = (int *)0x0;
    puStack_64 = (undefined1 *)0x0;
    puStack_68 = &stack0xffffffa4;
    FUN_00469862();
    uVar1 = thunk_FUN_0045e2eb();
    uVar1 = FUN_00412335(uVar1);
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_68;
    FUN_004033a1(uVar1);
    iVar2 = unaff_EBP + -0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    puStack_68 = (undefined1 *)0x468552;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar2 != 0) {
      piStack_60 = (int *)(unaff_EBP + -0x18);
      puStack_64 = (undefined1 *)0x46856d;
      piStack_60 = (int *)FUN_00404b30();
      if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
        puStack_64 = (undefined1 *)0x46857b;
        FUN_00878dfb();
      }
    }
    piStack_60 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    puStack_64 = (undefined1 *)0x468588;
    iVar2 = FUN_00402bc3();
    piVar4 = piStack_60;
    if (iVar2 < 0) {
      puStack_64 = (undefined1 *)0x468593;
      piStack_60 = (int *)iVar2;
      FUN_00878dfb();
      piVar4 = (int *)extraout_ECX_14;
    }
    piStack_60 = (int *)0x0;
    puStack_64 = (undefined1 *)0x0;
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_68;
    puStack_68 = (undefined1 *)piVar4;
    FUN_00679e4e(&puStack_68,0xa9a);
    iVar2 = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    puStack_68 = (undefined1 *)0x4685ca;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar2 != 0) {
      piStack_60 = (int *)(unaff_EBP + -0x1c);
      puStack_64 = (undefined1 *)0x4685e0;
      piStack_60 = (int *)FUN_00404b30();
      if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
        puStack_64 = (undefined1 *)0x4685ee;
        FUN_00878dfb();
      }
    }
    piStack_60 = (int *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    puStack_64 = (undefined1 *)0x4685fb;
    piStack_60 = (int *)FUN_00402bc3();
    if ((int)piStack_60 < 0) {
      puStack_64 = (undefined1 *)0x468606;
      FUN_00878dfb();
    }
    puVar6 = (undefined1 *)0x0;
    while( true ) {
      piStack_60 = (int *)0x468610;
      FUN_0087a1b0();
      piStack_60 = (int *)0x0;
      puStack_68 = puVar6;
      puStack_64 = &stack0xffffffa4;
      puStack_68 = (undefined1 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_64;
      FUN_004033a1();
      puStack_68 = (undefined1 *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      FUN_0040263d();
      puStack_64 = (undefined1 *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      puStack_68 = (undefined1 *)0x468647;
      iVar2 = FUN_00412550();
      puStack_68 = (undefined1 *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      piStack_60 = (int *)FUN_00402bc3();
      if ((int)piStack_60 < 0) {
        puStack_64 = (undefined1 *)0x468663;
        FUN_00878dfb();
      }
      if (iVar2 == 0) break;
      piStack_60 = (int *)0xffffffff;
      puStack_64 = (undefined1 *)0x468674;
      piVar4 = (int *)FUN_0045f1e3();
      *piVar4 = iVar2;
      puVar6 = puVar6 + 1;
    }
    piStack_60 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (piStack_60 != (int *)0x0) {
      puStack_64 = (undefined1 *)0x46868a;
      (**(code **)(*piStack_60 + 8))();
    }
    piStack_60 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piStack_60 != (int *)0x0) {
      puStack_64 = (undefined1 *)0x46869b;
      (**(code **)(*piStack_60 + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x18) != 0) {
    iVar3 = *(int *)(unaff_EBP + 0x10);
    iVar2 = *(int *)(iVar3 + 0xc);
    if ((iVar2 < 10000000) || (79999999 < iVar2)) {
      if ((79999999 < iVar2) && (iVar2 < 90000000)) {
        if ((*(int *)(iVar3 + 0x30) == 0) && (*(int *)(iVar3 + 0x2c) == 0)) {
          piStack_60 = (int *)0x46882c;
          piStack_60 = (int *)FUN_0045e2eb();
          puStack_64 = (undefined1 *)(unaff_EBP + -0x24);
          puStack_68 = (undefined1 *)0x468838;
          iVar2 = FUN_00554ef3();
          iVar2 = *(int *)(iVar2 + 4);
          if (*(int *)(unaff_EBP + -0x20) != 0) {
            piStack_60 = (int *)0x0;
            puStack_64 = (undefined1 *)0x468850;
            FUN_00449913();
            *(undefined4 *)(unaff_EBP + -0x20) = 0;
          }
          iVar3 = *(int *)(unaff_EBP + 0x10);
          if (iVar2 != 0) {
            if ((*(int *)(iVar3 + 0x1c) < 0) || (1000 < *(int *)(iVar3 + 0x1c))) {
LAB_004689f8:
              *(undefined4 *)(unaff_EBP + -0x10) = 2;
              goto LAB_0046897e;
            }
            if (*(int *)(iVar3 + 0x24) != 0) {
              *(undefined4 *)(unaff_EBP + -0x10) = 0xb;
              goto LAB_0046897e;
            }
LAB_0046887d:
            if (*(int *)(iVar3 + 0x3c) != -1) {
              *(undefined4 *)(unaff_EBP + -0x10) = 0xc;
            }
            goto LAB_0046897e;
          }
        }
        *(undefined4 *)(unaff_EBP + -0x10) = 8;
        goto LAB_0046897e;
      }
      if ((89999999 < iVar2) && (iVar2 < 91000000)) {
        if ((*(int *)(iVar3 + 0x30) == 0) &&
           ((0 < *(int *)(iVar3 + 0x2c) && (*(int *)(iVar3 + 0x2c) < 0x186a1)))) {
          piStack_60 = (int *)0x4688c0;
          iVar2 = FUN_0045e2eb();
          iVar3 = *(int *)(unaff_EBP + 0x10);
          if (iVar2 == 0) {
            if (((*(int *)(iVar3 + 0x1c) != 0) || (*(int *)(iVar3 + 0x20) != 0)) ||
               (*(int *)(iVar3 + 0x24) != 0)) {
              *(undefined4 *)(unaff_EBP + -0x10) = 0xe;
              goto LAB_0046897e;
            }
            goto LAB_0046887d;
          }
        }
        *(undefined4 *)(unaff_EBP + -0x10) = 0xd;
        goto LAB_0046897e;
      }
      if (iVar2 < 91000000) {
        if (91999999 < iVar2) goto LAB_0046894c;
      }
      else {
        if (iVar2 < 92000000) {
          if (((0 < *(int *)(iVar3 + 0x30)) && (*(int *)(iVar3 + 0x30) < 0x989681)) &&
             (*(int *)(iVar3 + 0x2c) == 0)) {
            piStack_60 = (int *)0x468919;
            iVar2 = FUN_0045e2eb();
            iVar3 = *(int *)(unaff_EBP + 0x10);
            if (iVar2 == 0) {
              if (((*(int *)(iVar3 + 0x1c) != 0) || (*(int *)(iVar3 + 0x20) != 0)) ||
                 (*(int *)(iVar3 + 0x24) != 0)) {
                *(undefined4 *)(unaff_EBP + -0x10) = 0x11;
                goto LAB_0046897e;
              }
              goto LAB_0046887d;
            }
          }
          *(undefined4 *)(unaff_EBP + -0x10) = 0x10;
          goto LAB_0046897e;
        }
LAB_0046894c:
        if (iVar2 < 93000000) {
          if ((*(int *)(iVar3 + 0x30) == 0) && (*(int *)(iVar3 + 0x2c) == 0)) {
            if (*(int *)(iVar3 + 0x1c) < 1) {
              *(undefined4 *)(unaff_EBP + -0x10) = 0x14;
            }
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x10) = 0x13;
          }
          goto LAB_0046897e;
        }
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0x15;
      goto LAB_0046897e;
    }
    piStack_60 = (int *)0x4686cf;
    iVar2 = FUN_0045e2eb();
    if (iVar2 / 10000 != 0x38e) {
      piStack_60 = (int *)0x4686ef;
      iVar2 = FUN_0045e2eb();
      if ((iVar2 / 10000 != 0x38f) && (iVar2 / 10000 != 0x21f)) {
        iVar3 = *(int *)(unaff_EBP + 0x10);
        if ((*(int *)(iVar3 + 0x30) == 0) && (*(int *)(iVar3 + 0x2c) == 0)) {
          piStack_60 = (int *)0x46872b;
          piStack_60 = (int *)FUN_0045e2eb();
          puStack_64 = (undefined1 *)(unaff_EBP + -0x24);
          puStack_68 = (undefined1 *)0x468737;
          iVar2 = FUN_00554ef3();
          iVar2 = *(int *)(iVar2 + 4);
          if (*(int *)(unaff_EBP + -0x20) != 0) {
            piStack_60 = (int *)0x0;
            puStack_64 = (undefined1 *)0x46874f;
            FUN_00449913();
          }
          iVar3 = *(int *)(unaff_EBP + 0x10);
          if (iVar2 != 0) {
            if ((*(int *)(iVar3 + 0x1c) < 0) || (1000 < *(int *)(iVar3 + 0x1c))) goto LAB_004689f8;
            piStack_60 = (int *)0x46877e;
            piStack_60 = (int *)FUN_0045e2eb();
            puStack_64 = (undefined1 *)0x468786;
            iVar2 = FUN_005540b6();
            if (iVar2 != 0) {
              iVar3 = *(int *)(unaff_EBP + 0x10);
              if ((*(int *)(iVar3 + 0x24) < 0) || (99 < *(int *)(iVar3 + 0x24))) {
                *(undefined4 *)(unaff_EBP + -0x10) = 5;
              }
              else {
                piStack_60 = (int *)0x4687ad;
                iVar2 = FUN_0045e2eb();
                iVar5 = iVar2 / 1000000;
                iVar3 = *(int *)(unaff_EBP + 0x10);
                if (((((iVar5 == 1) || (iVar5 < 2)) || (iVar5 < 5)) ||
                    ((iVar5 != 5 || (iVar2 / 10000 != 500)))) || (*(int *)(iVar3 + 0x28) == 0)) {
                  if (100 < *(int *)(iVar3 + 0x50)) {
                    *(undefined4 *)(unaff_EBP + -0x10) = 0x12;
                  }
                }
                else {
                  *(undefined4 *)(unaff_EBP + -0x10) = 7;
                }
              }
              goto LAB_0046897e;
            }
            *(undefined4 *)(unaff_EBP + -0x10) = 4;
            goto LAB_0046897b;
          }
        }
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        goto LAB_0046897e;
      }
    }
  }
LAB_0046897b:
  iVar3 = *(int *)(unaff_EBP + 0x10);
LAB_0046897e:
  piStack_60 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_60 != (int *)0x0) {
    puStack_64 = (undefined1 *)0x46898f;
    (**(code **)(*piStack_60 + 8))();
    iVar3 = *(int *)(unaff_EBP + 0x10);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar3 != 0) {
    piStack_60 = (int *)0x0;
    puStack_64 = (undefined1 *)0x4689a2;
    FUN_0045e794();
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
  }
  piStack_60 = *(int **)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_60 != (int *)0x0) {
    puStack_64 = (undefined1 *)0x4689b6;
    (**(code **)(*piStack_60 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x10);
}


