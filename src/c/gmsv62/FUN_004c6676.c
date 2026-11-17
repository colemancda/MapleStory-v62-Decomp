/* FUN_004c6676 - 0x004c6676 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004c6676(int param_1)

{
  bool bVar1;
  
  if (param_1 < 0x236a6a) {
    if (param_1 == 0x236a69) {
      return 1;
    }
    if (param_1 == 0x111ae9) {
      return 1;
    }
    if (param_1 == 0x12a189) {
      return 1;
    }
    if (param_1 == 0x142829) {
      return 1;
    }
    if (param_1 == 0x205d29) {
      return 1;
    }
    bVar1 = param_1 == 0x21e3c9;
  }
  else {
    if (param_1 == 0x2f9f6c) {
      return 1;
    }
    if (param_1 == 0x312609) {
      return 1;
    }
    if (param_1 == 0x4dd5cc) {
      return 1;
    }
    if (param_1 == 0x4f5c6a) {
      return 1;
    }
    bVar1 = param_1 == 0x4faa8c;
  }
  if (bVar1) {
    return 1;
  }
  return 0;
}


