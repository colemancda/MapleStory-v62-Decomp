/* ptr_0044f476 - 0x0044f476 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_0044f476(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  return uVar1;
}


