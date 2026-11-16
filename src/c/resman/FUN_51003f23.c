/* FUN_51003f23 - 0x51003f23 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __thiscall FUN_51003f23(void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0xc) != 1) {
    puVar1 = (uint *)((-(uint)(param_1 != 0) & param_1 - 0x10U) + 4);
    uVar4 = *puVar1;
    uVar2 = *(int *)((int)this + 0xc) - 1;
    *(uint *)((int)this + 0xc) = uVar2;
    if (uVar4 < uVar2) {
      *(undefined4 *)(*(int *)((int)this + 0x10) + uVar4 * 4) =
           *(undefined4 *)(*(int *)((int)this + 0x10) + uVar2 * 4);
      iVar3 = *(int *)(*(int *)((int)this + 0x10) + uVar4 * 4);
      *(uint *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4) = uVar4;
      do {
        uVar4 = FUN_51004ae0(this,uVar4);
      } while (uVar4 != 0);
      *(int *)(*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc) * 4) = param_1;
      *puVar1 = *(uint *)((int)this + 0xc);
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    FUN_5100473d(this);
  }
  return;
}


