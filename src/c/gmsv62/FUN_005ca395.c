/* FUN_005ca395 - 0x005ca395 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


wchar_t * FUN_005ca395(int param_1,int param_2)

{
  wchar_t *pwVar1;
  
  if (param_1 != 0x22a332) {
    return (wchar_t *)0x0;
  }
  pwVar1 = u_CatchSuccess_00965a84;
  if (param_2 == 0) {
    pwVar1 = u_CatchFaild_00965aa0;
  }
  return pwVar1;
}


