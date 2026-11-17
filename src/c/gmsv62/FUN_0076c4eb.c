/* FUN_0076c4eb - 0x0076c4eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076c4eb(undefined4 param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0047c47a(param_1,(int)param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_0085c95d(param_1,(int)param_2,param_3), iVar1 != 0)) {
    return;
  }
  FUN_0047bbe5();
  FUN_0085c8b9();
  return;
}


