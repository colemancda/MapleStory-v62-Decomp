/* FUN_5080e45c - 0x5080e45c in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_5080e45c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  puVar2 = *(undefined4 **)(extraout_ECX + 0x50);
  if (puVar2 == (undefined4 *)0x0) {
    iVar4 = (**(code **)(extraout_ECX + 0x18))();
  }
  else {
    *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
    FUN_508012a1();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar4 = (**(code **)(extraout_ECX + 0x18))();
    if (iVar4 == 0) {
      if ((*(int **)(extraout_ECX + 0x54) == (int *)0x0) ||
         (iVar3 = **(int **)(extraout_ECX + 0x54), iVar3 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(iVar3 + -4) >> 1;
      }
      if (uVar5 != 0) {
        FUN_5080ffeb((void *)(*(int *)(extraout_ECX + 0x50) + 8),(int *)(extraout_ECX + 0x54));
      }
    }
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar2 = 0;
    }
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar4;
}


