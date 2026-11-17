/* FUN_006f5ab7 - 0x006f5ab7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006f5ab7(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_006f563a(0);
  if (iVar1 != 0) {
    puVar2 = (uint *)(param_1 + 0xc);
    iVar1 = 4;
    do {
      *puVar2 = *puVar2 & *(uint *)((param_2 - param_1) + (int)puVar2);
      puVar2 = puVar2 + -1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return param_1;
}


