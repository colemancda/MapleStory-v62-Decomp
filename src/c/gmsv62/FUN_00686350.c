/* FUN_00686350 - 0x00686350 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00686350(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 *puStack_84;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x34) == 0) {
    iVar1 = *(int *)(extraout_ECX + 0x3c);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar1 != 0) {
      iVar1 = *(int *)(extraout_ECX + 0x38) / iVar1;
      if (0xe < iVar1) {
        iVar1 = 0xf;
      }
      *(int *)(unaff_EBP + -0x10) = iVar1;
      if (iVar1 < 1) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
    }
    iVar1 = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(extraout_ECX + 0x30) != iVar1) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      puStack_84 = (undefined4 *)0xdc3;
      iStack_88 = unaff_EBP + -0x1c;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_8c = 0x6863b4;
      puVar2 = (undefined4 *)FUN_00679d22();
      iStack_88 = *puVar2;
      iStack_8c = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_90 = 0x6863c5;
      puStack_84 = (undefined4 *)iVar1;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        puStack_84 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
        iStack_88 = 0x6863db;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      puStack_84 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_88 = 0x6863f1;
      FUN_00403191();
      puStack_84 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_88 = 0x6863fe;
      FUN_00403191();
      puStack_84 = (undefined4 *)0x0;
      iStack_88 = 0;
      iStack_8c = 0xffffffff;
      uStack_90 = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_94 = 0;
      uStack_98 = 0;
      piStack_9c = (int *)0x686411;
      (*DAT_0097b4c8)();
      piStack_9c = (int *)0x68641e;
      FUN_0087a1b0();
      piStack_9c = (int *)0x0;
      iStack_a0 = 0;
      iStack_a4 = unaff_EBP + -0x40;
      iStack_a8 = unaff_EBP + -0x30;
      iStack_ac = -1;
      uVar3 = FUN_00449713(&uStack_98);
      uVar3 = FUN_00456ad5(uVar3);
      *(int **)(unaff_EBP + -0x20) = &iStack_ac;
      FUN_004033a1(uVar3);
      iVar1 = unaff_EBP + -0x70;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00405a1d(iVar1);
      FUN_00402660();
      FUN_00404a02(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_a4 = 0x68646e;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
      piStack_9c = (int *)(unaff_EBP + -0x1c);
      iStack_a0 = 0x68647d;
      piStack_9c = (int *)FUN_0041a581();
      if (((int)piStack_9c < 0) && (piStack_9c != (int *)0x80004002)) {
        iStack_a0 = 0x68648e;
        FUN_00878dfb();
      }
      piStack_9c = (int *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_a0 = 0x68649b;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        iStack_a0 = 0x6864a6;
        FUN_00878dfb();
      }
      piStack_9c = (int *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_a0 = 0x6864b3;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        iStack_a0 = 0x6864be;
        FUN_00878dfb();
      }
      piStack_9c = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_a0 = 0x6864cb;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        iStack_a0 = 0x6864d6;
        FUN_00878dfb();
      }
      piStack_9c = (int *)0x3;
      iStack_a0 = 0xfffffffe;
      iStack_a4 = 0x6864e2;
      FUN_004031b7();
      iVar1 = *(int *)(extraout_ECX + 0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar1 == 0) {
        piStack_9c = (int *)0x80004003;
        iStack_a0 = 0x6864f5;
        FUN_00878dfb();
      }
      piStack_9c = (int *)(unaff_EBP + -0x40);
      iStack_a0 = unaff_EBP + -0x1c;
      iStack_a4 = 0x686505;
      FUN_0041141a();
      piStack_9c = *(int **)(unaff_EBP + -0x1c);
      if (piStack_9c != (int *)0x0) {
        iStack_a0 = 0x686512;
        (**(code **)(*piStack_9c + 8))();
      }
      piStack_9c = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_a0 = 0x68651f;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        iStack_a0 = 0x68652a;
        FUN_00878dfb();
      }
      piStack_9c = &DAT_00980690;
      iStack_a0 = 0x686533;
      FUN_00403191();
      piStack_9c = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_a0 = 0x686540;
      FUN_00403191();
      piStack_9c = (int *)0x3;
      iStack_a0 = 0x40;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_a4 = 0x686550;
      FUN_004031b7();
      piStack_9c = (int *)0x3;
      iStack_a0 = 0xd2;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_a4 = 0x686563;
      FUN_004031b7();
      piStack_9c = (int *)0x3;
      iStack_a0 = 500;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_a4 = 0x686576;
      FUN_004031b7();
      iVar1 = *(int *)(extraout_ECX + 0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (iVar1 == 0) {
        piStack_9c = (int *)0x80004003;
        iStack_a0 = 0x686589;
        FUN_00878dfb();
      }
      piStack_9c = (int *)(unaff_EBP + -0x70);
      iStack_a0 = unaff_EBP + -0x60;
      iStack_a4 = unaff_EBP + -0x50;
      iStack_a8 = unaff_EBP + -0x30;
      iStack_ac = unaff_EBP + -0x40;
      FUN_004250ac(unaff_EBP + -0x80,*(undefined4 *)(unaff_EBP + -0x18));
      piStack_9c = (int *)(unaff_EBP + -0x80);
      iStack_a0 = 0x6865b5;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        iStack_a0 = 0x6865c0;
        FUN_00878dfb();
      }
      piStack_9c = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_a0 = 0x6865cd;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        iStack_a0 = 0x6865d8;
        FUN_00878dfb();
      }
      piStack_9c = (int *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_a0 = 0x6865e5;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        iStack_a0 = 0x6865f0;
        FUN_00878dfb();
      }
      piStack_9c = (int *)(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_a0 = 0x6865fd;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        iStack_a0 = 0x686608;
        FUN_00878dfb();
      }
      piStack_9c = (int *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_a0 = 0x686615;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        iStack_a0 = 0x686620;
        FUN_00878dfb();
      }
      piStack_9c = (int *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_a0 = 0x68662d;
      piStack_9c = (int *)FUN_00402bc3();
      if ((int)piStack_9c < 0) {
        iStack_a0 = 0x686638;
        FUN_00878dfb();
      }
      *(undefined4 *)(extraout_ECX + 0x30) = *(undefined4 *)(unaff_EBP + -0x10);
      piStack_9c = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_9c != (int *)0x0) {
        iStack_a0 = 0x68664e;
        (**(code **)(*piStack_9c + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_9c = (int *)0x68665a;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


