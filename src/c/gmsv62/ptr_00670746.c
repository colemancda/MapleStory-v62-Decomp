/* ptr_00670746 - 0x00670746 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall ptr_00670746(int param_1,int param_2)

{
  return (uint)*(ushort *)(param_1 + 0x10) * 1000 < (uint)(param_2 - *(int *)(param_1 + 8));
}


