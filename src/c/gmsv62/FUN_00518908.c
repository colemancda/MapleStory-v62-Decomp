/* FUN_00518908 - 0x00518908 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00518908(int param_1)

{
  int iVar1;
  
  iVar1 = (param_1 / 10000) % 10;
  if (iVar1 == 2) {
    iVar1 = 4;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        return ((param_1 / 10000) % 100 != 0) + 1;
      }
      return -1;
    }
    iVar1 = 3;
  }
  return iVar1;
}


