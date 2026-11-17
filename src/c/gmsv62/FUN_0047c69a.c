/* FUN_0047c69a - 0x0047c69a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0047c69a(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  uVar1 = FUN_0047ca3f(param_1);
  param_1 = 4;
  iVar2 = (*DAT_0097b6b8)(uVar1,param_2,0,&local_8,&local_c,&param_1);
  if (((iVar2 == 0) && (local_8 == 4)) && (param_1 == 4)) {
    param_3 = (uint)(local_c != 0);
  }
  return param_3;
}


