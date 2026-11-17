/* FUN_0071449a - 0x0071449a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071449a(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar6;
  int unaff_EBP;
  int iStack_84;
  undefined4 *puStack_80;
  int *piStack_7c;
  undefined4 uStack_78;
  int *piStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int *piStack_64;
  int *piStack_60;
  
  FUN_00879bb8();
  piStack_60 = *(int **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  piStack_64 = (int *)0x7144b7;
  FUN_0081622a();
  piStack_60 = (int *)(unaff_EBP + 8);
  piStack_64 = (int *)0x7144c2;
  FUN_00448dc6();
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar5 = *(int *)(extraout_ECX + 0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(int *)(unaff_EBP + -0x1c) = iVar5;
  if (iVar5 != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0x2b;
    iVar5 = extraout_ECX;
    while( true ) {
      if (iVar6 == *(int *)(iVar5 + 0x8c)) {
        if (*(int *)(unaff_EBP + 8) == 0) {
          piStack_60 = (int *)0x80004003;
          piStack_64 = (int *)0x714509;
          FUN_00878dfb();
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        piStack_60 = (int *)0xffbbc9d9;
        piStack_64 = (int *)0x14;
        iStack_68 = 0xeb;
        uStack_6c = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_70 = 0x14;
        uStack_78 = 0x714526;
        piStack_74 = piVar4;
        iVar3 = (**(code **)(*piVar4 + 0x8c))();
        if (iVar3 < 0) {
          piStack_60 = (int *)&DAT_00963cc8;
          uStack_6c = 0x714536;
          iStack_68 = iVar3;
          piStack_64 = piVar4;
          FUN_00878e09();
        }
      }
      if (iVar6 == *(int *)(iVar5 + 0x88)) {
        if (*(int *)(unaff_EBP + 8) == 0) {
          piStack_60 = (int *)0x80004003;
          piStack_64 = (int *)0x71454e;
          FUN_00878dfb();
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        piStack_60 = (int *)0xff5b7b9e;
        piStack_64 = (int *)0x14;
        iStack_68 = 0xeb;
        uStack_6c = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_70 = 0x14;
        uStack_78 = 0x71456b;
        piStack_74 = piVar4;
        iStack_68 = (**(code **)(*piVar4 + 0x8c))();
        if (iStack_68 < 0) {
          piStack_60 = (int *)&DAT_00963cc8;
          uStack_6c = 0x71457b;
          piStack_64 = piVar4;
          FUN_00878e09();
        }
      }
      piStack_60 = (int *)0x3;
      piStack_64 = (int *)0xff;
      iStack_68 = 0x71458a;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 8);
      uVar1 = *(undefined4 *)(iVar5 + 0x84);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar4 == (int *)0x0) {
        piStack_60 = (int *)0x80004003;
        piStack_64 = (int *)0x7145a5;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar5 = *piVar4;
      uStack_6c = *(undefined4 *)(unaff_EBP + -0x3c);
      iStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
      piStack_64 = *(int **)(unaff_EBP + -0x34);
      piStack_60 = *(int **)(unaff_EBP + -0x30);
      iVar6 = *(int *)(unaff_EBP + -0x10);
      piStack_74 = (int *)(iVar6 + 5);
      uStack_78 = 0x14;
      *(int **)(unaff_EBP + -0x24) = piVar4;
      puStack_80 = (undefined4 *)0x7145ca;
      piStack_7c = piVar4;
      iStack_70 = uVar1;
      iVar5 = (**(code **)(iVar5 + 0x80))();
      if (iVar5 < 0) {
        puStack_80 = (undefined4 *)&DAT_00963cc8;
        iStack_84 = *(int *)(unaff_EBP + -0x24);
        FUN_00878e09(iVar5);
      }
      puStack_80 = (undefined4 *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_84 = 0x7145e9;
      puStack_80 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_80 < 0) {
        iStack_84 = 0x7145f4;
        FUN_00878dfb();
      }
      puVar2 = *(undefined4 **)(unaff_EBP + -0x1c);
      puStack_80 = (undefined4 *)*puVar2;
      iVar5 = *(int *)((-(uint)(puVar2 != (undefined4 *)0x0) & (uint)(puVar2 + -4)) + 4);
      iStack_84 = unaff_EBP + -0x28;
      *(uint *)(unaff_EBP + -0x1c) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
      puStack_80 = (undefined4 *)FUN_0045a1d8();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_84 = 0x714631;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_84 = extraout_ECX_00;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        puStack_80 = (undefined4 *)(*(int *)(unaff_EBP + -0x28) + -0xc);
        iStack_84 = 0x714645;
        FUN_00434e38();
        iStack_84 = (int)puStack_80;
      }
      puStack_80 = (undefined4 *)0xda;
      *(int **)(unaff_EBP + -0x24) = &iStack_84;
      FUN_007d4a9a(&iStack_84,1);
      FUN_007d3a22(unaff_EBP + -0x14);
      puStack_80 = &DAT_00980690;
      iStack_84 = 0x714675;
      FUN_00403191();
      puStack_80 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_84 = 0x714682;
      FUN_00403191();
      puStack_80 = (undefined4 *)(unaff_EBP + -0x5c);
      iStack_84 = unaff_EBP + -0x4c;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_007d4a9a(unaff_EBP + -0x2c,1);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_68 = 0x7146a6;
      iStack_68 = FUN_00449749();
      uStack_6c = 0x7146af;
      iStack_70 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_6c;
      piStack_74 = (int *)0x7146bb;
      uStack_6c = extraout_ECX_01;
      FUN_00448a17();
      iStack_70 = iVar6 + 4;
      piStack_74 = (int *)0x20;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_78 = 0x7146cd;
      FUN_004115d9();
      uStack_78 = 0x7146d4;
      FUN_00448e3a();
      piStack_60 = *(int **)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piStack_60 != (int *)0x0) {
        piStack_64 = (int *)0x7146e5;
        (**(code **)(*piStack_60 + 8))();
      }
      piStack_60 = (int *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_64 = (int *)0x7146f2;
      piStack_60 = (int *)FUN_00402bc3();
      if ((int)piStack_60 < 0) {
        piStack_64 = (int *)0x7146fd;
        FUN_00878dfb();
      }
      piStack_60 = (int *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_64 = (int *)0x71470a;
      piStack_60 = (int *)FUN_00402bc3();
      if ((int)piStack_60 < 0) {
        piStack_64 = (int *)0x714715;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      *(int *)(unaff_EBP + -0x10) = iVar6 + 0x14;
      if (*(int *)(unaff_EBP + -0x1c) == 0) break;
      iVar5 = *(int *)(unaff_EBP + -0x20);
      iVar6 = *(int *)(unaff_EBP + -0x18);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_60 = (int *)0x714734;
  FUN_00414ebb();
  piStack_60 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_60 != (int *)0x0) {
    piStack_64 = (int *)0x714745;
    (**(code **)(*piStack_60 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


