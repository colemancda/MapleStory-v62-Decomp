/* FUN_004c1f21 - 0x004c1f21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_004c1f21(int param_1,int param_2)

{
  bool bVar1;
  
  if ((param_1 / 10000 == 0xcc) && (param_2 / 1000000 == 1)) {
    if (((param_1 / 100 == 0x500a) || (param_1 / 100 == 0x500b)) && (param_2 / 100000 != 0x12)) {
      bVar1 = true;
    }
    else {
      bVar1 = (param_1 % 10000) / 100 == (param_2 / 10000) % 100;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


