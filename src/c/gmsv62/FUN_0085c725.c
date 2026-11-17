/* FUN_0085c725 - 0x0085c725 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0085c725(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(int *)(param_1 + 0x2b40) != 0) && (param_2 != 0)) {
    piVar1 = (int *)(param_1 + 0x2b44);
    do {
      if (param_2 == *piVar1) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 6);
  }
  return 0;
}


