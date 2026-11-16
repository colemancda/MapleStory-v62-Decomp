/* FUN_514086b3 - 0x514086b3 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_514086b3(void)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  
  FUN_5140ad20();
  uVar1 = *(uint *)(unaff_EBP + 0x24);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  if ((uVar1 < 0x1000000) && (uVar2 = *(uint *)(unaff_EBP + 0x28), uVar2 < 0x1000000)) {
    puVar7 = (undefined4 *)0x0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + 0x24) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if ((*(short *)(unaff_EBP + 0xc) != 0) && (*(short *)(unaff_EBP + 0xc) != 10)) {
      Ordinal_8(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_51405a4b((void *)(unaff_EBP + -0x24),0xd,(ushort *)(unaff_EBP + 0xc));
      iVar4 = FUN_51405448((void *)(unaff_EBP + 0x24),(int *)(unaff_EBP + -0x1c));
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        FUN_5140ac47(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + 0x24) == 0) {
        iVar4 = FUN_51405818((short *)(unaff_EBP + -0x24));
        if (iVar4 < 0) {
          FUN_5140ac47(iVar4);
        }
        piVar3 = *(int **)(unaff_EBP + 0x24);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        goto LAB_51408769;
      }
      iVar4 = FUN_51405818((short *)(unaff_EBP + -0x24));
      if (iVar4 < 0) {
        FUN_5140ac47(iVar4);
      }
    }
    iVar4 = FUN_51409fc8();
    *(int *)(unaff_EBP + 0x28) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar4 != 0) {
      puVar7 = FUN_51408856();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_514054a8(puVar7 + 2,(int *)(unaff_EBP + 0x24));
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      FUN_5140ac47(iVar4);
    }
    (*DAT_5141174c)(puVar7 + 3,*(int *)(unaff_EBP + 0x1c),*(int *)(unaff_EBP + 0x20),
                    *(int *)(unaff_EBP + 0x1c) + uVar1,*(int *)(unaff_EBP + 0x20) + uVar2);
    iVar4 = FUN_51408a12(unaff_EBP + 0x2c,0);
    pcVar6 = FUN_514088db;
    if (iVar4 == 0) {
      pcVar6 = (code *)&LAB_514088a9;
    }
    puVar7[7] = pcVar6;
    FUN_514072cf();
    FUN_5140833b();
    piVar3 = *(int **)(unaff_EBP + 0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    uVar5 = 0;
  }
  else {
LAB_51408769:
    uVar5 = 0x80070057;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


