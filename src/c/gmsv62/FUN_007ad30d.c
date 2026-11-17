/* FUN_007ad30d - 0x007ad30d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ad30d(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_2 != 0) {
    param_1 = -param_1;
  }
  FUN_0067db5b((double)param_1,(double)-iVar1);
  return;
}


