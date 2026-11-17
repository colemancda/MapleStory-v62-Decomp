/* ptr_006dc56d - 0x006dc56d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall ptr_006dc56d(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _memcmp((void *)(param_1 + 8),(void *)(param_2 + 8),8);
  return iVar1 == 0;
}


