/* FUN_0085c633 - 0x0085c633 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0085c633(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x2b40) != 0) {
    piVar2 = (int *)(param_1 + 0x2b44);
    do {
      if (param_2 == *piVar2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 6);
  }
  return -1;
}


