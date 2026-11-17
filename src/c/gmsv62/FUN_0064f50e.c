/* FUN_0064f50e - 0x0064f50e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0064f50e(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int iStack_44;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    iStack_44 = 0x64f536;
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_44 = 0x64f543;
    FUN_004035f5();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_44 = 0x64f554;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    iStack_44 = 0x64f55e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        iStack_44 = 0x64f574;
        FUN_00878dfb();
      }
      iStack_44 = unaff_EBP + -0x30;
      iVar1 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0xc))(*(int **)(unaff_EBP + -0x14),1);
      if (iVar1 != 0) break;
      iStack_44 = unaff_EBP + -0x10;
      FUN_00405a23();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puVar2 = (undefined4 *)FUN_006547ad();
      if (*(int **)(unaff_EBP + -0x10) == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = **(int **)(unaff_EBP + -0x10);
      }
      iStack_44 = 0x64f5bf;
      uVar3 = FUN_0087a208();
      iStack_44 = iVar1;
      *puVar2 = uVar3;
      *(int **)(unaff_EBP + -0x20) = &iStack_44;
      FUN_004059fd(unaff_EBP + -0x10);
      iVar1 = unaff_EBP + -0x40;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d(iVar1);
      iStack_44 = FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uVar3 = FUN_00412550();
      puVar2[1] = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar1 < 0) {
        iStack_44 = 0x64f610;
        FUN_00878dfb();
      }
      if ((int)puVar2[1] < 0) {
        iStack_44 = unaff_EBP + 8;
        *(undefined4 *)(unaff_EBP + 8) = 0x80004005;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      iStack_44 = 0x64f631;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_44 = 0x64f640;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_44 = 0x64f667;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_44 = 0x64f672;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_44 = 0x64f682;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      iStack_44 = 0x64f693;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


