/* ptr_007808e8 - 0x007808e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007808e8(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBP;
  uint uVar4;
  uint uStack_10;
  int iStack_c;
  
  do {
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    FUN_004115d9();
    iVar3 = FUN_0040e48b();
    uVar4 = iVar3 - 0x48;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + -0x48;
    while( true ) {
      FUN_004115d9();
      iVar3 = FUN_0040e48b();
      if ((uint)(iVar3 + *(int *)(unaff_EBP + -0x20)) <= uVar4) break;
      iStack_c = 0x78093e;
      FUN_004295f1();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_c = 0x780958;
      FUN_0044974c();
      iStack_c = 0x78095f;
      iVar3 = FUN_004a2734();
      iStack_c = (iVar3 + 5) * *(int *)(unaff_EBP + -0x24) + 8;
      uStack_10 = uVar4;
      FUN_004115d9();
      FUN_00470739();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      uVar4 = uVar4 + 1;
    }
    iStack_c = 0x7809a3;
    FUN_004295f1();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_c = 0x7809bd;
    FUN_0044974c();
    iStack_c = 0x7809c4;
    iVar3 = FUN_004a2734();
    iStack_c = (iVar3 + 5) * *(int *)(unaff_EBP + -0x24) + 5;
    uStack_10 = 0x7809d7;
    FUN_004115d9();
    uStack_10 = 0x7809de;
    iVar3 = FUN_0040e48b();
    uStack_10 = iVar3 - 0x4b;
    FUN_004115d9();
    FUN_00470739();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    do {
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 4;
      if (5 < *(int *)(unaff_EBP + -0x18)) {
        FUN_004125e6();
        FUN_004497b5();
        FUN_004497b5();
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
    } while (**(int **)(unaff_EBP + -0x1c) == 0);
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_c = unaff_EBP + -0x58;
    uStack_10 = unaff_EBP - 0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_0085c53b(*(undefined4 *)(unaff_EBP + -0x18),unaff_EBP + -0x44,unaff_EBP + 8,
                 unaff_EBP + -0x54);
    iVar3 = FUN_007c00e8();
    *(int *)(unaff_EBP + -0x20) = iVar3;
    if (iVar3 == 0) {
      FUN_00424aee();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00424aee();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_c = 0x78080b;
      iStack_c = FUN_004458be();
      uStack_10 = 0x780814;
      uVar2 = FUN_00449713();
      *(uint **)(unaff_EBP + -0x48) = &uStack_10;
      uStack_10 = extraout_ECX_00;
      FUN_00448a17(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_0044974c();
      iVar3 = FUN_004a2734();
      iVar3 = (iVar3 + 5) * *(int *)(unaff_EBP + -0x24) + 5;
      uVar2 = 5;
      FUN_0044974c(5,iVar3);
      FUN_005c1d2c(uVar2,iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    else {
      FUN_00424aee();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00424aee();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_c = 0x7806e7;
      iStack_c = FUN_004458be();
      uStack_10 = 0x7806f0;
      uVar2 = FUN_00449713();
      *(uint **)(unaff_EBP + -0x48) = &uStack_10;
      uStack_10 = extraout_ECX;
      FUN_00448a17(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_0044974c();
      iVar3 = FUN_004a2734();
      iVar3 = (iVar3 + 5) * *(int *)(unaff_EBP + -0x24) + 5;
      uVar2 = 5;
      FUN_0044974c(5,iVar3);
      FUN_005c1d2c(uVar2,iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      piVar1 = *(int **)(unaff_EBP + -0x20);
      iVar3 = (**(code **)(*piVar1 + 8))();
      if (iVar3 == 0) {
        *(int *)(unaff_EBP + -0x20) = (piVar1[0x35c] << 6) / 100;
      }
      else {
        iVar3 = *(int *)(unaff_EBP + -0x3c);
        FUN_00455c59();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_c = 0x78078d;
        uVar2 = FUN_0045f084();
        iStack_c = *(undefined4 *)(iVar3 + 0x2104);
        uStack_10 = iVar3 + 0x20fc;
        *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
        iVar3 = FUN_00413367();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        *(int *)(unaff_EBP + -0x20) = ((int)*(short *)(unaff_EBP + -0x20) << 6) / iVar3;
        FUN_0045e4a2();
      }
    }
    iStack_c = 0x780894;
    FUN_004295f1();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_c = 0x7808ae;
    FUN_0044974c();
    iStack_c = 0x7808b5;
    iVar3 = FUN_004a2734();
    iStack_c = (iVar3 + 5) * *(int *)(unaff_EBP + -0x24) + 8;
    uStack_10 = 0x7808c8;
    FUN_004115d9();
    uStack_10 = 0x7808cf;
    iVar3 = FUN_0040e48b();
    uStack_10 = iVar3 - 0x48;
    FUN_004115d9();
    FUN_00470739();
  } while( true );
}


