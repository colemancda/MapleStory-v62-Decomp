/* FUN_0076bf4c - 0x0076bf4c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0076bf4c(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = param_2 + -6;
  local_8 = param_4 * 0x21 + -0x35 + param_3;
  iVar1 = FUN_0076c299(param_1 + 0x40,&local_c,param_5,param_6);
  if (iVar1 == 0) {
    iVar1 = FUN_0076c299(param_1 + 0x44,&local_c,param_5,param_6);
    if (iVar1 == 0) {
      FUN_0076c299(param_1 + 0x48,&local_c,param_5,param_6);
    }
  }
  return;
}


