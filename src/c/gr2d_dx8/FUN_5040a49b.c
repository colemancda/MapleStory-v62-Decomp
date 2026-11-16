/* FUN_5040a49b - 0x5040a49b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_5040a49b(void)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_5042a430();
  puVar2 = *(undefined2 **)(unaff_EBP + 0xc);
  if (puVar2 == (undefined2 *)0x0) {
    uVar5 = 0x80004003;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + 8);
    *(undefined4 **)(unaff_EBP + 0xc) = (undefined4 *)(iVar3 + 0x1c);
    FUN_50401895();
    iVar4 = *(int *)(iVar3 + 0x30);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar4 == 0) {
      *puVar2 = 0;
    }
    else {
      *puVar2 = 0xd;
      piVar1 = *(int **)(iVar3 + 0x30);
      *(int **)(puVar2 + 4) = piVar1;
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    piVar1 = (int *)(iVar3 + 0x20);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    }
    uVar5 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


