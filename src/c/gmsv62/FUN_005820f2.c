/* FUN_005820f2 - 0x005820f2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005820f2(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_44 = *(undefined4 **)(unaff_EBP + 8);
  uStack_48 = 0x582110;
  FUN_0081622a();
  puStack_44 = (undefined4 *)(unaff_EBP + 8);
  uStack_48 = 0x58211b;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_44 = &DAT_00980690;
  uStack_48 = 0x58212c;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0xc4);
  piStack_60 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_60 == (int *)0x0) {
    puStack_44 = (undefined4 *)0x80004003;
    uStack_48 = 0x58214a;
    FUN_00878dfb();
    piStack_60 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piStack_60;
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_4c = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_58 = 0x58;
  uStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_5c = 7;
  *(int **)(unaff_EBP + -0x18) = piStack_60;
  puStack_44 = *(undefined4 **)(unaff_EBP + -0x34);
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    iStack_68 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_70 = 0x58217e;
    iStack_6c = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_68 = 0x58218b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x582196;
    FUN_00878dfb();
  }
  iStack_68 = 0x5821a4;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_68 = 0x5821b1;
  FUN_00403191();
  iStack_68 = extraout_ECX + 0x94;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_6c = 0x5821c7;
  iVar1 = FUN_00413367();
  if (iVar1 < 9) {
    iStack_68 = unaff_EBP + -0x1c;
    iStack_6c = 0x5821f9;
    uVar2 = FUN_007d4a9a();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 5;
  }
  else {
    iStack_68 = unaff_EBP + -0x20;
    iStack_6c = 0x5821dc;
    uVar2 = FUN_007d4a9a();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x18) = &piStack_60;
  iStack_68 = unaff_EBP + -0x40;
  iStack_6c = 0x582223;
  iStack_6c = FUN_00449749();
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x18);
  uVar2 = FUN_00582658();
  uVar2 = FUN_00412335(uVar2);
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_70;
  FUN_004033a1(uVar2);
  uVar3 = 0x59;
  uVar2 = 0x32;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  FUN_004115d9(0x32,0x59);
  FUN_00448e3a(uVar2,uVar3);
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_004497b5();
  }
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_004497b5();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_68 = 0x58228e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x582299;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_68 = 0x5822a6;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x5822b1;
    FUN_00878dfb();
  }
  iStack_68 = 0x5822ba;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_68 = 0x5822c7;
  FUN_00403191();
  iStack_68 = extraout_ECX + 0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_6c = 0x5822dd;
  iVar1 = FUN_00413367();
  if (iVar1 < 9) {
    iStack_68 = unaff_EBP + -0x1c;
    iStack_6c = 0x58230c;
    uVar2 = FUN_007d4a9a();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    *(undefined4 *)(unaff_EBP + -4) = 10;
  }
  else {
    iStack_68 = unaff_EBP + -0x18;
    iStack_6c = 0x5822f2;
    uVar2 = FUN_007d4a9a();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 9;
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x20) = &piStack_60;
  iStack_68 = unaff_EBP + -0x40;
  iStack_6c = 0x582333;
  iStack_6c = FUN_00449749();
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x20);
  uVar2 = FUN_0058266d();
  uVar2 = FUN_00412335(uVar2);
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_70;
  FUN_004033a1(uVar2);
  uVar3 = 0x6d;
  uVar2 = 0x32;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  FUN_004115d9(0x32,0x6d);
  FUN_00448e3a(uVar2,uVar3);
  if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    FUN_004497b5();
  }
  *(undefined4 *)(unaff_EBP + -4) = 8;
  if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_68 = 0x582396;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_68 = 0x5823a3;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x5823ae;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_68 = 0x5823bb;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x5823c6;
    FUN_00878dfb();
  }
  iStack_68 = 0x5823cf;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_68 = 0x5823dc;
  FUN_00403191();
  iStack_68 = extraout_ECX + 0xac;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_6c = 0x5823f2;
  iVar1 = FUN_00413367();
  if (iVar1 < 9) {
    iStack_68 = unaff_EBP + -0x1c;
    iStack_6c = 0x582421;
    uVar2 = FUN_007d4a9a();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x20;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
  }
  else {
    iStack_68 = unaff_EBP + -0x18;
    iStack_6c = 0x582407;
    uVar2 = FUN_007d4a9a();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x20) = &piStack_60;
  iStack_68 = unaff_EBP + -0x40;
  iStack_6c = 0x582448;
  iStack_6c = FUN_00449749();
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x20);
  uVar2 = FUN_00582682();
  uVar2 = FUN_00412335(uVar2);
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_70;
  FUN_004033a1(uVar2);
  uVar3 = 0x81;
  uVar2 = 0x32;
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  FUN_004115d9(0x32,0x81);
  FUN_00448e3a(uVar2,uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xe;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_68 = 0x58249c;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_68 = 0x5824ba;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_68 = 0x5824c7;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x5824d2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_68 = 0x5824df;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x5824ea;
    FUN_00878dfb();
  }
  iStack_68 = 0x5824f6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_68 = unaff_EBP + -0x40;
  iStack_6c = 0x582500;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_68 = 0x58250c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_68 = 0x582516;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_68 = unaff_EBP + -0x30;
  iStack_6c = 0x582520;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_68 = 0x58252c;
    FUN_00878dfb();
  }
  iStack_68 = extraout_ECX + 0xb8;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_6c = 0x582542;
  iVar1 = FUN_00413367();
  if (iVar1 < 9) {
    iStack_68 = unaff_EBP + -0x1c;
    iStack_6c = 0x582570;
    FUN_007d4a9a();
    *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 0x80;
    *(undefined4 *)(unaff_EBP + -4) = 0x14;
  }
  else {
    iStack_68 = unaff_EBP + -0x18;
    iStack_6c = 0x582557;
    FUN_007d4a9a();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x40;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x20) = &piStack_60;
  iStack_68 = unaff_EBP + -0x30;
  iStack_6c = 0x582595;
  iStack_6c = FUN_00449749();
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x20);
  uVar2 = FUN_00582697();
  uVar2 = FUN_00412335(uVar2);
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_70;
  FUN_004033a1(uVar2);
  uVar3 = 0x95;
  uVar2 = 0x32;
  *(undefined4 *)(unaff_EBP + -4) = 0x14;
  FUN_004115d9(0x32,0x95);
  FUN_00448e3a(uVar2,uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0x13;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x80) != 0) {
    *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) & 0x7f;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_68 = 0x5825e9;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x12;
  if (((*(byte *)(unaff_EBP + -0x10) & 0x40) != 0) && (*(int **)(unaff_EBP + -0x18) != (int *)0x0))
  {
    iStack_68 = 0x582603;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_68 = 0x582610;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x58261b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_68 = 0x582628;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x582633;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_68 = 0x582644;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


