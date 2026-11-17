/* ptr_006dc5ca - 0x006dc5ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall ptr_006dc5ca(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = _memcmp(param_1,param_2,0x10);
  return iVar1 == 0;
}


