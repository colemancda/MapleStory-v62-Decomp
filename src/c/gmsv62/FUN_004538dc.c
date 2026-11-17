/* FUN_004538dc - 0x004538dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004538dc(int *param_1,char *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      return 0;
    }
  }
  else {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      return *(int *)(iVar1 + -4);
    }
    iVar2 = FUN_00453925(param_3 + iVar1,param_2,param_4);
    if (iVar2 != 0) {
      return iVar2 - iVar1;
    }
  }
  return -1;
}


