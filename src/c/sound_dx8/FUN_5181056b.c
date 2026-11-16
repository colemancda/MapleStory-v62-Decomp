/* FUN_5181056b - 0x5181056b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_5181056b(void *this,int *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = FUN_518047e1(param_1);
    for (iVar3 = *(int *)(*(int *)((int)this + 4) + (uVar1 % *(uint *)((int)this + 8)) * 4);
        iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar2 = FUN_518047a7((void *)(iVar3 + 8),param_1);
      if (iVar2 != 0) {
        if (param_2 != (void *)0x0) {
          FUN_518103e1((int)param_2);
          FUN_51810e98(param_2,iVar3 + 0x28);
        }
        return iVar3 + 0x28;
      }
    }
  }
  return 0;
}


