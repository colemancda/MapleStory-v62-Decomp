/* FUN_00878e6a - 0x00878e6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00878e6a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                IErrorInfo *param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00878ea6(param_1,param_2,param_3,param_4,param_5,param_6,&stack0x0000001c,&param_5);
  if (iVar1 < 0) {
    SetErrorInfo(0,param_5);
  }
  return iVar1;
}


