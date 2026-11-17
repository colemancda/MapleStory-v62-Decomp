/* FUN_004b2768 - 0x004b2768 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004b2768(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_58 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_5c = *(undefined4 *)(extraout_ECX + 0x60);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_60 = 0x4b2792;
  FUN_004b26c8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar4 = *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar4 == 0) {
    puStack_58 = (undefined4 *)0xa2f;
    iStack_5c = unaff_EBP + -0x24;
    iStack_60 = 0x4b28bf;
    puVar1 = (undefined4 *)FUN_00679d86();
    iStack_5c = *puVar1;
    puStack_58 = *(undefined4 **)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_60 = unaff_EBP + -0x14;
    iStack_64 = 0x4b28d2;
    piVar2 = (int *)FUN_0041354c();
    iStack_5c = *piVar2;
    if (iStack_5c == 0) {
      puStack_58 = (undefined4 *)0x0;
    }
    else {
      puStack_58 = (undefined4 *)(*(uint *)(iStack_5c + -4) >> 1);
    }
    iStack_60 = 0x4b28ee;
    FUN_0046febf();
    iVar4 = *(int *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 2;
LAB_004b28f5:
    if (iVar4 != 0) {
      puStack_58 = (undefined4 *)(iVar4 + -0xc);
      iStack_5c = 0x4b2902;
      FUN_00403384();
    }
  }
  else {
    if (iVar4 == 1) {
      puStack_58 = (undefined4 *)0xa30;
      iStack_5c = unaff_EBP + -0x20;
      iStack_60 = 0x4b2874;
      puVar1 = (undefined4 *)FUN_00679d86();
      iStack_5c = *puVar1;
      puStack_58 = *(undefined4 **)(unaff_EBP + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_60 = unaff_EBP + -0x14;
      iStack_64 = 0x4b2887;
      piVar2 = (int *)FUN_0041354c();
      iStack_5c = *piVar2;
      if (iStack_5c == 0) {
        puStack_58 = (undefined4 *)0x0;
      }
      else {
        puStack_58 = (undefined4 *)(*(uint *)(iStack_5c + -4) >> 1);
      }
      iStack_60 = 0x4b28a3;
      FUN_0046febf();
      iVar4 = *(int *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      goto LAB_004b28f5;
    }
    if (iVar4 == 2) {
      puStack_58 = (undefined4 *)0xa31;
      iStack_5c = unaff_EBP + -0x1c;
      iStack_60 = 0x4b2826;
      puVar1 = (undefined4 *)FUN_00679d86();
      iStack_5c = *puVar1;
      puStack_58 = *(undefined4 **)(unaff_EBP + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_60 = unaff_EBP + -0x14;
      iStack_64 = 0x4b2839;
      piVar2 = (int *)FUN_0041354c();
      iStack_5c = *piVar2;
      if (iStack_5c == 0) {
        puStack_58 = (undefined4 *)0x0;
      }
      else {
        puStack_58 = (undefined4 *)(*(uint *)(iStack_5c + -4) >> 1);
      }
      iStack_60 = 0x4b2855;
      FUN_0046febf();
      iVar4 = *(int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      goto LAB_004b28f5;
    }
    if (iVar4 != 3) {
      puVar1 = *(undefined4 **)(unaff_EBP + 8);
      *puVar1 = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      goto LAB_004b29d9;
    }
    puStack_58 = (undefined4 *)0xa32;
    iStack_5c = unaff_EBP + 0xc;
    iStack_60 = 0x4b27d3;
    puVar1 = (undefined4 *)FUN_00679d86();
    iStack_5c = *puVar1;
    puStack_58 = *(undefined4 **)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_60 = unaff_EBP + -0x14;
    iStack_64 = 0x4b27e6;
    piVar2 = (int *)FUN_0041354c();
    iStack_5c = *piVar2;
    if (iStack_5c == 0) {
      puStack_58 = (undefined4 *)0x0;
    }
    else {
      puStack_58 = (undefined4 *)(*(uint *)(iStack_5c + -4) >> 1);
    }
    iStack_60 = 0x4b2802;
    FUN_0046febf();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_58 = (undefined4 *)0x4b280e;
    FUN_00402676();
  }
  puStack_58 = &DAT_00980690;
  iStack_5c = 0x4b2911;
  FUN_00403191();
  puStack_58 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_5c = 0x4b291e;
  FUN_00403191();
  puStack_58 = (undefined4 *)0x0;
  iStack_5c = 0;
  iStack_60 = unaff_EBP + -0x44;
  iStack_64 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_68 = 0x4b2934;
  uVar3 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_68;
  FUN_004033a1(uVar3);
  iVar4 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_60 = 0x4b2966;
  iVar4 = FUN_004032b4();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + 0x10) = iVar4;
  *puVar1 = 0;
  if (iVar4 != 0) {
    puStack_58 = (undefined4 *)(unaff_EBP + 0x10);
    iStack_5c = 0x4b297d;
    puStack_58 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_58 < 0) && (puStack_58 != (undefined4 *)0x80004002)) {
      iStack_5c = 0x4b298e;
      FUN_00878dfb();
    }
  }
  puStack_58 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_5c = 0x4b299e;
  puStack_58 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_58 < 0) {
    iStack_5c = 0x4b29a9;
    FUN_00878dfb();
  }
  puStack_58 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_5c = 0x4b29b6;
  puStack_58 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_58 < 0) {
    iStack_5c = 0x4b29c1;
    FUN_00878dfb();
  }
  puStack_58 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_5c = 0x4b29ce;
  puStack_58 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_58 < 0) {
    iStack_5c = 0x4b29d9;
    FUN_00878dfb();
  }
LAB_004b29d9:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_58 = (undefined4 *)0x4b29e5;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_58 = (undefined4 *)0x4b29f0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


