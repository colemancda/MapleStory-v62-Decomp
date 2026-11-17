/* FUN_0047ca3f - 0x0047ca3f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0047ca3f(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x98);
  }
  else if (param_2 == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
  }
  else if (param_2 == 2) {
    uVar1 = *(undefined4 *)(param_1 + 0xa0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


