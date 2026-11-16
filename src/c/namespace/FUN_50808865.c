/* FUN_50808865 - 0x50808865 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_50808865(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  while (uVar3 != 0) {
    puVar2 = (undefined4 *)(-(uint)(uVar3 != 0) & uVar3 - 0x10);
    iVar1 = puVar2[1];
    FUN_5080254f(puVar2);
    uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


