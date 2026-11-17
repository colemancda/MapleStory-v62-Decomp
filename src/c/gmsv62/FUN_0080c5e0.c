/* FUN_0080c5e0 - 0x0080c5e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080c5e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (*DAT_0097b570)(param_1,0xffffffeb);
  if ((iVar1 == 0) && (DAT_0097c210 == 0)) {
    (*DAT_0097b510)(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_0080c5c7(param_1,param_2,param_3,param_4);
  }
  return;
}


