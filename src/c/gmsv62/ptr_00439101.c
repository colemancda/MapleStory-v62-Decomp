/* ptr_00439101 - 0x00439101 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall ptr_00439101(int param_1)

{
  int in_EAX;
  int unaff_ESI;
  
  *(uint *)(in_EAX + 4) = -(uint)(param_1 != 0) & param_1 - 0x10U;
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 1;
  return -(uint)(in_EAX != 0) & in_EAX + 0x10U;
}


