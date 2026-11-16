/* FUN_51001cae - 0x51001cae in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __fastcall FUN_51001cae(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar2 * 4);
    FUN_51001ce1((undefined4 *)(-(uint)(iVar1 != 0) & iVar1 - 0x10U));
  }
  FUN_51001c50((int *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


