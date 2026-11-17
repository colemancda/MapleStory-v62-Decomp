/* FUN_00471777 - 0x00471777 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00471777(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int unaff_EBP;
  undefined1 auStack_74 [4];
  int iStack_70;
  int iStack_6c;
  undefined4 *puStack_68;
  
  FUN_00879bb8();
  if ((DAT_009784f4 == 0) || (*(int *)(DAT_009784f4 + -4) == 0)) {
    puStack_68 = (undefined4 *)0x4717a9;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puStack_68 = (undefined4 *)0x4717b5;
    FUN_00403191();
    puStack_68 = (undefined4 *)0x0;
    iStack_6c = unaff_EBP + -0x40;
    iStack_70 = unaff_EBP + -0x30;
    *(undefined1 **)(unaff_EBP + -0x20) = auStack_74;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00679e4e(auStack_74,0x594);
    iVar2 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_6c = 0x4717ff;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar2 != 0) {
      puStack_68 = (undefined4 *)0x471815;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        puStack_68 = (undefined4 *)0x471826;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_68 = (undefined4 *)0x471833;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_68 = (undefined4 *)0x47183e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_68 = (undefined4 *)0x47184b;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_68 = (undefined4 *)0x471856;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined4 *)0x471863;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_68 = (undefined4 *)0x47186e;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      puStack_68 = (undefined4 *)FUN_0040cf4d();
      iStack_6c = 0x471896;
      FUN_0047266d();
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        puStack_68 = (undefined4 *)0x4718a5;
        FUN_00878dfb();
      }
      puStack_68 = (undefined4 *)FUN_0040cf4d();
      iStack_6c = 0x4718bc;
      FUN_0047266d();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uVar7 = 0;
      while( true ) {
        iVar2 = 0;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_68 = (undefined4 *)0x4718d4;
          FUN_00878dfb();
        }
        uVar3 = FUN_0040cf4d();
        if (uVar3 <= uVar7) break;
        FUN_0087a1b0();
        iStack_6c = 0x4718f5;
        puStack_68 = (undefined4 *)uVar7;
        puStack_68 = (undefined4 *)FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff9c;
        iStack_6c = 0x471901;
        FUN_004033a1();
        puStack_68 = (undefined4 *)(unaff_EBP + -0x60);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_6c = 0x471911;
        FUN_0040263d();
        iStack_6c = 0x471918;
        psVar4 = (short *)FUN_004048a4();
        sVar1 = *psVar4;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (sVar1 == 8) {
          puStack_68 = *(undefined4 **)(psVar4 + 4);
        }
        else {
          puStack_68 = (undefined4 *)&DAT_0097812c;
        }
        iStack_6c = 0x471937;
        FUN_00454081();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puStack_68 = (undefined4 *)0x471944;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          puStack_68 = (undefined4 *)0x47194f;
          FUN_00878dfb();
        }
        puStack_68 = (undefined4 *)0x0;
        iStack_6c = 0x471959;
        FUN_0045ed72();
        puStack_68 = (undefined4 *)0x471960;
        FUN_0045ee27();
        puStack_68 = (undefined4 *)0x47196e;
        FUN_00414f8b();
        puStack_68 = (undefined4 *)&DAT_00978474;
        iStack_6c = 0x471982;
        FUN_00414edd();
        while( true ) {
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(unaff_EBP + -0x18) + -4);
          }
          if (iVar5 <= iVar2) break;
          puStack_68 = (undefined4 *)0x4719a6;
          _strlen((char *)&DAT_009645b0);
          puStack_68 = &DAT_009645b0;
          iStack_6c = 0x4719b4;
          FUN_0045efbb();
          iVar2 = iVar2 + 1;
        }
        uVar7 = uVar7 + 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        puStack_68 = (undefined4 *)0x4719dc;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      goto LAB_004719dc;
    }
    FUN_004027eb();
  }
  else {
LAB_004719dc:
    puStack_68 = *(undefined4 **)(unaff_EBP + 8);
    iStack_6c = 0x4719e7;
    iVar2 = FUN_00471582();
    if (iVar2 == 0) {
      puStack_68 = *(undefined4 **)(unaff_EBP + 8);
      iStack_6c = 0x4719f8;
      iVar2 = FUN_004715e9();
      if (iVar2 == 0) {
        uVar6 = 0;
        goto LAB_00471a12;
      }
      if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
        **(undefined4 **)(unaff_EBP + 0xc) = 1;
      }
    }
  }
  uVar6 = 1;
LAB_00471a12:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}


