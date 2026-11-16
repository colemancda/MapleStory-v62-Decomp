/* FUN_51409860 - 0x51409860 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 __thiscall FUN_51409860(void *this,uint *param_1,double *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 0x14);
  iVar2 = *(int *)((-(uint)(uVar1 != 0) & uVar1 - 0x10) + 4);
  iVar3 = *(int *)(uVar1 + 0x38);
  uVar4 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
  while( true ) {
    if (param_3 - iVar3 < 0) {
      return 0xfffffffe;
    }
    if (uVar4 == 0) break;
    if (*(int *)(uVar4 + 0x38) != param_3 && -1 < *(int *)(uVar4 + 0x38) - param_3) {
      *param_1 = uVar1;
      *param_2 = (double)(param_3 - *(int *)(uVar1 + 0x38)) /
                 (double)(*(int *)(uVar4 + 0x38) - *(int *)(uVar1 + 0x38));
      return 0;
    }
    iVar3 = *(int *)(uVar4 + 0x38);
    uVar1 = uVar4;
    uVar4 = *(int *)(uVar4 - 0xc) + 0x10U & -(uint)(*(int *)(uVar4 - 0xc) != 0);
  }
  return 2;
}


