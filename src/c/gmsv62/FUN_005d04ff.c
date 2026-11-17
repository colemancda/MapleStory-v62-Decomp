/* FUN_005d04ff - 0x005d04ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_005d04ff(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00429303();
  if ((piVar1 != (int *)0x0) && (DAT_00978358 != 0)) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))();
    if (iVar2 == 10) {
      return *(int *)(param_1 + 0x330) == *(int *)(DAT_00978358 + 0x16fc);
    }
  }
  return false;
}


