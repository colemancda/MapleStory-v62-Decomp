/* FUN_004bc6ea - 0x004bc6ea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_004bc6ea(int *param_1,int param_2)

{
  uint uVar1;
  
  *param_1 = param_2;
  uVar1 = -(uint)(param_2 != 0) & param_2 + 4U;
  FUN_008180db(uVar1);
  FUN_00817f6e(uVar1);
  return param_1;
}


