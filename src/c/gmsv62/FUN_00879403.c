/* FUN_00879403 - 0x00879403 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00879403(undefined4 param_1,IErrorInfo *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8;
  
  local_8 = param_3 & 0xffff;
  if (((short)param_3 == 9) || ((short)param_3 == 0xd)) {
    uVar2 = 8;
  }
  else {
    uVar2 = 4;
  }
  iVar1 = FUN_00878ea6(param_1,param_2,uVar2,0,0,&local_8,&stack0x00000010,&param_2);
  if (iVar1 < 0) {
    SetErrorInfo(0,param_2);
  }
  return iVar1;
}


