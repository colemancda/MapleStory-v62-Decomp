/* FUN_0066f95e - 0x0066f95e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0066f95e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar4;
  undefined4 uStack_90;
  int iStack_8c;
  
  FUN_00879bb8();
  iStack_8c = 0x66f981;
  _memset(&DAT_00979740,0,0x12d8);
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191();
  iStack_8c = unaff_EBP + -0x3c;
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_90;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_90 = extraout_ECX;
  FUN_004033a1(u_StandardPDD_img_00968cb4);
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    puVar4 = &DAT_00979740;
    do {
      FUN_0087a1b0();
      iStack_8c = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_90 = 0x66fa74;
      iStack_8c = FUN_00412335();
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff78;
      uStack_90 = 0x66fa80;
      FUN_004033a1();
      iStack_8c = unaff_EBP + -0x6c;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_90 = 0x66fa90;
      FUN_0040263d();
      uStack_90 = 0x66fa97;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x28) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar1 != 0) {
        iVar1 = FUN_00404b30();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) break;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      iVar1 = 0;
      *(undefined4 **)(unaff_EBP + -0x18) = puVar4;
      do {
        FUN_0087a1b0();
        iStack_8c = 0x66fb04;
        FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff7c;
        iStack_8c = 0x66fb10;
        FUN_004033a1();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_8c = 0x66fb20;
        FUN_0040263d();
        iStack_8c = 0x66fb27;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iVar2 = FUN_00412550();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_8c = 0x66fb40;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        if (0 < iVar2) {
          *(int *)(unaff_EBP + -0x20) = iVar2;
        }
        puVar4 = *(undefined4 **)(unaff_EBP + -0x18);
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
        iVar1 = iVar1 + 1;
        *puVar4 = *(undefined4 *)(unaff_EBP + -0x20);
      } while (iVar1 < 0xc9);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      puVar4 = *(undefined4 **)(unaff_EBP + -0x18);
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    } while ((int)puVar4 < 0x97aa18);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


