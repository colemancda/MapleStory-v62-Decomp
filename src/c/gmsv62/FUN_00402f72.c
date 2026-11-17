/* FUN_00402f72 - 0x00402f72 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_00402f72(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*param_1 == iVar1) {
    iVar1 = 0;
  }
  else if (*param_1 == 0) {
    iVar1 = -1;
  }
  else if (iVar1 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004030e2(iVar1);
  }
  return iVar1 == 0;
}


