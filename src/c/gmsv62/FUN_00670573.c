/* FUN_00670573 - 0x00670573 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_00670573(int param_1,int param_2)

{
  FUN_0067177c();
  return (uint)*(ushort *)(param_1 + 0x28) * 1000 < (uint)(param_2 - *(int *)(param_1 + 0x20));
}


