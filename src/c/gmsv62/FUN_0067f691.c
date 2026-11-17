/* FUN_0067f691 - 0x0067f691 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0067f691(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  iVar2 = 0;
  if (uVar3 != 0) {
    do {
      if (uVar3 == param_2) break;
      iVar2 = iVar2 + 1;
      iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
      uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    } while (uVar3 != 0);
    if (uVar3 != 0) {
      return iVar2;
    }
  }
  return -1;
}


