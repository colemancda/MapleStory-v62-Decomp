/* FUN_008623b5 - 0x008623b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_008623b5(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x94) * 0x1c + -0x14 + param_1;
  while( true ) {
    if (uVar1 < param_1 + 8U) {
      return 0;
    }
    if (*(int *)(uVar1 + 0x18) == param_2) break;
    uVar1 = uVar1 - 0x1c;
  }
  return uVar1;
}


