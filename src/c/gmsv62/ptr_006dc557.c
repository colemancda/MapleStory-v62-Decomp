/* ptr_006dc557 - 0x006dc557 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall ptr_006dc557(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) == *(int *)(param_2 + 8);
}


