/* FUN_50407028 - 0x50407028 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_50407028(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_5042a430();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar1 + 0x28);
  FUN_50401895();
  piVar2 = *(int **)(iVar1 + 100);
  iVar3 = *piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  (**(code **)(iVar3 + 0x20))(piVar2,unaff_EBP + -0x2c);
  puVar4 = *(undefined4 **)(unaff_EBP + 0xc);
  uVar5 = *(undefined4 *)(unaff_EBP + -0x14);
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[2] = uVar5;
  puVar4[3] = *(undefined4 *)(unaff_EBP + -0x10);
  piVar2 = (int *)(iVar1 + 0x2c);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


