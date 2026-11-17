/* ptr_0044f641 - 0x0044f641 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0044f641(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 2) {
    FUN_0083af5d();
  }
  else {
    if (param_2 == 1000) {
      iVar1 = (*(uint *)(param_1 + 0x68) & 0xfffffffe) - 2;
      if (iVar1 < 0) {
        return;
      }
    }
    else {
      if (param_2 != 0x3e9) {
        return;
      }
      iVar1 = (*(uint *)(param_1 + 0x68) & 0xfffffffe) + 2;
      if (*(int *)(param_1 + 0x6c) < iVar1) {
        return;
      }
    }
    FUN_0044fcf6(iVar1);
  }
  return;
}


