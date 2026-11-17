/* FUN_00776e40 - 0x00776e40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00776e40(int param_1,int param_2)

{
  *(uint *)(param_2 * 0x80 + 0x60 + param_1) =
       (uint)(*(int *)(param_2 * 0x80 + 0x60 + param_1) == 0);
  FUN_0077f351();
  FUN_0077e699();
  FUN_008161f1(0);
  return;
}


