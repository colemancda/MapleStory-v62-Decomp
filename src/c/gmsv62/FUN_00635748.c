/* FUN_00635748 - 0x00635748 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00635748(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 1;
  if ((param_1 & 2) == 0) {
    if (param_2 == 0) {
      return 2;
    }
    if (param_2 == 1) {
      return (-(uint)(uVar1 != 0) & 0xfffffffe) + 1;
    }
    param_2 = param_2 + -2;
    if (param_2 == 0) {
      return (-(uint)(uVar1 != 0) & 2) - 1;
    }
  }
  else if (param_2 == 0) {
    return 1;
  }
  if (param_2 == 1) {
    return -(uint)(uVar1 != 0);
  }
  if (param_2 != 2) {
    return -1;
  }
  return (uVar1 != 0) - 1;
}


