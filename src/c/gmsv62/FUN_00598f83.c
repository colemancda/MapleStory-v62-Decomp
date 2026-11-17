/* FUN_00598f83 - 0x00598f83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_00598f83(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((((int)param_2 < 0) || (iVar1 = *(int *)(param_1 + 0x2c), iVar1 == 0)) ||
     (*(uint *)(iVar1 + -4) <= param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_2 * 0x1d + 0x19 + iVar1) == 0;
  }
  return bVar2;
}


