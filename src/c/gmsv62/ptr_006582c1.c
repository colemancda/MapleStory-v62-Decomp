/* ptr_006582c1 - 0x006582c1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006582c1(int param_1,uint param_2)

{
  int iVar1;
  
  if (((param_1 == 0xd) && ((param_2 & 0x80000000) == 0)) && (iVar1 = FUN_0065869b(), iVar1 == 0)) {
    return;
  }
  FUN_004bc822(param_1,param_2);
  return;
}


