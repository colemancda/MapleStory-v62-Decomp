/* FUN_004997c7 - 0x004997c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004997c7(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_9c;
  int iStack_98;
  int iStack_94;
  uint uStack_90;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar1 = *(undefined4 **)(unaff_EBP + 0x18);
  *(undefined4 *)(extraout_ECX + 0x28) = *puVar1;
  *(undefined4 *)(extraout_ECX + 0x58) = puVar1[9];
  uStack_90 = unaff_EBP + 0x18;
  iStack_94 = 0x4997ff;
  puVar2 = (undefined4 *)FUN_00679d86();
  iStack_94 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_90 = extraout_ECX + 0x4c;
  iStack_98 = 0x499811;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  uStack_90 = unaff_EBP + 0x18;
  iStack_94 = 0x49982f;
  puVar2 = (undefined4 *)FUN_00679d86();
  iStack_94 = *puVar2;
  uStack_90 = extraout_ECX + 0x50;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_98 = 0x499843;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  if (puVar1[6] == 0) {
    uStack_90 = 0x499869;
    FUN_00499fda();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uStack_90 = 0x49987d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    uStack_90 = unaff_EBP - 0x38;
    iStack_94 = 0x49988a;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      uStack_90 = 0x499896;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 3;
    *(undefined4 *)(unaff_EBP + -4) = 3;
  }
  uStack_90 = 0x4998ab;
  FUN_00403191();
  uStack_90 = puVar1[5];
  puStack_9c = puVar1 + 3;
  iStack_94 = puVar1[4];
  *(undefined4 *)(unaff_EBP + -4) = 4;
  *(int **)(unaff_EBP + 0x18) = &iStack_98;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_9c = (undefined4 *)0x4998d7;
  FUN_0044974c();
  puStack_9c = (undefined4 *)0x4998de;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_90 = 0x4998eb;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_90 = 0x4998f6;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    uStack_90 = 0x499910;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_90 = 0x49991b;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    uStack_90 = 0x499931;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_90 = 0x49993c;
      FUN_00878dfb();
    }
  }
  if (puVar1[6] == 0) {
    uStack_90 = 0x499956;
    FUN_00499fda();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    uStack_90 = 0x49996b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    uStack_90 = unaff_EBP - 0x38;
    iStack_94 = 0x499978;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      uStack_90 = 0x499984;
      FUN_00878dfb();
    }
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
    *(undefined4 *)(unaff_EBP + -4) = 7;
  }
  uStack_90 = 0x49999a;
  FUN_00403191();
  uStack_90 = puVar1[5] & 0xff8c8a8c | 0x8c8a8c;
  iStack_94 = puVar1[4];
  puStack_9c = puVar1 + 3;
  *(int **)(unaff_EBP + 0x18) = &iStack_98;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  iStack_98 = extraout_ECX_00;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_9c = (undefined4 *)0x4999cc;
  FUN_0044974c();
  puStack_9c = (undefined4 *)0x4999d3;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_90 = 0x4999e0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_90 = 0x4999eb;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    uStack_90 = 0x499a04;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_90 = 0x499a0f;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    uStack_90 = 0x499a26;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_90 = 0x499a31;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(extraout_ECX + 0x34) = 0;
  *(undefined4 *)(extraout_ECX + 0x38) = puVar1[10];
  *(undefined4 *)(extraout_ECX + 0x3c) = puVar1[1];
  *(undefined4 *)(extraout_ECX + 0x40) = puVar1[5];
  uStack_90 = 0x499a53;
  FUN_00414f8b();
  iVar3 = puVar1[7];
  if (iVar3 == 0) {
    uStack_90 = 0x499a64;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    uStack_90 = unaff_EBP - 0x38;
    iStack_94 = 0x499a72;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      uStack_90 = 0x499a7e;
      FUN_00878dfb();
    }
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
    *(undefined4 *)(unaff_EBP + -4) = 10;
    uStack_90 = 0x499a94;
    iStack_94 = FUN_00449713();
    *(uint **)(unaff_EBP + 0x18) = &uStack_90;
    iStack_98 = 0x499aa0;
    FUN_00448a17();
    *(undefined4 *)(unaff_EBP + -4) = 10;
    iStack_94 = 0x499aab;
    FUN_0044974c();
    iStack_94 = 0x499ab2;
    iVar3 = FUN_00448ebb();
    iVar3 = iVar3 + 0x14;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
    uStack_90 = 0x499acb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_90 = 0x499ad6;
      FUN_00878dfb();
    }
  }
  iVar3 = puVar1[8];
  if (iVar3 == 0) {
    iVar3 = puVar1[4] + 4;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(int *)(unaff_EBP + -0x18) = iVar3;
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX + 0x5c;
  do {
    uStack_90 = unaff_EBP - 0x20;
    iStack_94 = 0x499b0e;
    puVar4 = (uint *)FUN_00679d86();
    uStack_90 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_94 = unaff_EBP + -0x14;
    iStack_98 = 0x499b21;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00402676();
    uStack_90 = 0x499b3c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    uStack_90 = unaff_EBP - 0x58;
    iStack_94 = 0x499b4a;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      uStack_90 = 0x499b56;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_90 = 0x499b60;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    uStack_90 = unaff_EBP - 0x48;
    iStack_94 = 0x499b6e;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      uStack_90 = 0x499b7a;
      FUN_00878dfb();
    }
    uStack_90 = 0;
    iStack_94 = unaff_EBP + -0x58;
    iStack_98 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_9c = (undefined4 *)0x499b92;
    uVar5 = FUN_00411641();
    *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_9c;
    puStack_9c = extraout_ECX_01;
    FUN_004033a1(uVar5);
    iVar3 = unaff_EBP + -0x88;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_94 = 0x499bc7;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
    uStack_90 = 0x499bd6;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      uStack_90 = 0x499be7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_90 = 0x499bf7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_90 = 0x499c02;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_90 = 0x499c0f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_90 = 0x499c1a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_90 = 0x499c27;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_90 = 0x499c32;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + 1;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
  } while (*(int *)(unaff_EBP + 0x18) < 4);
  uStack_90 = *(uint *)(unaff_EBP + -0x18);
  iStack_94 = *(undefined4 *)(unaff_EBP + -0x1c);
  iStack_98 = *(int *)(unaff_EBP + 0x14);
  puStack_9c = *(undefined4 **)(unaff_EBP + 0x10);
  FUN_004b388f(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


