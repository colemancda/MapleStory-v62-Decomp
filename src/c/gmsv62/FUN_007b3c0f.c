/* FUN_007b3c0f - 0x007b3c0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007b3c0f(code *param_1)

{
  bool bVar1;
  
  if ((int)param_1 < 0x21e3ca) {
    if (param_1 == (code *)0x21e3c9) {
      return 1;
    }
    if (param_1 == (code *)0x111ae9) {
      return 1;
    }
    if (param_1 == (code *)0x12a189) {
      return 1;
    }
    if (param_1 == (code *)0x142829) {
      return 1;
    }
    bVar1 = param_1 == (code *)0x205d29;
  }
  else {
    if (param_1 == (code *)0x236a69) {
      return 1;
    }
    if (param_1 == (code *)0x312609) {
      return 1;
    }
    if (param_1 == (code *)0x4dd5cc) {
      return 1;
    }
    bVar1 = param_1 == ptr_004f5c6a;
  }
  if (bVar1) {
    return 1;
  }
  return 0;
}


