/* FUN_00457cda - 0x00457cda in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00457cda(int param_1,undefined1 param_2)

{
  FUN_00457cf8(1);
  *(undefined1 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8)) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}


