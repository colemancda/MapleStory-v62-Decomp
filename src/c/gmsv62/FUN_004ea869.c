/* FUN_004ea869 - 0x004ea869 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004ea869(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + -4);
    }
    if (iVar2 <= iVar1) break;
    if (*(int *)(*(int *)(param_1 + 0xc) + iVar1 * 4) == param_2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  }
  return -1;
}


