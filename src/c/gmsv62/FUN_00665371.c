/* FUN_00665371 - 0x00665371 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00665371(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined *puVar6;
  
  FUN_00879bb8();
  FUN_006f54f2();
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_004245d2(unaff_EBP + -0x40,0x10);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  timeGetTime();
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b050);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x14) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x20) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x2c) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097b050);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b040);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x44) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x50) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x5c) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097b040);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b030);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x74) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x80) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x8c) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097b030);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b020);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xa4) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xb0) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0xbc) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097b020);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b010);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xd4) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xe0) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0xec) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 8;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097b010);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b000);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x104) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x110) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x11c) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 10;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097b000);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097aff0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x134) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x140) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x14c) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097aff0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b110);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x164) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x170) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x17c) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097b110);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b100);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x194) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x1a0) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x1ac) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097b100);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097afe0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x1b8) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x1c4) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x1d0) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x12;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097afe0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097afd0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x1dc) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x1e8) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 500) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x14;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097afd0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097afc0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x20c) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x218) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x224) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x16;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097afc0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097afb0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x230) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x23c) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x248) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x18;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097afb0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097afa0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x254) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x260) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x26c) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x1a;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097afa0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097af90);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x278) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x284) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x290) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x1c;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097af90);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097af80);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x29c) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x2a8) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x2b4) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x1e;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097af80);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097af70);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x2c0) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x2cc) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x2d8) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x20;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097af70);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b0f0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x2e4) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x2f0) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x2fc) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x22;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097b0f0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097af60);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x308) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x314) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 800) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x24;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097af60);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097af50);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x32c) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x338) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x344) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x26;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097af50);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097af40);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x350) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x35c) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x368) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x28;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097af40);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097af30);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x374) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x380) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x38c) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x2a;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097af30);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097af20);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x3a4) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x3b0) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(extraout_ECX + 0x3bc) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x2c;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      FUN_00670bd2(uVar3);
      FUN_006719ea(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_006f59d1(&DAT_0097af20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0067179c();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097af10);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668c15();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00668c33();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00668c51();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x2e;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097af10;
    FUN_00670b9e(&DAT_0097af10);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097af00);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668c6f();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00668c8d();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00668cab();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x30;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097af00;
    FUN_00670b9e(&DAT_0097af00);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097aef0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668cc9();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00668ce7();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00668d05();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x32;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097aef0;
    FUN_00670b9e(&DAT_0097aef0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097aee0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668d23();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00668d41();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00668d5f();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x34;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097aee0;
    FUN_00670b9e(&DAT_0097aee0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097aed0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668d7d();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00668d9b();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00668db9();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x36;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097aed0;
    FUN_00670b9e(&DAT_0097aed0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097aec0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668dd7();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00668df5();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00668e13();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x38;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097aec0;
    FUN_00670b9e(&DAT_0097aec0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097aeb0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668e31();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00668e4f();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00668e6d();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x3a;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097aeb0;
    FUN_00670b9e(&DAT_0097aeb0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b0e0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668e8b();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00668ea9();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00668ec7();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x3c;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097b0e0;
    FUN_00670b9e(&DAT_0097b0e0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097aea0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668ee5();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00668f03();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00668f21();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x3e;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097aea0;
    FUN_00670b9e(&DAT_0097aea0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b0d0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668f3f();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00668f5d();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00668f7b();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x40;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097b0d0;
    FUN_00670b9e(&DAT_0097b0d0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b0c0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668f99();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00668fb7();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00668fd5();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x42;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097b0c0;
    FUN_00670b9e(&DAT_0097b0c0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b0b0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00668ff3();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00669011();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_0066902f();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x44;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097b0b0;
    FUN_00670b9e(&DAT_0097b0b0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ae90);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_0066904d();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_0066906b();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00669089();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x46;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ae90;
    FUN_00670b9e(&DAT_0097ae90);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b0a0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_006690a7();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_006690c5();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_006690e3();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x48;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097b0a0;
    FUN_00670b9e(&DAT_0097b0a0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ae80);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00669101();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_0066911f();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_0066913d();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x4a;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ae80;
    FUN_00670b9e(&DAT_0097ae80);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ae70);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_0066915b();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00669179();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00669197();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x4c;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ae70;
    FUN_00670b9e(&DAT_0097ae70);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ae60);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_006691b5();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_006691d3();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_006691f1();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x4e;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ae60;
    FUN_00670b9e(&DAT_0097ae60);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097b090);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_0066920f();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_0066922d();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_0066924b();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x50;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097b090;
    FUN_00670b9e(&DAT_0097b090);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ae50);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00669269();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00669287();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_006692a5();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x52;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x52;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ae50;
    FUN_00670b9e(&DAT_0097ae50);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ae40);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_006692c3();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_006692e1();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_006692ff();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x54;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x55;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x54;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ae40;
    FUN_00670b9e(&DAT_0097ae40);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ae30);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_0066931d();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_0066933b();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00669359();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x56;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ae30;
    FUN_00670b9e(&DAT_0097ae30);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ae20);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00669377();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00669395();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_006693b3();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x58;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x58;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ae20;
    FUN_00670b9e(&DAT_0097ae20);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ae10);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_006693d1();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_006693ef();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_0066940d();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x5a;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ae10;
    FUN_00670b9e(&DAT_0097ae10);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ae00);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_0066942b();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00669449();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00669467();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x5c;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ae00;
    FUN_00670b9e(&DAT_0097ae00);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097adf0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00669485();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_006694a3();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_006694c1();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x5e;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097adf0;
    FUN_00670b9e(&DAT_0097adf0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ade0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_006694df();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_006694fd();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_0066951b();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x60;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x61;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ade0;
    FUN_00670b9e(&DAT_0097ade0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097add0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00669539();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00669575();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00669557();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x62;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 99;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x62;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097add0;
    FUN_00670b9e(&DAT_0097add0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097adc0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00669593();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_006695b1();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_006695cf();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 100;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x65;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 100;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097adc0;
    FUN_00670b9e(&DAT_0097adc0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097adb0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_006695ed();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_0066960b();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00669629();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x66;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x67;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x66;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097adb0;
    FUN_00670b9e(&DAT_0097adb0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ada0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00669647();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00669665();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00669683();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x68;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x69;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x68;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ada0;
    FUN_00670b9e(&DAT_0097ada0);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ad90);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_006696a1();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_006696bf();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_006696dd();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x6a;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x6b;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x6a;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ad90;
    FUN_00670b9e(&DAT_0097ad90);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ad80);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_006696fb();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00669719();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00669737();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x6c;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x6d;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x6c;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ad80;
    FUN_00670b9e(&DAT_0097ad80);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ad70);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00669773();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00669791();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_006697af();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x6e;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x6f;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x6e;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ad70;
    FUN_00670b9e(&DAT_0097ad70);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ad60);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_006697eb();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00669809();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00669827();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x70;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x71;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x70;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ad60;
    FUN_00670b9e(&DAT_0097ad60);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ad50);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_00669845();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_00669863();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_00669881();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x72;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x72;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ad50;
    FUN_00670b9e(&DAT_0097ad50);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_006f5b1a(unaff_EBP + -0x30,&DAT_0097ad40);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00424561();
    FUN_0066989f();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_006698bd();
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    FUN_006698db();
    FUN_00670b97();
    *(undefined4 *)(unaff_EBP + -4) = 0x74;
    iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_00402605(0x20);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x75;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006698f9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x74;
      FUN_00670bd2(uVar3);
      FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x20);
    }
    iVar4 = FUN_00670b9e();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6 = &DAT_0097ad40;
    FUN_00670b9e(&DAT_0097ad40);
    FUN_006f59d1(puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00670b51();
  }
  FUN_0042452b();
  FUN_00669755();
  FUN_0042452b();
  FUN_006697cd();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x958;
  do {
    *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + -0x18);
    uVar3 = FUN_00670af0(unaff_EBP + -0x50,*(undefined4 *)(unaff_EBP + -0x14));
    FUN_006f5b1a(unaff_EBP + -0x60,uVar3);
    cVar2 = FUN_006f5bb6();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x18))(uVar1);
      puVar5 = (undefined4 *)FUN_005d0ba9();
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
      uVar3 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x10))();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
      FUN_00670b97();
      *(undefined4 *)(unaff_EBP + -4) = 0x76;
      iVar4 = FUN_00671996(unaff_EBP + -0x10,unaff_EBP + -0x28);
      if (iVar4 == 0) {
        iVar4 = FUN_00402605(0x20);
        *(int *)(unaff_EBP + -0x1c) = iVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x77;
        if (iVar4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_006698f9();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x76;
        FUN_00670bd2(uVar3);
        FUN_00670c6f(unaff_EBP + -0x10,unaff_EBP + -0x28);
      }
      iVar4 = FUN_00670b9e();
      uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
      uVar3 = FUN_00670af0(unaff_EBP + -0x70,uVar3);
      FUN_00670b9e(uVar3);
      FUN_006f59d1(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00670b51();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
  } while (*(int *)(unaff_EBP + -0x14) < 6);
  FUN_006f5b1a(unaff_EBP + -0x80,&DAT_0097afd0);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    FUN_00668bf7();
    iVar4 = FUN_00668be2();
    if (iVar4 == 0) {
      FUN_00668be2();
      FUN_00668bf7();
    }
  }
  FUN_006f5512(unaff_EBP + -0x40,0x80);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


