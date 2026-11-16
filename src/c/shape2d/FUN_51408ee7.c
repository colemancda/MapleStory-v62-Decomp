/* FUN_51408ee7 - 0x51408ee7 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51408ee7(void)

{
  int *piVar1;
  bool bVar2;
  void *this;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int unaff_EBP;
  
  FUN_5140ad20();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffa0;
  this = (void *)FUN_514072cf();
  *(void **)(unaff_EBP + -0x18) = this;
  piVar3 = FUN_51408c44(this,0x320000);
  *(int **)(unaff_EBP + -0x14) = piVar3;
  *(uint *)(unaff_EBP + -0x20) = (uint)(piVar3 == (int *)0x0);
  if ((piVar3 == (int *)0x0) != 0) {
    puVar4 = (undefined4 *)FUN_5140a117();
    *(undefined4 **)(unaff_EBP + -0x2c) = puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_51409267(puVar4);
    }
    *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_51409299();
  *(undefined4 *)(unaff_EBP + 0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_51409d30((void *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_5140ab47(piVar1,(void *)(unaff_EBP + -0x50));
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uVar5 = FUN_51405b5b();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
  iVar6 = FUN_514054a8((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + -0x24));
  if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
    FUN_5140ac47(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar6 = FUN_51405818((short *)(unaff_EBP + -0x50));
  if (iVar6 < 0) {
    FUN_5140ac47(iVar6);
  }
  FUN_5140a555((short *)(unaff_EBP + -0x40));
  iVar6 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar6 = (**(code **)(iVar6 + 0x8c))
                    (piVar1,0,0,unaff_EBP + -0x2c,unaff_EBP + -0x28,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
  if (iVar6 < 0) {
    FUN_5140ac55(iVar6,piVar1,&DAT_514101c0);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar7 = FUN_51405818((short *)(unaff_EBP + -0x40));
  if (iVar7 < 0) {
    FUN_5140ac47(iVar7);
  }
  if (-1 < iVar6) {
    bVar2 = FUN_51409985((void *)(unaff_EBP + 0xc),0);
    if (!bVar2) {
      FUN_5140a168((void *)(unaff_EBP + -0x40),*(int **)(unaff_EBP + 0xc),'\x01');
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + 0x10) == 0) {
        FUN_5140ac47(0x80004003);
      }
      piVar1 = *(int **)(unaff_EBP + 0x10);
      iVar6 = (**(code **)(*piVar1 + 100))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x40),
                         *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34));
      if (iVar6 < 0) {
        FUN_5140ac55(iVar6,piVar1,&DAT_514101c0);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar6 = FUN_51405818((short *)(unaff_EBP + -0x40));
      if (iVar6 < 0) {
        FUN_5140ac47(iVar6);
      }
    }
    FUN_5140a555((short *)(unaff_EBP + -0x50));
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_5140a555((short *)(unaff_EBP + -0x40));
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      FUN_5140ac47(0x80004003);
    }
    piVar1 = *(int **)(unaff_EBP + 0x10);
    iVar6 = (**(code **)(*piVar1 + 0x90))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44));
    if (iVar6 < 0) {
      FUN_5140ac55(iVar6,piVar1,&DAT_514101c0);
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar6 = FUN_51405818((short *)(unaff_EBP + -0x40));
    if (iVar6 < 0) {
      FUN_5140ac47(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar6 = FUN_51405818((short *)(unaff_EBP + -0x50));
    if (iVar6 < 0) {
      FUN_5140ac47(iVar6);
    }
    FUN_5140a168((void *)(unaff_EBP + -0x50),*(int **)(unaff_EBP + 0x10),'\x01');
    piVar1 = *(int **)(unaff_EBP + 8);
    iVar6 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar6 = (**(code **)(iVar6 + 100))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44));
    if (iVar6 < 0) {
      FUN_5140ac55(iVar6,piVar1,&DAT_514101c0);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar6 = FUN_51405818((short *)(unaff_EBP + -0x50));
    if (iVar6 < 0) {
      FUN_5140ac47(iVar6);
    }
    FUN_5140a555((short *)(unaff_EBP + -0x40));
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_5140a555((short *)(unaff_EBP + -0x50));
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_5140abfd(piVar1,0,0,(undefined4 *)(unaff_EBP + -0x50),(undefined4 *)(unaff_EBP + -0x40));
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar6 = FUN_51405818((short *)(unaff_EBP + -0x50));
    if (iVar6 < 0) {
      FUN_5140ac47(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar6 = FUN_51405818((short *)(unaff_EBP + -0x40));
    if (iVar6 < 0) {
      FUN_5140ac47(iVar6);
    }
    FUN_514017d8((int *)(unaff_EBP + 0xc));
    FUN_514017d8((int *)(unaff_EBP + 0x10));
    FUN_5140922a();
    return;
  }
  FUN_51405a7c((void *)(unaff_EBP + -0x60),iVar6,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)(unaff_EBP + -0x60),(ThrowInfo *)&DAT_5140e068);
}


