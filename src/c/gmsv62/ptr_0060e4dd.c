/* ptr_0060e4dd - 0x0060e4dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0060e4dd(int param_1,undefined4 *param_2,int *param_3)

{
  param_3[1] = 0x7f;
  if (param_1 == 0) {
    *param_3 = 0x35;
  }
  else {
    *param_3 = (param_1 + 2) * 0x5f;
    *param_2 = 5;
  }
  return;
}


