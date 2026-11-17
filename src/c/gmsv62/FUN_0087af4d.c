/* FUN_0087af4d - 0x0087af4d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0087af4d(uint param_1,uint param_2)

{
  uint uVar1;
  bool in_ZF;
  short in_FPUControlWord;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_0088266c();
      goto LAB_0087afcb;
    }
    param_1 = param_2 & 0x80000000;
    param_2 = 0;
joined_r0x0087afbc:
    if (param_1 == 0) {
LAB_0087af6e:
      if (DAT_009806a0 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      param_2 = FUN_00882655();
    }
    if ((param_2 & 0x80000000) == 0) goto LAB_0087af6e;
    if (((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) goto joined_r0x0087afbc;
  }
  uVar1 = 1;
LAB_0087afcb:
  if (DAT_009806a0 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}


