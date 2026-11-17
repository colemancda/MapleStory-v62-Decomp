/* FUN_00402fed - 0x00402fed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00402fed(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_0087a007(param_1);
    piVar2 = (int *)(*DAT_0097b648)(iVar1 * 2 + 6);
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1 * 2;
      FUN_00879c20(piVar2 + 1,param_1,iVar1 * 2 + 2);
      return piVar2 + 1;
    }
  }
  return (int *)0x0;
}


