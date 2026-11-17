/* FUN_0072c46f - 0x0072c46f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0072c46f(int param_1,int param_2)

{
  uint uVar1;
  
  if (-1 < param_2 + -0x14) {
    uVar1 = (param_2 + -0x14) / 0x17 & 0xff;
    if (uVar1 == 0) {
      if ((-1 < param_1 + -0x18) && (uVar1 = (param_1 + -0x18) / 0x17, (byte)uVar1 < 10)) {
        return uVar1 & 0xff;
      }
    }
    else if (uVar1 == 1) {
      if ((-1 < param_1 + -0x2f) && (uVar1 = (param_1 + -0x2f) / 0x17, (byte)uVar1 < 10)) {
        return (uVar1 & 0xff) + 10;
      }
    }
    else if (uVar1 == 2) {
      if ((-1 < param_1 + -0x3a) && (uVar1 = (param_1 + -0x3a) / 0x17, (byte)uVar1 < 9)) {
        return (uVar1 & 0xff) + 0x14;
      }
    }
    else if (((uVar1 == 3) && (-1 < param_1 + -0x4a)) &&
            (uVar1 = (param_1 + -0x4a) / 0x17, (byte)uVar1 < 7)) {
      return (uVar1 & 0xff) + 0x1d;
    }
  }
  return 0xffffffff;
}


