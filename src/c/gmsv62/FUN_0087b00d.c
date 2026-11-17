/* FUN_0087b00d - 0x0087b00d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0087b00d(int param_1)

{
  uint in_EAX;
  bool in_ZF;
  unkbyte10 in_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      fVar1 = (float10)FUN_0088266c();
      if (DAT_009806a0 != 0) {
        return fVar1;
      }
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
    fVar1 = _DAT_0097257a;
    if ((in_EAX & 0x80000000) != 0) {
      fVar1 = -_DAT_0097257a;
    }
  }
  else {
    fVar1 = (float10)fpatan(in_ST0,(float10)1);
  }
  if (DAT_009806a0 != 0) {
    return fVar1;
  }
  fVar1 = (float10)__math_exit();
  return fVar1;
}


