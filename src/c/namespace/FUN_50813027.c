/* FUN_50813027 - 0x50813027 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


uint __thiscall FUN_50813027(void *this,wchar_t *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(*(int *)((int)this + 0x14) + 0xc);
  do {
    uVar4 = uVar2;
    if (uVar4 == 0) {
      return 0;
    }
    iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
    bVar3 = FUN_5080dbda((void *)(*(int *)(uVar4 + 4) + 0xc),param_1);
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  } while (!bVar3);
  return uVar4;
}


