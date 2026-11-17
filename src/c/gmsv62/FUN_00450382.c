/* FUN_00450382 - 0x00450382 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00450382(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = -(uint)(param_2 != 0) & param_2 + 8U;
  FUN_00450479();
  *(uint *)(param_1 + 4) = -(uint)(uVar1 != 0) & uVar1 - 8;
  FUN_00450463();
  return param_1;
}


