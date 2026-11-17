/* FUN_00878e09 - 0x00878e09 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00878e09(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  HRESULT HVar2;
  IErrorInfo *local_8;
  
  local_8 = (IErrorInfo *)0x0;
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)*param_2)(param_2,&DAT_00970058,&param_2);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_2 + 0xc))(param_2,param_3);
      (**(code **)(*param_2 + 8))(param_2);
      if (iVar1 == 0) {
        HVar2 = GetErrorInfo(0,&local_8);
        if (HVar2 != 0) {
          local_8 = (IErrorInfo *)0x0;
        }
      }
    }
  }
  FUN_008795da(param_1,local_8);
  return;
}


