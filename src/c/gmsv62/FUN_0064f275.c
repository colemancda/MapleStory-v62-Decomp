/* FUN_0064f275 - 0x0064f275 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0064f275(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int iVar4;
  int iStack_6c;
  undefined1 *puStack_68;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_004027eb();
LAB_0064f4f7:
    uVar2 = 1;
  }
  else {
    puStack_68 = (undefined1 *)0x64f2a7;
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_68 = (undefined1 *)0x64f2b4;
    FUN_004035f5();
    FUN_004027b3();
    puStack_68 = (undefined1 *)0x64f2c6;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_68 = (undefined1 *)0x64f2dc;
        FUN_00878dfb();
      }
      puStack_68 = (undefined1 *)(unaff_EBP + -0x40);
      iStack_6c = 1;
      iVar1 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 0xc))(*(int **)(unaff_EBP + -0x18));
      if (iVar1 != 0) {
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_68 = (undefined1 *)0x64f4cb;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          puStack_68 = (undefined1 *)0x64f4d6;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          puStack_68 = (undefined1 *)0x64f4e6;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
          puStack_68 = (undefined1 *)0x64f4f7;
          (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
        }
        goto LAB_0064f4f7;
      }
      puStack_68 = (undefined1 *)(unaff_EBP + -0x14);
      iStack_6c = 0x64f304;
      iVar1 = unaff_EBP + -0x40;
      FUN_00405a23();
      iStack_6c = iVar1;
      puStack_68 = (undefined1 *)0x0;
      *(int **)(unaff_EBP + -0x2c) = &iStack_6c;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004059fd(unaff_EBP + -0x14);
      iVar1 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d(iVar1);
      FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_6c = 0x64f33d;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x28) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar1 != 0) {
        puStack_68 = (undefined1 *)0x64f353;
        iVar1 = FUN_00404b30();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          puStack_68 = (undefined1 *)0x64f364;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_68 = (undefined1 *)0x64f371;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_68 = (undefined1 *)0x64f37c;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      puStack_68 = (undefined1 *)0x64f38f;
      uVar2 = FUN_0065471d();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
      puStack_68 = (undefined1 *)0x64f3a5;
      uVar2 = FUN_0087a208();
      puStack_68 = (undefined1 *)0x64f3b2;
      puVar3 = (undefined4 *)FUN_0045f1e3();
      *puVar3 = uVar2;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_68 = (undefined1 *)0x64f3c3;
        FUN_00878dfb();
      }
      iVar1 = FUN_0040cf4d();
      iVar4 = 0;
      *(int *)(unaff_EBP + -0x2c) = iVar1;
      if (0 < iVar1) {
        do {
          FUN_0087a1b0();
          iStack_6c = iVar4;
          puStack_68 = &stack0xffffffa0;
          iStack_6c = FUN_00412335();
          *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_68;
          FUN_004033a1();
          iStack_6c = unaff_EBP + -0x60;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_0040263d();
          puStack_68 = (undefined1 *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iStack_6c = 0x64f413;
          uVar2 = FUN_00412550();
          puStack_68 = (undefined1 *)0x64f421;
          puVar3 = (undefined4 *)FUN_0045f1e3();
          *puVar3 = uVar2;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          puStack_68 = (undefined1 *)0x64f430;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            puStack_68 = (undefined1 *)0x64f43b;
            FUN_00878dfb();
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(unaff_EBP + -0x2c));
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        puStack_68 = (undefined1 *)0x64f452;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      puStack_68 = (undefined1 *)0x64f46e;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_68 = (undefined1 *)0x64f47d;
        FUN_00878dfb();
      }
    }
    FUN_004027eb();
    FUN_00402fa6();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_68 = (undefined1 *)0x64f49f;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_68 = (undefined1 *)0x64f4aa;
      FUN_00878dfb();
    }
    FUN_004027f8();
    FUN_004027eb();
    uVar2 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


