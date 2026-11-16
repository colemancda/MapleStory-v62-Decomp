/* FUN_50808827 - 0x50808827 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_50808827(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_50808fbb(param_1,*(int *)((int)param_1 + 0x10),0);
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 == 0) {
    *(uint *)((int)param_1 + 0xc) = uVar2;
  }
  else {
    uVar2 = -(uint)(uVar2 != 0) & uVar2 - 0x10;
    *(uint *)((-(uint)(iVar1 != 0) & iVar1 - 0x10U) + 4) = uVar2;
    uVar2 = -(uint)(uVar2 != 0) & uVar2 + 0x10;
  }
  *(uint *)((int)param_1 + 0x10) = uVar2;
  return;
}


