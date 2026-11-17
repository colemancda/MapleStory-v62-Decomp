/* FUN_0056941d - 0x0056941d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0056941d(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  int iVar4;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined1 *puStack_c0;
  undefined1 *puStack_bc;
  int *piStack_b8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  do {
    piStack_b8 = &DAT_00980690;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      puStack_bc = (undefined1 *)0x56945c;
      FUN_00403191();
      piStack_b8 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_bc = (undefined1 *)0x569469;
      FUN_00403191();
      piStack_b8 = (int *)0x0;
      puStack_bc = (undefined1 *)0x0;
      puStack_c0 = (undefined1 *)(unaff_EBP + -0x44);
      iStack_c4 = unaff_EBP + -100;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_c8;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_c8 = extraout_ECX_00;
      FUN_00679e4e(&uStack_c8,0x5cb);
      iVar4 = unaff_EBP + -0x84;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00405a1d(iVar4);
      FUN_00402660();
      FUN_00404a02(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_c0 = (undefined1 *)0x5694b6;
      uVar1 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar1;
      piStack_b8 = (int *)(unaff_EBP + -0x2c);
      puStack_bc = (undefined1 *)0x5694c5;
      piStack_b8 = (int *)FUN_00404b30();
      if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
        puStack_bc = (undefined1 *)0x5694d6;
        FUN_00878dfb();
      }
      piStack_b8 = (int *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      puStack_bc = (undefined1 *)0x5694e6;
      piStack_b8 = (int *)FUN_00402bc3();
      if ((int)piStack_b8 < 0) {
        puStack_bc = (undefined1 *)0x5694f1;
        FUN_00878dfb();
      }
      piStack_b8 = (int *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_bc = (undefined1 *)0x5694fe;
      piStack_b8 = (int *)FUN_00402bc3();
      if ((int)piStack_b8 < 0) {
        puStack_bc = (undefined1 *)0x569509;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_b8 = (int *)(unaff_EBP + -0x44);
    }
    else {
      puStack_bc = (undefined1 *)0x56951d;
      FUN_00403191();
      piStack_b8 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_bc = (undefined1 *)0x56952a;
      FUN_00403191();
      piStack_b8 = (int *)0x0;
      puStack_bc = (undefined1 *)0x0;
      puStack_c0 = (undefined1 *)(unaff_EBP + -0x74);
      iStack_c4 = unaff_EBP + -0x54;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_c8;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uStack_c8 = extraout_ECX_01;
      FUN_00679e4e(&uStack_c8,0x5cc);
      iVar4 = unaff_EBP + -0xa4;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00405a1d(iVar4);
      FUN_00402660();
      FUN_00404a02(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_c0 = (undefined1 *)0x569577;
      uVar1 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x30) = uVar1;
      piStack_b8 = (int *)(unaff_EBP + -0x30);
      puStack_bc = (undefined1 *)0x569586;
      piStack_b8 = (int *)FUN_00404b30();
      if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
        puStack_bc = (undefined1 *)0x569597;
        FUN_00878dfb();
      }
      piStack_b8 = (int *)(unaff_EBP + -0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_bc = (undefined1 *)0x5695a7;
      piStack_b8 = (int *)FUN_00402bc3();
      if ((int)piStack_b8 < 0) {
        puStack_bc = (undefined1 *)0x5695b2;
        FUN_00878dfb();
      }
      piStack_b8 = (int *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_bc = (undefined1 *)0x5695bf;
      piStack_b8 = (int *)FUN_00402bc3();
      if ((int)piStack_b8 < 0) {
        puStack_bc = (undefined1 *)0x5695ca;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_b8 = (int *)(unaff_EBP + -0x74);
    }
    puStack_bc = (undefined1 *)0x5695d7;
    piStack_b8 = (int *)FUN_00402bc3();
    if ((int)piStack_b8 < 0) {
      puStack_bc = (undefined1 *)0x5695e2;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    do {
      piStack_b8 = (int *)0x5695ed;
      FUN_0087a1b0();
      piStack_b8 = (int *)0x0;
      puStack_bc = (undefined1 *)0x0;
      iStack_c4 = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_c8 = 0x5695fa;
      puStack_c0 = &stack0xffffff4c;
      iStack_c4 = FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_c0;
      uStack_c8 = 0x569606;
      FUN_004033a1();
      iStack_c4 = unaff_EBP + -0x94;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_c8 = 0x569619;
      FUN_0040263d();
      uStack_c8 = 0x569620;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_c0 = (undefined1 *)0x56962b;
      uVar1 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
      piStack_b8 = (int *)(unaff_EBP + -0x28);
      puStack_bc = (undefined1 *)0x56963a;
      piStack_b8 = (int *)FUN_00404b30();
      if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
        puStack_bc = (undefined1 *)0x56964b;
        FUN_00878dfb();
      }
      piStack_b8 = (int *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puStack_bc = (undefined1 *)0x56965b;
      piStack_b8 = (int *)FUN_00402bc3();
      if ((int)piStack_b8 < 0) {
        puStack_bc = (undefined1 *)0x569666;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          piStack_b8 = (int *)0x80004003;
          puStack_bc = (undefined1 *)0x569678;
          FUN_00878dfb();
        }
        piStack_b8 = (int *)0x569680;
        uVar2 = FUN_0040cf4d();
        if (uVar2 <= *(uint *)(unaff_EBP + -0x10)) break;
        piStack_b8 = (int *)0x569697;
        puVar3 = (undefined4 *)FUN_0056abed();
        *puVar3 = *(undefined4 *)(unaff_EBP + -0x18);
        puVar3[1] = *(undefined4 *)(unaff_EBP + -0x1c);
        piStack_b8 = (int *)0x5696ac;
        FUN_0087a1b0();
        piStack_b8 = (int *)0x0;
        puStack_c0 = *(undefined1 **)(unaff_EBP + -0x10);
        iStack_c4 = 0x5696b8;
        puStack_bc = &stack0xffffff4c;
        puStack_c0 = (undefined1 *)FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_bc;
        iStack_c4 = 0x5696c4;
        FUN_004033a1();
        puStack_c0 = (undefined1 *)(unaff_EBP + -0xb4);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_c4 = 0x5696d7;
        FUN_0040263d();
        iStack_c4 = 0x5696de;
        puStack_bc = (undefined1 *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_c0 = (undefined1 *)0x5696e8;
        uVar1 = FUN_00412550();
        puVar3[2] = uVar1;
        puStack_c0 = (undefined1 *)(unaff_EBP + -0xb4);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_c4 = 0x5696fb;
        piStack_b8 = (int *)FUN_00402bc3();
        if ((int)piStack_b8 < 0) {
          puStack_bc = (undefined1 *)0x569708;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    } while (*(int *)(unaff_EBP + -0x1c) < 8);
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  } while (*(int *)(unaff_EBP + -0x18) < 2);
  piStack_b8 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_b8 != (int *)0x0) {
    puStack_bc = (undefined1 *)0x56973a;
    (**(code **)(*piStack_b8 + 8))();
  }
  piStack_b8 = *(int **)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_b8 != (int *)0x0) {
    puStack_bc = (undefined1 *)0x56974b;
    (**(code **)(*piStack_b8 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


