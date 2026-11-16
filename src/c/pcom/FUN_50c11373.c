/* FUN_50c11373 - 0x50c11373 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c11373(void)

{
  void *this;
  bool bVar1;
  uint uVar2;
  int *piVar3;
  short *psVar4;
  undefined3 extraout_var;
  int iVar5;
  int unaff_EBP;
  
  FUN_50c10270();
  this = *(void **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x14) = **(undefined4 **)((int)this + 0xc);
  Ordinal_8(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50c05e8d();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50c05e8d();
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(*piVar3 + -4) >> 1;
  }
  if (uVar2 == 1) {
    if (piVar3 == (int *)0x0) {
      psVar4 = (short *)0x0;
    }
    else {
      psVar4 = (short *)*piVar3;
    }
    if (*psVar4 == 7) {
      if (*(int *)((int)this + 8) == 1) {
        FUN_50c061b4((void *)(unaff_EBP + -0x3c),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x3c),(ThrowInfo *)&DAT_50c14eb0);
      }
      if ((*(int **)(unaff_EBP + 8) == (int *)0x0) ||
         (iVar5 = **(int **)(unaff_EBP + 8), iVar5 == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(iVar5 + -4) >> 1;
      }
      if (uVar2 != 0) {
        FUN_50c061b4((void *)(unaff_EBP + -0x3c),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x3c),(ThrowInfo *)&DAT_50c14eb0);
      }
      FUN_50c117a2(this,*(int *)((int)this + 0xc));
      FUN_50c02a72((undefined4 *)(unaff_EBP + 8));
      FUN_50c02a72((undefined4 *)(unaff_EBP + -0x10));
      goto LAB_50c1162a;
    }
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(*piVar3 + -4) >> 1;
  }
  if (uVar2 == 1) {
    if (piVar3 == (int *)0x0) {
      psVar4 = (short *)0x0;
    }
    else {
      psVar4 = (short *)*piVar3;
    }
    if (*psVar4 != 7) goto LAB_50c114bb;
    iVar5 = FUN_50c118ee();
    piVar3 = (int *)(DAT_50c13254 + iVar5);
    *(undefined2 *)(unaff_EBP + -0x2c) = 0xd;
    *(int **)(unaff_EBP + -0x24) = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    piVar3 = (int *)FUN_50c1175f(this);
    *piVar3 = iVar5;
  }
  else {
LAB_50c114bb:
    if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*piVar3 + -4) >> 1;
    }
    if (uVar2 != 0) {
      if (piVar3 == (int *)0x0) {
        psVar4 = (short *)0x0;
      }
      else {
        psVar4 = (short *)*piVar3;
      }
      if (*psVar4 == 8) {
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_50c11752((int *)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        iVar5 = PcCreateObject();
        if (iVar5 < 0) {
          FUN_50c061b4((void *)(unaff_EBP + -0x3c),iVar5,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x3c),(ThrowInfo *)&DAT_50c14eb0);
        }
        FUN_50c0ee96((void *)(unaff_EBP + -0x3c),*(int **)(unaff_EBP + 0xc),'\x01');
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_50c0edae((void *)(unaff_EBP + -0x2c),(short *)(unaff_EBP + -0x3c));
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar5 = FUN_50c08269((short *)(unaff_EBP + -0x3c));
        if (iVar5 < 0) {
          FUN_50c101c4(iVar5);
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_50c11752((int *)(unaff_EBP + 0xc));
        goto LAB_50c11594;
      }
    }
    FUN_50c11141();
  }
LAB_50c11594:
  bVar1 = FUN_50c0ee61(*(void **)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x10));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_50c061b4((void *)(unaff_EBP + -0x3c),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x3c),(ThrowInfo *)&DAT_50c14eb0);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  FUN_50c0dc20(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_50c04b87(*(void **)(unaff_EBP + -0x18),(int *)(unaff_EBP + -0x10));
  FUN_50c0ee44((void *)(*(int *)(unaff_EBP + -0x18) + 8),(undefined2 *)(unaff_EBP + -0x2c));
  FUN_50c0cf05(*(void **)(unaff_EBP + -0x14),unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_50c045f3(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    FUN_50c02a85(*(int **)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + 8) = 0;
  }
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    FUN_50c02a85(*(int **)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
LAB_50c1162a:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar5 = FUN_50c08269((short *)(unaff_EBP + -0x2c));
  if (iVar5 < 0) {
    FUN_50c101c4(iVar5);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


