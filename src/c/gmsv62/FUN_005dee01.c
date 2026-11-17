/* FUN_005dee01 - 0x005dee01 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char FUN_005dee01(int param_1)

{
  char cVar1;
  
  if (param_1 < 0x119) {
    if (param_1 < 0xd3) {
      if (param_1 < 0x97) {
        if (param_1 < 0x65) {
          if (param_1 < 0x3d) {
            if (param_1 < 0x1f) {
              return (10 < param_1) + '\x01';
            }
            cVar1 = '\x03';
          }
          else {
            cVar1 = '\x04';
          }
        }
        else {
          cVar1 = '\x05';
        }
      }
      else {
        cVar1 = '\x06';
      }
    }
    else {
      cVar1 = '\a';
    }
  }
  else {
    cVar1 = '\b';
  }
  return cVar1;
}


