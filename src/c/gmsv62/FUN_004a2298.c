/* FUN_004a2298 - 0x004a2298 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a2298(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int unaff_EBP;
  int iStack_3c;
  undefined4 local_30;
  
  FUN_00879bb8();
  local_30 = 0x10;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar1 = FUN_005265f8();
  if (iVar1 == 0) {
    local_30 = 1;
    iVar1 = FUN_005265f8();
    if ((iVar1 == 0) &&
       (iVar1 = *(int *)(unaff_EBP + 0x10), *(undefined4 *)(unaff_EBP + 0x10) = 0, iVar1 == 0))
    goto LAB_004a22e0;
  }
  *(undefined4 *)(unaff_EBP + 0x10) = 1;
LAB_004a22e0:
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
  }
  *(undefined4 **)(unaff_EBP + 0xc) = &local_30;
  local_30 = 0;
  FUN_00414f8b();
  (**(code **)(*extraout_ECX + 0x20))();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_3c = 0x4a2315;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_3c = 0x4a2325;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + 0xc) = &iStack_3c;
  FUN_00448a17(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0044974c();
  uVar2 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  iStack_3c = 0x4a2356;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_3c = 0x4a2361;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) < 0) {
    iStack_3c = 0x4a2375;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_3c = unaff_EBP + -0x2c;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_3c = 0x4a238b;
      FUN_00878dfb();
    }
    iStack_3c = extraout_ECX[0x12];
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0045e053(unaff_EBP + 8,0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_3c = 0x4a23af;
    uVar2 = FUN_00449713();
    *(int **)(unaff_EBP + 0xc) = &iStack_3c;
    FUN_00448a17(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0044974c();
    iVar1 = FUN_00448ebb();
    extraout_ECX[0x16] = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_3c = 0x4a23e9;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_3c = 0x4a23f4;
      FUN_00878dfb();
    }
    if (extraout_ECX[0x13] == 0) {
      *(undefined4 *)(unaff_EBP + 8) = 1;
    }
    else {
      iStack_3c = 0x4a2404;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      iStack_3c = unaff_EBP + -0x2c;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        iStack_3c = 0x4a241a;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      iVar1 = extraout_ECX[0x12];
      iStack_3c = iVar1 + extraout_ECX[0x13];
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_0045e053(unaff_EBP + 0xc,iVar1);
      *(undefined4 *)(unaff_EBP + -0x14) = 3;
      *(undefined4 *)(unaff_EBP + -4) = 7;
      iStack_3c = 0x4a2453;
      uVar2 = FUN_00449713();
      *(int **)(unaff_EBP + 8) = &iStack_3c;
      iStack_3c = extraout_ECX_00;
      FUN_00448a17(uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 7;
      FUN_0044974c();
      uVar2 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + 8) = uVar2;
    }
    *(undefined4 *)(unaff_EBP + -4) = 6;
    if ((*(byte *)(unaff_EBP + -0x14) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
      iStack_3c = 0x4a24a8;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_3c = 0x4a24b3;
        FUN_00878dfb();
      }
    }
    iVar5 = extraout_ECX[0x16];
    iVar1 = iVar5 + *(int *)(unaff_EBP + 8);
  }
  else {
    iStack_3c = 0x4a24cb;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_3c = unaff_EBP + -0x2c;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_3c = 0x4a24e1;
      FUN_00878dfb();
    }
    iStack_3c = extraout_ECX[0x12] + *(int *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_0045e053(unaff_EBP + 0xc,0);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_3c = 0x4a2509;
    uVar2 = FUN_00449713();
    *(int **)(unaff_EBP + 8) = &iStack_3c;
    FUN_00448a17(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_0044974c();
    iVar1 = FUN_00448ebb();
    extraout_ECX[0x16] = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_3c = 0x4a2543;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_3c = 0x4a254e;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + 8) = 1;
    iStack_3c = 0x4a255f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_3c = unaff_EBP + -0x2c;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_3c = 0x4a2575;
      FUN_00878dfb();
    }
    iStack_3c = extraout_ECX[0x12];
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0045e053(unaff_EBP + -0x14,0);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_3c = 0x4a2599;
    uVar2 = FUN_00449713();
    *(int **)(unaff_EBP + 0xc) = &iStack_3c;
    FUN_00448a17(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_0044974c();
    uVar2 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_3c = 0x4a25d3;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_3c = 0x4a25de;
      FUN_00878dfb();
    }
    iStack_3c = 0x4a25e8;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_3c = unaff_EBP + -0x2c;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_3c = 0x4a25fe;
      FUN_00878dfb();
    }
    iVar5 = extraout_ECX[0x16];
    iStack_3c = extraout_ECX[0x13] + extraout_ECX[0x12];
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0045e053(unaff_EBP + -0x18,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_3c = 0x4a262a;
    uVar2 = FUN_00449713();
    *(int **)(unaff_EBP + -0x14) = &iStack_3c;
    FUN_00448a17(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_0044974c();
    iVar3 = FUN_00448ebb();
    iVar1 = iVar5 + 1;
    if (iVar5 + 1 < iVar3) {
      iVar1 = iVar3;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_3c = 0x4a2667;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_3c = 0x4a2672;
      FUN_00878dfb();
    }
    iVar5 = *(int *)(unaff_EBP + 0xc);
  }
  iVar3 = extraout_ECX[0x19];
  if (iVar3 + extraout_ECX[0x18] < iVar1) {
    if (iVar1 < *(int *)(unaff_EBP + -0x1c)) {
      iVar4 = extraout_ECX[0x1f] << 2;
    }
    else {
      iVar4 = 0;
    }
    extraout_ECX[0x18] = (iVar4 - iVar3) + iVar1;
  }
  if (iVar5 < extraout_ECX[0x18]) {
    iVar5 = iVar5 + extraout_ECX[0x1f] * -4;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    extraout_ECX[0x18] = iVar5;
  }
  iVar1 = extraout_ECX[0x16];
  if (iVar3 + extraout_ECX[0x18] < iVar1 + *(int *)(unaff_EBP + 8)) {
    extraout_ECX[0x18] = (iVar1 - iVar3) + *(int *)(unaff_EBP + 8);
  }
  if (iVar1 < extraout_ECX[0x18]) {
    extraout_ECX[0x18] = iVar1;
  }
  iStack_3c = 0;
  FUN_0049fb9d(iVar1 - extraout_ECX[0x18]);
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    extraout_ECX[0x17] = extraout_ECX[0x12];
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


