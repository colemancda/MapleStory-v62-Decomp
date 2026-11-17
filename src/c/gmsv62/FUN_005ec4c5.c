/* FUN_005ec4c5 - 0x005ec4c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ec4c5(void)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  uint uVar4;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  int iStack_94;
  int iStack_90;
  int *piStack_8c;
  
  FUN_00879bb8();
  piStack_8c = &DAT_00980690;
  iStack_90 = 0x5ec4e3;
  FUN_00403191();
  piStack_8c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_90 = 0x5ec4f1;
  FUN_00403191();
  piStack_8c = (int *)0x0;
  iStack_90 = 0;
  iStack_94 = unaff_EBP + -0x58;
  puStack_98 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined4 **)(unaff_EBP + -0x38) = &uStack_9c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_9c = extraout_ECX;
  FUN_00679e4e(&uStack_9c,0xc52);
  iVar1 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_94 = 0x5ec53d;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar1 != 0) {
    piStack_8c = (int *)(unaff_EBP + -0x2c);
    iStack_90 = 0x5ec553;
    piStack_8c = (int *)FUN_00404b30();
    if (((int)piStack_8c < 0) && (piStack_8c != (int *)0x80004002)) {
      iStack_90 = 0x5ec564;
      FUN_00878dfb();
    }
  }
  piStack_8c = (int *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_90 = 0x5ec571;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x5ec57c;
    FUN_00878dfb();
  }
  piStack_8c = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_90 = 0x5ec589;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x5ec594;
    FUN_00878dfb();
  }
  piStack_8c = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_90 = 0x5ec5a1;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x5ec5ac;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  uVar4 = 0;
  while ((**(int **)(unaff_EBP + 0x10) != 0 &&
         (uVar4 < *(uint *)(**(int **)(unaff_EBP + 0x10) + -4)))) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    piStack_8c = (int *)0xbb5;
    iStack_90 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_94 = 0x5ec5de;
    piVar2 = (int *)FUN_00679d22();
    iStack_90 = *piVar2;
    piStack_8c = (int *)(uint)*(ushort *)(uVar4 * 2 + **(int **)(unaff_EBP + 0x10));
    iStack_94 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_98 = (undefined1 *)0x5ec5fa;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      piStack_8c = (int *)(*(int *)(unaff_EBP + -0x30) + -0xc);
      iStack_90 = 0x5ec611;
      FUN_00434e38();
    }
    piStack_8c = (int *)0x0;
    iStack_90 = 0;
    iStack_94 = 0x5ec61c;
    puStack_98 = (undefined1 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x28) = &iStack_94;
    uStack_9c = 0x5ec628;
    FUN_00448a17();
    puStack_98 = (undefined1 *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_9c = 0x5ec638;
    FUN_0040263d();
    uStack_9c = 0x5ec63f;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_94 = 0x5ec64a;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x34) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar1 != 0) {
      piStack_8c = (int *)(unaff_EBP + -0x34);
      iStack_90 = 0x5ec660;
      piStack_8c = (int *)FUN_00404b30();
      if (((int)piStack_8c < 0) && (piStack_8c != (int *)0x80004002)) {
        iStack_90 = 0x5ec671;
        FUN_00878dfb();
      }
    }
    piStack_8c = (int *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_90 = 0x5ec67e;
    iVar1 = FUN_00402bc3();
    piVar2 = piStack_8c;
    if (iVar1 < 0) {
      iStack_90 = 0x5ec689;
      piStack_8c = (int *)iVar1;
      FUN_00878dfb();
      piVar2 = (int *)extraout_ECX_00;
    }
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      piStack_8c = (int *)&DAT_0097812c;
      puStack_98 = (undefined1 *)&iStack_90;
      *(int **)(unaff_EBP + -0x28) = &iStack_90;
      iStack_94 = 0x64b;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_9c = 0x5ec6b1;
      iStack_90 = (int)piVar2;
      FUN_00679e4e();
      iStack_94 = unaff_EBP + -0x88;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_98 = (undefined1 *)0x5ec6c4;
      FUN_0040263d();
      puStack_98 = (undefined1 *)0x5ec6cb;
      iStack_90 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_94 = 0x5ec6d5;
      iStack_90 = FUN_004343c5();
      piStack_8c = (int *)0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iStack_94 = 0x5ec6e5;
      FUN_00454081();
      piStack_8c = (int *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_90 = 0x5ec6f5;
      piStack_8c = (int *)FUN_00402bc3();
      if ((int)piStack_8c < 0) {
        iStack_90 = 0x5ec700;
        FUN_00878dfb();
      }
      if (**(int **)(unaff_EBP + 8) == 0) {
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(**(int **)(unaff_EBP + 8) + -4);
      }
      piStack_8c = (int *)0xc2e;
      iStack_90 = unaff_EBP + -0x38;
      iStack_94 = 0x5ec724;
      piVar2 = (int *)FUN_00679d22();
      piStack_8c = *(int **)(unaff_EBP + -0x18);
      iStack_94 = *piVar2;
      iStack_90 = *(int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_98 = (undefined1 *)(unaff_EBP + -0x1c);
      uStack_9c = 0x5ec73a;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_8c = (int *)0x5ec749;
      FUN_00414ebb();
      iStack_90 = *(int *)(unaff_EBP + -0x1c);
      if (iStack_90 == 0) {
        piStack_8c = (int *)0x0;
      }
      else {
        piStack_8c = *(int **)(iStack_90 + -4);
      }
      iStack_94 = 0x5ec761;
      FUN_0045efbb();
      iVar1 = **(int **)(unaff_EBP + 0x10);
      piStack_8c = (int *)0xffffffff;
      iStack_90 = 0x5ec770;
      puVar3 = (undefined2 *)FUN_005ee789();
      *puVar3 = *(undefined2 *)(uVar4 * 2 + iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_8c = (int *)0x5ec782;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_8c = (int *)0x5ec78e;
      FUN_00414ebb();
      piStack_8c = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (piStack_8c != (int *)0x0) {
        iStack_90 = 0x5ec79f;
        (**(code **)(*piStack_8c + 8))();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_8c = (int *)0x5ec7ab;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    uVar4 = *(uint *)(unaff_EBP + -0x20);
  }
  piStack_8c = *(int **)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_8c != (int *)0x0) {
    iStack_90 = 0x5ec7c7;
    (**(code **)(*piStack_8c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


