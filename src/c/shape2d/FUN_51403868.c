/* FUN_51403868 - 0x51403868 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_51403868(void)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  
  FUN_5140ad20();
  puVar1 = *(undefined2 **)(unaff_EBP + 0x1c);
  if (puVar1 == (undefined2 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    Ordinal_8(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_51405842((ushort *)(unaff_EBP + -0x1c),(ushort *)(unaff_EBP + 0xc),0,0x13);
    if (iVar3 < 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = FUN_51405818((short *)(unaff_EBP + -0x1c));
      if (iVar3 < 0) {
        FUN_5140ac47(iVar3);
      }
      uVar2 = 0x80070057;
    }
    else {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x14);
      iVar3 = FUN_51405818((short *)(unaff_EBP + -0x1c));
      if (iVar3 < 0) {
        FUN_5140ac47(iVar3);
      }
      iVar3 = *(int *)(unaff_EBP + 8);
      *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar3 + 8);
      FUN_5140126a();
      *(undefined4 *)(unaff_EBP + -4) = 1;
      piVar4 = (int *)FUN_5140466c((void *)(iVar3 + 0x10),*(uint *)(unaff_EBP + 0x1c));
      if (piVar4 == (int *)0x0) {
        *puVar1 = 0;
      }
      else {
        *puVar1 = 0xd;
        piVar4 = (int *)*piVar4;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        *(int **)(puVar1 + 4) = piVar4;
      }
      piVar4 = (int *)(iVar3 + 0xc);
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        *(undefined4 *)(iVar3 + 8) = 0;
      }
      uVar2 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


