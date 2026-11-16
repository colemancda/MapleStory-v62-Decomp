/* FUN_508057a5 - 0x508057a5 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_508057a5(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  size_t *psVar5;
  short *psVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x28);
    if (puVar1 == (undefined4 *)0x0) {
      psVar6 = (short *)0x0;
    }
    else {
      psVar6 = (short *)*puVar1;
    }
    uVar3 = FUN_5080529f((int *)(param_1 + 0x28));
    for (psVar4 = psVar6 + (uVar3 - 1); (psVar6 <= psVar4 && (*psVar4 != 0x2f));
        psVar4 = psVar4 + -1) {
    }
    psVar5 = FUN_50803a6e(psVar4 + 1,((int)(psVar6 + (uVar3 - 1)) - (int)psVar4 >> 1) + -1);
    *param_2 = psVar5;
    iVar2 = (-(uint)(psVar5 != (size_t *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar2;
}


