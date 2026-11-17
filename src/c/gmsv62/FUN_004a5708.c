/* FUN_004a5708 - 0x004a5708 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_004a5708(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  if ((param_2 == 0x201) || (param_2 == 0x203)) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  FUN_004a0b62(param_2,param_3,param_4,param_5);
  return;
}


